/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12505
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

class CharacterBoard {
public:
    int countGenerators(vector<string> fragment, int W, int i0, int j0);
};

int CharacterBoard::countGenerators(vector<string> fragment, int W, int i0, int j0) {
    int ret;
    return ret;
}


int test0() {
    vector<string> fragment = {"dea", "abc"};
    int W = 7;
    int i0 = 1;
    int j0 = 1;
    CharacterBoard* pObj = new CharacterBoard();
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
    CharacterBoard* pObj = new CharacterBoard();
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
    CharacterBoard* pObj = new CharacterBoard();
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
    int W = 8827;
    int i0 = 104;
    int j0 = 6022;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 829146844;
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
    int W = 20031;
    int i0 = 960124;
    int j0 = 1959;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 873850548;
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
    int W = 1000000000;
    int i0 = 0;
    int j0 = 0;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 471477008;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> fragment = {"a", "a"};
    int W = 1;
    int i0 = 125;
    int j0 = 0;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
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
    int W = 2;
    int i0 = 145;
    int j0 = 0;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> fragment = {"a", "b"};
    int W = 1;
    int i0 = 125;
    int j0 = 0;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> fragment = {"aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaab"};
    int W = 100000;
    int i0 = 81259;
    int j0 = 12360;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 845234004;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> fragment = {"abaabbbbba", "bbbababbbb", "baabbaaabb", "bbaaaabbbb", "aaabababbb", "baaaaabbbb", "ababbaabbb", "abaaaabbbb", "abaaaabbaa", "bbababbbab"};
    int W = 100000;
    int i0 = 1275;
    int j0 = 92;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 671932034;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> fragment = {"smmlbckh"};
    int W = 57970;
    int i0 = 43709;
    int j0 = 46320;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 923452947;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> fragment = {"akcfd", "egcjd", "tmfou", "fqlpp", "jwlwm"};
    int W = 73824;
    int i0 = 75016;
    int j0 = 53735;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 943117931;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> fragment = {"hjxecug", "gmlqyxa"};
    int W = 66486;
    int i0 = 5654;
    int j0 = 12151;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 380452505;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> fragment = {"f", "x", "b", "n"};
    int W = 9283;
    int i0 = 20801;
    int j0 = 8960;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 143704872;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> fragment = {"ruft", "ftrk", "suwe", "dxdp"};
    int W = 98279;
    int i0 = 36840;
    int j0 = 21951;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 606367878;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> fragment = {"oqdjmxwu", "sdrubyln", "hbatbkxr", "dqcrdbta", "zyxsoblt"};
    int W = 78500;
    int i0 = 72208;
    int j0 = 53846;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 812175430;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> fragment = {"tw"};
    int W = 61385;
    int i0 = 93368;
    int j0 = 33856;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 496855379;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> fragment = {"mptc", "imym", "uyhr", "dhjb", "lvxf", "atnh", "yxpp", "gtuz", "dazg", "ntlw"};
    int W = 73548;
    int i0 = 26933;
    int j0 = 33795;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 810131055;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> fragment = {"kr", "fo", "ef", "bo", "uh"};
    int W = 66129;
    int i0 = 68717;
    int j0 = 70;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 417058512;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> fragment = {"tjlarkjd", "apaolsme"};
    int W = 68382;
    int i0 = 6022;
    int j0 = 3162;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 691117034;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> fragment = {"krek", "nqgu", "ihbl", "shuf", "ldva", "vlto", "sewb", "cvqn"};
    int W = 14382;
    int i0 = 23795;
    int j0 = 5543;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 572769835;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> fragment = {"ggxfndp"};
    int W = 21752;
    int i0 = 16432;
    int j0 = 11499;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 791644406;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> fragment = {"inlv", "josb", "cyfk", "nlft", "eymh"};
    int W = 92235;
    int i0 = 46050;
    int j0 = 18574;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 486327735;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> fragment = {"fqwjh", "sweue", "zofbd", "yexif", "dbyio"};
    int W = 83301;
    int i0 = 52919;
    int j0 = 28423;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 261693554;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> fragment = {"pwho", "hxdu", "ysge", "czqt", "snlw", "bvve", "lrtz", "ylll", "njhr", "vooa"};
    int W = 55580;
    int i0 = 22719;
    int j0 = 5000;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 212672857;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> fragment = {"tmwivefx"};
    int W = 77656;
    int i0 = 40723;
    int j0 = 24648;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 223977503;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> fragment = {"z", "b"};
    int W = 34306;
    int i0 = 80857;
    int j0 = 28215;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 394164518;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> fragment = {"lsors"};
    int W = 82088;
    int i0 = 7807;
    int j0 = 66258;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 149792377;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> fragment = {"fvzmoqgu", "vhpnkzwn", "ihiwzsdh", "vnwnrrpp", "ptbadwgv", "iaubcslh"};
    int W = 13143;
    int i0 = 50306;
    int j0 = 9920;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 165474172;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> fragment = {"oqz"};
    int W = 57406;
    int i0 = 25118;
    int j0 = 27455;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 684121907;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> fragment = {"hppafixd", "wbnijcup", "gmimjope", "pdnrsnda", "refrqmze", "jhhncmac", "znuaqtnq", "bpejjgbd"};
    int W = 25089;
    int i0 = 16849;
    int j0 = 24420;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 728472763;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> fragment = {"mafulshj", "coknxdlg", "wzgrajny", "tmqdkdnc", "xelnmhri", "hpwbvpux", "candqkpb", "feqwwfro"};
    int W = 12518;
    int i0 = 88000;
    int j0 = 12424;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 830595278;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> fragment = {"hmnserfdba", "qmcfgoulyi", "jteooascad", "pvfpblhuzq", "iryqayggyk", "kvyoqywort", "jfpajzxmkz", "kvgrxaohnd", "lmqkpjfymc"};
    int W = 22019;
    int i0 = 6464;
    int j0 = 11360;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 615857743;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> fragment = {"bvevyjtl", "eikzgdps", "nnbddlpb", "lemopydt", "dfvhqzvq", "rbcynkcl", "psuktwff", "eobjfvgx", "cobhuvny"};
    int W = 91772;
    int i0 = 7964;
    int j0 = 12508;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 159046715;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> fragment = {"qicglvaf", "yymjjswk", "evovsvdc", "zawsltvy", "lnhipzti", "ijjeibwc", "oeeeuyfv", "fxlurjie", "zdwzcdjx"};
    int W = 56278;
    int i0 = 92512;
    int j0 = 39462;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 936515398;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> fragment = {"zgsezqer", "rsvpivol", "pgommxzm", "gentubpt", "bwjfldwp", "ubjqkecv", "mwwvimfn", "likjuapy"};
    int W = 30235;
    int i0 = 61895;
    int j0 = 25128;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 959460712;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> fragment = {"ipkzusmwmv", "kkmqjmgbrf", "eqlywkgzsd", "mhxhsztdbx", "pdaopgfzak", "fgupxstmnf", "fxbtmosocq", "kgictijbdu"};
    int W = 78507;
    int i0 = 43930;
    int j0 = 12947;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 449833059;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> fragment = {"cpbrcvvxo", "nguwsohst", "jmdpzgskh", "qspcueopu", "ilrmcbzjn", "nrkcojlga", "ydcfdegrh", "fsoxnqvbc", "bjtunqoll"};
    int W = 50767;
    int i0 = 8686;
    int j0 = 35135;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 671139732;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> fragment = {"wchacjzb", "zquxolnz", "qbnxzytw", "odkzqmze", "bpnnatii", "ofihgeyt", "mznhneve", "voqdibjl", "cavxqlnr", "nckiwipo"};
    int W = 43722;
    int i0 = 58870;
    int j0 = 10649;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 116892794;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> fragment = {"lbdqbrzfo", "tsdwpldej", "coyxiqryt", "chlylzepn", "nqhgpjsgh", "ihnevhbnn", "ksgzpzgio", "vhkpmguwa", "grfuezznn", "qxrajwgvl"};
    int W = 43188;
    int i0 = 55973;
    int j0 = 10474;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 8396586;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> fragment = {"yluxsyzq", "fyluxsyz", "ufyluxsy", "cufyluxs", "fcufylux", "qfcufylu", "zqfcufyl", "yzqfcufy", "syzqfcuf"};
    int W = 77747;
    int i0 = 74067;
    int j0 = 50571;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 504843201;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> fragment = {"xdgoobly", "tcoxdgoo", "srbtcoxd", "zgmsrbtc", "yxrzgmsr", "gzhyxrzg", "lydgzhyx", "ooblydgz"};
    int W = 87957;
    int i0 = 86287;
    int j0 = 51872;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 169136944;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> fragment = {"oklmhuxwj", "mhuxwjzok", "xwjzoklmh", "zoklmhuxw", "lmhuxwjzo", "uxwjzoklm", "jzoklmhux", "klmhuxwjz"};
    int W = 83613;
    int i0 = 25147;
    int j0 = 17041;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 168892243;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> fragment = {"szbheohc", "cqbjrwdr", "rzgpxvyx", "xfcszbhe", "eohcqbjr", "rwdrzgpx", "xvyxfcsz", "zbheohcq"};
    int W = 89359;
    int i0 = 60713;
    int j0 = 60615;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 194200797;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> fragment = {"uaqcvnqs", "vnqswvje", "wvjeiryi", "iryiqpbr", "qpbrugua", "uguaqcvn", "qcvnqswv", "qswvjeir", "jeiryiqp"};
    int W = 87520;
    int i0 = 41150;
    int j0 = 30820;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 206471137;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> fragment = {"bhkvcsgmg", "lnuibhkvc", "sgmglnuib", "hkvcsgmgl", "nuibhkvcs", "gmglnuibh", "kvcsgmgln", "uibhkvcsg", "mglnuibhk"};
    int W = 81415;
    int i0 = 37668;
    int j0 = 68483;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 7224469;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> fragment = {"ytjwpnfyvy", "ztdnaaytjw", "fyvyshztdn", "ytjwpnfyvy", "ztdnaaytjw", "fyvyshztdn", "ytjwpnfyvy", "ztdnaaytjw"};
    int W = 84126;
    int i0 = 15071;
    int j0 = 14101;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 263145157;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> fragment = {"crzzvqse", "zvqseegc", "seegccrz", "gccrzzvq", "rzzvqsee", "vqseegcc", "eegccrzz", "ccrzzvqs", "zzvqseeg", "qseegccr"};
    int W = 82151;
    int i0 = 83024;
    int j0 = 19570;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 178821633;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> fragment = {"jrgissmr", "xkljrgis", "dnrxkljr", "cgldnrxk", "sfrcgldn", "mrzsfrcg", "issmrzsf", "jrgissmr", "xkljrgis"};
    int W = 76647;
    int i0 = 31931;
    int j0 = 31459;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 328109266;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> fragment = {"wccnkijfi", "heyeevwiz", "wjcbrxwcc", "jfiflihey", "wizusowjc", "wccnkijfi", "heyeevwiz", "wjcbrxwcc"};
    int W = 89412;
    int i0 = 43004;
    int j0 = 34780;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 263179600;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> fragment = {"xbwrudbwl", "iiekaiuai", "qfrjkijqd", "xbwrudbwl", "iiekaiuai", "qfrjkijqd", "xbwrudbwl", "iiekaiuai", "qfrjkijqd", "xbwrudbwl"};
    int W = 100000;
    int i0 = 89836;
    int j0 = 74624;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 504386748;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> fragment = {"apjxlbaa", "begtkgpa", "aarqtzus", "apjxlbaa", "begtkgpa", "aarqtzus", "apjxlbaa", "begtkgpa", "aarqtzus"};
    int W = 100000;
    int i0 = 62740;
    int j0 = 97850;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 68628057;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> fragment = {"ddbjmjjvu", "ddbjmjjvu", "ddbjmjjvu", "ddbjmjjvu", "ddbjmjjvu", "ddbjmjjvu", "ddbjmjjvu", "ddbjmjjvu", "ddbjmjjvu"};
    int W = 100000;
    int i0 = 41926;
    int j0 = 84601;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 153754721;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> fragment = {"jbggdcctu", "ctufwvfwt", "fwttdjbgg", "bggdcctuf", "tufwvfwtt", "wttdjbggd", "ggdcctufw", "ufwvfwttd", "ttdjbggdc", "gdcctufwv"};
    int W = 100000;
    int i0 = 70516;
    int j0 = 42922;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 557108876;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> fragment = {"uxfyfzrz", "fyfzrzew", "fzrzewqr", "rzewqrtu", "ewqrtuvh", "qrtuvhmp", "tuvhmphn", "vhmphnhy"};
    int W = 95812;
    int i0 = 74014;
    int j0 = 94414;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 266179209;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> fragment = {"yldiaybdt", "idlpyldia", "tfkaidlpy", "dhvktfkai", "kurkdhvkt", "znwmkurkd", "hkpfznwmk", "qzruhkpfz", "demmqzruh"};
    int W = 95672;
    int i0 = 44026;
    int j0 = 54885;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 992940820;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> fragment = {"znybupyofn", "znybupyofn", "znybupyofn", "znybupyofn", "znybupyofn", "znybupyofn", "znybupyofn", "znybupyofn", "znybupyofn"};
    int W = 10;
    int i0 = 61901;
    int j0 = 0;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> fragment = {"mvkstajaqz", "mvkstajaqz", "mvkstajaqz", "mvkstajaqz", "mvkstajaqz", "mvkstajaqz", "mvkstajaqz", "mvkstajaqz", "mvkstajaqz", "mvkstajaqz"};
    int W = 100000;
    int i0 = 15853;
    int j0 = 99046;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 914170371;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> fragment = {"isoxzueii", "ueiisoxzu", "oxzueiiso", "iisoxzuei", "zueiisoxz", "soxzueiis", "eiisoxzue", "xzueiisox"};
    int W = 333;
    int i0 = 99777;
    int j0 = 320;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 311585097;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> fragment = {"ygdygdyg", "gdygdygd", "dygdygdy", "ygdygdyg", "gdygdygd", "dygdygdy", "ygdygdyg", "gdygdygd", "dygdygdy"};
    int W = 334;
    int i0 = 95424;
    int j0 = 169;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 451137862;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> fragment = {"aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaab"};
    int W = 1000000000;
    int i0 = 3681259;
    int j0 = 19992360;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 109972726;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> fragment = {"ababababba", "bbababbaaa", "abbabaaaab", "aaaaabaabb", "abbbbabaaa", "aabaabbaaa", "abaababbbb", "aaaabaabab", "bbaaabbbaa", "aababbaaab"};
    int W = 1000000000;
    int i0 = 623885;
    int j0 = 99990200;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 803255601;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> fragment = {"zbhvy", "vdbit", "ebapu", "lbcuw", "nmdze", "fjkyh", "hfisz", "ljsrx", "jhyxf"};
    int W = 243052130;
    int i0 = 41040444;
    int j0 = 87431704;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 628353498;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> fragment = {"wnwuygstbc", "hmygyivabn", "rsbrtdgeop"};
    int W = 848145330;
    int i0 = 76590130;
    int j0 = 631900320;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 271097437;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> fragment = {"cre", "deb", "idk", "ukp", "lwb", "ett"};
    int W = 747969174;
    int i0 = 297515694;
    int j0 = 179193936;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 916069333;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> fragment = {"iamsrto"};
    int W = 745648371;
    int i0 = 739407154;
    int j0 = 473474273;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 516048718;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> fragment = {"z", "f", "p"};
    int W = 593585381;
    int i0 = 117287011;
    int j0 = 492360932;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 139702122;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> fragment = {"zq", "wc", "jm", "ok", "hy", "gy", "ic", "yk"};
    int W = 494272633;
    int i0 = 255122425;
    int j0 = 338490202;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 155138800;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> fragment = {"o", "a", "f", "r", "x", "z", "b"};
    int W = 913732647;
    int i0 = 685804220;
    int j0 = 586952080;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 485393939;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> fragment = {"gel", "jyf", "wue", "eeg", "vpm", "yxq", "yex", "iqb", "aoc"};
    int W = 98834374;
    int i0 = 47742489;
    int j0 = 13546280;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 819748989;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> fragment = {"goiykjpmt", "ppyanjjpw", "aosllpimw", "gkmykjova", "iigslagjh", "joblvjwom", "wgjkbjiax", "tqftcobsh", "lraijjxpm", "vvqqctwmi"};
    int W = 186460653;
    int i0 = 725388414;
    int j0 = 50831247;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 6149517;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> fragment = {"zjemrf", "zmyenl", "kzuzgz", "bzrbeg", "tethrl", "vextav", "bzudii", "lxuwqj", "qnnbcm", "dpgdxd"};
    int W = 475929695;
    int i0 = 31469755;
    int j0 = 362792950;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 132783049;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> fragment = {"i", "p", "u", "s", "j", "r", "p"};
    int W = 662043743;
    int i0 = 39600391;
    int j0 = 63897758;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 428107256;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> fragment = {"swyyf", "xijjt", "vypdr"};
    int W = 262878062;
    int i0 = 299706840;
    int j0 = 177874215;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 31762140;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> fragment = {"ydrsi", "drwok", "wkmsj", "rvxrq", "bihrw"};
    int W = 177355642;
    int i0 = 173869055;
    int j0 = 43034952;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 724933236;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> fragment = {"yi", "xg", "ga", "ou", "xq"};
    int W = 482785583;
    int i0 = 367155830;
    int j0 = 224448808;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 747840080;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> fragment = {"yewryljp", "eliauaxw", "ydbhrdyd", "lrqaswos", "jdtzqijz"};
    int W = 883188399;
    int i0 = 234335671;
    int j0 = 736545294;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 168553690;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> fragment = {"ueh", "sbc", "fsu", "kyb", "jnf", "odt", "ukg", "nti", "djl"};
    int W = 254927748;
    int i0 = 430795094;
    int j0 = 7506316;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 865158262;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> fragment = {"ulfpgzhrrt", "qxhlqoznor", "lijbidurax", "rrrolcrhsn", "ezdazxzavw", "jqpsvuygxi", "bdgwbqddlc", "lyvyucmjfs"};
    int W = 324905844;
    int i0 = 345902423;
    int j0 = 111161796;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 807203442;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> fragment = {"pswetdo", "kmggeci", "zdzrpgi", "avijjqr", "krwyldg"};
    int W = 377507697;
    int i0 = 729412009;
    int j0 = 324854970;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 872324406;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> fragment = {"e", "g", "d", "s", "s", "d", "m"};
    int W = 686442429;
    int i0 = 717170116;
    int j0 = 26460181;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 631387483;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> fragment = {"xzozorr", "lemmcag"};
    int W = 585531460;
    int i0 = 465872169;
    int j0 = 576463065;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 419224611;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> fragment = {"qlxafpdy", "uvagohxl", "unmdtrad", "sbuiepot", "wchcagmj", "whusghyq", "matoegzx", "rqzyvhge", "xzjgtubw", "pakuctkj"};
    int W = 488045154;
    int i0 = 312416927;
    int j0 = 158697831;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 391242851;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> fragment = {"hqjecshu", "vynafxxw", "wdjbmgog", "rmudxpyj", "ozamzutk", "txjzrrll", "xujlkcfh", "gorucnrt", "jecshuhv"};
    int W = 326645022;
    int i0 = 777226995;
    int j0 = 251873526;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 271578348;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> fragment = {"avmemrnc", "vwyrfxjo", "mnlygase", "jofsduti", "vyugtaph", "laltinne", "ltclbgrl", "fhrqdgqy", "bzwksknt"};
    int W = 190793296;
    int i0 = 910613410;
    int j0 = 145163902;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 608774599;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> fragment = {"csgidhaycg", "kwseejuatk", "fegnkcthie", "vknfmmvanb", "yknwxeimkd", "txdrknzakn", "dzpsfxqujd", "xzgfzqzvbv"};
    int W = 163613024;
    int i0 = 352832503;
    int j0 = 135778927;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 897252657;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> fragment = {"gccekhtrva", "qrzcwazjnw", "xfdwnwyiyw", "luaurrvcpf", "ybljjrfbae", "nzvjbeznti", "iccyrrgtfo", "ppwbjbogcc"};
    int W = 508129739;
    int i0 = 820860016;
    int j0 = 82241137;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 331723811;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> fragment = {"rcdfiwml", "lalpmmwt", "lotaqbbo", "eqmascfp", "klwfkdtq", "qcljwbwd", "jquoooum", "irzbxvaj", "jxjodawm", "barchxxt"};
    int W = 790404986;
    int i0 = 788877505;
    int j0 = 96048743;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 221360205;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> fragment = {"izkmhihvo", "ljuccveva", "txmasmfoe", "ymloicymn", "eyrxttggh", "nplbpbwpy", "oajtlqaru", "zolonmslt"};
    int W = 525688720;
    int i0 = 321531070;
    int j0 = 468322125;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 555736268;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> fragment = {"dhnvdrsix", "ruwvpcxxd", "slsjvuzdy", "jxemgytes", "qiwyjysip", "jiwufuvbi", "letfniuey", "tyfwtlrbn"};
    int W = 29143951;
    int i0 = 535720350;
    int j0 = 12399568;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 275234901;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> fragment = {"wgztbomi", "jahsripy", "dbkvvqfk", "ztbomimh", "hsripyey", "kvvqfkvd", "bomimhhp", "ripyeyof", "vqfkvdnm"};
    int W = 836232259;
    int i0 = 244196727;
    int j0 = 505313490;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 648610893;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> fragment = {"fsbkhkvdk", "fasdjjfkc", "jwdgmytwu", "unmwtheqb", "vdtoymvqc", "iprlplazk", "rabyorgbp", "eejjovsxq", "korzgtwur"};
    int W = 213412664;
    int i0 = 815344571;
    int j0 = 68309089;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 154440518;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> fragment = {"gnudnmcuum", "mbffzerbbj", "jgnudnmcuu", "umbffzerbb", "bjgnudnmcu", "uumbffzerb", "bbjgnudnmc", "cuumbffzer", "rbbjgnudnm", "mcuumbffze"};
    int W = 514954216;
    int i0 = 265899602;
    int j0 = 18434059;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 793667547;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> fragment = {"gtkvwrwwbh", "rwwbhkfbfy", "kfbfywqzgt", "wqzgtkvwrw", "kvwrwwbhkf", "wbhkfbfywq", "bfywqzgtkv", "zgtkvwrwwb"};
    int W = 150827945;
    int i0 = 779932255;
    int j0 = 107731835;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 233339216;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> fragment = {"clfujcelea", "eleaclfujc", "fujceleacl", "eaclfujcel", "jceleaclfu", "clfujcelea", "eleaclfujc", "fujceleacl", "eaclfujcel"};
    int W = 496597076;
    int i0 = 335510415;
    int j0 = 404119391;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 556092014;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> fragment = {"erpacpuob", "ephherpac", "nqxmephhe", "dkilnqxme", "cvwudkiln", "tjjwcvwud", "puobtjjwc", "rpacpuobt", "phherpacp"};
    int W = 335016812;
    int i0 = 30010713;
    int j0 = 35127822;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 254817910;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> fragment = {"egmlwtry", "tryofylb", "ylblfvxr", "vxrrereg", "regmlwtr", "wtryofyl", "fylblfvx", "fvxrrere", "eregmlwt"};
    int W = 874892702;
    int i0 = 942082088;
    int j0 = 807732814;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 148773356;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> fragment = {"ujfglaac", "laacgqpb", "gqpbnezx", "nezxujfg", "ujfglaac", "laacgqpb", "gqpbnezx", "nezxujfg", "ujfglaac"};
    int W = 947344068;
    int i0 = 711451607;
    int j0 = 228028006;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 877019310;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> fragment = {"jnfdcocxd", "hyqebmanf", "tgtjnfdco", "aenhyqebm", "nfftgtjnf", "xdvaenhyq", "nfznfftgt", "cocxdvaen", "bmanfznff"};
    int W = 21155310;
    int i0 = 196516202;
    int j0 = 10458490;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 814598320;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> fragment = {"ioyycmbef", "mbefdocig", "ocigaioyy", "ioyycmbef", "mbefdocig", "ocigaioyy", "ioyycmbef", "mbefdocig", "ocigaioyy"};
    int W = 478961615;
    int i0 = 974452526;
    int j0 = 357217101;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 701133240;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> fragment = {"owqsmncfg", "qhdzvowqs", "fgantqhdz", "wtkvgfgan", "mncfgwtkv", "vowqsmncf", "tqhdzvowq", "gfgantqhd", "gwtkvgfga"};
    int W = 345878515;
    int i0 = 485877273;
    int j0 = 338366368;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 695382148;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> fragment = {"ybnqeeyk", "eykwqzjw", "zjwkybnq", "bnqeeykw", "ykwqzjwk", "jwkybnqe", "nqeeykwq", "kwqzjwky"};
    int W = 476306983;
    int i0 = 184203369;
    int j0 = 389478527;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 92662505;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> fragment = {"rdeykukjb", "nomnthhhw", "llumpjgjm", "aykjqihji", "jlzsprygm", "bovidfqrs", "fwponinwt", "afvjqvyrs", "detjtnios", "bmeqdxjuq"};
    int W = 999999841;
    int i0 = 823512387;
    int j0 = 524417418;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 775142860;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> fragment = {"scvrxtctf", "wemgddpha", "jatzddhrg", "xbjozrdpr", "qxoktozrc", "erecgsitb", "tjyyytogu", "bdnbweaen", "qhdrnckri"};
    int W = 999999841;
    int i0 = 632700993;
    int j0 = 980308664;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 75466784;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> fragment = {"vundthsjv", "mqtepxbsb", "yvenztegr", "rowrldvwc", "imsiyzapr", "sitsiyolp", "xsnblaswe", "lsljbpxvb"};
    int W = 999999001;
    int i0 = 978703947;
    int j0 = 231192913;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 170814594;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> fragment = {"ssafvpbu", "safvpbup", "afvpbupx", "fvpbupxe", "vpbupxeq", "pbupxeqy", "bupxeqyg", "upxeqygj", "pxeqygji", "xeqygjio"};
    int W = 999999001;
    int i0 = 288997739;
    int j0 = 404159301;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 119863154;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> fragment = {"jbicngws", "yhvcuwvw", "nwsfmcen", "pbrejpcy", "rgjtcaav", "ptbgouqp", "qtlyshvl", "numrsxfx", "sfmmptmk"};
    int W = 999998999;
    int i0 = 893709457;
    int j0 = 654446495;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 405176938;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> fragment = {"ktgrzvsaz", "zegcwplea", "duilaouln", "mtmuxqxhh", "swnxikuuz", "xudjizyme", "ilqjabqmb", "wjrhkrrkl", "epwxvpxpg", "rwwjiilad"};
    int W = 999998999;
    int i0 = 469388976;
    int j0 = 627360803;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 710427940;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> fragment = {"kmapiued", "rkmapiue", "wrkmapiu", "twrkmapi", "rtwrkmap", "krtwrkma", "ukrtwrkm", "iukrtwrk"};
    int W = 999998999;
    int i0 = 576430132;
    int j0 = 549090616;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 120121922;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> fragment = {"asusioum", "aasusiou", "maasusio", "cmaasusi", "ecmaasus", "becmaasu", "hbecmaas", "mhbecmaa"};
    int W = 999998999;
    int i0 = 357582149;
    int j0 = 344265191;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 120121923;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> fragment = {"bikbgebhdo", "sbikbgebhd", "ysbikbgebh", "wysbikbgeb", "dwysbikbge", "wdwysbikbg", "owdwysbikb", "dowdwysbik"};
    int W = 999998999;
    int i0 = 958873857;
    int j0 = 837054664;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 4198680;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> fragment = {"vzjaxupybu", "ybuibtgygv", "ygvzjaxupy", "upybuibtgy", "tgygvzjaxu", "axupybuibt", "ibtgygvzja", "zjaxupybui", "buibtgygvz", "gvzjaxupyb"};
    int W = 999998999;
    int i0 = 587171819;
    int j0 = 705417919;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 492801897;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> fragment = {"uvdmhjja", "syiraxle", "vdmhjjag", "yiraxleu", "dmhjjags", "iraxleuv", "mhjjagsy", "raxleuvd"};
    int W = 999998999;
    int i0 = 5295133;
    int j0 = 470266038;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 847635222;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> fragment = {"tznpnftb", "bxooqslv", "vsxdutou", "uwpmjozo", "oxttznpn", "nftbxooq", "qslvsxdu", "utouwpmj", "jozoxttz", "znpnftbx"};
    int W = 999998999;
    int i0 = 887808881;
    int j0 = 591715219;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 240906051;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> fragment = {"lcqcbpavut", "ylcqcbpavu", "zylcqcbpav", "tzylcqcbpa", "wtzylcqcbp", "awtzylcqcb", "tawtzylcqc", "utawtzylcq"};
    int W = 908107199;
    int i0 = 791550686;
    int j0 = 754027230;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 547792068;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> fragment = {"acevlbmqim", "imwdwcncya", "mbtymckgwp", "lhitwxeiwd", "vllmyxcibv", "yigcptplfu", "raptcqtcab", "zfdmdfwhsp", "jokitzqxvs", "hzxfwsfgpn"};
    int W = 908107199;
    int i0 = 865849982;
    int j0 = 867436273;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 865676049;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> fragment = {"agtmmtllwi", "tqgvepxned", "uvdzgeytyq", "ufbhitafot", "efzmdigpxr", "zqgdzfpeew", "yqgijngoga", "nogvyqihoo"};
    int W = 908107199;
    int i0 = 664171338;
    int j0 = 439459510;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 858580240;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> fragment = {"onmkxtgqc", "nmkxtgqch", "mkxtgqchs", "kxtgqchss", "xtgqchsss", "tgqchssst", "gqchssstf", "qchssstfl", "chssstflk", "hssstflkg"};
    int W = 544864321;
    int i0 = 86335083;
    int j0 = 161238875;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 177220510;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> fragment = {"dlunfsyn", "wfekohkl", "ezcuhipq", "lovuvzgp", "ndlunfsy", "pwfekohk", "gezcuhip", "alovuvzg"};
    int W = 544864321;
    int i0 = 392981472;
    int j0 = 389066533;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 267616715;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> fragment = {"ywscrcro", "wscrcrof", "scrcrofx", "crcrofxv", "rcrofxvy", "crofxvyw", "rofxvyws", "ofxvywsc", "fxvywscr", "xvywscrc"};
    int W = 544864321;
    int i0 = 713713046;
    int j0 = 533578665;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 384431901;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> fragment = {"rtyqwran", "tyqwrani", "yqwranio", "qwranioh", "wraniohq", "raniohqz", "aniohqzw", "niohqzwk", "iohqzwka", "ohqzwkae"};
    int W = 544864321;
    int i0 = 74356118;
    int j0 = 476091253;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 466667218;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> fragment = {"myirnofxcz", "olceoprdto", "jaflsmyirn", "czrxkolceo", "tozybjafls", "rnofxczrxk", "eoprdtozyb", "lsmyirnofx"};
    int W = 544864321;
    int i0 = 527566055;
    int j0 = 177677347;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 630521805;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> fragment = {"kwevrqbix", "dcvmkfkwe", "gscdcidcv", "rdpuzpgsc", "qbixoyrdp", "fkwevrqbi", "idcvmkfkw", "pgscdcidc", "yrdpuzpgs"};
    int W = 544864319;
    int i0 = 353889810;
    int j0 = 343244130;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 536143453;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> fragment = {"iraqbzvm", "fvfcejsr", "oaxsclkr", "aqbzvmrb", "fcejsram", "xsclkrui", "bzvmrbzf", "ejsramco"};
    int W = 544864319;
    int i0 = 780292995;
    int j0 = 250856314;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 627145247;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> fragment = {"ignumoqwvk", "gnumoqwvkn", "numoqwvkni", "umoqwvknig", "moqwvknign", "oqwvknignu", "qwvknignum", "wvknignumo"};
    int W = 800997121;
    int i0 = 733013766;
    int j0 = 678855380;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 776526036;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> fragment = {"lcpijxhgj", "cpijxhgjr", "pijxhgjry", "ijxhgjryp", "jxhgjrypy", "xhgjrypyo", "hgjrypyoh", "gjrypyohv"};
    int W = 800997121;
    int i0 = 754263533;
    int j0 = 610097927;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 816791339;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> fragment = {"gzzrdornml", "rnmlkjeydt", "eydtktghyr", "ghyrulkxjy", "kxjykprvuz", "rvuzmzexuv", "exuvjgzzrd", "zzrdornmlk", "nmlkjeydtk", "ydtktghyru"};
    int W = 800997121;
    int i0 = 274842987;
    int j0 = 367678729;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 814407608;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> fragment = {"aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa"};
    int W = 931170239;
    int i0 = 712571259;
    int j0 = 282815756;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 581421261;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> fragment = {"aaaaaaaaab", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "baaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa"};
    int W = 931170239;
    int i0 = 126126123;
    int j0 = 58548455;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 106039368;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> fragment = {"aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa"};
    int W = 931170241;
    int i0 = 999999990;
    int j0 = 919282274;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 644814532;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> fragment = {"aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaab"};
    int W = 931170241;
    int i0 = 999182;
    int j0 = 727572756;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 343666803;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> fragment = {"abababacac", "aaacacacbb", "ccabababab"};
    int W = 8827;
    int i0 = 104;
    int j0 = 6022;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 829146844;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> fragment = {"abcdeabcdz", "abcdeabcdz", "abcdeabcdz", "abcdeabcdz", "abcdeabcdz", "abcdeabcdz", "abcdeabcdz", "abcdeabcdz", "abcdeabcdz", "abcdeabcdz"};
    int W = 999999999;
    int i0 = 999888888;
    int j0 = 999888888;
    CharacterBoard* pObj = new CharacterBoard();
    clock_t start = clock();
    int result = pObj->countGenerators(fragment, W, i0, j0);
    clock_t end = clock();
    delete pObj;
    int expected = 449071260;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20463878&rd=15496&pm=12505
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
#include <ctime> 
#include <cfloat> 
 
#pragma comment(linker, "/STACK:60777216")   
 
using namespace std;   
 
typedef pair<int,int> pii;   
typedef long long ll;   
typedef vector<int> vi;   
typedef pair<double,double> pdd; 
 
#define UN(v) SORT(v),v.erase(unique(v.begin(),v.end()),v.end())   
#define SORT(c) sort((c).begin(),(c).end())   
#define FOR(i,a,b) for (int  i=(a); i < (b); i++)    
#define REP(i,n) FOR(i,0,n)    
#define CL(a,b) memset(a,b,sizeof(a))   
#define pb push_back   
 
 
const int mod = 1000000009; 
 
ll qp(ll c,ll st){ 
  ll r = 1; 
  while(st){ 
    if(st&1)r*=c,r%=mod; 
    c*=c,c%=mod; 
    st>>=1; 
  } 
  return r; 
} 
 
set<int> possible_w; 
 
int incommon(vector <string> fragment, ll W, ll i0, ll j0){ 
  set<ll> pre_w; 
  int n = fragment.size(); 
  int m = fragment[0].size(); 
  REP(i,n)REP(j,m){ 
    ll pos1 = (i+i0) * W + (j0+j); 
    REP(i1,n)REP(j1,m){ 
      ll pos2 = (i1+i0) * W + (j0+j1); 
      ll diff = pos2 - pos1; 
      if(diff>0){ 
        pre_w.insert(diff); 
      } 
    } 
  } 
  for(set<ll>::iterator it = pre_w.begin();it!=pre_w.end();it++){ 
    ll val = *it; 
    for(ll i=1;i*i<=val;i++)if(val%i==0){ 
      if(i<=W) possible_w.insert(i); 
      if(val/i<=W && i*i!=val) possible_w.insert(val/i); 
    } 
  } 
  int res = 0; 
  for(set<int>::iterator it = possible_w.begin();it!=possible_w.end();it++){ 
    int s = *it; 
    map<int,char> ps; 
    bool good = 1; 
    REP(i,n)REP(j,m){ 
      ll _pos = (i+i0) * W + (j0+j); 
      int pos = _pos % s; 
      if(ps.count(pos)){ 
        if(ps[pos]!=fragment[i][j]) good=0; 
      }else ps[pos] = fragment[i][j]; 
    } 
    if(good){ 
      int diff = s - ps.size(); 
      res += qp(26, diff); 
      if(res>=mod) res-=mod; 
    } 
  } 
  return res; 
} 
 
ll getSum(int n){ 
  if(n==0) return 1; 
  ll res = 0; 
  if(n%2==1){ 
    ll t = getSum(n/2); 
    return t*(1+qp(26,n/2+1))%mod; 
  }else{ 
    return (1 + 26 * getSum(n-1))%mod; 
  } 
 
  return res; 
} 
 
int disjoint(vector <string> fragment, ll W, ll i0, ll j0){ 
  vector<pii> seg; 
  if(possible_w.size()==0) seg.pb(pii(1,W)); 
  else{ 
    int beg = *possible_w.begin(); 
    if(beg>1) seg.pb(pii(1,beg-1)); 
    set<int>::iterator it = possible_w.end(); 
    it--; 
    int end = *it; 
    if(end<W) seg.pb(pii(end+1,W)); 
 
    for(set<int>::iterator it = possible_w.begin();it!=possible_w.end();it++){ 
      set<int>::iterator it2 = it; 
      it2++; 
      if(it2==possible_w.end()) break; 
      int v1 = *it; 
      int v2 = *it2; 
      if(v1+1<=v2-1) seg.pb(pii(v1+1,v2-1)); 
    } 
  } 
  int res = 0; 
  REP(i,seg.size()){ 
    //cout<<seg[i].first<<' '<<seg[i].second<<endl; 
    int from = seg[i].first; 
    int to = seg[i].second; 
    int mn = fragment.size() * fragment[0].size(); 
    from=max(from,mn); 
    if(from<=to){ 
      from-=mn; 
      to-=mn; 
 
      ll t = qp(26,from); 
      t *= getSum(to-from); 
      t%=mod; 
      res+=t; 
      if(res>=mod)res-=mod; 
    } 
  } 
  return res; 
} 
 
class CharacterBoard { 
public: 
  int countGenerators(vector <string> fragment, int W, int i0, int j0) { 
    int res = 0;possible_w.clear(); 
    res += incommon(fragment,W,i0,j0); 
    res += disjoint(fragment,W,i0,j0); 
    if(res>=mod)res-=mod;     
    return res; 
  } 
}; 
 
 
 
// Powered by FileEdit
// Powered by moj 4.17 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/