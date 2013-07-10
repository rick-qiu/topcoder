/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11888
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

class AkariDaisukiDiv1 {
public:
    int countF(string Waai, string Akari, string Daisuki, string S, string F, int k);
};

int AkariDaisukiDiv1::countF(string Waai, string Akari, string Daisuki, string S, string F, int k) {
    int ret;
    return ret;
}


int test0() {
    string Waai = "a";
    string Akari = "b";
    string Daisuki = "c";
    string S = "x";
    string F = "axb";
    int k = 2;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
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
    string Waai = "a";
    string Akari = "b";
    string Daisuki = "c";
    string S = "x";
    string F = "abcdefghij";
    int k = 1;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string Waai = "a";
    string Akari = "a";
    string Daisuki = "a";
    string S = "b";
    string F = "aba";
    int k = 2;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string Waai = "a";
    string Akari = "b";
    string Daisuki = "c";
    string S = "d";
    string F = "baadbdcbadbdccccbaaaadbdcbadbdccbaadbdcba";
    int k = 58;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 191690599;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string Waai = "a";
    string Akari = "x";
    string Daisuki = "y";
    string S = "b";
    string F = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab";
    int k = 49;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
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
    string Waai = "a";
    string Akari = "a";
    string Daisuki = "a";
    string S = "b";
    string F = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab";
    int k = 25;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
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
    string Waai = "a";
    string Akari = "a";
    string Daisuki = "a";
    string S = "b";
    string F = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab";
    int k = 48;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 16777215;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string Waai = "a";
    string Akari = "a";
    string Daisuki = "a";
    string S = "a";
    string F = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    int k = 20;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 4194252;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string Waai = "b";
    string Akari = "a";
    string Daisuki = "a";
    string S = "a";
    string F = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    int k = 10000000;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 660743853;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string Waai = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string Akari = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string Daisuki = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string S = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string F = "a";
    int k = 10000000;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 143679893;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string Waai = "foxciel";
    string Akari = "magicalgirl";
    string Daisuki = "toastman";
    string S = "eel";
    string F = "leel";
    int k = 50;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 898961331;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string Waai = "waai";
    string Akari = "akari";
    string Daisuki = "daisuki";
    string S = "usushio";
    string F = "id";
    int k = 10000000;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 127859200;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string Waai = "tyeocdggodsqtnfcbl";
    string Akari = "mtvmszj";
    string Daisuki = "fndlacpvsmnqpyoedjykvadxecdkcpwfsrhbmsmwg";
    string S = "sw";
    string F = "szjtyeocdggodsqtnfcblswmtvmszjswf";
    int k = 1245966;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 829684666;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string Waai = "tzovyjlkvdfbjayhyfgwddvjxuldmyzvlekjy";
    string Akari = "kjrgpyylgaarnrqdkwsbqxhgzfwyhrpnoiozhxbx";
    string Daisuki = "pbvhkawofpairbtdmefttgxrhypdotvgzf";
    string S = "pnvxrqdxwlltougwjxgshplgegsmdijhdkfpvputhizwyqdgpy";
    string F = "hizwyqdgpykjrgpyylgaarnrqdkwsbqxhgzfwyh";
    int k = 9762915;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 627896050;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string Waai = "lmrohak";
    string Akari = "ybspqwjokpchunozoqqjyeoifdut";
    string Daisuki = "dymemhjizphdmekghpxvozmcvjqaadpfhlzphquplycxwq";
    string S = "auhbfyttznkzoebalyyispoxferxjr";
    string F = "unozoqqjye";
    int k = 9899931;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 151584156;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string Waai = "vauaonpvptrpaemxrpy";
    string Akari = "icfntupbkhwkkclaeyvuwbulwdqylop";
    string Daisuki = "xkp";
    string S = "kqxdvlkmmqqrszvxjcpccdccyhs";
    string F = "qqrszvxjcpcc";
    int k = 6873561;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 63614920;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string Waai = "msekxcgowmmttfyapmxfrraephzeqwpu";
    string Akari = "vjnqzyemkzfrnvxdsnoueqmmgjumurdinmriugrt";
    string Daisuki = "ohaduigkemfqhsmakyrnulk";
    string S = "o";
    string F = "ekxcgowmmttfyapmxfrraephzeqwpum";
    int k = 2976093;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 459188490;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string Waai = "nncwgbmif";
    string Akari = "trlpgmbfjqzmifoblgljas";
    string Daisuki = "u";
    string S = "ofz";
    string F = "asofzutrlpgmbfjqzmifob";
    int k = 8100511;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 143123294;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string Waai = "zwytoxfsnjbmqfbllfirenpudiobwczzquavzh";
    string Akari = "lqtuzbtzxpfxrdudckhsjrdompxjqcmao";
    string Daisuki = "scz";
    string S = "dmxzplfgeqsyikwxjyzhjrgbhrvfycvcuwvfumxszj";
    string F = "renpudiobwczzquavzhzwytoxfsnjbmqfbllfirenpudi";
    int k = 7062634;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 246329304;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string Waai = "fagnx";
    string Akari = "jiezwaxkgc";
    string Daisuki = "widutb";
    string S = "ppgsucgmhnkvflu";
    string F = "cgmhnkvflujie";
    int k = 2712803;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 556253657;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string Waai = "gerlrcw";
    string Akari = "ysaxhvastxwegnyljbtbr";
    string Daisuki = "qoqpisrmgedyn";
    string S = "ugafzusewdtdedhqfx";
    string F = "txwegnyljbtbrgerlrcwugafzusewdtdedhqfxysaxhv";
    int k = 9808988;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 798014105;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string Waai = "vfsebgjfyfgerkqlr";
    string Akari = "ezbiwls";
    string Daisuki = "kjerx";
    string S = "jbmjvaawoxycfndukrjfg";
    string F = "bgjfyfgerkqlrvfsebgjfyfgerkqlrvfsebgjfyfgerkqlrvfs";
    int k = 1575724;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 483599313;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string Waai = "nbppsoqliqya";
    string Akari = "dofvvxzjzkajxotsxqaagnzvquoyzmpaqizbbzstobouz";
    string Daisuki = "veqhfadgdiuwoqkhgskeaxdci";
    string S = "ptdxqdjmkrnfguaxmbszxuppymmibivcqgsjln";
    string F = "aqizbbzstobouznbppsoqliqyaptdxqdjmkrnfgua";
    int k = 5890663;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 186456005;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string Waai = "frsyqjvatundvavtbwyascuwpwvejkxtosblcxfbto";
    string Akari = "wadirav";
    string Daisuki = "dzudauhzdjaqouslxseuewuyfdmmta";
    string S = "udkicjjtogrcwzqseteeb";
    string F = "lxseuewuyfdmmtadzudauhzdjaqou";
    int k = 7095274;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 534373517;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string Waai = "qbudyizohdu";
    string Akari = "btnnzxzrbhqvfvucsfhsthtapndtjrqr";
    string Daisuki = "mmpoougiqailmy";
    string S = "ivjhajafbledaonvjrtyqvwjmdjtzcolhv";
    string F = "qbudyizohduqbudyizohduivjhajafbledaonvjrtyq";
    int k = 9146515;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 242310899;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string Waai = "mhmgzknvhgwzktcpoieu";
    string Akari = "nxpdt";
    string Daisuki = "njmthp";
    string S = "oqwdsrllwzcuyjtjarzfkfumquqvsoam";
    string F = "jarzfkfumquq";
    int k = 8184409;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 132055197;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string Waai = "qfushsfxqlotr";
    string Akari = "onhcdbdbpugiyscfweqzvtgjzbmhi";
    string Daisuki = "aktcqwjblngucqdovm";
    string S = "fsnolxzoznzdlmcbdbumhviwnvmefsykqhvhnylpjitllhjo";
    string F = "lhjoaktcqwjblngucq";
    int k = 7047635;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 106388661;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string Waai = "hfptwjzibsszzyaoazfqeqygybkgmxoshxxnltgstbr";
    string Akari = "uuxeoizvxhsroavgjipvitgubjuwgtdmmirntejqbjryux";
    string Daisuki = "qkjicoxaxmryxrlrjopqnhveehtxtqmhpfibx";
    string S = "jabpcqbdmjwcujdmigetxixfjuonvit";
    string F = "gubjuwgtdmmirntejqbj";
    int k = 158352;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 271911839;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string Waai = "xcxxwtabiwiawlaqioujjminybkybuleurubmxcwessnf";
    string Akari = "pjlouw";
    string Daisuki = "uuvnxaynhximpisrakwnp";
    string S = "fbgsnlw";
    string F = "essnffbgsnlwpjlo";
    int k = 6703889;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 423500940;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string Waai = "ihyku";
    string Akari = "qkilubwhp";
    string Daisuki = "klwvrdeulxghzguymrzftrszycki";
    string S = "kjfcsfcmjekpmfrkwcgtawrnvx";
    string F = "jfcsfcmjekpmfrkwcgtawrnvxklwvrdeulxghz";
    int k = 6764590;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 477657814;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string Waai = "dltoaxncwkcgs";
    string Akari = "ocrwvpnivximzgziesl";
    string Daisuki = "wtpqsmikqboybivhyspmmclfnfzycsmoaziyaomvpdszrh";
    string S = "isilrnydpourwsyxjtkkfamdrmxazqxooxuzlhipxxnogrvm";
    string F = "z";
    int k = 1033292;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 580972000;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string Waai = "mwpfnkzaqaxibgsdnksjomcyqcxlc";
    string Akari = "fcccgixmotnardscfrxwehvipkggpggacgtv";
    string Daisuki = "mmyocq";
    string S = "prcchetrhahvuivvqbcnosyymupdt";
    string F = "otnar";
    int k = 3587814;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 824531058;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string Waai = "lh";
    string Akari = "cbu";
    string Daisuki = "g";
    string S = "f";
    string F = "gggcbulhlhlhfcbufgcbulhfcbufggcbulhlhfcbufgcbulhfc";
    int k = 1;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string Waai = "x";
    string Akari = "bi";
    string Daisuki = "mtry";
    string S = "ncd";
    string F = "bixncdbincdmtrymtrybixxncdbincdmtrybixncdbincdmtry";
    int k = 1;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string Waai = "sappj";
    string Akari = "u";
    string Daisuki = "fbi";
    string S = "ouwtp";
    string F = "ppjsappjsappjouwtpuouwtpfbiusappjouwtpuouwtpfbifbi";
    int k = 4;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string Waai = "jqcvt";
    string Akari = "ng";
    string Daisuki = "bevu";
    string S = "jllkq";
    string F = "bevungjqcvtjqcvtjllkqngjllkqbevungjqcvtjllkqngjllk";
    int k = 12;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 512;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string Waai = "o";
    string Akari = "jpi";
    string Daisuki = "oykxp";
    string S = "tvi";
    string F = "ykxpjpiotvijpitvioykxpoykxpjpiootvijpitvioykxpjpio";
    int k = 1;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string Waai = "sx";
    string Akari = "autqn";
    string Daisuki = "xyzn";
    string S = "e";
    string F = "znxyznautqnsxsxsxsxsxeautqnexyznautqnsxeautqnexyzn";
    int k = 16;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1024;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string Waai = "nl";
    string Akari = "yjec";
    string Daisuki = "kta";
    string S = "lywc";
    string F = "lnllywcyjeclywcktayjecnllywcyjeclywcktaktaktaktakt";
    int k = 4;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string Waai = "fwdo";
    string Akari = "lt";
    string Daisuki = "mldzh";
    string S = "j";
    string F = "ldzhmldzhltfwdofwdofwdojltjmldzhltfwdojltjmldzhmld";
    int k = 5;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string Waai = "lpe";
    string Akari = "fzaa";
    string Daisuki = "zbcsx";
    string S = "ypd";
    string F = "elpelpelpeypdfzaaypdzbcsxfzaalpeypdfzaaypdzbcsxzbc";
    int k = 4;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
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
    string Waai = "iuv";
    string Akari = "gtri";
    string Daisuki = "w";
    string S = "zrm";
    string F = "gtrizrmwgtriiuvzrmgtrizrmwwwgtriiuviuviuvzrmgtrizr";
    int k = 15;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2048;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string Waai = "beg";
    string Akari = "nuquh";
    string Daisuki = "amgrx";
    string S = "lkxr";
    string F = "quhlkxramgrxnuquhbeglkxrnuquhlkxramgrxamgrxnuquhbe";
    int k = 14;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2048;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string Waai = "dok";
    string Akari = "uq";
    string Daisuki = "rawi";
    string S = "gyo";
    string F = "qgyorawirawirawirawirawirawiuqdokdokdokdokdokdokgy";
    int k = 17;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1024;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string Waai = "tzw";
    string Akari = "t";
    string Daisuki = "vxfrs";
    string S = "j";
    string F = "zwjtjvxfrsvxfrsvxfrsvxfrsvxfrsttzwtzwtzwtzwtzwjtjv";
    int k = 11;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string Waai = "hxkse";
    string Akari = "c";
    string Daisuki = "pzisd";
    string S = "uhdgy";
    string F = "chxksehxksehxksehxksehxksehxkseuhdgycuhdgypzisdchx";
    int k = 20;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 8192;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string Waai = "mj";
    string Akari = "bdm";
    string Daisuki = "n";
    string S = "fv";
    string F = "vnnnnnnnnnbdmmjmjmjmjmjmjmjmjmjfvbdmfvnbdmmjfvbdmf";
    int k = 2;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
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
    string Waai = "tomsf";
    string Akari = "fl";
    string Daisuki = "aqxp";
    string S = "d";
    string F = "sftomsfdfldaqxpfltomsfdfldaqxpaqxpaqxpfltomsftomsf";
    int k = 12;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 256;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string Waai = "fajd";
    string Akari = "wqo";
    string Daisuki = "gbbfu";
    string S = "pd";
    string F = "bfugbbfugbbfuwqofajdfajdfajdpdwqopdgbbfuwqofajdpdw";
    int k = 10;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string Waai = "k";
    string Akari = "w";
    string Daisuki = "hrkl";
    string S = "fia";
    string F = "iahrklwkfiawfiahrklhrklhrklhrklwkkkkfiawfiahrklwkf";
    int k = 12;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 128;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string Waai = "hfwo";
    string Akari = "aybtt";
    string Daisuki = "unwj";
    string S = "nxwaw";
    string F = "hfwonxwawaybttnxwawunwjaybtthfwonxwawaybttnxwawunw";
    int k = 16;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 16384;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string Waai = "nn";
    string Akari = "x";
    string Daisuki = "c";
    string S = "ds";
    string F = "ccccccccccxnnnnnnnnnnnnnnnnnnnnnnnnnnnndsxdscxnnds";
    int k = 2;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string Waai = "ygxp";
    string Akari = "b";
    string Daisuki = "h";
    string S = "jlmw";
    string F = "lmwhbygxpjlmwbjlmwhhhbygxpygxpygxpjlmwbjlmwhbygxpj";
    int k = 3651734;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 438988345;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string Waai = "pmh";
    string Akari = "e";
    string Daisuki = "vnecj";
    string S = "cn";
    string F = "hpmhcnecnvnecjepmhcnecnvnecjvnecjvnecjvnecjvnecjep";
    int k = 8332596;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 822033430;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string Waai = "tdqhj";
    string Akari = "aez";
    string Daisuki = "nczz";
    string S = "w";
    string F = "jtdqhjtdqhjtdqhjtdqhjtdqhjtdqhjtdqhjwaezwnczzaeztd";
    int k = 9954684;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 984306141;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string Waai = "v";
    string Akari = "emfuo";
    string Daisuki = "fnn";
    string S = "eurrz";
    string F = "urrzfnnfnnemfuovveurrzemfuoeurrzfnnemfuoveurrzemfu";
    int k = 1665214;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 18726117;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string Waai = "snyxg";
    string Akari = "ekr";
    string Daisuki = "dctqz";
    string S = "nrnpb";
    string F = "zekrsnyxgsnyxgsnyxgsnyxgsnyxgsnyxgnrnpbekrnrnpbdct";
    int k = 7013338;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 934455841;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string Waai = "dnoy";
    string Akari = "ye";
    string Daisuki = "es";
    string S = "vbm";
    string F = "bmesesyednoydnoyvbmyevbmesyednoyvbmyevbmeseseseses";
    int k = 8020879;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 881212760;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string Waai = "puc";
    string Akari = "rs";
    string Daisuki = "oj";
    string S = "z";
    string F = "zrszojrspuczrszojojrspucpuczrszojrspuczrszojojojoj";
    int k = 8342969;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 523542365;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string Waai = "o";
    string Akari = "urbnb";
    string Daisuki = "qmyu";
    string S = "iqn";
    string F = "myuqmyuurbnbooiqnurbnbiqnqmyuurbnboiqnurbnbiqnqmyu";
    int k = 3258386;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 724158099;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string Waai = "bi";
    string Akari = "fie";
    string Daisuki = "n";
    string S = "ylw";
    string F = "ylwnnfiebibiylwfieylwnfiebiylwfieylwnnnfiebibibiyl";
    int k = 2222410;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 252019627;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string Waai = "y";
    string Akari = "wneaq";
    string Daisuki = "egxy";
    string S = "bkj";
    string F = "aqybkjwneaqbkjegxyegxywneaqyybkjwneaqbkjegxywneaqy";
    int k = 656429;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 179010870;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string Waai = "wmtug";
    string Akari = "gmqy";
    string Daisuki = "cc";
    string S = "t";
    string F = "ccccccgmqywmtugwmtugwmtugwmtugtgmqytccgmqywmtugtgm";
    int k = 7992659;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 219579312;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string Waai = "mdy";
    string Akari = "pxwwq";
    string Daisuki = "vstk";
    string S = "imc";
    string F = "vstkpxwwqmdyimcpxwwqimcvstkvstkpxwwqmdymdyimcpxwwq";
    int k = 1911293;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 783007373;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string Waai = "mhxb";
    string Akari = "iwu";
    string Daisuki = "txmbf";
    string S = "o";
    string F = "ftxmbftxmbfiwumhxbmhxbmhxbmhxbmhxbmhxboiwuotxmbfiw";
    int k = 7637323;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 328192082;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string Waai = "nnsp";
    string Akari = "xef";
    string Daisuki = "h";
    string S = "dcdw";
    string F = "xefdcdwhhhxefnnspnnspnnspdcdwxefdcdwhxefnnspdcdwxe";
    int k = 8374887;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 606566349;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string Waai = "bmz";
    string Akari = "kr";
    string Daisuki = "zc";
    string S = "poax";
    string F = "mzbmzbmzpoaxkrpoaxzckrbmzpoaxkrpoaxzczckrbmzbmzpoa";
    int k = 7880996;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 603908368;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string Waai = "y";
    string Akari = "nh";
    string Daisuki = "uwm";
    string S = "laxdc";
    string F = "ylaxdcnhlaxdcuwmuwmuwmnhyyylaxdcnhlaxdcuwmnhylaxdc";
    int k = 7008551;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 612454653;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string Waai = "cr";
    string Akari = "qq";
    string Daisuki = "bq";
    string S = "e";
    string F = "eqqebqqqcreqqebqbqbqqqcrcrcreqqebqqqcreqqebqbqqqcr";
    int k = 5421953;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 311552472;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string Waai = "sl";
    string Akari = "bqt";
    string Daisuki = "kvrqz";
    string S = "vw";
    string F = "slslvwbqtvwkvrqzbqtslvwbqtvwkvrqzkvrqzbqtslslvwbqt";
    int k = 3560492;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 642185810;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string Waai = "zgye";
    string Akari = "pcwp";
    string Daisuki = "m";
    string S = "zmqf";
    string F = "fpcwpzmqfmpcwpzgyezmqfpcwpzmqfmmmmmpcwpzgyezgyezgy";
    int k = 4265976;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 412226664;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string Waai = "hxfk";
    string Akari = "g";
    string Daisuki = "rqyw";
    string S = "yzgua";
    string F = "zguarqywghxfkyzguagyzguarqywrqywghxfkhxfkyzguagyzg";
    int k = 173504;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 877790794;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string Waai = "j";
    string Akari = "e";
    string Daisuki = "w";
    string S = "a";
    string F = "awwejjaeawejaeawwwejjjaeawejaeawwejjaeawejaeawwwwe";
    int k = 26;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2097152;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string Waai = "u";
    string Akari = "f";
    string Daisuki = "v";
    string S = "z";
    string F = "zfzvfuzfzvvfuuzfzvfuzfzvvvvfuuuuzfzvfuzfzvvfuuzfzv";
    int k = 1;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string Waai = "p";
    string Akari = "y";
    string Daisuki = "p";
    string S = "g";
    string F = "gygpypgygppyppgygpypgygpppypppgygpypgygppyppgygpyp";
    int k = 33;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 536870912;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string Waai = "x";
    string Akari = "o";
    string Daisuki = "y";
    string S = "o";
    string F = "oxxoooyoxoooyyyyyoxxxxxoooyoxoooyyoxxoooyoxoooyyyo";
    int k = 36;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 73741817;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string Waai = "a";
    string Akari = "n";
    string Daisuki = "e";
    string S = "u";
    string F = "unueenaaunuenaunueeeeeeeeenaaaaaaaaaunuenaunueenaa";
    int k = 37;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 134217728;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string Waai = "z";
    string Akari = "iebrhysmnynhzjzdcokn";
    string Daisuki = "xgsszskmmfyhqpmknowtf";
    string S = "aedkanedkfxoihcimsjbjudm";
    string F = "mflsmytwuxb";
    int k = 3059191;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string Waai = "ynbwnayptgvwvvg";
    string Akari = "avzwijmhakmwuegplsdhdfpfjujtgcrddbvawuyneaj";
    string Daisuki = "hobwbgdmzvabqmy";
    string S = "eexvymzuzkzhwdfmvofwgoggwzvehpdwsk";
    string F = "rl";
    int k = 1301514;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string Waai = "kvgifmuxiyfhdkfdj";
    string Akari = "ekhvdwuffqmsrdtgpuvlthkdcmvbwrtm";
    string Daisuki = "zsjaysvyaoozzpfszuaolfywyuxwcitldqfikfajkvgeqj";
    string S = "qhpecfcxjnilqpuiefqtezexcigzyaytkt";
    string F = "dzpgikyqydgfnypqehrkemlpktueevmsfpvxpttf";
    int k = 4682538;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
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
    string Waai = "zjiia";
    string Akari = "iyejljdxyclemakxqblphyoykpkbfipikahcqwtt";
    string Daisuki = "owhnkhwxgeudvkqkorwjqfsvywcxst";
    string S = "rwtnnbcaktmqlxexdowghi";
    string F = "cexqplgknxhkaikytcgvrzjqzxlwdf";
    int k = 73587;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
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
    string Waai = "qngsrkceqvklwdvknxkmtoveajeqihrqjhziuuzh";
    string Akari = "plpsaiyivnjzhumielhc";
    string Daisuki = "oaosfkvrgfrybtuspxhkfasycopxonwdylakwrbchcidbctxzk";
    string S = "lnprhznigsxumluxpyqarybizbzjgcyzipvtztki";
    string F = "pdsaajlbybjtmtkjwxxojpxqzlrpuhhrrqhfxcpu";
    int k = 1271931;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string Waai = "pnefgqvwdyukqcg";
    string Akari = "jdozomxhcpzlvmxtehwdeviumixi";
    string Daisuki = "mpzzinxrsgolpgbcopuumvammlhlmxghxnanflpxlol";
    string S = "hyuc";
    string F = "iwaknlohlgnudozwynuhdxtfgfbx";
    int k = 1482439;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
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
    string Waai = "ktnqajdltbgldhgfipzesxpdptwtpgbnthakylew";
    string Akari = "phfia";
    string Daisuki = "wfujwvmmxreiay";
    string S = "toiahqklfqx";
    string F = "olrcmxlcmxvofoubuvmxtndfdbhtalwkdwoopigkesmrllxcz";
    int k = 2484773;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string Waai = "dtnpojvzxfvxetosrhsmfszetaaplpltbfqfgxvicgj";
    string Akari = "rfvdpqgajvtzefcnaliwnxpu";
    string Daisuki = "uhlz";
    string S = "wanpvnkajzjjbvhimlcnirpxwkqvyiwbrqcmiiymjeyft";
    string F = "x";
    int k = 6779692;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 252908416;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string Waai = "gnujigytdlnhbsrvufypghuzkf";
    string Akari = "irhaokvvzhtwghnlkiod";
    string Daisuki = "ycbfgosydmetfmoewxvxjbxuhnlbeit";
    string S = "kxygiajymclxofvbhavoyczmmulk";
    string F = "tnziutypebsjpqiayysc";
    int k = 1426828;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string Waai = "oocugmxpelutnjeniwfxuusjm";
    string Akari = "gymvaxnsotkjcwbwnuwzgd";
    string Daisuki = "oucsvyojfdivmagxhzzudir";
    string S = "sfvfsmhhw";
    string F = "ssmcpccngpsclkrqaudedkgaektvnhelqsflmtr";
    int k = 2781848;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
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
    string Waai = "fjowiqwkostdcplpqkjwhxogiszokhcykiamevvbwwpeccxkek";
    string Akari = "dwctwmjkcyfkqwifs";
    string Daisuki = "cehhyqjiqrsrlch";
    string S = "ltitwjzapvhpojskhykmzhsd";
    string F = "whxogiszokhcykiamevvbwwpeccxkeklt";
    int k = 10000000;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 127859201;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string Waai = "yuqwlhcqfkcooyjscjkvogplmmvvionby";
    string Akari = "mfgoagbtxcsxlinfd";
    string Daisuki = "jcamkfkywzntaoddrnrgjcmdpazvsyyoocptcmzfsoepkizihr";
    string S = "ofwucugmkmzbiyp";
    string F = "vogpl";
    int k = 10000000;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 255718401;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string Waai = "hg";
    string Akari = "alttlmtoyxrqgofophjljtememzpuxmyladldzvv";
    string Daisuki = "huffiywujfhzjlqfvcevwsqef";
    string S = "ctiutrffmkcxrvn";
    string F = "kcxrvnalttlmtoyxrqgofophjljtememzpuxmyladl";
    int k = 10000000;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 127859201;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string Waai = "ddntqfyvibtxzjholkweeoxzkecunfqruvz";
    string Akari = "ynzlarwjedqibtlbwwncvsmgvfjcpqymhkzwwsdnmqcrihi";
    string Daisuki = "aehvrprqmewbgonbuchburploirj";
    string S = "wnvxzyvauhiktcspjlbiyfjlgtl";
    string F = "jholkweeo";
    int k = 10000000;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 255718401;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string Waai = "vcyp";
    string Akari = "drqx";
    string Daisuki = "xdodraqoyctevfzlivartbvroirdxyenlaswhliwmkdynymlwr";
    string S = "zx";
    string F = "tbvroirdxyenlaswhliwmkdynymlwrdrqxv";
    int k = 10000000;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 127859200;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string Waai = "komwnepidcrlxscfhkb";
    string Akari = "gsdfljjhrkzibwztc";
    string Daisuki = "fpuzhohdreuwxgmcgazvqjuqypipzpbvjqkvxwtteoc";
    string S = "hmntpqbzsqzgfmlpiaaoimtzm";
    string F = "zsqzgfmlpiaaoimtzmgsdfljjhr";
    int k = 10000000;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 127859201;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string Waai = "alvtfztbvojletmigsvzgyysxkspqxfftcfji";
    string Akari = "pvrvkckiobbmmlqvkxozb";
    string Daisuki = "qesempkuhguimqlsejwuzgeljybdpb";
    string S = "rujgtkllqsybsyznbfegb";
    string F = "zt";
    int k = 10000000;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 255718401;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string Waai = "poccmsfne";
    string Akari = "kulfwmhvxregkalxujf";
    string Daisuki = "wxojalcvheduonkxmralivobxvgihzmmphorhnpnpzdseg";
    string S = "nfyvxbmkaizapqewauevygum";
    string F = "orhnpnpzdsegkulfwmhvxregkalx";
    int k = 10000000;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 127859200;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string Waai = "dsteoreahzpadwmdrjqrati";
    string Akari = "hrwcolnhbcnuvuyianh";
    string Daisuki = "xakq";
    string S = "wlgstggevfdotilfu";
    string F = "zpad";
    int k = 10000000;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 255718401;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string Waai = "oxxcvdpptfykydakjdkffupnfyzolxwnmwdmdvcplmy";
    string Akari = "iikqhdsfrbdnfxixlscsisfu";
    string Daisuki = "rdbfddayotthipsuyvtarz";
    string S = "frprhrawxqv";
    string F = "uyvtar";
    int k = 10000000;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 255718401;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string Waai = "a";
    string Akari = "a";
    string Daisuki = "a";
    string S = "b";
    string F = "aaaba";
    int k = 30;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 536870912;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string Waai = "dhq";
    string Akari = "qic";
    string Daisuki = "dhq";
    string S = "ludga";
    string F = "dgaqicludgadhqdhqqicdhqdhqludgaqicludgadhqqicdhqlu";
    int k = 736914;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 25708058;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string Waai = "ttj";
    string Akari = "hjc";
    string Daisuki = "ttj";
    string S = "zfgr";
    string F = "fgrhjczfgrttjttjhjcttjttjzfgrhjczfgrttjhjcttjzfgrh";
    int k = 5477307;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 174126595;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string Waai = "mfjek";
    string Akari = "j";
    string Daisuki = "mfjek";
    string S = "x";
    string F = "jekmfjekjmfjekmfjekmfjekmfjekxjxmfjekjmfjekxjxmfje";
    int k = 4860023;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 718622475;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string Waai = "ba";
    string Akari = "z";
    string Daisuki = "ba";
    string S = "v";
    string F = "zbavzvbabazbabavzvbazbavzvbababazbababavzvbazbavzv";
    int k = 6205854;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 512172647;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string Waai = "zrn";
    string Akari = "izv";
    string Daisuki = "zrn";
    string S = "h";
    string F = "zrnzrnhizvhzrnizvzrnhizvhzrnzrnzrnizvzrnzrnzrnhizv";
    int k = 2523430;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 593725043;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string Waai = "lcim";
    string Akari = "t";
    string Daisuki = "lcim";
    string S = "dv";
    string F = "lcimtlcimdvtdvlcimlcimlcimtlcimlcimlcimdvtdvlcimtl";
    int k = 4223208;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 132971367;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string Waai = "gd";
    string Akari = "nf";
    string Daisuki = "gd";
    string S = "hufd";
    string F = "ufdnfhufdgdnfgdhufdnfhufdgdgdgdgdgdnfgdgdgdgdgdhuf";
    int k = 3118935;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 538345162;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string Waai = "qlkar";
    string Akari = "tcb";
    string Daisuki = "qlkar";
    string S = "luz";
    string F = "lkarqlkartcbqlkarqlkarqlkarqlkarqlkarluztcbluzqlka";
    int k = 3988015;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 952177397;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string Waai = "s";
    string Akari = "mo";
    string Daisuki = "s";
    string S = "iccf";
    string F = "osiccfmoiccfssmossiccfmoiccfsmosiccfmoiccfsssssmos";
    int k = 6030812;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 264514680;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string Waai = "b";
    string Akari = "ingu";
    string Daisuki = "b";
    string S = "qaa";
    string F = "uqaabbbingubbbqaainguqaabingubqaainguqaabbingubbqa";
    int k = 6131899;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 421387642;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string Waai = "fblri";
    string Akari = "yrm";
    string Daisuki = "fblri";
    string S = "mxff";
    string F = "lriyrmfblrimxffyrmmxfffblrifblriyrmfblrifblrimxffy";
    int k = 9972271;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 749949350;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string Waai = "qv";
    string Akari = "fktye";
    string Daisuki = "qv";
    string S = "uk";
    string F = "ktyeukqvqvfktyeqvqvukfktyeukqvfktyeqvukfktyeukqvqv";
    int k = 3269319;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 548849495;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string Waai = "ogwjv";
    string Akari = "moo";
    string Daisuki = "ogwjv";
    string S = "u";
    string F = "vmooogwjvumoouogwjvogwjvogwjvogwjvmooogwjvogwjvogw";
    int k = 9440688;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 540267655;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    string Waai = "o";
    string Akari = "gztdh";
    string Daisuki = "o";
    string S = "eflf";
    string F = "lfgztdheflfogztdhoeflfgztdheflfooooogztdhoooooeflf";
    int k = 3098035;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 536631054;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    string Waai = "bmoy";
    string Akari = "sdw";
    string Daisuki = "bmoy";
    string S = "zxle";
    string F = "zxlesdwzxlebmoysdwbmoyzxlesdwzxlebmoybmoybmoybmoys";
    int k = 1858149;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 793700392;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    string Waai = "dll";
    string Akari = "rb";
    string Daisuki = "dll";
    string S = "rywf";
    string F = "llrywfrbrywfdllrbdllrywfrbrywfdlldllrbdlldllrywfrb";
    int k = 5111491;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 401596867;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    string Waai = "gi";
    string Akari = "f";
    string Daisuki = "gi";
    string S = "req";
    string F = "reqfreqgigigifgigigireqfreqgifgireqfreqgigifgigire";
    int k = 5756595;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 403597114;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    string Waai = "or";
    string Akari = "acoie";
    string Daisuki = "or";
    string S = "qnsqb";
    string F = "eqnsqboracoieorqnsqbacoieqnsqbororacoieororqnsqbac";
    int k = 8060472;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 337151916;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    string Waai = "puc";
    string Akari = "diuro";
    string Daisuki = "puc";
    string S = "ti";
    string F = "tidiurotipucpucpucpucdiuropucpucpucpuctidiurotipuc";
    int k = 1863099;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 706200399;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    string Waai = "ldga";
    string Akari = "xam";
    string Daisuki = "ldga";
    string S = "ullzq";
    string F = "aullzqxamullzqldgaldgaldgaldgaxamldgaldgaldgaldgau";
    int k = 8750686;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 105504937;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    string Waai = "aabba";
    string Akari = "aa";
    string Daisuki = "aabba";
    string S = "bbabb";
    string F = "abbaabbaaabbaaabbaaaaabbaaabbaaabbabbabbaabbabbaab";
    int k = 7386457;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 990624944;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    string Waai = "a";
    string Akari = "aab";
    string Daisuki = "a";
    string S = "babba";
    string F = "aaaababbaaabbabbaaaabababbaaabbabbaaaaabaababbaaab";
    int k = 2272552;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 487970704;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    string Waai = "bbba";
    string Akari = "ab";
    string Daisuki = "bbba";
    string S = "a";
    string F = "bbaaababbbaabbbbaaababbbabbbaabbbbabbbaaababbbaabb";
    int k = 471371;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 286161550;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    string Waai = "a";
    string Akari = "a";
    string Daisuki = "a";
    string S = "abba";
    string F = "baaabbaaaaaaaaaaabbaaabbaaaaabbaaabbaaaaaaabbaaabb";
    int k = 3804156;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 45178229;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    string Waai = "ab";
    string Akari = "babba";
    string Daisuki = "ab";
    string S = "aaab";
    string F = "ababbabbaabababaaabbabbaaaababbabbaabaaabbabbaaaab";
    int k = 6208258;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 303764344;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    string Waai = "ab";
    string Akari = "abbbb";
    string Daisuki = "ab";
    string S = "a";
    string F = "ababababbbbabababaabbbbaababbbbabaabbbbaabababbbba";
    int k = 6728975;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 846152682;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    string Waai = "b";
    string Akari = "ab";
    string Daisuki = "b";
    string S = "aa";
    string F = "abaababbaaabaabbbbabbbbbaaabaababbaaabaabbabbbaaab";
    int k = 1771342;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 935911178;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    string Waai = "ab";
    string Akari = "aba";
    string Daisuki = "ab";
    string S = "ab";
    string F = "babababaabababababaabababaabababaababababaabababab";
    int k = 2347227;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 26383751;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    string Waai = "bbb";
    string Akari = "b";
    string Daisuki = "bbb";
    string S = "aa";
    string F = "bbaabaabbbbbbbaabaabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb";
    int k = 2595390;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 744750006;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    string Waai = "a";
    string Akari = "aabb";
    string Daisuki = "a";
    string S = "bbb";
    string F = "abbaabbbaabbbbbaaabbabbbaabbbbbaaaaaaaaaabbaaaaaaa";
    int k = 8881193;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 986747526;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    string Waai = "a";
    string Akari = "baba";
    string Daisuki = "a";
    string S = "bb";
    string F = "baaabbbababbababaabbbababbaaababaaaabbbababbababaa";
    int k = 8365849;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 607648062;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    string Waai = "baab";
    string Akari = "baaba";
    string Daisuki = "baab";
    string S = "aa";
    string F = "aabaabaaabaabbaababaabaabaabaaabaabbaabbaababaabba";
    int k = 6808071;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 812173012;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    string Waai = "bb";
    string Akari = "aabb";
    string Daisuki = "bb";
    string S = "bbaa";
    string F = "bbaaaabbbbaabbbbbbaabbbbbbbbbbaaaabbbbaabbaabbbbbb";
    int k = 2761460;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 549541022;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    string Waai = "aabb";
    string Akari = "baa";
    string Daisuki = "aabb";
    string S = "aa";
    string F = "aaabbbaaaabbaabaaaaaabbaabbbaaaabbaabbaabaaaaaabbb";
    int k = 114108;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 925914630;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    string Waai = "bbaa";
    string Akari = "babba";
    string Daisuki = "bbaa";
    string S = "baaaa";
    string F = "abaaaabbaababbabbaabaaaababbabaaaabbaabbaabbaababb";
    int k = 6745563;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 914214866;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    string Waai = "bbb";
    string Akari = "aabbb";
    string Daisuki = "bbb";
    string S = "bbba";
    string F = "bbaabbbbbbbbbaaabbbbbbabbbbbbbbbaabbbbbbbbbbbbbbba";
    int k = 1730834;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 504999398;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    string Waai = "baab";
    string Akari = "bbab";
    string Daisuki = "baab";
    string S = "b";
    string F = "baabbaabbaabbaabbaabbaabbbbabbbaabbbabbaabbbbabbba";
    int k = 287259;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 291024634;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    string Waai = "aa";
    string Akari = "abbb";
    string Daisuki = "aa";
    string S = "b";
    string F = "bbbaaabbbaababbbbaaaaabbbaaaababbbbaaabbbaababbbba";
    int k = 7771226;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 10332926;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    string Waai = "aa";
    string Akari = "baa";
    string Daisuki = "aa";
    string S = "aab";
    string F = "abbaaaabaabaaaaaabbaaaabaaaaaabaaaaaaaaaabbaaaabaa";
    int k = 3502248;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 940597765;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    string Waai = "bab";
    string Akari = "aba";
    string Daisuki = "bab";
    string S = "a";
    string F = "bbabbabbabbabaabaabababababaabaababbababababbabaab";
    int k = 998596;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 949174728;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    string Waai = "baabbb";
    string Akari = "abbabbaababbbaabbaaaaabaababbbaaabba";
    string Daisuki = "baabbb";
    string S = "bababbaaababbababbbaabbaaabbaabaabbaaabbabbaabaaa";
    string F = "baaba";
    int k = 2407015;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 43704254;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    string Waai = "bbaaabaabbabaaaaaaaaaabbbbbb";
    string Akari = "aaaabbbbbababaaaabbbbbababaabaabb";
    string Daisuki = "bbaaabaabbabaaaaaaaaaabbbbbb";
    string S = "abbbbaaabbabaaaaabb";
    string F = "aaabb";
    int k = 6019630;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 840449066;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    string Waai = "aaababaaabbaabbababaabaabbbabbaaaabba";
    string Akari = "bbaaaabbbaaabbbababbababbaabababbbbabaa";
    string Daisuki = "aaababaaabbaabbababaabaabbbabbaaaabba";
    string S = "aaabaabaabaabaabababaabbbbbabaaaabbbbba";
    string F = "aabbb";
    int k = 6163521;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 12399256;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    string Waai = "babbabbbb";
    string Akari = "baabaaaaaaa";
    string Daisuki = "babbabbbb";
    string S = "abbbbaaba";
    string F = "aabaa";
    int k = 6529610;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 650723744;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    string Waai = "baabbbabbbabbbaabababbabbbbbbaabbaabaabbbbbbaaaba";
    string Akari = "bbaabbb";
    string Daisuki = "baabbbabbbabbbaabababbabbbbbbaabbaabaabbbbbbaaaba";
    string S = "baabbaabab";
    string F = "bbabb";
    int k = 8950869;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 613482697;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    string Waai = "bbabaab";
    string Akari = "bba";
    string Daisuki = "bbabaab";
    string S = "aabaabaabbbbabaabaaabbbaabaabaaaaabaaabbb";
    string F = "bbbab";
    int k = 5018190;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 506427514;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    string Waai = "bbbbabbababbabbabbbaaabaaaaaa";
    string Akari = "bababbababaabaabbaababb";
    string Daisuki = "bbbbabbababbabbabbbaaabaaaaaa";
    string S = "aaaabbababaabaaabbabbaabbabababaababaaababaaaaa";
    string F = "aabbb";
    int k = 9900590;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 236055670;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    string Waai = "abaaaaaaaabbaabbababbaabbaabbaabaaaabbaaaab";
    string Akari = "babbbabbababbbbaabbbbaaaabaaababbbaababbabaa";
    string Daisuki = "abaaaaaaaabbaabbababbaabbaabbaabaaaabbaaaab";
    string S = "babbaabaabbabaaabbaaabbabababbbbbabb";
    string F = "aabba";
    int k = 9510633;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 249202703;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    string Waai = "ababababbabbaaabbbbabaaaabbbbba";
    string Akari = "aaabbbbabaa";
    string Daisuki = "ababababbabbaaabbbbabaaaabbbbba";
    string S = "babaaaaaaab";
    string F = "ababa";
    int k = 7273090;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 680955007;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    string Waai = "baaaabbbbb";
    string Akari = "ababbbaabbbbbbabbaaababbbb";
    string Daisuki = "baaaabbbbb";
    string S = "bbb";
    string F = "aabab";
    int k = 507130;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 127226442;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    string Waai = "aaaababbbbbbbbbabbbababbaaaabababa";
    string Akari = "bbbabababbbbbbbabaaaababbb";
    string Daisuki = "aaaababbbbbbbbbabbbababbaaaabababa";
    string S = "abaaabaababbbbaaaabbabaaaaaaaababaabbabbab";
    string F = "bbaba";
    int k = 713388;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 173406980;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    string Waai = "babbbabaaab";
    string Akari = "bbaabaababaaaaababaabb";
    string Daisuki = "babbbabaaab";
    string S = "bbabbabbaaaaabbbbabaabbbaaabaaababaaaabaaaaabbbba";
    string F = "abaaa";
    int k = 2539199;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 828080616;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    string Waai = "abbbbbaabbbbbbabaaaabbbaaaabaaaaabbbbaababbabba";
    string Akari = "b";
    string Daisuki = "abbbbbaabbbbbbabaaaabbbaaaabaaaaabbbbaababbabba";
    string S = "ababbbbbbabbbaabbaaababaabbbbbabbbbbababbbaabbaaa";
    string F = "abbbb";
    int k = 3814503;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 573191690;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    string Waai = "a";
    string Akari = "bbbababbbabaaabaabaabaaba";
    string Daisuki = "a";
    string S = "bbbbba";
    string F = "aabbb";
    int k = 4922015;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 50359662;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    string Waai = "bbabaaabaabaaaababbabbabababaabbbbabaab";
    string Akari = "aaaabbbbbbbabbbaababbaabbaabbbbbababababaaaa";
    string Daisuki = "bbabaaabaabaaaababbabbabababaabbbbabaab";
    string S = "aaabbbbbbaababaaaaabbbabbbaabbaabbbaaaabababbabb";
    string F = "aaabb";
    int k = 9528726;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 665459288;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    string Waai = "bbabbbabbbbbbaaabbbabbaaabaaabbabbbbaaabaaabbb";
    string Akari = "babbbbbbaaaabaa";
    string Daisuki = "bbabbbabbbbbbaaabbbabbaaabaaabbabbbbaaabaaabbb";
    string S = "babaabaaaaaabbaabbababbbbbbaaaabbbabaaabbabbaaabba";
    string F = "aabaa";
    int k = 6349312;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 695807143;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    string Waai = "bbaababbbaaabbbabaabbbbaab";
    string Akari = "b";
    string Daisuki = "bbaababbbaaabbbabaabbbbaab";
    string S = "bbaabaaabbbbaaaaaaabbbbbaaa";
    string F = "baabb";
    int k = 9608672;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 560717383;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    string Waai = "abaababaaaabbaababaabaaabbaaabbabbbabbbaaabbaaaba";
    string Akari = "abbbaabaababbabbaabaaabbabbbabbbbaba";
    string Daisuki = "abaababaaaabbaababaabaaabbaaabbabbbabbbaaabbaaaba";
    string S = "abba";
    string F = "baaab";
    int k = 2421585;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 952034993;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    string Waai = "abaaabbbabaabbabbaababbaabbbbbbbbbaa";
    string Akari = "aaabbbaaabbaaabaaabbbbbabaabab";
    string Daisuki = "abaaabbbabaabbabbaababbaabbbbbbbbbaa";
    string S = "abbbbbaaaaaabbabaaabababa";
    string F = "abbbb";
    int k = 6002179;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 180688647;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    string Waai = "babbbabababab";
    string Akari = "abbababbaaabbaabbbbbabbbbabaa";
    string Daisuki = "babbbabababab";
    string S = "bbabaabaabbaaabababababababaaaa";
    string F = "ababb";
    int k = 7041592;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 303310058;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    string Waai = "aba";
    string Akari = "babaa";
    string Daisuki = "baaba";
    string S = "bab";
    string F = "abaabababaaabaabababbabaababbaabababaaabababbabaab";
    int k = 6991525;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 332790187;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    string Waai = "babab";
    string Akari = "aa";
    string Daisuki = "aabab";
    string S = "bbb";
    string F = "baabbbaababaabababbbbaabbbaababaababaababaababaaba";
    int k = 461153;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 106468073;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    string Waai = "bab";
    string Akari = "bb";
    string Daisuki = "ab";
    string S = "ba";
    string F = "bbbabbabbbaabababbbbabbabbabbabbbaabbbbabbabbbaaba";
    int k = 6963445;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 991311155;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    string Waai = "ba";
    string Akari = "ab";
    string Daisuki = "a";
    string S = "bbbba";
    string F = "babbbbaabbbbbaaabbabbbbaabbbbbaaaabbababbbbaabbbbb";
    int k = 3772262;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 692170463;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    string Waai = "baa";
    string Akari = "baba";
    string Daisuki = "aa";
    string S = "aa";
    string F = "baaaaabababaaaababaaaaaaaaaaabababaabaabaabaaaabab";
    int k = 8089669;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 583082367;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    string Waai = "a";
    string Akari = "bb";
    string Daisuki = "b";
    string S = "abbaa";
    string F = "babbaabbbaabbaabbabbaabbbbbaaaabbaabbabbaabbbaabba";
    int k = 869140;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2086012;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    string Waai = "abaa";
    string Akari = "ba";
    string Daisuki = "aaa";
    string S = "bbb";
    string F = "aabaabaaabaabbbbabbbaaabaabaabbbbabbbaaaaaaaaaaaaa";
    int k = 295078;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 32549255;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    string Waai = "bba";
    string Akari = "bba";
    string Daisuki = "aaaba";
    string S = "aaa";
    string F = "aaababbabbaaaabbaaaaaaabaaaabaaaababbabbabbabbaaaa";
    int k = 5305628;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 571483347;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    string Waai = "baab";
    string Akari = "a";
    string Daisuki = "ba";
    string S = "a";
    string F = "abababababaabaabbaabbaabbaabbaabaaabaabaabaaababaa";
    int k = 6134061;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 111913632;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    string Waai = "bba";
    string Akari = "bb";
    string Daisuki = "bbba";
    string S = "bbabb";
    string F = "bbbabbabbabbabbbbbbabbbbbabbbbabbabbbbbbabbbbbabbb";
    int k = 8802344;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 456800368;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    string Waai = "babbabaaabbbbbaaba";
    string Akari = "ababbaabbb";
    string Daisuki = "abbbaaabbbbbabbbbbaabbbbbbbbbbbbabbbbaaabaab";
    string S = "abb";
    string F = "bbbbb";
    int k = 8288273;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 51774537;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    string Waai = "bbbab";
    string Akari = "aaaaabaa";
    string Daisuki = "bbbbbaaaabbaabaabbbaaabbbbbbbabbabbb";
    string S = "aaabbbbbaaababb";
    string F = "abbab";
    int k = 8673748;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 369540031;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    string Waai = "bbaabbbbaaababbabbbbbbbaaabaaabbaababba";
    string Akari = "babbabaabbbbbabaaaaabbaabaaababbb";
    string Daisuki = "aabbaaaaaabbabbab";
    string S = "bbbaabababbabaababbaaaaaababaabbbbabbba";
    string F = "babba";
    int k = 5548393;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 819307292;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    string Waai = "bababb";
    string Akari = "ababbabababbaaaabaa";
    string Daisuki = "bbbababbbba";
    string S = "abbbaaababaabaababbaaaaababbbabb";
    string F = "bbaaa";
    int k = 6283903;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 992677414;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    string Waai = "bbaabbabaaaaabbbbaababbbbabababbbaaabbbaababaabab";
    string Akari = "baaabababaababbaaabaabaaabbbabaaaaaaaab";
    string Daisuki = "babbbbaaabbbabbabaaabbbaaba";
    string S = "babb";
    string F = "bbaab";
    int k = 9563656;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 960667026;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    string Waai = "baaabaabbbbb";
    string Akari = "baabbabbbbbabaabbaabbaababbbaabbbbaaaaabaabbaaabb";
    string Daisuki = "aabbbbabababbabbaba";
    string S = "aabababaababaababaaaabbbbaabbbaabab";
    string F = "aabbb";
    int k = 3786640;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 86943556;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    string Waai = "babbbaabbbaaabbaaba";
    string Akari = "aababbbbaaaabbbabbabaaabbbbabbbabba";
    string Daisuki = "aabbaaababbabb";
    string S = "bb";
    string F = "bbbaa";
    int k = 3620191;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 32025395;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    string Waai = "bbbbbbabaabaaaaababaabbbbbb";
    string Akari = "abaabaaaabbbabbabaaaaabababbaaaabbbabaaabaabbaa";
    string Daisuki = "bbab";
    string S = "aabbaaaaaaabb";
    string F = "aaaab";
    int k = 8953391;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 69096630;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    string Waai = "aabbbabaabbbaabbb";
    string Akari = "bbaababaaaabbaabbaabbaabaabbbbabaabbb";
    string Daisuki = "bbbaaaa";
    string S = "bbabaaababab";
    string F = "aabbb";
    int k = 3556936;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 377339095;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    string Waai = "aabaabaabbaaabaaaaabaaaabbbbbbbbbaabaaabb";
    string Akari = "abbaabaabbbabb";
    string Daisuki = "bababaaaabbaabbaaabaabbabababbabbbbaabaaaaa";
    string S = "bbabbababbbaaaaaabbabaaabbbabbaaaabbbaba";
    string F = "bbbab";
    int k = 4751711;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 63359930;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    string Waai = "aaa";
    string Akari = "aa";
    string Daisuki = "a";
    string S = "aa";
    string F = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    int k = 1189064;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 576877542;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    string Waai = "a";
    string Akari = "a";
    string Daisuki = "aaaaa";
    string S = "aaaa";
    string F = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    int k = 8731127;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 272987482;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    string Waai = "a";
    string Akari = "aaa";
    string Daisuki = "aaaaa";
    string S = "aa";
    string F = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    int k = 5004641;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 917716221;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    string Waai = "aaaa";
    string Akari = "aaaa";
    string Daisuki = "aaa";
    string S = "aaaa";
    string F = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    int k = 5515174;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 268057812;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    string Waai = "aaaa";
    string Akari = "aaa";
    string Daisuki = "aaaa";
    string S = "a";
    string F = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    int k = 5877213;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 21276314;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    string Waai = "aaaaa";
    string Akari = "aaaa";
    string Daisuki = "a";
    string S = "a";
    string F = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    int k = 6982677;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 502972248;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    string Waai = "aa";
    string Akari = "a";
    string Daisuki = "aaaa";
    string S = "aaa";
    string F = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    int k = 3731026;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 973197867;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    string Waai = "a";
    string Akari = "aaaaa";
    string Daisuki = "aaaaa";
    string S = "aaaa";
    string F = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    int k = 3859843;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 216418029;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    string Waai = "aaa";
    string Akari = "aaa";
    string Daisuki = "a";
    string S = "aa";
    string F = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    int k = 2061854;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 458118222;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    string Waai = "aa";
    string Akari = "aa";
    string Daisuki = "aaa";
    string S = "aa";
    string F = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    int k = 267796;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 175360135;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    string Waai = "baabab";
    string Akari = "babababa";
    string Daisuki = "baab";
    string S = "baabbaba";
    string F = "abababaabbababaabbabababa";
    int k = 6310607;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 382546807;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    string Waai = "baabbaabba";
    string Akari = "bababaab";
    string Daisuki = "baab";
    string S = "abab";
    string F = "aabbaabbaabbaabbaabbaabba";
    int k = 5267518;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 423289233;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    string Waai = "abba";
    string Akari = "baabbababa";
    string Daisuki = "babababa";
    string S = "babaab";
    string F = "bababaabbaabbaabbababaabb";
    int k = 3057671;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 166296374;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    string Waai = "ab";
    string Akari = "babaab";
    string Daisuki = "babaab";
    string S = "ababba";
    string F = "babaababababbababaabababb";
    int k = 8795956;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 274170949;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    string Waai = "ba";
    string Akari = "baabababab";
    string Daisuki = "bababababa";
    string S = "babaabba";
    string F = "ababababababababababaabab";
    int k = 6203551;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 507586618;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    string Waai = "baba";
    string Akari = "abbababa";
    string Daisuki = "abbaababab";
    string S = "ba";
    string F = "abababaabbaababababbaabab";
    int k = 2337786;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 595137383;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    string Waai = "ba";
    string Akari = "ba";
    string Daisuki = "ab";
    string S = "babaabab";
    string F = "babababaababbababaabababa";
    int k = 292891;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 205683550;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    string Waai = "ba";
    string Akari = "babaababab";
    string Daisuki = "baabba";
    string S = "abab";
    string F = "bbaabbababaabababbaababba";
    int k = 3963955;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 700565895;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    string Waai = "abbaababab";
    string Akari = "baab";
    string Daisuki = "ba";
    string S = "ab";
    string F = "abababbaababbababababaaba";
    int k = 547673;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 88341222;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    string Waai = "baabba";
    string Akari = "baba";
    string Daisuki = "baabbaab";
    string S = "ababba";
    string F = "abaabbaabbababaabbaababba";
    int k = 8935028;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 733403707;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    string Waai = "aa";
    string Akari = "b";
    string Daisuki = "bbbb";
    string S = "aab";
    string F = "aaaaabbaabbbbbbaaaabbaabbbbbbbbbbbbbbaaaaaaaabbaab";
    int k = 9432048;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 548051057;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    string Waai = "bcc";
    string Akari = "bbccb";
    string Daisuki = "b";
    string S = "cccbb";
    string F = "bbbbbbbccbbccbccbcccccbbbbccbcccbbbbbccbbcccccbbbb";
    int k = 5190500;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 571773480;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    string Waai = "ddddd";
    string Akari = "dcdd";
    string Daisuki = "dcc";
    string S = "dccc";
    string F = "cdccdccdcdddddddddddddcccdcdddcccdccdcddddddddcccd";
    int k = 972062;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 808172000;
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    string Waai = "d";
    string Akari = "d";
    string Daisuki = "ed";
    string S = "dd";
    string F = "dddddddddddddeddddddddededddddddddeddddddddedededd";
    int k = 3951341;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 907037639;
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    string Waai = "ff";
    string Akari = "ef";
    string Daisuki = "eff";
    string S = "efe";
    string F = "effeffefffffffefeefefeeffefffefeefefeeffeffefffffe";
    int k = 1507174;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 596919788;
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    string Waai = "ff";
    string Akari = "f";
    string Daisuki = "gg";
    string S = "gff";
    string F = "fffgffggggfffffgfffgffggfffgfffgffggggggfffffffgff";
    int k = 4885335;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 620873787;
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    string Waai = "hghg";
    string Akari = "hg";
    string Daisuki = "ggggh";
    string S = "ghh";
    string F = "hghghgghhhgghhgggghhghghgghhhgghhgggghgggghgggghgg";
    int k = 2960036;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 367377594;
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    string Waai = "iiiii";
    string Akari = "i";
    string Daisuki = "hhih";
    string S = "hh";
    string F = "hhihhhhihhhihhhihhhihhhihiiiiiiiiiiiiiiiiiiiiiiiii";
    int k = 2583110;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 780061724;
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    string Waai = "jijji";
    string Akari = "ji";
    string Daisuki = "i";
    string S = "j";
    string F = "jjijiijijijjijijjijjijijijijjijjijiiijijijjijijjij";
    int k = 4448827;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 699542713;
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    string Waai = "jkjkj";
    string Akari = "jk";
    string Daisuki = "jkjjk";
    string S = "k";
    string F = "kkjkjjkjkjkjkjkjkkjkjjkjkjjkjkjjkjkjjkjkjjkjkjjkjk";
    int k = 3202845;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 29789927;
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    string Waai = "k";
    string Akari = "lkkl";
    string Daisuki = "lkk";
    string S = "kllk";
    string F = "llklkklkllklkklkklkkllklkklkllklkklkklkklkklkkkkll";
    int k = 5269130;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 772388490;
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    string Waai = "ml";
    string Akari = "lll";
    string Daisuki = "lm";
    string S = "m";
    string F = "lmlmlllmlmlllmlmlllmlmlmlmlmlllmlmlmlmlmlllmlmlllm";
    int k = 8813779;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 443661317;
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    string Waai = "nmn";
    string Akari = "mmnn";
    string Daisuki = "nm";
    string S = "nm";
    string F = "nnmnnmnnmnnmnnmnnmmmnnnmnmmmnnnmnnmmmnnnmnmnmmmnnn";
    int k = 8363126;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 770357382;
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    string Waai = "non";
    string Akari = "onoo";
    string Daisuki = "nonno";
    string S = "oonno";
    string F = "noonoooonnononnoonoononoonnoonoooonnononnononnonon";
    int k = 9783007;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 734074696;
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    string Waai = "ooopo";
    string Akari = "pp";
    string Daisuki = "pppo";
    string S = "opopo";
    string F = "pppoppooopoopopoppopopopppopppopppoppooopoooopoooo";
    int k = 234884;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 503994362;
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    string Waai = "qqq";
    string Akari = "qqpp";
    string Daisuki = "qqppq";
    string S = "pp";
    string F = "ppqqppppqqppqqqppqqqppqqppppqqppqqqppqqqppqqqppqqq";
    int k = 5548405;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 640761953;
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    string Waai = "r";
    string Akari = "qqrqq";
    string Daisuki = "qqqr";
    string S = "qqq";
    string F = "qqqqrqqqqqqqqrqqqrqqqrqqrqqrrrqqqqqrqqqqqqqqrqqrqq";
    int k = 5894123;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 436500059;
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    string Waai = "sr";
    string Akari = "rr";
    string Daisuki = "srrs";
    string S = "rss";
    string F = "rssrrrsssrrssrrssrrssrrsrrsrsrsrsrrssrrrsssrrsrrsr";
    int k = 3373661;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 182264539;
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    string Waai = "ttt";
    string Akari = "tttts";
    string Daisuki = "t";
    string S = "s";
    string F = "tsttttssttttttsttttttsttttsstttttstttsttttsstttttt";
    int k = 232587;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 926133979;
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    string Waai = "ut";
    string Akari = "uutut";
    string Daisuki = "ttu";
    string S = "ttttt";
    string F = "tuttttttttuuutututtttttuututtttttttuttuttuttuttutt";
    int k = 7212076;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 167757515;
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    string Waai = "vv";
    string Akari = "uvvu";
    string Daisuki = "vu";
    string S = "uvuuu";
    string F = "vuuvuuuvuuvvuvvuvuuuuvvuuvuuuvuvuvuuvvuvvvvvvuvuuu";
    int k = 1639345;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 601461574;
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    string Waai = "vwwwv";
    string Akari = "vww";
    string Daisuki = "vvvvv";
    string S = "vww";
    string F = "vwwwvvwwvwwvwwvvvvvvvvvvvvvvvvwwvwwwvvwwwvvwwwvvww";
    int k = 5526950;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 339684222;
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    string Waai = "w";
    string Akari = "wxwwx";
    string Daisuki = "xwxx";
    string S = "x";
    string F = "xwwxxxwxxwxwwxwxwxwwxxxwxxxwxxxwxxwxwwxwwwxwxwwxxx";
    int k = 9669196;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 555424360;
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test221() {
    string Waai = "y";
    string Akari = "x";
    string Daisuki = "yy";
    string S = "xyxx";
    string F = "xyxxxxyxxyyxyxyxxxxyxxyyyyxyyxyxxxxyxxyyxyxyxxxxyx";
    int k = 4565887;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 285726969;
    if(result == expected) {
        cout << "Test Case 221: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 221: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test222() {
    string Waai = "yyy";
    string Akari = "yzzy";
    string Daisuki = "yyyy";
    string S = "zz";
    string F = "yyyyzzyzzyzzyyyyyzzyyyyzzyzzyzzyyyyyyyyyyyyyzzyyyy";
    int k = 777213;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 252189124;
    if(result == expected) {
        cout << "Test Case 222: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 222: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test223() {
    string Waai = "z";
    string Akari = "aa";
    string Daisuki = "z";
    string S = "azaaa";
    string F = "azazaaaaaazaaazzzaazzzazaaaaaazaaazaazazaaaaaazaaa";
    int k = 6007542;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 663166761;
    if(result == expected) {
        cout << "Test Case 223: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 223: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test224() {
    string Waai = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string Akari = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string Daisuki = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string S = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string F = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    int k = 10000000;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 143679844;
    if(result == expected) {
        cout << "Test Case 224: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 224: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test225() {
    string Waai = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string Akari = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaba";
    string Daisuki = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string S = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string F = "aaaaa";
    int k = 10000000;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 865087898;
    if(result == expected) {
        cout << "Test Case 225: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 225: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test226() {
    string Waai = "a";
    string Akari = "a";
    string Daisuki = "a";
    string S = "a";
    string F = "a";
    int k = 9878765;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 211736447;
    if(result == expected) {
        cout << "Test Case 226: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 226: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test227() {
    string Waai = "a";
    string Akari = "a";
    string Daisuki = "a";
    string S = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string F = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    int k = 10000000;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 553075164;
    if(result == expected) {
        cout << "Test Case 227: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 227: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test228() {
    string Waai = "abab";
    string Akari = "abba";
    string Daisuki = "aabb";
    string S = "abba";
    string F = "aabb";
    int k = 10000000;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 511436803;
    if(result == expected) {
        cout << "Test Case 228: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 228: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test229() {
    string Waai = "x";
    string Akari = "x";
    string Daisuki = "x";
    string S = "x";
    string F = "xx";
    int k = 5;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 124;
    if(result == expected) {
        cout << "Test Case 229: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 229: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test230() {
    string Waai = "a";
    string Akari = "b";
    string Daisuki = "a";
    string S = "b";
    string F = "aaabbabbaaa";
    int k = 10000000;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
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
    string Waai = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string Akari = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string Daisuki = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string S = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string F = "aa";
    int k = 10000000;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 143679892;
    if(result == expected) {
        cout << "Test Case 231: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 231: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test232() {
    string Waai = "b";
    string Akari = "b";
    string Daisuki = "b";
    string S = "a";
    string F = "b";
    int k = 474744;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 385908827;
    if(result == expected) {
        cout << "Test Case 232: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 232: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test233() {
    string Waai = "ab";
    string Akari = "abab";
    string Daisuki = "ab";
    string S = "abab";
    string F = "ababababa";
    int k = 9999999;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 767155198;
    if(result == expected) {
        cout << "Test Case 233: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 233: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test234() {
    string Waai = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string Akari = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string Daisuki = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string S = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string F = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    int k = 10000000;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 143679846;
    if(result == expected) {
        cout << "Test Case 234: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 234: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test235() {
    string Waai = "aaaa";
    string Akari = "a";
    string Daisuki = "a";
    string S = "a";
    string F = "aa";
    int k = 342076;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 235: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 235: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test236() {
    string Waai = "a";
    string Akari = "a";
    string Daisuki = "a";
    string S = "aaaa";
    string F = "a";
    int k = 342074;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 236: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 236: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test237() {
    string Waai = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string Akari = "a";
    string Daisuki = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string S = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string F = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    int k = 10000000;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 613478286;
    if(result == expected) {
        cout << "Test Case 237: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 237: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test238() {
    string Waai = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string Akari = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string Daisuki = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string S = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string F = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    int k = 10000000;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 143679845;
    if(result == expected) {
        cout << "Test Case 238: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 238: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test239() {
    string Waai = "a";
    string Akari = "a";
    string Daisuki = "a";
    string S = "a";
    string F = "a";
    int k = 10000000;
    AkariDaisukiDiv1* pObj = new AkariDaisukiDiv1();
    clock_t start = clock();
    int result = pObj->countF(Waai, Akari, Daisuki, S, F, k);
    clock_t end = clock();
    delete pObj;
    int expected = 22873598;
    if(result == expected) {
        cout << "Test Case 239: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 239: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test232() == 0 ? ++passed : ++failed;
    test233() == 0 ? ++passed : ++failed;
    test234() == 0 ? ++passed : ++failed;
    test235() == 0 ? ++passed : ++failed;
    test236() == 0 ? ++passed : ++failed;
    test237() == 0 ? ++passed : ++failed;
    test238() == 0 ? ++passed : ++failed;
    test239() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=14733&pm=11888
********************************************************************************
#include <vector> 
#include <list> 
#include <map> 
#include <set> 
#include <deque> 
#include <queue> 
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
#include <cctype> 
#include <string> 
#include <cstring> 
#include <cstdio> 
#include <cmath> 
#include <cstdlib> 
#include <ctime> 
 
using namespace std; 
 
#define LENGTH(X) ((int)(X.length())) 
 
const int MOD=1000000007; 
 
class AkariDaisukiDiv1 
{ 
public: 
  int solve(string s,bool prefix[60],bool suffix[60],string key) 
  { 
    int L=LENGTH(key); 
    int D=LENGTH(s); 
    for (int i=0;i<L;i++) 
    { 
      prefix[i]=(key.substr(L-i)==s.substr(0,i)); 
      suffix[i]=(key.substr(0,i)==s.substr(D-i)); 
    } 
    int R=0; 
    for (int i=0;i<=D-L;i++) if (s.substr(i,L)==key) R++; 
    return R; 
  } 
  int countF(string a, string b, string c, string s, string key, int k) 
  { 
    int L=LENGTH(key); 
    for (;LENGTH(s)<L && k>0;k--) s=a+s+b+s+c; 
    if (k==0) 
    { 
      int R=0; 
      for (int i=0;i<=LENGTH(s)-L;i++) if (s.substr(i,L)==key) R++; 
      return R; 
    } 
    bool prefix[60],suffix[60]; 
    int cnt=solve(s,prefix,suffix,key); 
    int R=cnt; 
    bool last_prefix[60],last_suffix[60]; 
    bool fixed=false; 
    int delta=0; 
    for (int step=0;step<k;step++) 
    { 
      if (!fixed) 
      { 
        for (int i=0;i<L;i++) last_prefix[i]=prefix[i]; 
        for (int i=0;i<L;i++) last_suffix[i]=suffix[i]; 
        string token=s.substr(0,L-1)+"."+s.substr(LENGTH(s)-L+1); 
        s=a+token+b+token+c; 
        delta=solve(s,prefix,suffix,key); 
        if (step>=50) 
        { 
          fixed=true; 
          for (int i=0;i<L;i++) if (last_prefix[i]!=prefix[i]) fixed=false; 
          for (int i=0;i<L;i++) if (last_suffix[i]!=suffix[i]) fixed=false; 
        } 
      } 
      R<<=1; 
      if (R>=MOD) R-=MOD; 
      R+=delta; 
      if (R>=MOD) R-=MOD; 
    } 
    return R; 
  } 
};

********************************************************************************
*******************************************************************************/