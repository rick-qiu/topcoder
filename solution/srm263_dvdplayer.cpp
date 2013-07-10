/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4781
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

class DVDPlayer {
public:
    vector<string> findMovies(vector<string> moviesWatched);
};

vector<string> DVDPlayer::findMovies(vector<string> moviesWatched) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> moviesWatched = {"citizenkane", "casablanca", "thegodfather"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"casablanca is inside thegodfather's case", "citizenkane is inside casablanca's case"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> moviesWatched = {"starwars", "empirestrikesback", "returnofthejedi", "empirestrikesback", "returnofthejedi", "phantommenace", "starwars"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"empirestrikesback is inside returnofthejedi's case", "phantommenace is inside empirestrikesback's case", "returnofthejedi is inside phantommenace's case"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> moviesWatched = {"x", "a", "y", "a", "z"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a is inside z's case", "x is inside a's case"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> moviesWatched = {"a", "x", "a", "y", "a", "z", "a"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> moviesWatched = {"ohcclzxnjjxvsfpfkzxw", "dnf", "ohcclzxnjjxvsfpfkzxw", "kgbkcizmyuramsbkd", "ohcclzxnjjxvsfpfkzxw", "kgbkcizmyuramsbkd", "ohcclzxnjjxvsfpfkzxw", "dnf", "kgbkcizmyuramsbkd", "ohcclzxnjjxvsfpfkzxw", "dnf", "ohcclzxnjjxvsfpfkzxw", "dnf", "ohcclzxnjjxvsfpfkzxw", "dnf", "kgbkcizmyuramsbkd", "dnf", "ohcclzxnjjxvsfpfkzxw", "dnf", "kgbkcizmyuramsbkd", "ohcclzxnjjxvsfpfkzxw", "dnf", "kgbkcizmyuramsbkd", "dnf", "ohcclzxnjjxvsfpfkzxw", "dnf", "ohcclzxnjjxvsfpfkzxw", "dnf", "kgbkcizmyuramsbkd", "dnf", "kgbkcizmyuramsbkd"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"dnf is inside kgbkcizmyuramsbkd's case", "ohcclzxnjjxvsfpfkzxw is inside dnf's case"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> moviesWatched = {"ebnpkzssybpfkx", "dyqndvbqchwysdrznpji", "oplh", "twdwwzp", "mqilhdstmxyozxdomdty", "keaucicfuqjfc", "kjsdrkftkrozlpuu", "divmdgiwrkmtxyc", "ynqqgz", "ebnpkzssybpfkx", "vhoeyu", "yssgkqklbdjzatlf", "besqjzexjjwjk", "ffaxhbmvmqquxj", "wpgbcetynt", "aqkgzalpoubwcvvdkd", "kjsdrkftkrozlpuu", "cpmv", "twdwwzp", "pybxzszussnepxatkvi", "vhoeyu", "divmdgiwrkmtxyc", "frwkuwfppdwwrjdnfhnr", "fomjwlookixvaensc", "dyqndvbqchwysdrznpji", "hk", "dyzfi", "ksuguhkmkomhff", "hk", "ynqqgz", "dchgwcskjxtg", "zvyppagw", "ehliimjqysuiyko", "jq", "bmppgrvrt", "wpgbcetynt", "bmppgrvrt", "epotplhbsfsxifns", "slscdydwoxcqw", "keaucicfuqjfc", "bmppgrvrt", "g", "tmnrpay"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aqkgzalpoubwcvvdkd is inside divmdgiwrkmtxyc's case", "besqjzexjjwjk is inside ffaxhbmvmqquxj's case", "bmppgrvrt is inside g's case", "cpmv is inside mqilhdstmxyozxdomdty's case", "dchgwcskjxtg is inside zvyppagw's case", "divmdgiwrkmtxyc is inside frwkuwfppdwwrjdnfhnr's case", "dyqndvbqchwysdrznpji is inside hk's case", "dyzfi is inside ksuguhkmkomhff's case", "ebnpkzssybpfkx is inside vhoeyu's case", "ehliimjqysuiyko is inside jq's case", "epotplhbsfsxifns is inside slscdydwoxcqw's case", "ffaxhbmvmqquxj is inside wpgbcetynt's case", "fomjwlookixvaensc is inside oplh's case", "frwkuwfppdwwrjdnfhnr is inside fomjwlookixvaensc's case", "g is inside tmnrpay's case", "hk is inside dyqndvbqchwysdrznpji's case", "jq is inside bmppgrvrt's case", "keaucicfuqjfc is inside epotplhbsfsxifns's case", "kjsdrkftkrozlpuu is inside cpmv's case", "ksuguhkmkomhff is inside dyzfi's case", "mqilhdstmxyozxdomdty is inside keaucicfuqjfc's case", "oplh is inside twdwwzp's case", "pybxzszussnepxatkvi is inside yssgkqklbdjzatlf's case", "slscdydwoxcqw is inside kjsdrkftkrozlpuu's case", "twdwwzp is inside pybxzszussnepxatkvi's case", "vhoeyu is inside ynqqgz's case", "wpgbcetynt is inside aqkgzalpoubwcvvdkd's case", "ynqqgz is inside dchgwcskjxtg's case", "yssgkqklbdjzatlf is inside besqjzexjjwjk's case", "zvyppagw is inside ehliimjqysuiyko's case"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> moviesWatched = {"iauiruogxniubufboep", "lpbtnu", "iauiruogxniubufboep", "pqfvgpiykavahzgcx", "aptheoibfeoceac", "lttfrtcapl", "iauiruogxniubufboep", "pqfvgpiykavahzgcx", "lpbtnu", "aptheoibfeoceac", "lttfrtcapl", "aptheoibfeoceac", "czuyqwooez", "iauiruogxniubufboep", "mikphatr", "pqfvgpiykavahzgcx", "iauiruogxniubufboep", "lttfrtcapl", "mikphatr", "lpbtnu", "lttfrtcapl", "iauiruogxniubufboep", "pqfvgpiykavahzgcx", "lttfrtcapl", "pqfvgpiykavahzgcx", "lttfrtcapl", "aptheoibfeoceac", "lttfrtcapl", "mikphatr", "iauiruogxniubufboep", "lttfrtcapl", "iauiruogxniubufboep", "pqfvgpiykavahzgcx", "lttfrtcapl", "pqfvgpiykavahzgcx", "aptheoibfeoceac", "mikphatr", "aptheoibfeoceac", "lpbtnu", "pqfvgpiykavahzgcx", "iauiruogxniubufboep", "pqfvgpiykavahzgcx", "lttfrtcapl", "pqfvgpiykavahzgcx"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aptheoibfeoceac is inside lpbtnu's case", "czuyqwooez is inside aptheoibfeoceac's case", "iauiruogxniubufboep is inside pqfvgpiykavahzgcx's case", "lpbtnu is inside czuyqwooez's case"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> moviesWatched = {"xjqexxvttt", "skpu", "ats", "zs", "xjqexxvttt", "pmsfeq", "skpu", "gyomxtuovduu", "ats", "zs", "pmsfeq", "xjqexxvttt", "zs", "def", "pmsfeq", "ats", "pmsfeq", "xjqexxvttt", "pmsfeq", "xjqexxvttt", "zs", "r"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ats is inside skpu's case", "def is inside pmsfeq's case", "gyomxtuovduu is inside zs's case", "pmsfeq is inside ats's case", "skpu is inside gyomxtuovduu's case", "xjqexxvttt is inside def's case", "zs is inside r's case"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> moviesWatched = {"oqnf", "xiiwj", "oqnf", "xiiwj", "oqnf", "xiiwj", "oqnf", "xiiwj", "oqnf", "xiiwj", "oqnf", "xiiwj", "oqnf", "xiiwj", "oqnf", "xiiwj", "oqnf", "xiiwj", "oqnf", "xiiwj", "oqnf", "xiiwj", "oqnf", "xiiwj", "oqnf", "xiiwj", "oqnf", "xiiwj", "oqnf", "xiiwj", "oqnf", "xiiwj", "oqnf", "xiiwj", "oqnf", "xiiwj", "oqnf", "xiiwj", "oqnf", "xiiwj"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"oqnf is inside xiiwj's case"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> moviesWatched = {"uddmiztxsmvs", "bvcxfrkigiiwgwmjsjt", "awtgzzp", "dxsjeaabgcic", "oqr", "uaua", "cqiicfutcaqmlgjd", "uhe", "dxsjeaabgcic", "flz", "uhe", "qksgaxt", "awtgzzp", "ioeubiulcv", "uipupxxhrquvhxuipbvh", "dxsjeaabgcic", "ioeubiulcv", "oqr", "uipupxxhrquvhxuipbvh", "flz", "cqiicfutcaqmlgjd", "flz", "bvcxfrkigiiwgwmjsjt", "flz", "ioeubiulcv", "awtgzzp", "uipupxxhrquvhxuipbvh", "qksgaxt", "ioeubiulcv", "rmisk", "flz", "cqiicfutcaqmlgjd", "ocdcgyv", "cqiicfutcaqmlgjd", "rmisk", "awtgzzp", "qksgaxt", "uhe", "ivepkpnsmnrzj", "rmisk", "uipupxxhrquvhxuipbvh", "oqr", "uipupxxhrquvhxuipbvh"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"awtgzzp is inside ioeubiulcv's case", "bvcxfrkigiiwgwmjsjt is inside awtgzzp's case", "cqiicfutcaqmlgjd is inside uaua's case", "dxsjeaabgcic is inside uipupxxhrquvhxuipbvh's case", "flz is inside uhe's case", "ioeubiulcv is inside rmisk's case", "ivepkpnsmnrzj is inside oqr's case", "oqr is inside flz's case", "rmisk is inside dxsjeaabgcic's case", "uaua is inside cqiicfutcaqmlgjd's case", "uddmiztxsmvs is inside bvcxfrkigiiwgwmjsjt's case", "uhe is inside ivepkpnsmnrzj's case"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> moviesWatched = {"kdmkkpanxnl", "iosfmpxwvkb", "xpufxqdnkyvnbu", "jtpwxhni", "ahcyno", "sz", "bjlxtwaxellspqaslml", "joncio", "rrthhltnfynm", "fncmjefecltyi", "gudpqiw", "rzuadtsekjdsmpcn", "imskgbfxcysyzjxytu", "saffacbqs", "gnovkszegg", "iahwdgzfkaoitiaa", "gkvsnpxxgqnxbs", "bjlxtwaxellspqaslml", "gjdjxiwzrqu", "jagexd", "rrthhltnfynm", "iahwdgzfkaoitiaa", "gagnsktgfn", "wfsehvhxuzbbhgzcgf", "gagnsktgfn", "otsznchqh", "fncmjefecltyi", "bjlxtwaxellspqaslml", "gudpqiw", "mszi", "mw", "gudpqiw", "smspecdhesqpghxqaf", "rzuadtsekjdsmpcn", "jtpwxhni", "smspecdhesqpghxqaf", "otsznchqh", "fncmjefecltyi", "fzpuojos", "xevfbsrdgjolpodcz", "crrxlfyofcj", "fzpuojos", "m"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ahcyno is inside sz's case", "bjlxtwaxellspqaslml is inside rzuadtsekjdsmpcn's case", "crrxlfyofcj is inside xevfbsrdgjolpodcz's case", "fncmjefecltyi is inside fzpuojos's case", "fzpuojos is inside m's case", "gagnsktgfn is inside otsznchqh's case", "gjdjxiwzrqu is inside jagexd's case", "gkvsnpxxgqnxbs is inside joncio's case", "gnovkszegg is inside iahwdgzfkaoitiaa's case", "gudpqiw is inside smspecdhesqpghxqaf's case", "iahwdgzfkaoitiaa is inside gagnsktgfn's case", "imskgbfxcysyzjxytu is inside saffacbqs's case", "iosfmpxwvkb is inside xpufxqdnkyvnbu's case", "jagexd is inside fncmjefecltyi's case", "joncio is inside rrthhltnfynm's case", "jtpwxhni is inside imskgbfxcysyzjxytu's case", "kdmkkpanxnl is inside iosfmpxwvkb's case", "mszi is inside mw's case", "mw is inside mszi's case", "otsznchqh is inside gjdjxiwzrqu's case", "rrthhltnfynm is inside gkvsnpxxgqnxbs's case", "rzuadtsekjdsmpcn is inside ahcyno's case", "saffacbqs is inside gnovkszegg's case", "smspecdhesqpghxqaf is inside gudpqiw's case", "sz is inside bjlxtwaxellspqaslml's case", "xevfbsrdgjolpodcz is inside crrxlfyofcj's case", "xpufxqdnkyvnbu is inside jtpwxhni's case"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> moviesWatched = {"pzvwbg", "jmsbylltqwo", "iridsjyphyfjli", "pzvwbg", "jmsbylltqwo", "iridsjyphyfjli", "jmsbylltqwo", "pzvwbg", "jmsbylltqwo", "pzvwbg", "iridsjyphyfjli", "pzvwbg", "iridsjyphyfjli", "pzvwbg", "jmsbylltqwo", "pzvwbg", "iridsjyphyfjli", "jmsbylltqwo", "iridsjyphyfjli", "jmsbylltqwo", "iridsjyphyfjli", "pzvwbg"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"iridsjyphyfjli is inside jmsbylltqwo's case", "jmsbylltqwo is inside iridsjyphyfjli's case"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> moviesWatched = {"vqbxhrpbbvhkwxfij", "hekd", "vqbxhrpbbvhkwxfij", "hekd", "vqbxhrpbbvhkwxfij", "hekd", "vqbxhrpbbvhkwxfij", "hekd", "vqbxhrpbbvhkwxfij", "hekd", "vqbxhrpbbvhkwxfij", "hekd", "vqbxhrpbbvhkwxfij", "hekd", "vqbxhrpbbvhkwxfij", "hekd", "vqbxhrpbbvhkwxfij", "hekd", "vqbxhrpbbvhkwxfij", "hekd", "vqbxhrpbbvhkwxfij", "hekd", "vqbxhrpbbvhkwxfij", "hekd", "vqbxhrpbbvhkwxfij", "hekd", "vqbxhrpbbvhkwxfij"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> moviesWatched = {"ehhdidynqs", "qhyxdewyaoejraq", "bqnpdeez", "ehhdidynqs", "yalknosy", "qhyxdewyaoejraq", "yalknosy", "vsjemikhkeba", "ehhdidynqs", "qhyxdewyaoejraq", "mxwywtfemvza", "vsjemikhkeba", "qagil", "mxwywtfemvza", "vsjemikhkeba", "bqnpdeez", "vsjemikhkeba", "ehhdidynqs", "yalknosy", "mxwywtfemvza", "vsjemikhkeba", "bqnpdeez", "yalknosy", "mxwywtfemvza"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bqnpdeez is inside qagil's case", "ehhdidynqs is inside vsjemikhkeba's case", "qagil is inside yalknosy's case", "qhyxdewyaoejraq is inside mxwywtfemvza's case", "vsjemikhkeba is inside qhyxdewyaoejraq's case", "yalknosy is inside bqnpdeez's case"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> moviesWatched = {"mwgxifokitrozdepa", "tzxvupruypyxslilel", "pb", "mwgxifokitrozdepa", "gpdsemvlozj", "xgoknzwpzkqzrifyg", "gpdsemvlozj", "as", "mwgxifokitrozdepa", "gpdsemvlozj", "tzxvupruypyxslilel", "pb"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"as is inside gpdsemvlozj's case", "gpdsemvlozj is inside pb's case", "mwgxifokitrozdepa is inside as's case"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> moviesWatched = {"xvqigxaewbkg", "fnawmhwpqauh", "xvqigxaewbkg", "ezksnymikfrya", "foipgqgxbu", "umvg", "vstgukqaqf", "qdrlirhushnhdmerpss", "xvqigxaewbkg", "umvg", "nhlkylkfzgsf", "loioqrqbnypbbv", "spvtzokyloow", "umvg", "fnawmhwpqauh", "ispqttydeavdcurf", "fnawmhwpqauh", "xvqigxaewbkg", "ezksnymikfrya", "uulicyaqmg", "vstgukqaqf", "uulicyaqmg", "ispqttydeavdcurf", "gfwgoerjxgccgrblzs"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ezksnymikfrya is inside uulicyaqmg's case", "fnawmhwpqauh is inside vstgukqaqf's case", "foipgqgxbu is inside umvg's case", "ispqttydeavdcurf is inside gfwgoerjxgccgrblzs's case", "loioqrqbnypbbv is inside spvtzokyloow's case", "nhlkylkfzgsf is inside loioqrqbnypbbv's case", "qdrlirhushnhdmerpss is inside ezksnymikfrya's case", "spvtzokyloow is inside nhlkylkfzgsf's case", "umvg is inside fnawmhwpqauh's case", "uulicyaqmg is inside ispqttydeavdcurf's case", "vstgukqaqf is inside qdrlirhushnhdmerpss's case", "xvqigxaewbkg is inside foipgqgxbu's case"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> moviesWatched = {"anh", "o", "ymb", "o", "ymb", "anh", "ymb", "o", "anh", "ymb", "anh", "ymb", "anh", "o", "anh", "o", "ymb", "o", "ymb", "anh", "ymb", "o", "anh", "ymb", "o", "anh", "o", "ymb", "o", "ymb", "o", "ymb", "anh", "ymb", "anh"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> moviesWatched = {"mkjphfig", "kmst", "mnxjtemzjauy", "lpe", "qxiqvaygfqqmrlcagp", "swtufedwoyxkcz", "gkalvgmfhqrjhfda", "rpmnt", "gebmgdrwp", "geauliu", "rpmnt", "ujjexypwb", "mgvyozmpwemijygrhrxn", "jx", "ujjexypwb", "bmfboolzjpnr", "lvbueqjzuljsqyrwym", "bmfboolzjpnr", "lvbueqjzuljsqyrwym", "gebmgdrwp", "qxiqvaygfqqmrlcagp", "gkalvgmfhqrjhfda", "qnkvmy", "zbyaeejtwutxtau", "mnxjtemzjauy", "kmst", "qnkvmy", "sdinqeyyxtivpyxexe"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bmfboolzjpnr is inside lvbueqjzuljsqyrwym's case", "geauliu is inside gebmgdrwp's case", "gebmgdrwp is inside swtufedwoyxkcz's case", "gkalvgmfhqrjhfda is inside qnkvmy's case", "jx is inside mgvyozmpwemijygrhrxn's case", "kmst is inside zbyaeejtwutxtau's case", "lpe is inside qxiqvaygfqqmrlcagp's case", "lvbueqjzuljsqyrwym is inside geauliu's case", "mgvyozmpwemijygrhrxn is inside jx's case", "mkjphfig is inside kmst's case", "qnkvmy is inside sdinqeyyxtivpyxexe's case", "qxiqvaygfqqmrlcagp is inside rpmnt's case", "rpmnt is inside ujjexypwb's case", "swtufedwoyxkcz is inside gkalvgmfhqrjhfda's case", "ujjexypwb is inside bmfboolzjpnr's case", "zbyaeejtwutxtau is inside lpe's case"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> moviesWatched = {"a", "x", "a", "y", "a", "z"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a is inside z's case"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> moviesWatched = {"x", "a", "y", "a", "z", "a"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"x is inside a's case"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> moviesWatched = {"mk", "xpnqktggfz", "mk", "qlo", "xpnqktggfz", "uwk", "psyvnbzqj", "rr", "qkxskhzpdhubjutpu", "mk", "nwwnvlvj", "joyyiruqukytv", "nwwnvlvj", "mk", "qkxskhzpdhubjutpu", "t", "rdin", "dxflcxmyihymhmkmewg", "joyyiruqukytv", "uwk", "fx", "nwwnvlvj", "hwvmlbjv", "dxflcxmyihymhmkmewg", "vi", "ir", "folmlfmpzfhpa", "tkba", "zxuteill", "tkba", "lsbflngpes", "tkba", "j", "lepwgnkkysrratmv", "dgjexwpjmzyhqwlmbz", "iatdqmgddanwj", "vi", "fjdrmfi", "izksuxwqlfdqeyxrydfw", "lsbflngpes", "osch", "xvgepwwikrzjefhyj", "hwvmlbjv", "iatdqmgddanwj", "psyvnbzqj", "bpfzo", "moisfweczeqfewat", "iatdqmgddanwj", "slze"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bpfzo is inside moisfweczeqfewat's case", "dgjexwpjmzyhqwlmbz is inside iatdqmgddanwj's case", "dxflcxmyihymhmkmewg is inside vi's case", "fjdrmfi is inside izksuxwqlfdqeyxrydfw's case", "folmlfmpzfhpa is inside tkba's case", "fx is inside nwwnvlvj's case", "hwvmlbjv is inside ir's case", "iatdqmgddanwj is inside slze's case", "ir is inside folmlfmpzfhpa's case", "izksuxwqlfdqeyxrydfw is inside lsbflngpes's case", "j is inside lepwgnkkysrratmv's case", "joyyiruqukytv is inside psyvnbzqj's case", "lepwgnkkysrratmv is inside dgjexwpjmzyhqwlmbz's case", "lsbflngpes is inside osch's case", "mk is inside qlo's case", "moisfweczeqfewat is inside rr's case", "nwwnvlvj is inside hwvmlbjv's case", "osch is inside xvgepwwikrzjefhyj's case", "psyvnbzqj is inside bpfzo's case", "qkxskhzpdhubjutpu is inside t's case", "qlo is inside xpnqktggfz's case", "rdin is inside dxflcxmyihymhmkmewg's case", "rr is inside qkxskhzpdhubjutpu's case", "t is inside rdin's case", "tkba is inside j's case", "uwk is inside fx's case", "vi is inside fjdrmfi's case", "xpnqktggfz is inside uwk's case", "xvgepwwikrzjefhyj is inside joyyiruqukytv's case"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> moviesWatched = {"rzszmdnfmyloaweanzoo", "a", "vwh", "rzszmdnfmyloaweanzoo", "qxdmwutitlmyxhjvoave", "kjconfxepcguytpysdbx", "a", "ouctraoeoxk", "lkfrhlgxhoxbcvsoby", "spjfncqeuy", "kjconfxepcguytpysdbx", "mtfftrietpntm", "gncxicggnkyrjd", "wsfnvewlyosbgq", "orkcgqzbfpk", "hykcdhgamnpglcxcvnpk", "mekliqeomkkgkyi"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a is inside ouctraoeoxk's case", "gncxicggnkyrjd is inside wsfnvewlyosbgq's case", "hykcdhgamnpglcxcvnpk is inside mekliqeomkkgkyi's case", "kjconfxepcguytpysdbx is inside mtfftrietpntm's case", "lkfrhlgxhoxbcvsoby is inside spjfncqeuy's case", "mtfftrietpntm is inside gncxicggnkyrjd's case", "orkcgqzbfpk is inside hykcdhgamnpglcxcvnpk's case", "ouctraoeoxk is inside lkfrhlgxhoxbcvsoby's case", "qxdmwutitlmyxhjvoave is inside kjconfxepcguytpysdbx's case", "rzszmdnfmyloaweanzoo is inside qxdmwutitlmyxhjvoave's case", "spjfncqeuy is inside vwh's case", "vwh is inside a's case", "wsfnvewlyosbgq is inside orkcgqzbfpk's case"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> moviesWatched = {"l", "xbuevkpmkmfypltjnj", "pkn", "xbuevkpmkmfypltjnj", "l", "pkn", "xbuevkpmkmfypltjnj", "pkn", "l"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> moviesWatched = {"db", "wzyjybass", "vhxvfsqxmxfnsoxo", "ikmdxgefbifhacstvv", "bgxoxw", "gdtvckzizeip", "kmmqmyznajovhgwj", "cgpdfxqtuxffpheob", "ewvr", "eqevi", "ghsvwda", "ijcfyhohrel"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bgxoxw is inside gdtvckzizeip's case", "cgpdfxqtuxffpheob is inside ewvr's case", "db is inside wzyjybass's case", "eqevi is inside ghsvwda's case", "ewvr is inside eqevi's case", "gdtvckzizeip is inside kmmqmyznajovhgwj's case", "ghsvwda is inside ijcfyhohrel's case", "ikmdxgefbifhacstvv is inside bgxoxw's case", "kmmqmyznajovhgwj is inside cgpdfxqtuxffpheob's case", "vhxvfsqxmxfnsoxo is inside ikmdxgefbifhacstvv's case", "wzyjybass is inside vhxvfsqxmxfnsoxo's case"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> moviesWatched = {"cziygwit", "nbbddqxdil"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"cziygwit is inside nbbddqxdil's case"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> moviesWatched = {"ddf", "znogcufmvh", "ddf", "znogcufmvh", "ddf", "znogcufmvh", "ddf", "znogcufmvh", "ddf", "znogcufmvh", "ddf", "znogcufmvh", "ddf", "znogcufmvh", "ddf", "znogcufmvh", "ddf", "znogcufmvh", "ddf", "znogcufmvh", "ddf", "znogcufmvh", "ddf", "znogcufmvh", "ddf", "znogcufmvh", "ddf", "znogcufmvh", "ddf", "znogcufmvh", "ddf", "znogcufmvh", "ddf", "znogcufmvh", "ddf", "znogcufmvh", "ddf", "znogcufmvh", "ddf", "znogcufmvh", "ddf", "znogcufmvh", "ddf", "znogcufmvh", "ddf", "znogcufmvh", "ddf", "znogcufmvh", "ddf"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> moviesWatched = {"hmhepxwlulovjz", "tumesfnc", "pozav", "adquykpkdgofh", "leiwplwnwet", "onxlm", "pozav"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"adquykpkdgofh is inside leiwplwnwet's case", "hmhepxwlulovjz is inside tumesfnc's case", "leiwplwnwet is inside onxlm's case", "onxlm is inside adquykpkdgofh's case", "tumesfnc is inside pozav's case"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> moviesWatched = {"eyhotenmgukug", "o", "eyhotenmgukug", "nynqoht", "sr", "nynqoht", "sr", "eyhotenmgukug", "ufisx", "eyhotenmgukug", "nynqoht", "bzccckmnqpvsjgti", "fnvlqklvkmsfsbhpt", "ufisx", "fnvlqklvkmsfsbhpt", "sr", "bzccckmnqpvsjgti", "ufisx", "musoglklyufphyc", "pacteje", "fnvlqklvkmsfsbhpt", "nynqoht", "o", "pacteje", "o", "fnvlqklvkmsfsbhpt", "suvvmrhhadvep", "sr", "bzccckmnqpvsjgti", "cjfdcgrfszsae", "qnrgxqzvtaxwbctfoljy", "o", "pxxkyvckqdeurcjifzkh", "suvvmrhhadvep", "pxxkyvckqdeurcjifzkh", "eyhotenmgukug", "o", "wvkjfugpxwfiebaioddl", "bzccckmnqpvsjgti", "qcwilbyjyjdfvqf", "eyhotenmgukug", "amsrlnn", "j", "musoglklyufphyc", "vzadtykljcewdprr", "bzccckmnqpvsjgti", "hhsb", "qojwlh"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"amsrlnn is inside j's case", "bzccckmnqpvsjgti is inside hhsb's case", "cjfdcgrfszsae is inside qnrgxqzvtaxwbctfoljy's case", "eyhotenmgukug is inside amsrlnn's case", "fnvlqklvkmsfsbhpt is inside suvvmrhhadvep's case", "hhsb is inside qojwlh's case", "j is inside pacteje's case", "musoglklyufphyc is inside vzadtykljcewdprr's case", "nynqoht is inside o's case", "o is inside wvkjfugpxwfiebaioddl's case", "pacteje is inside nynqoht's case", "pxxkyvckqdeurcjifzkh is inside sr's case", "qcwilbyjyjdfvqf is inside pxxkyvckqdeurcjifzkh's case", "qnrgxqzvtaxwbctfoljy is inside bzccckmnqpvsjgti's case", "sr is inside ufisx's case", "suvvmrhhadvep is inside fnvlqklvkmsfsbhpt's case", "ufisx is inside musoglklyufphyc's case", "vzadtykljcewdprr is inside qcwilbyjyjdfvqf's case", "wvkjfugpxwfiebaioddl is inside cjfdcgrfszsae's case"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> moviesWatched = {"mjvibg", "glummfdftdgmlppgujs", "pzrevljlpfsnk", "glummfdftdgmlppgujs", "gomb", "mjvibg", "xhsh", "glummfdftdgmlppgujs", "yp", "xhsh", "ouz", "oygwpk", "gomb", "hvc", "tegxfmx", "ouz", "zfrkyfqbxkphcnecgbyt", "jmtgxclqakkmusu", "xhf", "oygwpk", "taxvalxrn", "tankltpod", "qkfknmcpht", "qxzezaoezbqn", "tegxfmx", "ofhllktw", "qxzezaoezbqn", "fnlrnz", "mjvibg", "ofwmj", "nn", "ouz", "gjqoszrywl", "faxjkblrlvglkg", "mgfcurk", "lezmuzkv", "pm", "kembktbmmnfzdagac", "uqe", "giycf"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"faxjkblrlvglkg is inside mgfcurk's case", "fnlrnz is inside xhsh's case", "gjqoszrywl is inside faxjkblrlvglkg's case", "glummfdftdgmlppgujs is inside yp's case", "gomb is inside hvc's case", "hvc is inside tegxfmx's case", "jmtgxclqakkmusu is inside xhf's case", "kembktbmmnfzdagac is inside uqe's case", "lezmuzkv is inside pm's case", "mgfcurk is inside lezmuzkv's case", "mjvibg is inside ofwmj's case", "nn is inside zfrkyfqbxkphcnecgbyt's case", "ofhllktw is inside oygwpk's case", "ofwmj is inside nn's case", "ouz is inside gjqoszrywl's case", "oygwpk is inside taxvalxrn's case", "pm is inside kembktbmmnfzdagac's case", "qkfknmcpht is inside qxzezaoezbqn's case", "qxzezaoezbqn is inside fnlrnz's case", "tankltpod is inside qkfknmcpht's case", "taxvalxrn is inside tankltpod's case", "tegxfmx is inside ofhllktw's case", "uqe is inside giycf's case", "xhf is inside glummfdftdgmlppgujs's case", "xhsh is inside ouz's case", "yp is inside gomb's case", "zfrkyfqbxkphcnecgbyt is inside jmtgxclqakkmusu's case"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> moviesWatched = {"wmhrii", "lxmzpualtbt", "wmhrii"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> moviesWatched = {"zjncvze", "xaeslnlqsxbejmauaj", "caizcwhgb", "ghhapvzymefzo", "ocxslnjxn", "vdcatmdqgafuomlxcs", "udzfvogiwl", "vdcatmdqgafuomlxcs", "mbcld", "ghhapvzymefzo", "uqekmhuugszzhatl", "hfyjwrphbnfbewmqatwe", "iqqoqaijsv", "mojiavxxfryl", "axvqzuwghfizxhhgko", "bgymsbcdpjxpu", "adzufvyhacwfzyjf"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"axvqzuwghfizxhhgko is inside bgymsbcdpjxpu's case", "bgymsbcdpjxpu is inside adzufvyhacwfzyjf's case", "caizcwhgb is inside ghhapvzymefzo's case", "ghhapvzymefzo is inside uqekmhuugszzhatl's case", "hfyjwrphbnfbewmqatwe is inside iqqoqaijsv's case", "iqqoqaijsv is inside mojiavxxfryl's case", "mbcld is inside ocxslnjxn's case", "mojiavxxfryl is inside axvqzuwghfizxhhgko's case", "ocxslnjxn is inside vdcatmdqgafuomlxcs's case", "uqekmhuugszzhatl is inside hfyjwrphbnfbewmqatwe's case", "vdcatmdqgafuomlxcs is inside mbcld's case", "xaeslnlqsxbejmauaj is inside caizcwhgb's case", "zjncvze is inside xaeslnlqsxbejmauaj's case"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> moviesWatched = {"groxryts", "xv", "tkrkxnyufeobjwbk", "sai", "ztabsnxusvthvimftz", "biiy", "esmkbwhxaqsslxehukap", "kvlmjrxgitosllf", "fuwdy", "u", "iriegah", "wmyfwictlifytczn", "zdukmgm", "fif", "kmbichhtqyhkmzznpzl", "cdvnntkmfhoz", "zudughhgalcwidsgx", "cgaprfpuve", "ntcte", "uauxpmawc", "vemeuxjeuvdgh", "wpyv", "dxfekrbvmnhtvzf", "oyvsosgvsjujllk", "qqvepwdq", "t", "llzay", "xx", "baad", "b", "izcrtvjceqzegrnhecg", "cwzskrjcl", "mqqvm", "uhfprybivmmpxpwhjtqh", "vnajbblcvhy", "znktrdekjoptbf", "gxp", "mdalvywoaxpb", "md", "rjgtasap", "hkuzxrmfnlpccq", "wdpqbjkgbjnljbyprjje", "xpzggfzqc", "eqxbivescyemnykhwrg"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b is inside izcrtvjceqzegrnhecg's case", "baad is inside b's case", "biiy is inside esmkbwhxaqsslxehukap's case", "cdvnntkmfhoz is inside zudughhgalcwidsgx's case", "cgaprfpuve is inside ntcte's case", "cwzskrjcl is inside mqqvm's case", "dxfekrbvmnhtvzf is inside oyvsosgvsjujllk's case", "esmkbwhxaqsslxehukap is inside kvlmjrxgitosllf's case", "fif is inside kmbichhtqyhkmzznpzl's case", "fuwdy is inside u's case", "groxryts is inside xv's case", "gxp is inside mdalvywoaxpb's case", "hkuzxrmfnlpccq is inside wdpqbjkgbjnljbyprjje's case", "iriegah is inside wmyfwictlifytczn's case", "izcrtvjceqzegrnhecg is inside cwzskrjcl's case", "kmbichhtqyhkmzznpzl is inside cdvnntkmfhoz's case", "kvlmjrxgitosllf is inside fuwdy's case", "llzay is inside xx's case", "md is inside rjgtasap's case", "mdalvywoaxpb is inside md's case", "mqqvm is inside uhfprybivmmpxpwhjtqh's case", "ntcte is inside uauxpmawc's case", "oyvsosgvsjujllk is inside qqvepwdq's case", "qqvepwdq is inside t's case", "rjgtasap is inside hkuzxrmfnlpccq's case", "sai is inside ztabsnxusvthvimftz's case", "t is inside llzay's case", "tkrkxnyufeobjwbk is inside sai's case", "u is inside iriegah's case", "uauxpmawc is inside vemeuxjeuvdgh's case", "uhfprybivmmpxpwhjtqh is inside vnajbblcvhy's case", "vemeuxjeuvdgh is inside wpyv's case", "vnajbblcvhy is inside znktrdekjoptbf's case", "wdpqbjkgbjnljbyprjje is inside xpzggfzqc's case", "wmyfwictlifytczn is inside zdukmgm's case", "wpyv is inside dxfekrbvmnhtvzf's case", "xpzggfzqc is inside eqxbivescyemnykhwrg's case", "xv is inside tkrkxnyufeobjwbk's case", "xx is inside baad's case", "zdukmgm is inside fif's case", "znktrdekjoptbf is inside gxp's case", "ztabsnxusvthvimftz is inside biiy's case", "zudughhgalcwidsgx is inside cgaprfpuve's case"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> moviesWatched = {"g", "li", "orsveicrz", "fazncvzta", "ftptscnsyakevgotom", "tchcdhed", "qblbgkdgc", "fazncvzta", "li", "klvhsgnvtca", "giyeuocvk", "lmfutppdkfnotgswcva", "xcyc", "hmm", "ub", "iltcbgyehfq", "wwtkz", "pyhjsukeotndqyzp", "eyqloysq", "axf", "alipmrqg"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"axf is inside alipmrqg's case", "eyqloysq is inside axf's case", "fazncvzta is inside orsveicrz's case", "ftptscnsyakevgotom is inside tchcdhed's case", "g is inside li's case", "giyeuocvk is inside lmfutppdkfnotgswcva's case", "hmm is inside ub's case", "iltcbgyehfq is inside wwtkz's case", "klvhsgnvtca is inside giyeuocvk's case", "li is inside klvhsgnvtca's case", "lmfutppdkfnotgswcva is inside xcyc's case", "orsveicrz is inside fazncvzta's case", "pyhjsukeotndqyzp is inside eyqloysq's case", "qblbgkdgc is inside ftptscnsyakevgotom's case", "tchcdhed is inside qblbgkdgc's case", "ub is inside iltcbgyehfq's case", "wwtkz is inside pyhjsukeotndqyzp's case", "xcyc is inside hmm's case"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> moviesWatched = {"rvkkgosovvsn", "xawdrqly", "rvkkgosovvsn", "xawdrqly", "rvkkgosovvsn", "xawdrqly", "rvkkgosovvsn", "xawdrqly", "rvkkgosovvsn", "xawdrqly", "rvkkgosovvsn", "xawdrqly", "rvkkgosovvsn", "xawdrqly", "rvkkgosovvsn"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> moviesWatched = {"gouklbugulinr", "ucy", "imrsguwminhlidzdf", "llrlrdjpagibmcr", "tahcjdnsbqxabitao", "pgymxfreqfwv", "gouklbugulinr", "zgamrbbrgx", "tahcjdnsbqxabitao", "zgamrbbrgx", "ticpsr", "ucy", "yzbzqyjujcbtzyhqb", "llrlrdjpagibmcr", "ncuoxqwzwp", "bdfwmqmyrwllenjt", "wnvuiysolqydmp", "ucy", "llrlrdjpagibmcr", "imrsguwminhlidzdf", "kwcbla", "ucy", "horaycjrlamasgep", "uejyojfutxomrwalxfru", "xdsdqqmvfohetqirqc", "htgosfcfiaqmbtjqeai", "dmhmh", "ticpsr", "horaycjrlamasgep", "imrsguwminhlidzdf", "ncuoxqwzwp", "afxfjzcvrxwvohbbit", "bdfwmqmyrwllenjt", "wgiferfoipqqkuaowci", "xdsdqqmvfohetqirqc", "rqvhlzzqgcbzithtumef", "tahcjdnsbqxabitao", "pgymxfreqfwv", "yzbzqyjujcbtzyhqb", "rqvhlzzqgcbzithtumef", "kn", "pgymxfreqfwv"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"afxfjzcvrxwvohbbit is inside wnvuiysolqydmp's case", "bdfwmqmyrwllenjt is inside wgiferfoipqqkuaowci's case", "dmhmh is inside imrsguwminhlidzdf's case", "gouklbugulinr is inside zgamrbbrgx's case", "horaycjrlamasgep is inside kwcbla's case", "htgosfcfiaqmbtjqeai is inside dmhmh's case", "imrsguwminhlidzdf is inside bdfwmqmyrwllenjt's case", "kn is inside tahcjdnsbqxabitao's case", "kwcbla is inside ncuoxqwzwp's case", "ncuoxqwzwp is inside afxfjzcvrxwvohbbit's case", "rqvhlzzqgcbzithtumef is inside kn's case", "tahcjdnsbqxabitao is inside ucy's case", "ticpsr is inside uejyojfutxomrwalxfru's case", "ucy is inside horaycjrlamasgep's case", "uejyojfutxomrwalxfru is inside xdsdqqmvfohetqirqc's case", "wgiferfoipqqkuaowci is inside htgosfcfiaqmbtjqeai's case", "wnvuiysolqydmp is inside yzbzqyjujcbtzyhqb's case", "xdsdqqmvfohetqirqc is inside rqvhlzzqgcbzithtumef's case", "yzbzqyjujcbtzyhqb is inside pgymxfreqfwv's case", "zgamrbbrgx is inside ticpsr's case"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> moviesWatched = {"xijzsxhlh", "hmit", "xijzsxhlh", "hmit", "xijzsxhlh", "jotgzc", "xijzsxhlh", "hmit", "jotgzc", "homhfohiiqau", "jotgzc", "hmit", "homhfohiiqau", "uwnaapryoxidqtqzyuni", "zvhvxuldmr", "uiluv", "jotgzc", "hmit", "zvhvxuldmr", "homhfohiiqau", "xxiiezfuczy", "hmit", "homhfohiiqau", "xxiiezfuczy", "hmit", "homhfohiiqau", "rbuboyec", "homhfohiiqau", "xijzsxhlh", "homhfohiiqau", "jotgzc", "hmit", "uiluv", "qxwlptvf", "uiluv", "uwnaapryoxidqtqzyuni", "lzduixzzgahn", "zvhvxuldmr", "rbuboyec", "jotgzc"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"hmit is inside jotgzc's case", "lzduixzzgahn is inside uwnaapryoxidqtqzyuni's case", "rbuboyec is inside uiluv's case", "uiluv is inside zvhvxuldmr's case", "uwnaapryoxidqtqzyuni is inside lzduixzzgahn's case", "xijzsxhlh is inside hmit's case", "zvhvxuldmr is inside rbuboyec's case"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> moviesWatched = {"ciwaiz", "wfjwhggkfc", "khhjsqvfpc", "czlwxpcbizjrqwrwmhd", "kmuutdphtcrn", "ciwaiz", "fnttzpx", "qccbmbyfhdadtq", "czlwxpcbizjrqwrwmhd", "khhjsqvfpc", "aajmjskojkygultenln"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ciwaiz is inside fnttzpx's case", "fnttzpx is inside qccbmbyfhdadtq's case", "khhjsqvfpc is inside aajmjskojkygultenln's case", "kmuutdphtcrn is inside wfjwhggkfc's case", "qccbmbyfhdadtq is inside kmuutdphtcrn's case", "wfjwhggkfc is inside khhjsqvfpc's case"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> moviesWatched = {"imz", "hrrqvsnymgguaelmk", "ucxxgfbbfdzbfcclan", "qqqyr", "bjgyueqpqguyp", "pqerksbvcnakhbnxmz", "gp", "gjhdkibijuwtlvbh", "koyw", "gowrxqlrgd", "unoevcehb", "leg", "zboxmpnpubis", "oxbzfzykidwpvzifr", "qqvx", "imz", "zgbtropevwrokenypqx", "rmoogcrcwiwyrspwrh", "egnryhjgwmdc", "leg", "v", "ydrmrfxrxgvzoih", "agjlghgw", "egnryhjgwmdc", "zdkuqdwpegpnletpc", "oklzytfldnlyvps", "bpjjnuwtpddkarnv", "ycltyyvoyuhgxd", "twztymsijkovjtpfqodw", "bydbzlnrgqghfnkw", "dxadgrgoegzd", "smiaaxg", "nykrafxiitchbennnobl", "gigrvltv", "obiflpqtz", "qju", "awjrpuqlzyv", "aij", "zzdxodpehdkoctumnui", "vhmggcv", "rpdisdexxbachjkcclqm", "ptlegrhvd", "aij", "haeboqzpprme", "b", "zlghjjjwipfigaix", "szrwekwidoinkso", "ubymtdiwegehtv", "rvirapkjlmb", "awabx"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"agjlghgw is inside zboxmpnpubis's case", "aij is inside haeboqzpprme's case", "awjrpuqlzyv is inside aij's case", "b is inside zlghjjjwipfigaix's case", "bjgyueqpqguyp is inside pqerksbvcnakhbnxmz's case", "bpjjnuwtpddkarnv is inside ycltyyvoyuhgxd's case", "bydbzlnrgqghfnkw is inside dxadgrgoegzd's case", "dxadgrgoegzd is inside smiaaxg's case", "egnryhjgwmdc is inside zdkuqdwpegpnletpc's case", "gigrvltv is inside obiflpqtz's case", "gjhdkibijuwtlvbh is inside koyw's case", "gowrxqlrgd is inside unoevcehb's case", "gp is inside gjhdkibijuwtlvbh's case", "haeboqzpprme is inside b's case", "hrrqvsnymgguaelmk is inside ucxxgfbbfdzbfcclan's case", "imz is inside zgbtropevwrokenypqx's case", "koyw is inside gowrxqlrgd's case", "leg is inside v's case", "nykrafxiitchbennnobl is inside gigrvltv's case", "obiflpqtz is inside qju's case", "oklzytfldnlyvps is inside bpjjnuwtpddkarnv's case", "oxbzfzykidwpvzifr is inside qqvx's case", "pqerksbvcnakhbnxmz is inside gp's case", "ptlegrhvd is inside zzdxodpehdkoctumnui's case", "qju is inside awjrpuqlzyv's case", "qqqyr is inside bjgyueqpqguyp's case", "qqvx is inside hrrqvsnymgguaelmk's case", "rmoogcrcwiwyrspwrh is inside egnryhjgwmdc's case", "rpdisdexxbachjkcclqm is inside ptlegrhvd's case", "rvirapkjlmb is inside awabx's case", "smiaaxg is inside nykrafxiitchbennnobl's case", "szrwekwidoinkso is inside ubymtdiwegehtv's case", "twztymsijkovjtpfqodw is inside bydbzlnrgqghfnkw's case", "ubymtdiwegehtv is inside rvirapkjlmb's case", "ucxxgfbbfdzbfcclan is inside qqqyr's case", "unoevcehb is inside leg's case", "v is inside ydrmrfxrxgvzoih's case", "vhmggcv is inside rpdisdexxbachjkcclqm's case", "ycltyyvoyuhgxd is inside twztymsijkovjtpfqodw's case", "ydrmrfxrxgvzoih is inside agjlghgw's case", "zboxmpnpubis is inside oxbzfzykidwpvzifr's case", "zdkuqdwpegpnletpc is inside oklzytfldnlyvps's case", "zgbtropevwrokenypqx is inside rmoogcrcwiwyrspwrh's case", "zlghjjjwipfigaix is inside szrwekwidoinkso's case", "zzdxodpehdkoctumnui is inside vhmggcv's case"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> moviesWatched = {"ytutslk", "tauawidy"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ytutslk is inside tauawidy's case"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> moviesWatched = {"trjxokeiwd", "zjkhnu", "trjxokeiwd", "zjkhnu", "trjxokeiwd", "lrbvygxahwqh", "zjkhnu", "trjxokeiwd", "zjkhnu", "rcvtsgzxr", "zjkhnu"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"lrbvygxahwqh is inside zjkhnu's case", "trjxokeiwd is inside lrbvygxahwqh's case"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> moviesWatched = {"hpktchejvxnrehahbnwx", "ngrpwuttbuyq", "cdgdcbkqesbjebtw", "hpktchejvxnrehahbnwx"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"cdgdcbkqesbjebtw is inside ngrpwuttbuyq's case", "ngrpwuttbuyq is inside cdgdcbkqesbjebtw's case"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> moviesWatched = {"umpxytwvjbpxgkx", "fu", "zzqhvksgo", "oysztrtnxertgoithw", "fu", "lzybhwedfsdngqqdlrlu", "kglgmelfugiiyq", "fmypmkergcfpuav", "un", "wzbzldmqvexob", "pgbwxqr", "zzqhvksgo", "ikvfdhedcjnmdeuwo", "ovrp", "oysztrtnxertgoithw", "fmypmkergcfpuav", "zzqhvksgo", "kglgmelfugiiyq", "oysztrtnxertgoithw"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"fmypmkergcfpuav is inside ikvfdhedcjnmdeuwo's case", "fu is inside lzybhwedfsdngqqdlrlu's case", "ikvfdhedcjnmdeuwo is inside ovrp's case", "kglgmelfugiiyq is inside un's case", "lzybhwedfsdngqqdlrlu is inside kglgmelfugiiyq's case", "ovrp is inside zzqhvksgo's case", "pgbwxqr is inside oysztrtnxertgoithw's case", "umpxytwvjbpxgkx is inside fu's case", "un is inside wzbzldmqvexob's case", "wzbzldmqvexob is inside pgbwxqr's case", "zzqhvksgo is inside fmypmkergcfpuav's case"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> moviesWatched = {"dolrvlse", "obbycnguad", "btazmvhxdkxrq", "dolrvlse", "jkiuvvf", "dolrvlse", "btazmvhxdkxrq", "keui", "u", "btazmvhxdkxrq", "keui", "jkiuvvf", "keui", "jkiuvvf", "u", "cbsxqtk", "nklgmsp", "jkiuvvf", "btazmvhxdkxrq", "ya", "dolrvlse", "jkiuvvf", "ya", "hfyxmyajlmy", "obbycnguad", "qzxathcqj", "u", "scpmzw", "hfyxmyajlmy", "cbsxqtk", "w", "cbsxqtk", "nklgmsp", "keui", "w", "oazinbfi", "rphqmqjyugv", "keui", "qqrbnqsgypammsfwf", "eeddox", "dolrvlse", "jkiuvvf"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"btazmvhxdkxrq is inside ya's case", "cbsxqtk is inside keui's case", "dolrvlse is inside obbycnguad's case", "eeddox is inside u's case", "hfyxmyajlmy is inside nklgmsp's case", "keui is inside qqrbnqsgypammsfwf's case", "nklgmsp is inside jkiuvvf's case", "oazinbfi is inside rphqmqjyugv's case", "obbycnguad is inside qzxathcqj's case", "qqrbnqsgypammsfwf is inside eeddox's case", "qzxathcqj is inside cbsxqtk's case", "rphqmqjyugv is inside w's case", "scpmzw is inside btazmvhxdkxrq's case", "u is inside scpmzw's case", "w is inside oazinbfi's case", "ya is inside hfyxmyajlmy's case"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> moviesWatched = {"vhmyghbjcn", "jpjcazpmrxr", "vhmyghbjcn"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> moviesWatched = {"mlekbdpysmbj", "kywwbtqivfbmtcn", "uixlxlabkvs", "ehiddpkyh", "qxltznpeehwlcve", "zq", "uixlxlabkvs", "ppkbjrraxucbkmqqk", "eywbz"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ehiddpkyh is inside qxltznpeehwlcve's case", "kywwbtqivfbmtcn is inside uixlxlabkvs's case", "mlekbdpysmbj is inside kywwbtqivfbmtcn's case", "ppkbjrraxucbkmqqk is inside eywbz's case", "qxltznpeehwlcve is inside zq's case", "uixlxlabkvs is inside ppkbjrraxucbkmqqk's case", "zq is inside ehiddpkyh's case"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> moviesWatched = {"lnfqdiszvyftvgwes", "yosyececqomxpqzofg", "ivytboqziwaxpqnuqqu", "lnfqdiszvyftvgwes", "ivytboqziwaxpqnuqqu", "yosyececqomxpqzofg", "ivytboqziwaxpqnuqqu", "lnfqdiszvyftvgwes", "yosyececqomxpqzofg", "aunlkqrkvjrlpoixhq", "yosyececqomxpqzofg", "lnfqdiszvyftvgwes", "aunlkqrkvjrlpoixhq", "ivytboqziwaxpqnuqqu", "lnfqdiszvyftvgwes", "jshcu", "lnfqdiszvyftvgwes", "aunlkqrkvjrlpoixhq", "lnfqdiszvyftvgwes", "jshcu", "aunlkqrkvjrlpoixhq", "lnfqdiszvyftvgwes", "yosyececqomxpqzofg", "haxzwtwlkyqhsiqwzlb", "fgwoqbfcxjzqqnnu", "lnfqdiszvyftvgwes"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aunlkqrkvjrlpoixhq is inside jshcu's case", "fgwoqbfcxjzqqnnu is inside ivytboqziwaxpqnuqqu's case", "haxzwtwlkyqhsiqwzlb is inside fgwoqbfcxjzqqnnu's case", "ivytboqziwaxpqnuqqu is inside aunlkqrkvjrlpoixhq's case", "jshcu is inside yosyececqomxpqzofg's case", "yosyececqomxpqzofg is inside haxzwtwlkyqhsiqwzlb's case"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> moviesWatched = {"gyyqxjymipximua", "lxmnpg", "gyyqxjymipximua", "jbbecmptqczzzavfhrcu", "uxrlpemzznxx", "nldkpive", "ecvlbdhpvrdfpluuay", "wybokgm", "xtanzarqexzvhqifb", "dmdvawojqeesq", "pojofduorhlr", "dmdvawojqeesq"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ecvlbdhpvrdfpluuay is inside wybokgm's case", "gyyqxjymipximua is inside jbbecmptqczzzavfhrcu's case", "jbbecmptqczzzavfhrcu is inside uxrlpemzznxx's case", "nldkpive is inside ecvlbdhpvrdfpluuay's case", "uxrlpemzznxx is inside nldkpive's case", "wybokgm is inside xtanzarqexzvhqifb's case", "xtanzarqexzvhqifb is inside dmdvawojqeesq's case"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> moviesWatched = {"nxethfyknnlkc", "lwrsuayjislxsglkuru", "zqujpabfcrxysmwfmb", "ct", "zqujpabfcrxysmwfmb", "ixsynbg", "lwrsuayjislxsglkuru", "ct", "osuhfus", "zqujpabfcrxysmwfmb", "tqq", "cppgzzmncdyn", "mnswmzeouutjprwskyr", "ixsynbg", "qrm", "jnd", "dsh", "xhcqvalpmguks"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"cppgzzmncdyn is inside mnswmzeouutjprwskyr's case", "ct is inside osuhfus's case", "dsh is inside xhcqvalpmguks's case", "ixsynbg is inside qrm's case", "jnd is inside dsh's case", "lwrsuayjislxsglkuru is inside ct's case", "mnswmzeouutjprwskyr is inside zqujpabfcrxysmwfmb's case", "nxethfyknnlkc is inside lwrsuayjislxsglkuru's case", "osuhfus is inside ixsynbg's case", "qrm is inside jnd's case", "tqq is inside cppgzzmncdyn's case", "zqujpabfcrxysmwfmb is inside tqq's case"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> moviesWatched = {"oqurej", "lsz", "u", "lsz", "lzsgan", "aphchzr", "zvizaz", "bemhsnawnrenjtmnn", "vntlowfcctytblozidoc", "oyncwravrmzajal", "u", "lsz", "ivirbvwjpfv", "jt", "lsz", "hqjmoirmwvvtw", "cbuxmexlaezsohvc", "kafo", "bnkukj", "bsedjb", "ev", "gfnuenqxdamtfngh", "nuvqjgznpowfueanib", "oqurej", "aovnjqfrvsmf", "zvizaz", "nuvqjgznpowfueanib", "ycqpykgewwqlmcubkwho", "cbuxmexlaezsohvc", "cjl"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aovnjqfrvsmf is inside bemhsnawnrenjtmnn's case", "aphchzr is inside zvizaz's case", "bemhsnawnrenjtmnn is inside vntlowfcctytblozidoc's case", "bnkukj is inside bsedjb's case", "bsedjb is inside ev's case", "cbuxmexlaezsohvc is inside cjl's case", "ev is inside gfnuenqxdamtfngh's case", "gfnuenqxdamtfngh is inside nuvqjgznpowfueanib's case", "hqjmoirmwvvtw is inside cbuxmexlaezsohvc's case", "ivirbvwjpfv is inside jt's case", "jt is inside ivirbvwjpfv's case", "kafo is inside bnkukj's case", "lsz is inside hqjmoirmwvvtw's case", "lzsgan is inside aphchzr's case", "nuvqjgznpowfueanib is inside ycqpykgewwqlmcubkwho's case", "oqurej is inside aovnjqfrvsmf's case", "oyncwravrmzajal is inside u's case", "u is inside lzsgan's case", "vntlowfcctytblozidoc is inside oyncwravrmzajal's case", "ycqpykgewwqlmcubkwho is inside kafo's case", "zvizaz is inside lsz's case"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> moviesWatched = {"vipklckwdfzkkctkbhq", "nnvupemeucmuhqi", "vipklckwdfzkkctkbhq", "nnvupemeucmuhqi", "vipklckwdfzkkctkbhq", "nnvupemeucmuhqi", "vipklckwdfzkkctkbhq", "nnvupemeucmuhqi", "vipklckwdfzkkctkbhq", "nnvupemeucmuhqi", "vipklckwdfzkkctkbhq", "nnvupemeucmuhqi", "dguicjvszyhvio", "nnvupemeucmuhqi", "vipklckwdfzkkctkbhq", "dguicjvszyhvio", "vipklckwdfzkkctkbhq", "dguicjvszyhvio", "tvycgmarbnxcx", "nnvupemeucmuhqi", "tvycgmarbnxcx", "yd", "nnvupemeucmuhqi", "vzubzidmhoxzjnbel", "yd", "ffckwjnhfxjo", "vipklckwdfzkkctkbhq", "yd", "vipklckwdfzkkctkbhq", "bkxzkvpapddrhxaas", "dguicjvszyhvio", "vipklckwdfzkkctkbhq", "ffckwjnhfxjo", "tvycgmarbnxcx", "ffckwjnhfxjo", "vipklckwdfzkkctkbhq", "mixxdacchxzkdpuh", "dguicjvszyhvio", "lnthlcnersiy", "mixxdacchxzkdpuh", "yd", "ffckwjnhfxjo", "vipklckwdfzkkctkbhq", "uxxyzoxvyfn", "tuzsv", "bkxzkvpapddrhxaas", "vzubzidmhoxzjnbel", "uxxyzoxvyfn", "vipklckwdfzkkctkbhq"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bkxzkvpapddrhxaas is inside nnvupemeucmuhqi's case", "dguicjvszyhvio is inside lnthlcnersiy's case", "ffckwjnhfxjo is inside mixxdacchxzkdpuh's case", "lnthlcnersiy is inside bkxzkvpapddrhxaas's case", "mixxdacchxzkdpuh is inside ffckwjnhfxjo's case", "nnvupemeucmuhqi is inside vzubzidmhoxzjnbel's case", "tuzsv is inside tvycgmarbnxcx's case", "tvycgmarbnxcx is inside yd's case", "vzubzidmhoxzjnbel is inside tuzsv's case", "yd is inside dguicjvszyhvio's case"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> moviesWatched = {"rjrphlfjvgx", "eijwopxygpgvxqj", "rjrphlfjvgx", "vuljlcxbbqmuy", "uomyuvnhekru", "rjrphlfjvgx", "twhshq", "eijwopxygpgvxqj", "h", "y", "et"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"eijwopxygpgvxqj is inside h's case", "h is inside y's case", "rjrphlfjvgx is inside twhshq's case", "twhshq is inside eijwopxygpgvxqj's case", "uomyuvnhekru is inside vuljlcxbbqmuy's case", "vuljlcxbbqmuy is inside uomyuvnhekru's case", "y is inside et's case"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> moviesWatched = {"djkntpbjeljzrwzjqokb", "dsquykmpbhedrvdsx", "ktogbfxrhzubvnu", "djkntpbjeljzrwzjqokb", "dsquykmpbhedrvdsx", "vmihz", "dsquykmpbhedrvdsx", "vmihz", "djkntpbjeljzrwzjqokb", "npyz", "ackbyigfgyh", "gxzjoucfyxxmdks", "djkntpbjeljzrwzjqokb", "ampiwmotxitfbomuzk", "acpypssat", "ktogbfxrhzubvnu", "djkntpbjeljzrwzjqokb", "ktogbfxrhzubvnu", "vmihz", "bxelpbqiwlu", "acpypssat", "vmihz", "gxzjoucfyxxmdks", "bxelpbqiwlu", "dyfkqlgp", "nuuyapvnjtata", "ampiwmotxitfbomuzk", "dqqhqbrzdgrlaza", "npyz", "ktogbfxrhzubvnu", "vmihz", "dyfkqlgp", "dqqhqbrzdgrlaza", "ceweftdunoh", "acpypssat"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ackbyigfgyh is inside gxzjoucfyxxmdks's case", "ampiwmotxitfbomuzk is inside dqqhqbrzdgrlaza's case", "bxelpbqiwlu is inside dyfkqlgp's case", "ceweftdunoh is inside bxelpbqiwlu's case", "djkntpbjeljzrwzjqokb is inside ampiwmotxitfbomuzk's case", "dqqhqbrzdgrlaza is inside ceweftdunoh's case", "dsquykmpbhedrvdsx is inside vmihz's case", "dyfkqlgp is inside ackbyigfgyh's case", "gxzjoucfyxxmdks is inside dsquykmpbhedrvdsx's case", "ktogbfxrhzubvnu is inside npyz's case", "npyz is inside ktogbfxrhzubvnu's case", "nuuyapvnjtata is inside acpypssat's case", "vmihz is inside nuuyapvnjtata's case"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> moviesWatched = {"klsi", "nphbkcigcwbzgqba", "rvhmezautyw", "klsi", "ouqjdjr", "fuv", "ftchppaahwsf", "wzwrhy", "akfodgwgpwfq", "yvncuqeoswmltcbctfl", "jaiucfktsdezdvhqchl", "nqgkwwvorfonmr", "grkbhkxvrvn", "ghibabub", "yvncuqeoswmltcbctfl", "rvhmezautyw", "rrobouzrdlemuiuw", "ftchppaahwsf", "mystekovokxtn", "xxzcvahtgkgrnhvplqr", "baabryowjfuirtkjc", "usauvpgpsniordrr", "fxefgznvlk", "baabryowjfuirtkjc", "z", "baabryowjfuirtkjc", "klsi", "rfopdicnfef", "cfsnqvcuilhdeggezo", "fxefgznvlk", "qdl", "jaiucfktsdezdvhqchl", "tjoczgawdzuy", "z", "iqef", "fh"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"akfodgwgpwfq is inside yvncuqeoswmltcbctfl's case", "baabryowjfuirtkjc is inside ouqjdjr's case", "cfsnqvcuilhdeggezo is inside usauvpgpsniordrr's case", "ftchppaahwsf is inside mystekovokxtn's case", "fuv is inside ftchppaahwsf's case", "fxefgznvlk is inside qdl's case", "ghibabub is inside jaiucfktsdezdvhqchl's case", "grkbhkxvrvn is inside ghibabub's case", "iqef is inside fh's case", "jaiucfktsdezdvhqchl is inside tjoczgawdzuy's case", "klsi is inside rfopdicnfef's case", "mystekovokxtn is inside xxzcvahtgkgrnhvplqr's case", "nphbkcigcwbzgqba is inside rvhmezautyw's case", "nqgkwwvorfonmr is inside grkbhkxvrvn's case", "ouqjdjr is inside fuv's case", "qdl is inside nqgkwwvorfonmr's case", "rfopdicnfef is inside cfsnqvcuilhdeggezo's case", "rrobouzrdlemuiuw is inside wzwrhy's case", "rvhmezautyw is inside rrobouzrdlemuiuw's case", "tjoczgawdzuy is inside z's case", "usauvpgpsniordrr is inside fxefgznvlk's case", "wzwrhy is inside akfodgwgpwfq's case", "xxzcvahtgkgrnhvplqr is inside baabryowjfuirtkjc's case", "yvncuqeoswmltcbctfl is inside nphbkcigcwbzgqba's case", "z is inside iqef's case"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> moviesWatched = {"jqvitsfmkpgwfm", "vnkoljibertma", "jqvitsfmkpgwfm", "vnkoljibertma", "rcnfkzamjbvury", "jqvitsfmkpgwfm", "rcnfkzamjbvury", "jqvitsfmkpgwfm", "rcnfkzamjbvury", "vnkoljibertma", "arsqpfvbytehon", "vnkoljibertma", "esvu", "ofujmqtxt", "hlwzrrrtwpdvqcjotzd", "rcnfkzamjbvury", "rqsyqnuyippwj", "jqvitsfmkpgwfm", "ofujmqtxt", "arsqpfvbytehon"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"esvu is inside ofujmqtxt's case", "hlwzrrrtwpdvqcjotzd is inside rcnfkzamjbvury's case", "jqvitsfmkpgwfm is inside hlwzrrrtwpdvqcjotzd's case", "ofujmqtxt is inside arsqpfvbytehon's case", "rcnfkzamjbvury is inside rqsyqnuyippwj's case", "rqsyqnuyippwj is inside vnkoljibertma's case", "vnkoljibertma is inside esvu's case"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> moviesWatched = {"vtphwzdgcskkley", "l", "unurgnexojsbelppzu", "vtphwzdgcskkley", "unurgnexojsbelppzu", "a"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"l is inside unurgnexojsbelppzu's case", "unurgnexojsbelppzu is inside a's case", "vtphwzdgcskkley is inside l's case"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> moviesWatched = {"gpuvnqwrexjlkwy", "jwrmxcsglur", "gpuvnqwrexjlkwy", "jwrmxcsglur", "gpuvnqwrexjlkwy", "jwrmxcsglur", "gpuvnqwrexjlkwy", "jwrmxcsglur", "gpuvnqwrexjlkwy", "jwrmxcsglur", "gpuvnqwrexjlkwy", "jwrmxcsglur", "bibypsdnatlhrge", "jwrmxcsglur", "icc", "nsmxoresgaw", "qkfdisx", "gpuvnqwrexjlkwy", "uaec", "icc", "qkfdisx"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"gpuvnqwrexjlkwy is inside uaec's case", "icc is inside jwrmxcsglur's case", "jwrmxcsglur is inside icc's case", "nsmxoresgaw is inside qkfdisx's case", "uaec is inside nsmxoresgaw's case"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> moviesWatched = {"rbrzlmqodxtbgbdwcu", "jsynromobmbzyullmpa", "rbrzlmqodxtbgbdwcu", "ejekjk", "jsynromobmbzyullmpa", "rbrzlmqodxtbgbdwcu", "xnleeqrgjzjryyo", "jsynromobmbzyullmpa", "xnleeqrgjzjryyo", "htvtnnpnrawcndibn", "xnleeqrgjzjryyo", "ejekjk", "rbrzlmqodxtbgbdwcu", "orwlqfwsjgnotiyepd", "ejekjk", "orwlqfwsjgnotiyepd", "fdrijglcroxobc", "jsynromobmbzyullmpa", "aienvuk", "orwlqfwsjgnotiyepd", "fdrijglcroxobc", "orwlqfwsjgnotiyepd", "jsynromobmbzyullmpa", "fdrijglcroxobc", "jsynromobmbzyullmpa", "orwlqfwsjgnotiyepd", "fdrijglcroxobc", "ftekmxrse", "aienvuk", "srtqphhbykpsqq"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aienvuk is inside srtqphhbykpsqq's case", "ejekjk is inside xnleeqrgjzjryyo's case", "fdrijglcroxobc is inside ftekmxrse's case", "ftekmxrse is inside fdrijglcroxobc's case", "jsynromobmbzyullmpa is inside aienvuk's case", "orwlqfwsjgnotiyepd is inside ejekjk's case", "rbrzlmqodxtbgbdwcu is inside orwlqfwsjgnotiyepd's case", "xnleeqrgjzjryyo is inside jsynromobmbzyullmpa's case"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> moviesWatched = {"stbzkgodutwm", "hqcpaelr", "ryxqsphqod", "wxpyj", "gkupkzwgpnntepcdkn", "vtnkhxjyk", "wxpyj", "yzuolutmq", "wxpyj", "druyebz", "stbzkgodutwm", "vtnkhxjyk", "wxpyj", "druyebz", "vtnkhxjyk", "clbsk", "fhbhugkbejx", "hqcpaelr", "axdfrxohrjhkk", "reuzxktopd", "siudwxv", "bckpayslqjkr", "druyebz", "paleqsbqzxzds", "f", "fhbhugkbejx", "cvdgytsfzbcfssvoa", "xmmofergaejdffterrxf", "ryxqsphqod", "pjpctwxvmjzsgphsjj", "siudwxv", "xwaylehjabokdaqbahb", "oxfbwytnxtiytxceo"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"axdfrxohrjhkk is inside reuzxktopd's case", "bckpayslqjkr is inside druyebz's case", "clbsk is inside fhbhugkbejx's case", "cvdgytsfzbcfssvoa is inside xmmofergaejdffterrxf's case", "druyebz is inside paleqsbqzxzds's case", "f is inside ryxqsphqod's case", "fhbhugkbejx is inside cvdgytsfzbcfssvoa's case", "gkupkzwgpnntepcdkn is inside vtnkhxjyk's case", "hqcpaelr is inside axdfrxohrjhkk's case", "paleqsbqzxzds is inside f's case", "pjpctwxvmjzsgphsjj is inside bckpayslqjkr's case", "reuzxktopd is inside siudwxv's case", "ryxqsphqod is inside pjpctwxvmjzsgphsjj's case", "siudwxv is inside xwaylehjabokdaqbahb's case", "stbzkgodutwm is inside gkupkzwgpnntepcdkn's case", "vtnkhxjyk is inside clbsk's case", "wxpyj is inside hqcpaelr's case", "xmmofergaejdffterrxf is inside wxpyj's case", "xwaylehjabokdaqbahb is inside oxfbwytnxtiytxceo's case"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> moviesWatched = {"erkmsmhzszqawqk", "ecwnkrlimuoubarkpye", "ct", "jov", "odiqt", "rojrmndi", "ct"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ecwnkrlimuoubarkpye is inside ct's case", "erkmsmhzszqawqk is inside ecwnkrlimuoubarkpye's case", "jov is inside odiqt's case", "odiqt is inside rojrmndi's case", "rojrmndi is inside jov's case"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> moviesWatched = {"kf", "zhqxzbfbdhhxjm", "ohdkytsryilrd", "dvhccryv", "vnx", "yoqxlyrotnd", "zuqf", "ucjnr", "kknvxitxvqwiw", "rfweavhfqpowoma", "ipplgmcglvlbgnrtgyl", "nogrbtaujwil", "uoymltzxxojzmnmoifxp", "zygkvqnljhkdvy", "uoymltzxxojzmnmoifxp", "zuqf", "ksirnznwu", "vqlvizbtlk", "tridgswan", "zsqszzvhwjihzoaaor", "luynnkmnoktdklgvl"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"dvhccryv is inside vnx's case", "ipplgmcglvlbgnrtgyl is inside nogrbtaujwil's case", "kf is inside zhqxzbfbdhhxjm's case", "kknvxitxvqwiw is inside rfweavhfqpowoma's case", "ksirnznwu is inside vqlvizbtlk's case", "nogrbtaujwil is inside uoymltzxxojzmnmoifxp's case", "ohdkytsryilrd is inside dvhccryv's case", "rfweavhfqpowoma is inside ipplgmcglvlbgnrtgyl's case", "tridgswan is inside zsqszzvhwjihzoaaor's case", "ucjnr is inside kknvxitxvqwiw's case", "uoymltzxxojzmnmoifxp is inside ucjnr's case", "vnx is inside yoqxlyrotnd's case", "vqlvizbtlk is inside tridgswan's case", "yoqxlyrotnd is inside zuqf's case", "zhqxzbfbdhhxjm is inside ohdkytsryilrd's case", "zsqszzvhwjihzoaaor is inside luynnkmnoktdklgvl's case", "zuqf is inside ksirnznwu's case"};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> moviesWatched = {"qfuvugby", "oxfrwouxuyxl", "vywtpnzrx", "aqkwsx", "bmzu", "ysrzolmpojozqp", "nxyivgcodhub", "vywtpnzrx", "bvyhkjihita", "gudgutziieabp", "bmzu", "cibevvjcrujm", "jjjgfubbqauqddce", "bvyhkjihita", "x", "yattsukcpbszluwnhcpx", "bjmazdjkrhuswnmejvhp", "lhc", "kkeoaqxfqphzdl", "rnpaeiqfxvgrgowxwd"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aqkwsx is inside bmzu's case", "bjmazdjkrhuswnmejvhp is inside lhc's case", "bmzu is inside cibevvjcrujm's case", "bvyhkjihita is inside x's case", "cibevvjcrujm is inside jjjgfubbqauqddce's case", "gudgutziieabp is inside ysrzolmpojozqp's case", "jjjgfubbqauqddce is inside gudgutziieabp's case", "kkeoaqxfqphzdl is inside rnpaeiqfxvgrgowxwd's case", "lhc is inside kkeoaqxfqphzdl's case", "nxyivgcodhub is inside aqkwsx's case", "oxfrwouxuyxl is inside vywtpnzrx's case", "qfuvugby is inside oxfrwouxuyxl's case", "vywtpnzrx is inside bvyhkjihita's case", "x is inside yattsukcpbszluwnhcpx's case", "yattsukcpbszluwnhcpx is inside bjmazdjkrhuswnmejvhp's case", "ysrzolmpojozqp is inside nxyivgcodhub's case"};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> moviesWatched = {"dbfjegaee", "hghlskybvsvl", "dbfjegaee", "hghlskybvsvl", "dbfjegaee", "cgacmdded", "dbfjegaee", "hghlskybvsvl", "ytekkaoredigbssmyrmc", "sgjwfbugtrmihppky", "dbfjegaee", "ahcyshqkhz", "cgacmdded", "sgjwfbugtrmihppky", "ahcyshqkhz", "cgacmdded", "ahcyshqkhz", "sgjwfbugtrmihppky", "ytekkaoredigbssmyrmc", "dbfjegaee", "fazpfirflimefhue", "sgjwfbugtrmihppky", "t", "ytekkaoredigbssmyrmc", "cgacmdded", "fazpfirflimefhue", "ytekkaoredigbssmyrmc", "rfmztwepqvoanqnvyv"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ahcyshqkhz is inside cgacmdded's case", "cgacmdded is inside sgjwfbugtrmihppky's case", "dbfjegaee is inside fazpfirflimefhue's case", "fazpfirflimefhue is inside hghlskybvsvl's case", "hghlskybvsvl is inside ytekkaoredigbssmyrmc's case", "sgjwfbugtrmihppky is inside t's case", "t is inside ahcyshqkhz's case", "ytekkaoredigbssmyrmc is inside rfmztwepqvoanqnvyv's case"};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> moviesWatched = {"abolvthl", "txjeg", "abolvthl", "txjeg", "abolvthl", "txjeg", "abolvthl", "txjeg", "abolvthl", "txjeg", "abolvthl", "txjeg", "abolvthl", "txjeg", "abolvthl", "txjeg", "abolvthl", "txjeg", "abolvthl", "txjeg", "abolvthl", "txjeg", "rxasaxxhfihcecucab", "abolvthl", "txjeg", "abolvthl"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"rxasaxxhfihcecucab is inside txjeg's case", "txjeg is inside rxasaxxhfihcecucab's case"};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> moviesWatched = {"jvxgsqh", "peypzrpogj", "cthrdelpeqrn", "jvxgsqh", "sxesxyleizwmrojqwt", "uvqgujqy", "peypzrpogj", "jvxgsqh", "sxesxyleizwmrojqwt", "uvqgujqy", "rfkjqazukha", "ptmbppessauhl", "rfkjqazukha", "sxesxyleizwmrojqwt", "yfkmsskjssptmkvi", "sxesxyleizwmrojqwt", "jvxgsqh", "fffzn", "cthrdelpeqrn", "kpqrytwemepwhd"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"cthrdelpeqrn is inside kpqrytwemepwhd's case", "fffzn is inside peypzrpogj's case", "jvxgsqh is inside fffzn's case", "peypzrpogj is inside sxesxyleizwmrojqwt's case", "rfkjqazukha is inside cthrdelpeqrn's case", "sxesxyleizwmrojqwt is inside uvqgujqy's case", "uvqgujqy is inside rfkjqazukha's case"};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> moviesWatched = {"euzjjk", "e", "euzjjk", "wxsasluszockkqvbgsy", "e", "wxsasluszockkqvbgsy", "e", "euzjjk", "wxsasluszockkqvbgsy", "e", "euzjjk", "wxsasluszockkqvbgsy", "e", "wxsasluszockkqvbgsy", "euzjjk", "wxsasluszockkqvbgsy", "euzjjk", "e", "euzjjk", "e", "euzjjk"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> moviesWatched = {"iqqmtarujsoofel", "nfnogm", "iqqmtarujsoofel", "ir", "pkfrbcubma", "jsfnuqaybshfi", "pkfrbcubma", "p", "mpnnrbn", "fdeoudxxyyjedtzsh", "nfnogm", "mkherftkbs", "xvenkezjxg", "hklvugdafvee", "hxagrkzokpgob", "ihhkk", "nab"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"fdeoudxxyyjedtzsh is inside nfnogm's case", "hklvugdafvee is inside hxagrkzokpgob's case", "hxagrkzokpgob is inside ihhkk's case", "ihhkk is inside nab's case", "iqqmtarujsoofel is inside ir's case", "ir is inside pkfrbcubma's case", "mkherftkbs is inside xvenkezjxg's case", "mpnnrbn is inside fdeoudxxyyjedtzsh's case", "nfnogm is inside mkherftkbs's case", "p is inside mpnnrbn's case", "pkfrbcubma is inside p's case", "xvenkezjxg is inside hklvugdafvee's case"};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> moviesWatched = {"nejhoiiyhfciaztoupv", "begmqv", "nejhoiiyhfciaztoupv"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> moviesWatched = {"dymsoy", "rqvjmijbwfpnypu", "batqlwcixiqqo", "aiovl", "upxbfkknkng", "xjyqqjcblotuqyvdlvs", "ytrhizlprcyoahrwq", "ywl", "hzhhghbcifcuqer", "batqlwcixiqqo", "deecobbholmxgjktotae", "kxmlqhzvkpmju", "cym", "ifohyzpiyqdupdfnm", "zbgbtnannfnjwp", "rqfyuqmrqcmhcrztyeub", "yeoboipfbfuu", "yocvofyiqihh", "vwxuozxyigfuosw", "thbqicrvzhjjlmabix", "mbyaigulczmjrilqorgy", "eitumuiaiuimiug", "pflgqfdrigmyfsnns", "bgfvjnyqvhidgqywvah", "kgcnxw", "vfyyquuksktfqrwjamgb", "batqlwcixiqqo", "ltweayj", "lgvhkxtkscm", "shwuarptmxtgqpnfony", "twaxxbeasrulfggi", "qzvknphst", "bmmxywjy", "xpuhfwynmbmcpwkrjcyu", "acknawktri", "ttdj", "hcbejzrlom", "xum", "kbi", "avjkwdewzt", "aujlpjtdpexkzklmij", "x", "liottjcat"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"acknawktri is inside ttdj's case", "aiovl is inside upxbfkknkng's case", "aujlpjtdpexkzklmij is inside x's case", "avjkwdewzt is inside aujlpjtdpexkzklmij's case", "batqlwcixiqqo is inside ltweayj's case", "bgfvjnyqvhidgqywvah is inside kgcnxw's case", "bmmxywjy is inside xpuhfwynmbmcpwkrjcyu's case", "cym is inside ifohyzpiyqdupdfnm's case", "deecobbholmxgjktotae is inside kxmlqhzvkpmju's case", "dymsoy is inside rqvjmijbwfpnypu's case", "eitumuiaiuimiug is inside pflgqfdrigmyfsnns's case", "hcbejzrlom is inside xum's case", "hzhhghbcifcuqer is inside aiovl's case", "ifohyzpiyqdupdfnm is inside zbgbtnannfnjwp's case", "kbi is inside avjkwdewzt's case", "kgcnxw is inside vfyyquuksktfqrwjamgb's case", "kxmlqhzvkpmju is inside cym's case", "lgvhkxtkscm is inside shwuarptmxtgqpnfony's case", "ltweayj is inside lgvhkxtkscm's case", "mbyaigulczmjrilqorgy is inside eitumuiaiuimiug's case", "pflgqfdrigmyfsnns is inside bgfvjnyqvhidgqywvah's case", "qzvknphst is inside bmmxywjy's case", "rqfyuqmrqcmhcrztyeub is inside yeoboipfbfuu's case", "rqvjmijbwfpnypu is inside batqlwcixiqqo's case", "shwuarptmxtgqpnfony is inside twaxxbeasrulfggi's case", "thbqicrvzhjjlmabix is inside mbyaigulczmjrilqorgy's case", "ttdj is inside hcbejzrlom's case", "twaxxbeasrulfggi is inside qzvknphst's case", "upxbfkknkng is inside xjyqqjcblotuqyvdlvs's case", "vfyyquuksktfqrwjamgb is inside deecobbholmxgjktotae's case", "vwxuozxyigfuosw is inside thbqicrvzhjjlmabix's case", "x is inside liottjcat's case", "xjyqqjcblotuqyvdlvs is inside ytrhizlprcyoahrwq's case", "xpuhfwynmbmcpwkrjcyu is inside acknawktri's case", "xum is inside kbi's case", "yeoboipfbfuu is inside yocvofyiqihh's case", "yocvofyiqihh is inside vwxuozxyigfuosw's case", "ytrhizlprcyoahrwq is inside ywl's case", "ywl is inside hzhhghbcifcuqer's case", "zbgbtnannfnjwp is inside rqfyuqmrqcmhcrztyeub's case"};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> moviesWatched = {"ccjqhpmyirmslkd", "lkoqdib", "hejytihlkrzxebcge", "rv", "qbohd", "smwtjntbkdgjmdqkgbub", "dnnleetbxitd", "mpzsdvi", "ukad", "spjlnxmwkourhxbxc", "pdreadfrilixpy", "gavtuml", "dqonqkiqpce", "lgrgvdzibkeshkc", "usaxmplnltukkw", "ovc", "tcvndsabyyiaz", "yicpnwkqj", "sry", "ughwy", "odtxmasqoxoyhbklufli", "lrp", "uwweamit", "pxigzzhvjmulrsdvsah", "rsdrvujpzfr", "xtbhnwssozvechiky", "xcwqowenyhbe", "fqdijv", "q", "ephuxxhle", "yjsdkdwqrwrubml", "rjyefq", "kgehs", "heuafizh"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ccjqhpmyirmslkd is inside lkoqdib's case", "dnnleetbxitd is inside mpzsdvi's case", "dqonqkiqpce is inside lgrgvdzibkeshkc's case", "ephuxxhle is inside yjsdkdwqrwrubml's case", "fqdijv is inside q's case", "gavtuml is inside dqonqkiqpce's case", "hejytihlkrzxebcge is inside rv's case", "kgehs is inside heuafizh's case", "lgrgvdzibkeshkc is inside usaxmplnltukkw's case", "lkoqdib is inside hejytihlkrzxebcge's case", "lrp is inside uwweamit's case", "mpzsdvi is inside ukad's case", "odtxmasqoxoyhbklufli is inside lrp's case", "ovc is inside tcvndsabyyiaz's case", "pdreadfrilixpy is inside gavtuml's case", "pxigzzhvjmulrsdvsah is inside rsdrvujpzfr's case", "q is inside ephuxxhle's case", "qbohd is inside smwtjntbkdgjmdqkgbub's case", "rjyefq is inside kgehs's case", "rsdrvujpzfr is inside xtbhnwssozvechiky's case", "rv is inside qbohd's case", "smwtjntbkdgjmdqkgbub is inside dnnleetbxitd's case", "spjlnxmwkourhxbxc is inside pdreadfrilixpy's case", "sry is inside ughwy's case", "tcvndsabyyiaz is inside yicpnwkqj's case", "ughwy is inside odtxmasqoxoyhbklufli's case", "ukad is inside spjlnxmwkourhxbxc's case", "usaxmplnltukkw is inside ovc's case", "uwweamit is inside pxigzzhvjmulrsdvsah's case", "xcwqowenyhbe is inside fqdijv's case", "xtbhnwssozvechiky is inside xcwqowenyhbe's case", "yicpnwkqj is inside sry's case", "yjsdkdwqrwrubml is inside rjyefq's case"};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> moviesWatched = {"egltrxhokj", "cn", "fafkmnlmgaeruqr", "muyvlqxmmvsmaomuo", "fafkmnlmgaeruqr", "xnztripztkdsiiozfp", "azrfdkslwxsrmoyelwe", "zfykqhn", "noayssy", "mnrko", "noayssy"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"azrfdkslwxsrmoyelwe is inside zfykqhn's case", "cn is inside fafkmnlmgaeruqr's case", "egltrxhokj is inside cn's case", "fafkmnlmgaeruqr is inside xnztripztkdsiiozfp's case", "xnztripztkdsiiozfp is inside azrfdkslwxsrmoyelwe's case", "zfykqhn is inside noayssy's case"};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> moviesWatched = {"vtotbbu", "znjawrxt", "vtotbbu", "csjunweyvvf", "vtotbbu"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> moviesWatched = {"huweizqnnepezkfxa", "uhenlgoddlrksyy", "huweizqnnepezkfxa", "uhenlgoddlrksyy", "huweizqnnepezkfxa", "uhenlgoddlrksyy", "huweizqnnepezkfxa", "uhenlgoddlrksyy", "huweizqnnepezkfxa", "uhenlgoddlrksyy", "huweizqnnepezkfxa", "uhenlgoddlrksyy", "huweizqnnepezkfxa", "uhenlgoddlrksyy", "huweizqnnepezkfxa", "uhenlgoddlrksyy", "huweizqnnepezkfxa"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> moviesWatched = {"adyfrmswlqwvrxselje", "qxvxsrtnhmk", "ahgeojgnb", "s", "adyfrmswlqwvrxselje", "nlteodrfphamdbiuihi", "jsa", "adyfrmswlqwvrxselje", "ahgeojgnb", "tvdn", "adyfrmswlqwvrxselje", "itkfmeudmpimvoweok", "agw", "cyosnv", "pp", "mi", "ouxpx", "qxvxsrtnhmk", "mcalcypioyoo", "immspjdvrbckvvuujv"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"adyfrmswlqwvrxselje is inside itkfmeudmpimvoweok's case", "agw is inside cyosnv's case", "ahgeojgnb is inside tvdn's case", "cyosnv is inside pp's case", "itkfmeudmpimvoweok is inside agw's case", "jsa is inside nlteodrfphamdbiuihi's case", "mcalcypioyoo is inside immspjdvrbckvvuujv's case", "mi is inside ouxpx's case", "nlteodrfphamdbiuihi is inside jsa's case", "ouxpx is inside ahgeojgnb's case", "pp is inside mi's case", "qxvxsrtnhmk is inside mcalcypioyoo's case", "s is inside qxvxsrtnhmk's case", "tvdn is inside s's case"};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> moviesWatched = {"fldgclbieqtqqpvb", "qukwggpzgrwhcwfsck", "fldgclbieqtqqpvb", "qukwggpzgrwhcwfsck", "fldgclbieqtqqpvb", "qukwggpzgrwhcwfsck", "fldgclbieqtqqpvb", "qukwggpzgrwhcwfsck", "fldgclbieqtqqpvb", "qukwggpzgrwhcwfsck", "fldgclbieqtqqpvb", "qukwggpzgrwhcwfsck", "fldgclbieqtqqpvb", "bctipeljidqozyyizo", "fldgclbieqtqqpvb", "bctipeljidqozyyizo", "fldgclbieqtqqpvb", "bctipeljidqozyyizo", "fldgclbieqtqqpvb", "bctipeljidqozyyizo", "fldgclbieqtqqpvb", "qukwggpzgrwhcwfsck", "bctipeljidqozyyizo", "qukwggpzgrwhcwfsck", "fldgclbieqtqqpvb", "bctipeljidqozyyizo", "qukwggpzgrwhcwfsck", "bctipeljidqozyyizo", "qukwggpzgrwhcwfsck", "fldgclbieqtqqpvb", "bctipeljidqozyyizo", "fldgclbieqtqqpvb", "bctipeljidqozyyizo", "qukwggpzgrwhcwfsck", "fldgclbieqtqqpvb", "qukwggpzgrwhcwfsck", "bctipeljidqozyyizo", "qukwggpzgrwhcwfsck", "bctipeljidqozyyizo", "fldgclbieqtqqpvb", "qukwggpzgrwhcwfsck", "bctipeljidqozyyizo", "wbrcwumcefaindurca", "bctipeljidqozyyizo", "wbrcwumcefaindurca"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bctipeljidqozyyizo is inside wbrcwumcefaindurca's case", "fldgclbieqtqqpvb is inside bctipeljidqozyyizo's case"};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> moviesWatched = {"mtssgbaxbgcfc", "rlbxffhjwjiushitsi", "mtssgbaxbgcfc"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> moviesWatched = {"shaxyhcjesuwuasq", "vjvxjhfyohedc", "prvzabbgjvchl", "shaxyhcjesuwuasq", "prvzabbgjvchl", "yizxymvb", "prvzabbgjvchl", "biodrvyfad", "m", "nya", "rqhkzdysh", "xpizqmxxqrupsyiaw", "mmofl", "oqbznjzmcfiijmuagut", "esgptdm", "oklxjbxp", "vim", "ujkgkj", "uvpptwrlywuqplyb", "uaaerqyufzrjbyacsrgo", "prvzabbgjvchl", "i", "gdbjaqbmfcrgkobmsy", "zuajdotjevodlvfjoy", "ntestcjcbgbtphngfew", "mmofl", "vim", "cnfaeluq", "ahqaeqhqc", "qpbuhlilyxrvtzdjptee", "kgbtscv", "sznpijhymwlkkkfkghz"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ahqaeqhqc is inside qpbuhlilyxrvtzdjptee's case", "biodrvyfad is inside m's case", "cnfaeluq is inside ahqaeqhqc's case", "esgptdm is inside oklxjbxp's case", "gdbjaqbmfcrgkobmsy is inside zuajdotjevodlvfjoy's case", "i is inside gdbjaqbmfcrgkobmsy's case", "kgbtscv is inside sznpijhymwlkkkfkghz's case", "m is inside nya's case", "mmofl is inside ujkgkj's case", "ntestcjcbgbtphngfew is inside oqbznjzmcfiijmuagut's case", "nya is inside rqhkzdysh's case", "oklxjbxp is inside vim's case", "oqbznjzmcfiijmuagut is inside esgptdm's case", "prvzabbgjvchl is inside i's case", "qpbuhlilyxrvtzdjptee is inside kgbtscv's case", "rqhkzdysh is inside xpizqmxxqrupsyiaw's case", "shaxyhcjesuwuasq is inside vjvxjhfyohedc's case", "uaaerqyufzrjbyacsrgo is inside biodrvyfad's case", "ujkgkj is inside uvpptwrlywuqplyb's case", "uvpptwrlywuqplyb is inside uaaerqyufzrjbyacsrgo's case", "vim is inside cnfaeluq's case", "vjvxjhfyohedc is inside prvzabbgjvchl's case", "xpizqmxxqrupsyiaw is inside mmofl's case", "zuajdotjevodlvfjoy is inside ntestcjcbgbtphngfew's case"};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> moviesWatched = {"dzd", "krqlrvmxqzxeqlidnofd", "dzd", "krqlrvmxqzxeqlidnofd", "dzd", "jcyy", "dzd", "jcyy", "dzd", "ioneeiboefbrns", "jcyy", "upozzuk", "ioneeiboefbrns", "krqlrvmxqzxeqlidnofd", "dzd", "jcyy", "ioneeiboefbrns", "krqlrvmxqzxeqlidnofd", "ioneeiboefbrns", "upozzuk", "jcyy", "dzd", "jfjyzk", "upozzuk", "otbbsaklvj"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"dzd is inside jfjyzk's case", "ioneeiboefbrns is inside jcyy's case", "jcyy is inside upozzuk's case", "jfjyzk is inside krqlrvmxqzxeqlidnofd's case", "krqlrvmxqzxeqlidnofd is inside ioneeiboefbrns's case", "upozzuk is inside otbbsaklvj's case"};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> moviesWatched = {"fiiwezkbqcp", "xlddpsoruxwzusfitwmw", "fiiwezkbqcp", "xlddpsoruxwzusfitwmw", "fiiwezkbqcp", "xlddpsoruxwzusfitwmw", "fiiwezkbqcp", "xlddpsoruxwzusfitwmw", "fiiwezkbqcp", "xlddpsoruxwzusfitwmw", "fiiwezkbqcp", "xlddpsoruxwzusfitwmw", "fiiwezkbqcp", "xlddpsoruxwzusfitwmw", "fiiwezkbqcp", "xlddpsoruxwzusfitwmw", "fiiwezkbqcp", "xlddpsoruxwzusfitwmw", "fiiwezkbqcp", "xlddpsoruxwzusfitwmw", "yqufimzzz", "xlddpsoruxwzusfitwmw", "fiiwezkbqcp", "xlddpsoruxwzusfitwmw", "fiiwezkbqcp", "xlddpsoruxwzusfitwmw", "fiiwezkbqcp", "yqufimzzz", "xlddpsoruxwzusfitwmw", "yqufimzzz", "fiiwezkbqcp", "xlddpsoruxwzusfitwmw", "yqufimzzz", "xlddpsoruxwzusfitwmw", "fiiwezkbqcp"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> moviesWatched = {"amguz", "ghmktqbv", "amguz", "ghmktqbv", "amguz", "ghmktqbv", "amguz", "ghmktqbv", "amguz", "ghmktqbv", "amguz", "ghmktqbv", "amguz", "ghmktqbv", "amguz", "ghmktqbv", "dcgfn"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"amguz is inside ghmktqbv's case", "ghmktqbv is inside dcgfn's case"};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> moviesWatched = {"zvhlmfn", "xrkc", "ktlodkijlurob", "zvhlmfn", "ihjigfnrdkgitsb", "ktlodkijlurob", "ihjigfnrdkgitsb", "sjcobeboojaovzwtmoxn"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ihjigfnrdkgitsb is inside sjcobeboojaovzwtmoxn's case", "ktlodkijlurob is inside xrkc's case", "xrkc is inside ktlodkijlurob's case", "zvhlmfn is inside ihjigfnrdkgitsb's case"};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> moviesWatched = {"xo", "vlwjcowvgrwfnann", "lnjkjixseclxz", "trartgczigaqcvov", "xo", "trartgczigaqcvov", "vlwjcowvgrwfnann", "ocoygzdevqllp", "trartgczigaqcvov", "qlwsrhq", "ocoygzdevqllp", "qlwsrhq", "lnjkjixseclxz", "trartgczigaqcvov", "fqnzydptuaiymvcifzxx", "uoimu", "fqnzydptuaiymvcifzxx", "gyhaukmoce", "uoimu", "gyhaukmoce"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"fqnzydptuaiymvcifzxx is inside gyhaukmoce's case", "lnjkjixseclxz is inside qlwsrhq's case", "ocoygzdevqllp is inside lnjkjixseclxz's case", "qlwsrhq is inside trartgczigaqcvov's case", "trartgczigaqcvov is inside fqnzydptuaiymvcifzxx's case", "vlwjcowvgrwfnann is inside ocoygzdevqllp's case", "xo is inside vlwjcowvgrwfnann's case"};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> moviesWatched = {"ysk", "jmcmnngolyifqqlruncc", "finaqxnnnxqu", "vbvqaaagmkv", "ysk", "zfnghamswacsd", "ysk", "bkwmhaf"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"finaqxnnnxqu is inside vbvqaaagmkv's case", "jmcmnngolyifqqlruncc is inside finaqxnnnxqu's case", "vbvqaaagmkv is inside jmcmnngolyifqqlruncc's case", "ysk is inside bkwmhaf's case"};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> moviesWatched = {"jfszlofanjhrg", "cqdemvqooanzjz", "wnesdxnemtyjxejmep", "jvtsuhwjbndbvdmzt", "tt", "ddemivnrdmgubi"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"cqdemvqooanzjz is inside wnesdxnemtyjxejmep's case", "jfszlofanjhrg is inside cqdemvqooanzjz's case", "jvtsuhwjbndbvdmzt is inside tt's case", "tt is inside ddemivnrdmgubi's case", "wnesdxnemtyjxejmep is inside jvtsuhwjbndbvdmzt's case"};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> moviesWatched = {"fkycubt", "syhfowdkxnn", "itipudddrfms", "ldeecc", "xwzgsiddzlyopakyg", "enlwlqtmn", "lqmopktew", "ldeecc", "wxwgflzxf", "rfcmptfekevwqsgzb", "ihobrxmfk", "jhufqpy", "tafiyjh", "njpm", "wsinhqamoulnf", "fzwqbh", "qdmysed", "apbndlimmgvgqjpnr", "anardjotrazwusltydh", "weulkhlnb", "mnxjjwzerzgpjdfj", "wcgictgj", "ln", "tlgysywjlnaz", "bqcvhtzcwlnfyrljsfod", "wpulvwicwhxxyfcpju"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"anardjotrazwusltydh is inside weulkhlnb's case", "apbndlimmgvgqjpnr is inside anardjotrazwusltydh's case", "bqcvhtzcwlnfyrljsfod is inside wpulvwicwhxxyfcpju's case", "enlwlqtmn is inside lqmopktew's case", "fkycubt is inside syhfowdkxnn's case", "fzwqbh is inside qdmysed's case", "ihobrxmfk is inside jhufqpy's case", "itipudddrfms is inside ldeecc's case", "jhufqpy is inside tafiyjh's case", "ldeecc is inside wxwgflzxf's case", "ln is inside tlgysywjlnaz's case", "lqmopktew is inside xwzgsiddzlyopakyg's case", "mnxjjwzerzgpjdfj is inside wcgictgj's case", "njpm is inside wsinhqamoulnf's case", "qdmysed is inside apbndlimmgvgqjpnr's case", "rfcmptfekevwqsgzb is inside ihobrxmfk's case", "syhfowdkxnn is inside itipudddrfms's case", "tafiyjh is inside njpm's case", "tlgysywjlnaz is inside bqcvhtzcwlnfyrljsfod's case", "wcgictgj is inside ln's case", "weulkhlnb is inside mnxjjwzerzgpjdfj's case", "wsinhqamoulnf is inside fzwqbh's case", "wxwgflzxf is inside rfcmptfekevwqsgzb's case", "xwzgsiddzlyopakyg is inside enlwlqtmn's case"};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> moviesWatched = {"rvmxanvwb", "dtdnyckobqjvowxovhvt", "qvhlihemhjyd", "cngnusmxvtjxoujaagc", "wqtoyzo", "cupqooe", "mpitfzc", "wqtoyzo", "cngnusmxvtjxoujaagc", "xnahyl", "lwrftvjfmiihvrphgdac", "tmhsnwzxuasq", "klozyojmjoxshhfigth", "oghvdip", "fldypbttoz", "knnv", "ubqcngxgf", "cngnusmxvtjxoujaagc", "knnv", "klozyojmjoxshhfigth", "ivkvbyesvqdgrnnmmsfr", "lwrftvjfmiihvrphgdac", "xgskau", "hhplg", "ijpjgiky", "i", "mdxrng", "qcjzcdkklwxwxsl", "dtdnyckobqjvowxovhvt"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"cngnusmxvtjxoujaagc is inside ubqcngxgf's case", "cupqooe is inside mpitfzc's case", "fldypbttoz is inside knnv's case", "hhplg is inside ijpjgiky's case", "i is inside mdxrng's case", "ijpjgiky is inside i's case", "ivkvbyesvqdgrnnmmsfr is inside tmhsnwzxuasq's case", "klozyojmjoxshhfigth is inside ivkvbyesvqdgrnnmmsfr's case", "knnv is inside oghvdip's case", "lwrftvjfmiihvrphgdac is inside xgskau's case", "mdxrng is inside qcjzcdkklwxwxsl's case", "mpitfzc is inside cupqooe's case", "oghvdip is inside fldypbttoz's case", "qcjzcdkklwxwxsl is inside qvhlihemhjyd's case", "qvhlihemhjyd is inside cngnusmxvtjxoujaagc's case", "rvmxanvwb is inside dtdnyckobqjvowxovhvt's case", "tmhsnwzxuasq is inside klozyojmjoxshhfigth's case", "ubqcngxgf is inside xnahyl's case", "xgskau is inside hhplg's case", "xnahyl is inside lwrftvjfmiihvrphgdac's case"};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> moviesWatched = {"axlmha", "reissckpdtux", "pne", "ecngfuh", "jarjmka", "reissckpdtux", "fcsbgyzvatnwbobbsql", "fqpoplxbnnvb", "gratkmrskwagjeegqg", "huhjlniqdohbqbxkjuh", "uvjlrdfcuqvuloxj", "u", "t", "aziikmagde", "qrjayrfzvzfrm", "iyqiggyapdnf", "dzhsrbkfnkwfbsnlpn", "wrykgqvg", "rdjlakjuc", "jarjmka", "xrwahynpbxtglo", "sffckny", "xepdxbkrmhmhhbgjwv", "ovxctzc", "xhltuzldbygpfkgpc", "nux", "babukixjmxojetoiwy", "uzwvefuxipi"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"axlmha is inside reissckpdtux's case", "aziikmagde is inside qrjayrfzvzfrm's case", "babukixjmxojetoiwy is inside uzwvefuxipi's case", "dzhsrbkfnkwfbsnlpn is inside wrykgqvg's case", "ecngfuh is inside jarjmka's case", "fcsbgyzvatnwbobbsql is inside fqpoplxbnnvb's case", "fqpoplxbnnvb is inside gratkmrskwagjeegqg's case", "gratkmrskwagjeegqg is inside huhjlniqdohbqbxkjuh's case", "huhjlniqdohbqbxkjuh is inside uvjlrdfcuqvuloxj's case", "iyqiggyapdnf is inside dzhsrbkfnkwfbsnlpn's case", "jarjmka is inside xrwahynpbxtglo's case", "nux is inside babukixjmxojetoiwy's case", "ovxctzc is inside xhltuzldbygpfkgpc's case", "pne is inside ecngfuh's case", "qrjayrfzvzfrm is inside iyqiggyapdnf's case", "rdjlakjuc is inside pne's case", "reissckpdtux is inside fcsbgyzvatnwbobbsql's case", "sffckny is inside xepdxbkrmhmhhbgjwv's case", "t is inside aziikmagde's case", "u is inside t's case", "uvjlrdfcuqvuloxj is inside u's case", "wrykgqvg is inside rdjlakjuc's case", "xepdxbkrmhmhhbgjwv is inside ovxctzc's case", "xhltuzldbygpfkgpc is inside nux's case", "xrwahynpbxtglo is inside sffckny's case"};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> moviesWatched = {"dy", "dv", "tjnioejszot", "dv", "dy", "eqbvjwbzstnjyo", "gomr", "apgxwywfeav", "cxjbyoczjbvimlfmds", "apgxwywfeav", "giwxlrhckxpwz", "apgxwywfeav", "hluemf", "isvcagtmpomc", "giwxlrhckxpwz", "eqbvjwbzstnjyo", "cxjbyoczjbvimlfmds", "gomr", "cvofsxzhgxlzgtmsdjx", "jozhjk", "apgxwywfeav", "kenvdkc", "spszv", "agdpdagegux", "sxcwwsvtryqkpfoqljq", "jozhjk", "ficn", "xdxnvvcjmjcimjbbkob", "xjfsydjnhlnohya", "uodibztlbjqbswcoetr", "catvvouxp", "apgxwywfeav", "fz", "gomr", "tdxqtz", "tuedyuevzbvn", "xdxnvvcjmjcimjbbkob", "nbmb", "hdcqhpfuxukqlwzkcda"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"agdpdagegux is inside sxcwwsvtryqkpfoqljq's case", "apgxwywfeav is inside fz's case", "catvvouxp is inside kenvdkc's case", "cvofsxzhgxlzgtmsdjx is inside jozhjk's case", "cxjbyoczjbvimlfmds is inside apgxwywfeav's case", "dy is inside eqbvjwbzstnjyo's case", "eqbvjwbzstnjyo is inside cxjbyoczjbvimlfmds's case", "ficn is inside xdxnvvcjmjcimjbbkob's case", "fz is inside cvofsxzhgxlzgtmsdjx's case", "giwxlrhckxpwz is inside gomr's case", "gomr is inside tdxqtz's case", "hluemf is inside isvcagtmpomc's case", "isvcagtmpomc is inside giwxlrhckxpwz's case", "jozhjk is inside ficn's case", "kenvdkc is inside spszv's case", "nbmb is inside hdcqhpfuxukqlwzkcda's case", "spszv is inside agdpdagegux's case", "sxcwwsvtryqkpfoqljq is inside hluemf's case", "tdxqtz is inside tuedyuevzbvn's case", "tuedyuevzbvn is inside xjfsydjnhlnohya's case", "uodibztlbjqbswcoetr is inside catvvouxp's case", "xdxnvvcjmjcimjbbkob is inside nbmb's case", "xjfsydjnhlnohya is inside uodibztlbjqbswcoetr's case"};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> moviesWatched = {"ulv", "bpifqtflsas", "ulv", "bpifqtflsas", "ulv", "bpifqtflsas", "ulv", "bpifqtflsas", "ulv"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> moviesWatched = {"szlam", "cwfqptrsyzlfib", "goobndlhabfno", "cwfqptrsyzlfib", "wygcopqbtanxkmrvc", "ql", "ivuidsqbkrujpp", "lgcudezumbjbojjq", "mwrigslnrd", "mcurc", "tntvpvplfdrxnumwdc", "crexnwe", "orwyevy", "jnpltfuxpuzl", "yqcjl", "mwrigslnrd", "x", "rrjrkqnhhyigaajdomd", "adccjotqggw", "lhyulybszllz", "tkoiikbxgvnm", "wbv", "yepsvyjfzyzklulre", "sm", "yqcjl", "gerr"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"adccjotqggw is inside lhyulybszllz's case", "crexnwe is inside orwyevy's case", "cwfqptrsyzlfib is inside wygcopqbtanxkmrvc's case", "ivuidsqbkrujpp is inside lgcudezumbjbojjq's case", "jnpltfuxpuzl is inside yqcjl's case", "lgcudezumbjbojjq is inside mwrigslnrd's case", "lhyulybszllz is inside tkoiikbxgvnm's case", "mcurc is inside tntvpvplfdrxnumwdc's case", "mwrigslnrd is inside x's case", "orwyevy is inside jnpltfuxpuzl's case", "ql is inside ivuidsqbkrujpp's case", "rrjrkqnhhyigaajdomd is inside adccjotqggw's case", "sm is inside mcurc's case", "szlam is inside cwfqptrsyzlfib's case", "tkoiikbxgvnm is inside wbv's case", "tntvpvplfdrxnumwdc is inside crexnwe's case", "wbv is inside yepsvyjfzyzklulre's case", "wygcopqbtanxkmrvc is inside ql's case", "x is inside rrjrkqnhhyigaajdomd's case", "yepsvyjfzyzklulre is inside sm's case", "yqcjl is inside gerr's case"};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> moviesWatched = {"bchtzvpdtfr", "idmltgdrvg", "bchtzvpdtfr", "idmltgdrvg", "bchtzvpdtfr", "idmltgdrvg", "bchtzvpdtfr", "idmltgdrvg", "bchtzvpdtfr", "idmltgdrvg", "bchtzvpdtfr", "idmltgdrvg", "bchtzvpdtfr", "idmltgdrvg", "bchtzvpdtfr", "idmltgdrvg", "bchtzvpdtfr", "idmltgdrvg", "bchtzvpdtfr"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> moviesWatched = {"lsdqwebqcoegwwxj", "wzsqrntlvpms", "lsdqwebqcoegwwxj", "wzsqrntlvpms", "aitnwdjpcilaaoydko", "oifagdzf", "wzsqrntlvpms", "bhcqahepnoiw", "hazafv", "oifagdzf", "afddqgcxpoqgeku", "hazafv", "aitnwdjpcilaaoydko", "oifagdzf", "lsdqwebqcoegwwxj", "grtbfmwwgomksmjq", "bhcqahepnoiw", "lsdqwebqcoegwwxj", "oifagdzf", "aitnwdjpcilaaoydko", "lsdqwebqcoegwwxj", "oifagdzf", "wzsqrntlvpms", "inrobaanzbffl", "oifagdzf", "rx", "wnwxdrln", "wzsqrntlvpms", "wnwxdrln", "nfyaudid", "gfqwzh", "grtbfmwwgomksmjq", "aitnwdjpcilaaoydko", "afddqgcxpoqgeku"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bhcqahepnoiw is inside grtbfmwwgomksmjq's case", "gfqwzh is inside hazafv's case", "grtbfmwwgomksmjq is inside wzsqrntlvpms's case", "hazafv is inside oifagdzf's case", "inrobaanzbffl is inside bhcqahepnoiw's case", "lsdqwebqcoegwwxj is inside afddqgcxpoqgeku's case", "nfyaudid is inside gfqwzh's case", "oifagdzf is inside rx's case", "rx is inside wnwxdrln's case", "wnwxdrln is inside nfyaudid's case", "wzsqrntlvpms is inside inrobaanzbffl's case"};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> moviesWatched = {"uylny", "x", "uylny", "x", "uylny", "iwjknqjbkfi", "x", "iwjknqjbkfi", "uylny", "r", "x", "hwzpbjqr", "r", "uylny", "iwjknqjbkfi", "hwzpbjqr", "iwjknqjbkfi", "uylny", "hwzpbjqr", "r", "iwjknqjbkfi", "uylny"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"hwzpbjqr is inside r's case", "iwjknqjbkfi is inside x's case", "r is inside iwjknqjbkfi's case", "x is inside hwzpbjqr's case"};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> moviesWatched = {"smwgglf", "liygylxzcmlpuxfyoyu", "smwgglf", "liygylxzcmlpuxfyoyu", "ldxaxrxfclvfc", "liygylxzcmlpuxfyoyu", "ldxaxrxfclvfc", "liygylxzcmlpuxfyoyu", "ldxaxrxfclvfc", "jrjafxlsjid", "liygylxzcmlpuxfyoyu", "zyz", "jrjafxlsjid", "fartnlafoeboouorsh", "liygylxzcmlpuxfyoyu", "cxcpbgurugerxwvdigf", "rzb", "wwaxedgtg", "zyz", "smwgglf", "udvdawuezejd", "wxche", "zyz", "dyckyqfvqal", "smwgglf", "wxche", "fh", "wwaxedgtg", "smwgglf", "ddvr", "zyz", "fartnlafoeboouorsh", "cnkxccigcath", "qlvwrg", "cxcpbgurugerxwvdigf", "liygylxzcmlpuxfyoyu", "qlvwrg", "wwaxedgtg", "luob", "dyckyqfvqal", "cxcpbgurugerxwvdigf", "udvdawuezejd", "nrjoefydjoe", "cnkxccigcath"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"cxcpbgurugerxwvdigf is inside wxche's case", "ddvr is inside dyckyqfvqal's case", "dyckyqfvqal is inside cxcpbgurugerxwvdigf's case", "fartnlafoeboouorsh is inside cnkxccigcath's case", "fh is inside ldxaxrxfclvfc's case", "jrjafxlsjid is inside fartnlafoeboouorsh's case", "ldxaxrxfclvfc is inside jrjafxlsjid's case", "liygylxzcmlpuxfyoyu is inside rzb's case", "luob is inside udvdawuezejd's case", "nrjoefydjoe is inside qlvwrg's case", "qlvwrg is inside liygylxzcmlpuxfyoyu's case", "rzb is inside wwaxedgtg's case", "smwgglf is inside ddvr's case", "udvdawuezejd is inside nrjoefydjoe's case", "wwaxedgtg is inside luob's case", "wxche is inside fh's case"};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> moviesWatched = {"e", "gwtmduadbojrhxsczryu"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"e is inside gwtmduadbojrhxsczryu's case"};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> moviesWatched = {"dyydiffidy", "vpshezxnvzgufefcb", "dyydiffidy", "vpshezxnvzgufefcb", "vknkzogjth", "qbfygbpernkzwaklp", "akdjlvggtlw", "vknkzogjth", "qbfygbpernkzwaklp", "xm", "jlpgehjruyrynbsgfhk", "akdjlvggtlw", "ppntyvftgbbf", "lxhqqnkghslnbril", "vknkzogjth", "maijokjrytdtm", "lxhqqnkghslnbril", "bruchyyexjlymikq", "dyydiffidy", "qovhwhdamnewmwkuqv", "ngwj", "dyydiffidy", "rr", "maijokjrytdtm", "eorkbnfv", "bvhnddcd", "zdbctkahcovutwolxq", "akdjlvggtlw", "vz", "wyaydjtjnuzmph", "zqffyi", "jx", "hugulfh", "ugpswxbczhjmqt", "hugulfh", "nnqbutpalbizybnqras", "sxscir", "jikxmpbzbgogechfksf", "ptghksrq", "junnhs", "zdbctkahcovutwolxq", "ywkip"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"akdjlvggtlw is inside vz's case", "bruchyyexjlymikq is inside vpshezxnvzgufefcb's case", "bvhnddcd is inside zdbctkahcovutwolxq's case", "dyydiffidy is inside rr's case", "eorkbnfv is inside bvhnddcd's case", "hugulfh is inside nnqbutpalbizybnqras's case", "jikxmpbzbgogechfksf is inside ptghksrq's case", "jlpgehjruyrynbsgfhk is inside qbfygbpernkzwaklp's case", "junnhs is inside ppntyvftgbbf's case", "jx is inside hugulfh's case", "lxhqqnkghslnbril is inside bruchyyexjlymikq's case", "maijokjrytdtm is inside eorkbnfv's case", "ngwj is inside qovhwhdamnewmwkuqv's case", "nnqbutpalbizybnqras is inside sxscir's case", "ppntyvftgbbf is inside lxhqqnkghslnbril's case", "ptghksrq is inside junnhs's case", "qbfygbpernkzwaklp is inside xm's case", "qovhwhdamnewmwkuqv is inside ngwj's case", "rr is inside akdjlvggtlw's case", "sxscir is inside jikxmpbzbgogechfksf's case", "vknkzogjth is inside maijokjrytdtm's case", "vpshezxnvzgufefcb is inside vknkzogjth's case", "vz is inside wyaydjtjnuzmph's case", "wyaydjtjnuzmph is inside zqffyi's case", "xm is inside jlpgehjruyrynbsgfhk's case", "zdbctkahcovutwolxq is inside ywkip's case", "zqffyi is inside jx's case"};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> moviesWatched = {"q", "rlam"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"q is inside rlam's case"};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> moviesWatched = {"zpahhkfunwafyr", "fd", "zpahhkfunwafyr", "fd", "zpahhkfunwafyr", "fd", "nkyuvfsnimuv", "fd", "eootrjmygfxjqbaabqf", "nkyuvfsnimuv", "g", "fd", "nkyuvfsnimuv"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"eootrjmygfxjqbaabqf is inside nkyuvfsnimuv's case", "fd is inside g's case", "g is inside eootrjmygfxjqbaabqf's case", "zpahhkfunwafyr is inside fd's case"};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> moviesWatched = {"oydycsrj", "zoyxgymnpzlgpunztcg", "oydycsrj", "zoyxgymnpzlgpunztcg", "oydycsrj", "zoyxgymnpzlgpunztcg", "oydycsrj", "zoyxgymnpzlgpunztcg", "oydycsrj", "zoyxgymnpzlgpunztcg", "oydycsrj", "zoyxgymnpzlgpunztcg", "oydycsrj", "zoyxgymnpzlgpunztcg", "mqluocrpfuyahyhjtwpq", "zoyxgymnpzlgpunztcg", "oydycsrj", "zoyxgymnpzlgpunztcg", "oydycsrj", "mqluocrpfuyahyhjtwpq", "zoyxgymnpzlgpunztcg", "mqluocrpfuyahyhjtwpq", "zoyxgymnpzlgpunztcg", "oydycsrj", "mqluocrpfuyahyhjtwpq", "oydycsrj", "zoyxgymnpzlgpunztcg", "mqluocrpfuyahyhjtwpq", "zoyxgymnpzlgpunztcg", "mqluocrpfuyahyhjtwpq", "oydycsrj", "mqluocrpfuyahyhjtwpq", "oydycsrj", "mqluocrpfuyahyhjtwpq"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"oydycsrj is inside mqluocrpfuyahyhjtwpq's case"};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> moviesWatched = {"d", "xcqaobjlghwimzsf", "fw", "bsefrgdqio", "xcqaobjlghwimzsf", "zplnluabxoikiirymf", "ftdhzbahjao", "ojkkwfkuvkkezqsoqgev", "mxrpkyseuf", "zekvg", "gvfmmtdir", "v", "gvfmmtdir", "uzmfyxwuwzflypnzsdfq", "xcqaobjlghwimzsf", "ftdhzbahjao", "e", "olcbnnwxnccjdol", "ltzia", "gmmabolpcszrejr", "scvguvxvfhrvmjuvjwub", "umnbcwtj", "cbiszzj", "rgtndmmmo", "nezdeaok", "jvsjxpbpj", "ynla", "gvfmmtdir", "qadfaonxut"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bsefrgdqio is inside fw's case", "cbiszzj is inside rgtndmmmo's case", "d is inside xcqaobjlghwimzsf's case", "e is inside olcbnnwxnccjdol's case", "ftdhzbahjao is inside e's case", "fw is inside bsefrgdqio's case", "gmmabolpcszrejr is inside scvguvxvfhrvmjuvjwub's case", "gvfmmtdir is inside qadfaonxut's case", "jvsjxpbpj is inside ynla's case", "ltzia is inside gmmabolpcszrejr's case", "mxrpkyseuf is inside zekvg's case", "nezdeaok is inside jvsjxpbpj's case", "ojkkwfkuvkkezqsoqgev is inside mxrpkyseuf's case", "olcbnnwxnccjdol is inside ltzia's case", "rgtndmmmo is inside nezdeaok's case", "scvguvxvfhrvmjuvjwub is inside umnbcwtj's case", "umnbcwtj is inside cbiszzj's case", "uzmfyxwuwzflypnzsdfq is inside zplnluabxoikiirymf's case", "xcqaobjlghwimzsf is inside ojkkwfkuvkkezqsoqgev's case", "ynla is inside uzmfyxwuwzflypnzsdfq's case", "zekvg is inside gvfmmtdir's case", "zplnluabxoikiirymf is inside ftdhzbahjao's case"};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> moviesWatched = {"rhlhinnbaxtpenliz", "zfviyjxaapvxrmee", "awtlioksroogxv", "rhlhinnbaxtpenliz", "awtlioksroogxv", "rhlhinnbaxtpenliz", "zfviyjxaapvxrmee", "jaoitivndsns", "rhlhinnbaxtpenliz", "mecuhcgjklkvyjqv", "rhlhinnbaxtpenliz", "zfviyjxaapvxrmee", "gnsacteze", "zfviyjxaapvxrmee", "mecuhcgjklkvyjqv", "rhlhinnbaxtpenliz", "eyypxezxyyvbkh", "piwhyyndtv", "eyypxezxyyvbkh", "piwhyyndtv", "mecuhcgjklkvyjqv", "zazqsd", "zfviyjxaapvxrmee"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"awtlioksroogxv is inside zfviyjxaapvxrmee's case", "eyypxezxyyvbkh is inside piwhyyndtv's case", "jaoitivndsns is inside awtlioksroogxv's case", "mecuhcgjklkvyjqv is inside zazqsd's case", "piwhyyndtv is inside jaoitivndsns's case", "rhlhinnbaxtpenliz is inside eyypxezxyyvbkh's case", "zazqsd is inside mecuhcgjklkvyjqv's case"};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> moviesWatched = {"dme", "yqm", "dme", "rhc", "aqpw", "ocia", "yqm", "ocia", "jqw", "qyo", "aqpw", "rhc", "yqm", "ocia", "yqm", "aqpw", "qyo", "yqm", "dme", "zuu", "hthzj", "dme", "rhc", "aqpw", "fzxl", "dme", "jqw", "zuu", "hthzj", "ocia", "qyo"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aqpw is inside fzxl's case", "dme is inside qyo's case", "fzxl is inside yqm's case", "hthzj is inside jqw's case", "jqw is inside hthzj's case", "ocia is inside aqpw's case", "rhc is inside ocia's case", "yqm is inside rhc's case"};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> moviesWatched = {"citizenkane", "casablanca", "thegodfather"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"casablanca is inside thegodfather's case", "citizenkane is inside casablanca's case"};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> moviesWatched = {"gjpg", "gczd", "wmfa", "ylm", "wosv", "kyy", "ioxn", "wmfa", "kyy", "giwz", "seneo", "kops", "kyy", "ylm", "kyy", "seneo", "kops", "ioxn", "gjpg", "kyy", "ylm", "wmfa", "ioxn", "kyy", "gczd", "ylm", "gjpg", "wmfa"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"gczd is inside ioxn's case", "giwz is inside seneo's case", "gjpg is inside gczd's case", "ioxn is inside wosv's case", "kops is inside ylm's case", "kyy is inside wmfa's case", "seneo is inside giwz's case", "wosv is inside kyy's case", "ylm is inside kops's case"};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> moviesWatched = {"starwars", "empirestrikesback", "returnofthejedi", "empirestrikesback", "returnofthejedi", "phantommenace", "starwars"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"empirestrikesback is inside returnofthejedi's case", "phantommenace is inside empirestrikesback's case", "returnofthejedi is inside phantommenace's case"};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> moviesWatched = {"a", "x", "a", "y", "a", "z", "a"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> moviesWatched = {"mam", "aa"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"mam is inside aa's case"};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> moviesWatched = {"a", "x", "a", "y", "a", "z", "a", "p", "q", "p", "a"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> moviesWatched = {"starwars", "empirestrikesback", "returnofthejedi", "empirestrikesback", "returnofthejedi", "phantommenace", "starwars", "returnofthejedi", "starwars", "phantommenace"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"empirestrikesback is inside returnofthejedi's case", "returnofthejedi is inside phantommenace's case", "starwars is inside empirestrikesback's case"};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> moviesWatched = {"ohoo", "malk", "player", "ioio", "qww", "empty", "ass", "dd"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ass is inside dd's case", "empty is inside ass's case", "ioio is inside qww's case", "malk is inside player's case", "ohoo is inside malk's case", "player is inside ioio's case", "qww is inside empty's case"};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> moviesWatched = {"a", "b", "a", "b", "a", "c", "d"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a is inside c's case", "c is inside d's case"};
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> moviesWatched = {"citizenkane", "empty", "thegodfather"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"citizenkane is inside empty's case", "empty is inside thegodfather's case"};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> moviesWatched = {"a", "b", "a", "cc", "a", "c", "cc", "b", "aa", "a"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aa is inside c's case", "b is inside aa's case", "c is inside cc's case", "cc is inside b's case"};
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> moviesWatched = {"eg", "cc", "df", "bd", "fa", "ag", "de", "dg", "bg", "ea", "fe", "ga", "gb", "fe", "gg", "ef", "ca", "fa", "ga", "gd", "fa", "cb", "ad", "ae", "aa", "ad", "cf", "fa", "ga", "dc", "ed", "fe", "ae", "fb", "bc", "ca", "bc", "gd", "fg", "db", "ca", "da", "aa", "ec", "ea", "db", "gg", "aa", "fc", "aa"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ad is inside cf's case", "ae is inside fb's case", "ag is inside de's case", "bc is inside gb's case", "bd is inside fa's case", "bg is inside ea's case", "ca is inside da's case", "cb is inside ad's case", "cc is inside df's case", "cf is inside cb's case", "da is inside ae's case", "db is inside ef's case", "dc is inside ed's case", "de is inside dg's case", "df is inside bd's case", "dg is inside bg's case", "ea is inside ag's case", "ec is inside fe's case", "ed is inside gg's case", "ef is inside ca's case", "eg is inside cc's case", "fa is inside gd's case", "fb is inside bc's case", "fe is inside aa's case", "fg is inside db's case", "ga is inside dc's case", "gb is inside ga's case", "gd is inside fg's case", "gg is inside ec's case"};
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> moviesWatched = {"a", "d", "b", "c", "d", "a", "d", "f", "c", "f", "d", "a", "d"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a is inside d's case", "b is inside c's case", "c is inside b's case"};
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> moviesWatched = {"c", "b", "a"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b is inside a's case", "c is inside b's case"};
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> moviesWatched = {"a", "x", "a", "y", "a", "z", "a", "b", "a", "b"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a is inside b's case"};
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> moviesWatched = {"a", "x", "a", "y", "a", "z", "a", "x", "z", "y", "q", "w", "e", "r", "e", "w", "q", "r", "e", "w", "a", "w", "r", "t", "w", "q", "s", "d", "f", "g", "t", "e", "q", "e", "w", "e", "r", "t", "z", "u", "i", "t", "e", "w", "q", "a", "q", "w"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a is inside x's case", "d is inside f's case", "e is inside r's case", "f is inside g's case", "g is inside e's case", "i is inside y's case", "q is inside s's case", "r is inside w's case", "s is inside d's case", "u is inside i's case", "x is inside z's case", "y is inside q's case", "z is inside u's case"};
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> moviesWatched = {"a", "b", "d", "a", "c", "d", "t", "r", "a", "d", "h", "l", "s", "f", "y", "u", "o", "d", "g", "w", "s", "a", "b", "g", "a", "c", "u", "o", "s", "b", "a", "v", "r"};
    DVDPlayer* pObj = new DVDPlayer();
    clock_t start = clock();
    vector<string> result = pObj->findMovies(moviesWatched);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a is inside v's case", "c is inside o's case", "d is inside g's case", "f is inside y's case", "g is inside d's case", "h is inside l's case", "l is inside s's case", "o is inside t's case", "s is inside w's case", "t is inside r's case", "u is inside h's case", "v is inside c's case", "w is inside f's case", "y is inside u's case"};
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=279471&rd=7997&pm=4781
********************************************************************************
#include <string>
#include <vector>
#include <map>
using namespace std;
 
class DVDPlayer {
  public:
  vector <string> findMovies(vector <string> m) {
    map<string,string> mtc;
    for(int i=0; i<m.size(); i++) {
      mtc[m[i]] = m[i];
    }
    mtc[m[0]] = "";
    string current = m[0];
    for(int i=1; i<m.size(); i++) {
      mtc[current] = mtc[m[i]];
      mtc[m[i]] = "";
      current = m[i];
    }
    
    vector<string> r;
    for(map<string,string>::iterator it=mtc.begin(); it!=mtc.end(); it++) if (it->first != it->second && it->second != "") {
      r.push_back( it->first + " is inside " + it->second + "'s case" );
    }
    sort(r.begin(), r.end());
    
    return r;
    
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/