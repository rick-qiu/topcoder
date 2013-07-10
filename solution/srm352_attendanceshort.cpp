/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7777
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

class AttendanceShort {
public:
    vector<string> shortList(vector<string> names, vector<string> attendance);
};

vector<string> AttendanceShort::shortList(vector<string> names, vector<string> attendance) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> names = {"Justin"};
    vector<string> attendance = {"PAAPP"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Justin"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> names = {"Justin", "Chris"};
    vector<string> attendance = {"PAAPP", "PPPPA"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Justin"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> names = {"Sunny"};
    vector<string> attendance = {"PPPAM"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> names = {"Mansi", "Arjun", "Nikhil", "Taneja"};
    vector<string> attendance = {"PPPPMPPAPP", "AAMAAPP", "PPPPAAP", "PPPAAAMPP"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Arjun", "Nikhil", "Taneja"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> names = {};
    vector<string> attendance = {};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> names = {"iowctwrmwl", "mc", "jmexoxy", "dxex", "mumjotupfc", "srkvwr", "jwvu", "jqervoir", "zxicydu", "vjqfuspdcg", "bzbg", "eiz", "mwrqtaeyjl"};
    vector<string> attendance = {"PPAA", "PAPA", "PPAMPAPPAMM", "PM", "PAPP", "PMMPA", "PMAMMAPAM", "PA", "PAAMMAAMMPP", "PAAM", "PMAAMMAAMM", "PAAPMMAPM", "PPMMMAMMPPP"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"iowctwrmwl", "mc", "jmexoxy", "srkvwr", "jwvu", "jqervoir", "zxicydu", "vjqfuspdcg", "bzbg", "eiz"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> names = {"nqy", "qaflpur", "r", "ikzljaeo", "ldczmewgmc", "ioltesl", "kyqmaduyt", "p", "luczdmgjfl", "lxrlvbli", "wybnfjapv", "cyjsdrk", "auablfdeq", "paykbtsyw", "wuzqzeo", "zsrmity", "bzpkhnij", "q", "yxcf", "uwzuz", "prk", "ty", "rbcgx", "yaayc", "hdjujhtrio", "joigpw", "sss", "pbiqf", "o", "zoufjjav", "ugeysrflya", "wqpvj", "dd", "nmazbknccw", "zlj", "rfxtwg", "kdfcvrwkek", "ygih", "epukpqut", "biteeey"};
    vector<string> attendance = {"PAPMMMA", "PMPAAMMP", "PAAPMAAMPMM", "PMAAAP", "PAMAM", "PMMPAA", "PMAPAPPPMMM", "PAMAAPMAAM", "PMPM", "PAA", "PMPMAAA", "PMMMAMMMAAA", "PMAMPPPPM", "PAAPAAMPAM", "PM", "PPPM", "PAAMMMMAMA", "PAPPMMP", "PPMM", "PPPA", "PPA", "PMMAAMP", "PPAAAPM", "PMMAMMMM", "PAAPM", "PPMPPM", "PMPMPM", "PMMA", "PMA", "PAP", "PPAMPAP", "PPAMMMAPAAM", "PAA", "PAMPPAAMAA", "PPMPPAPAP", "PPAA", "PAAAAMP", "PAMPPAM", "PM", "PMMMMMPPP"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"nqy", "qaflpur", "r", "ikzljaeo", "ldczmewgmc", "ioltesl", "kyqmaduyt", "p", "lxrlvbli", "wybnfjapv", "cyjsdrk", "paykbtsyw", "bzpkhnij", "prk", "ty", "rbcgx", "yaayc", "hdjujhtrio", "pbiqf", "o", "zoufjjav", "ugeysrflya", "wqpvj", "dd", "nmazbknccw", "rfxtwg", "kdfcvrwkek", "ygih"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> names = {"qrbonirb", "ofdgai"};
    vector<string> attendance = {"PMPP", "PPPMA"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> names = {"wc", "uthtk", "wsaxn", "gpayja", "ya", "raezi", "wtwdkdb", "vxn", "gwbqxihp", "vc", "tgcozvtus", "fcb", "gsopcroipv", "ifqzjzu", "ymkzl", "g", "v", "piqbfgosv", "uu"};
    vector<string> attendance = {"PMAA", "PMAM", "PPA", "PMAAMAA", "PPMA", "PMMMPAMM", "PAAAAAMM", "PM", "PMAAAMAP", "PP", "PMAAAP", "PAA", "PAMMMAPP", "PPMAMPAAAAA", "PMMMPPM", "PMAMPMMMPMA", "PMAMMMPMA", "PPAMPAM", "PPMAP"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"wc", "uthtk", "wsaxn", "gpayja", "ya", "raezi", "wtwdkdb", "gwbqxihp", "tgcozvtus", "fcb", "gsopcroipv", "ifqzjzu", "g", "v", "piqbfgosv"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> names = {"kic", "mgx", "llhwbhqz", "t"};
    vector<string> attendance = {"PMAMPA", "PAAAA", "PPMPAMP", "PAMAAAM"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"kic", "mgx", "t"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> names = {"rilxej", "dpcatzm", "jte", "siwlmn", "kjye", "juynnbtbmq", "zlx", "bygtrypjx", "cioqqupo", "ctbj", "ksn", "qje", "qybj", "impodkhj", "jydwmhc", "aadciypoja", "naqmlqj", "eykydkev", "rlgzs", "phrt", "d", "hzzqsplr", "mj", "zibyjhvpi", "sbxkced", "dla"};
    vector<string> attendance = {"PMAAMMMMMM", "PPPAAM", "PMMPMMM", "PMMMM", "PPMMMMM", "PMAMAAA", "PPPPAAAMPAA", "PPMMMP", "PAPM", "PAAP", "PMM", "PMMMMMP", "PMAAPP", "PPMMP", "PAAPPM", "PPMAAA", "PMAMAPMMPMP", "PMAAMMMAA", "PMPAM", "PA", "PPMMAPMMMMM", "PM", "PAMA", "PMMMMAMAM", "PAMAMAAAM", "PMMAMAMMM"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"rilxej", "dpcatzm", "juynnbtbmq", "zlx", "cioqqupo", "ctbj", "qybj", "jydwmhc", "aadciypoja", "naqmlqj", "eykydkev", "rlgzs", "phrt", "mj", "zibyjhvpi", "sbxkced", "dla"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> names = {"kbnfyrw", "xm", "vhp", "wycluf", "w", "b", "kjgtv", "rggf", "bpbn", "lcxurwqryr", "q", "ucedgxjvrf", "kwzuitnyge", "ozbzbe", "oxivhqmw", "cnxtakk", "lejxtcgw", "zfhvfrfc", "ljnavcdohg", "br", "xwzhuta", "rtdfobj", "xcksko", "dpymt", "xdprucsls", "lojhynxu"};
    vector<string> attendance = {"PMMPAMPPPAA", "PAMPPA", "PPAMMMAAA", "PMPAMPMMMM", "PPAMPAM", "PPA", "PAM", "PPMMPAAAPM", "PPMMMAPAMPP", "PMA", "PAMAPMAA", "PMMMAAPP", "PMM", "PAAMMMA", "PAMAPMMAMP", "PMMPAP", "PMMA", "PMMPM", "PPMAPMMMP", "PPAAPMMPMA", "PPAAMPA", "PMMAMPMMMAM", "PAMMAPMA", "PMP", "PMAMAPMAA", "PAMPPPPP"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"kbnfyrw", "xm", "vhp", "w", "b", "kjgtv", "rggf", "bpbn", "lcxurwqryr", "q", "ucedgxjvrf", "ozbzbe", "oxivhqmw", "lejxtcgw", "br", "xwzhuta", "rtdfobj", "xcksko", "xdprucsls"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> names = {"rbueqse", "adpqiuig", "nft", "vsm", "cbsqstom", "v", "nesvfxgg", "fbteb", "jzinvk", "xzvyneva", "rumkgr", "xooaq", "oiaieos", "utwq", "heqzac", "zalzgymc", "jsuptln", "a", "enrczik", "w", "ughrsecst", "q", "g", "lgp", "e", "txdmwwn", "unt", "gdgbqea", "qdid", "lzbdbr", "ted", "cgfm", "vqwta", "glvamkcsja", "ztqdq", "bcowcgvuz", "gxrigpidvj", "dzfyaocmtt", "zpnbxy", "vcsfyv", "tjrwvxzb", "csude", "l", "lfvrxksxu", "evlwwxoc", "ml", "hrevkqt", "juj", "rwqed", "dingdong"};
    vector<string> attendance = {"PAA", "PAMMMM", "PPMM", "PAAAAMAMPMM", "PMPPPPMMA", "PMM", "PAAAPPAPMA", "PMMP", "PAP", "PMPMMPMMAAP", "PMPMMPPM", "PMPMAMPM", "PPMMMPP", "PAMAAMMMM", "PPMAPAAMM", "PPAPA", "PMMM", "PMPAAAMMAA", "PAAPAAAAA", "PAM", "PA", "PPP", "PAAAMPP", "PPPMAM", "PAAMPAMM", "PPPAMAMMP", "PPMMPAMP", "PMMMMAAA", "PP", "PPPA", "PAAPAMP", "PMMMMA", "PPMAMA", "PPMAMMAM", "PAMMAAA", "PPAMMMA", "PMMAMMMAAA", "PM", "PAM", "PAMMMMAMMMM", "PAPPAM", "PPMMPMAPPA", "PMMMMMMMAPA", "PPMAAMPPM", "PMPMMPAM", "PP", "PP", "PMAAAAP", "PPAAMAAPA", "PPP"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"rbueqse", "adpqiuig", "vsm", "nesvfxgg", "jzinvk", "xzvyneva", "utwq", "heqzac", "zalzgymc", "a", "enrczik", "w", "ughrsecst", "g", "e", "txdmwwn", "gdgbqea", "ted", "cgfm", "vqwta", "glvamkcsja", "ztqdq", "bcowcgvuz", "gxrigpidvj", "zpnbxy", "vcsfyv", "tjrwvxzb", "csude", "l", "lfvrxksxu", "juj", "rwqed"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> names = {"nty", "nd", "u", "eh", "tosyvn", "ctwodnk", "xgusp", "czyazwk", "nst", "byc", "ggmojiqw", "xkhuvuptfp", "lbjiaszi", "ablm", "jrettatwoe", "utb", "lonhuntjg", "frlcw", "cugshr", "eqtyn", "npm", "hfswkay", "yrpqkk", "lgztx", "uzb", "pixvudbnw", "cxoc", "tfnqm", "wgfuibvr", "rrywi", "h", "xocgzknlsq", "ur", "cprqcghr", "svp", "jfbmf", "w", "opqmsalu", "dnvhil", "fbfs", "uhndtgh", "hov", "wprn", "ebzlhqrapd", "rrxj", "vppsn", "baoubb", "cticg", "dhhlmoq"};
    vector<string> attendance = {"PMPAAA", "PMAPAM", "PPMPP", "PPMM", "PMAAA", "PPAMPPMM", "PMAMMMPMMM", "PMMAA", "PPMAAAMMP", "PMMPMAMMAA", "PAAPPMAA", "PAPMMMPMAA", "PAMAPMAMAA", "PAM", "PMM", "PAAMMM", "PMAMA", "PAAPAP", "PMM", "PAAA", "PMMAPMMAAAM", "PAAMM", "PPPMAPPM", "PMAMMMM", "PM", "PMAMMM", "PAPAAAMPAMM", "PA", "PMPMA", "PAMMMMPM", "PAAAMPMMMA", "PAPAPMA", "PPMP", "PMPMAPPM", "PPAAAAMMAMA", "PPPA", "PMAAMAAM", "PPP", "PMAAAPPPM", "PMPPAPMMMM", "PPAAMPA", "PAMAMMMPM", "PMAMPPPMPAA", "PAAAAMAMMMM", "PPMPAMMAMP", "PPMAAMA", "PPMAPPPAMM", "PMAMMAPA", "PMPM"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"nty", "nd", "tosyvn", "xgusp", "czyazwk", "nst", "byc", "ggmojiqw", "xkhuvuptfp", "lbjiaszi", "ablm", "utb", "lonhuntjg", "frlcw", "eqtyn", "npm", "hfswkay", "lgztx", "pixvudbnw", "cxoc", "tfnqm", "wgfuibvr", "rrywi", "h", "xocgzknlsq", "svp", "w", "dnvhil", "uhndtgh", "hov", "wprn", "ebzlhqrapd", "rrxj", "vppsn", "baoubb", "cticg"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> names = {"xrnjvgllpy", "jofbl", "knsizw", "xrhnubjwz", "sp", "phxjqjir", "ok", "sw", "vdzvdi", "bzmehapu", "bmlm", "awhhbkl", "nismjforkq", "ysvbr", "suarammaq", "oizspx", "oamh", "eelzjaii", "tlcl", "gc", "rfwdrzdzsk", "ucdsyz", "dcjgzd", "rwkkiwoiy", "k", "djdkosrzzj", "gbbtdcgddg", "jbitddnsc", "zn", "kcfyjpk", "shrtuqiik", "ughy", "kacpbka", "sxrqke", "wrfhoid", "xr", "urrjvbtj", "meat", "xoyxvm", "htuswa", "rglelj", "j"};
    vector<string> attendance = {"PAAM", "PAPAAA", "PM", "PMAAMMAM", "PMPMAP", "PMAMPMMPMM", "PPA", "PMMAMPM", "PMMAMMM", "PMMPAMMAA", "PMMPPMM", "PM", "PMAMP", "PAP", "PMAPAAAAAM", "PAAPMP", "PMMP", "PAMPAPMM", "PMAMMAMMMMA", "PAAMAMMAPMM", "PPAA", "PPAMM", "PA", "PM", "PAMMM", "PAMM", "PAAPMMAM", "PAMMM", "PPAA", "PAAMMMAPA", "PPMMM", "PMPM", "PMMMPMMMAAA", "PPMMMM", "PAMMM", "PP", "PAMMMM", "PAAMM", "PPAPAMP", "PMPA", "PAMMAPPAMA", "PMAMMM"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xrnjvgllpy", "jofbl", "xrhnubjwz", "ok", "sw", "vdzvdi", "bzmehapu", "nismjforkq", "ysvbr", "suarammaq", "oizspx", "eelzjaii", "tlcl", "gc", "rfwdrzdzsk", "ucdsyz", "dcjgzd", "k", "djdkosrzzj", "gbbtdcgddg", "jbitddnsc", "zn", "kcfyjpk", "kacpbka", "wrfhoid", "urrjvbtj", "meat", "xoyxvm", "htuswa", "rglelj", "j"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> names = {"fkhulhowofyotrqxwuyblszkhvhjqjmukryvmlmdojccodfmti", "qjbseqbbjhbotxhylizyhuraoxzwmmdfmzxokbddzghfigqnbu", "ewevhwhsblznvipschrhktgkblcphlrvsmetjfvytdsrxxbnzq", "rwdfzewykcqvtenkizdsvvavvlhxndtxpxojcumilfmkxmyorb", "pijflmjdwypufekacesyjbcsimrbxfhpbrpidlepkgwppgyyzs", "vzaswneiarohusvopykkmgbfynbpyhvtmucwoyxrkmlonbnawn", "wahiegkdsoodhaqmipabqqbzhpaqqljpovuyuedisrnrvamcuo", "oltfqsvybtsnkwlvvdwzjgonqiikfkqwtcgrkmlicwrwbpgaet", "gazxhaedsagnhznaljmzuxmzxekjultxopkkaokxihdjxvjeht", "wtpxgcmtpcayykncntefbmsxkioublrmvyfsixwtahdxgnovuw", "hqfdijburdtkxnwirjzhtyffrvfqxknqdmadloqytzxihkmckc", "nvitdmuxgqadcdzxdpghusnehbtnevqdkbkqkgapnzjovmoyem", "imienhiwlgrjcpoywfsizwcehcunepeqamdhppmfmwiugjroff", "hrfcbwbediwlrmwylquzcgesoapyyyvrsswaivkcguhllkbrou", "ircirebvxrmicbogoezrloioitedyohjleporkjmliucjvbciu", "zmoequbzncduysmhxenhlvlogsxpejrvuosbdianbwibpahvxc", "ysurtpaaejwyzczoggltizoyqfywrmysgtamkzeomtwhgtoddt", "dayloookccnzmvvxxbczwksmresrbrfviniwafttlzoafvdjga", "yhuljjgsprswokqqjogeybvukbiucjclmlfwcwcrjdsdetwnje", "edorszncxrufhzxwtnemrsqnmlbwyloqfkyxrcrbpftzujgaye", "sxnndbnkrjjtmewzbwhecqbrxqxhfsggosxkzdfvejzbtbsbly", "uivukwnvfbxothkyeoarnqhvjioegffqfwyrnvxdadsupcokvi", "upgshhwmasqxzrhndtuaiwpllmbjdxbtzajpvwublorqmljkqj", "lrkuurfjqnusvmttdniqitwtlnyxldktvsedvkaxbhvrotpeko", "xgnwjxyzanmuqzvoxlnhgcczpclsqbudagkctovbxgjqlgwiyp", "iurztzseqymbxjchuezhfdryntecrbfkxisbayffyubveevmki", "rcsgmlugfglykpohdfhngctoxuzscjbqupmyjqxnpfdhdtyenb", "garbejaljcekaztglobcqhndiopygamkgnumtnhxikdydhsrlh", "flxvzhzhwnwviazltysxejnygaebussinucegfllyozibmzsto", "zegktcorgejtxjstliwmsekavnsvufxzmzhpldesznqgduqykp", "fnscscevsiimsqmqajkwiglzpujfuwihhvkbmjpyltzmjinbqe", "lxtmnobqhtamiknfvqeuvulweefhmklyslxnkjneflzctlxuyg", "kjkszogguteuvyaetyshmlnxkvpoiucfqqxaozjmfjkvhgftem", "rnmtnkplfwvkwgwrccntcxbhxpzsonpapnslhzsymytiztvnpd", "dgktdgchkcmysxjkqwzmanvhttljpgryqumxzexrufpxmhwptw", "fzcgrvswatfidqwpmzktmckeesuqoccookccrdowlvjllyywxs", "epdwdxqgftcjfxmgannciexbuxcgqxrbcyrqxhanvxmcklfqcy", "eiyaufnnsjeividubqygqwzufujtftnlvbtfmrnxqrqmgntqbc", "brhhlqzxuhondfbrieqfkmezimgnxlnvanagoujhjsanttuzmy", "haktybadmybrjxjectjwrbdupplojvynngznkcjwhzunpvhhlj", "xnmyoytaqcfxrrdbpyxfinvgffqbamqzwrfoxfbpiczjjzxrvd", "gampvgpgrhdqvrdbexeqbrldpglnmsidejxgxydpoyydiitoav", "lmvmgqxwyvmlmbsfjirwvmkxixuamnpaxcmoadtlgihqnvtpur", "hhhthnidthhooaorwdroaeylupdkfwioddtikxssfzrdjxqwkc", "nuuqjdztbjtlgsgnclwcnqbumifhakzqkqcchafwqvizumhxry", "pkpnlxmavicyvuqkmllyyjrgtclwwzxugthevbzhtxthjpxjtz", "fchnzdfyisaqradotudcttwyzbelmerrbossjrzipiorvytwnh", "tvhpvorjafaohrnmdyjuruoypsxvkrmtdhrqzlfwwojxnyskvu", "wgsvnssoltwmdqudpddsnvoqacgjqhddsflnezqbotezegcglb", "usnfjwvlzgzfvffkcjcngedmdnqryhapplektilkvclmgbsfzl"};
    vector<string> attendance = {"PMPPAPAAMMAAAMMAAMMMMMAPPMMAMMMPPMPMAAMPAAMMMAMAPM", "PAPMPAMMPPAAMMPMMMAPAPMAMMMAMMAPMMMMAAAAMPAPPPAPMP", "PAMMMAAAPMMPAPMPPMPPMMAPAMMMMAMMMMAMAAPAAMAAAMMMMM", "PPAMAPAAMAMAPPMPAMMAPPPMMMMPPAMMAMMMAMAAPAAAMAAAAA", "PMAMAMAMPMPPPMMMPPMAMAMMPPMAMAAMAAPAMPAAMMAMPMMAMA", "PPAAPAMMMPMMAPPAMMPAMAMAMPMAAMPPMPAAAAAMPPPAPPAAMP", "PAAMAAMAMMPMAPMMAMAAPMMPMMPMMMMMAPMAMAAMMMMMMPAAAM", "PAMMPAMMAPMAAMPMAAMMMAMMAMPMMAMMMAMAPAMAMAAAAAMMMM", "PMAMPMMAMMAAPMAMMMAAAPMMPAMPMAMAAMMAAAMMMAAAMAAAAM", "PMAMMMPAMMPAMPAMMAMPMAAPPAMMPMPPPAPMMAPMMAPMAPMPAP", "PMAAAAPAAMMMAMMAMPAMPMMMMAPMMAPMAMMAAAMMAAPMMAMPPM", "PAMPAAAMMAPMAAAMAAPAAMAMMMMAMAPAMMPMAMMMMPMMAAMAAM", "PMAMAMPMPPMPMPMMPMMMPMAAMAMMAPMAMMMAMMPPPAAAAMAAMA", "PMMAMMAAMMAPPMAPAAAAMMAMAMMAAAAPPMPAAAAMMPPPPAMPMM", "PAMMMAMAMMAMMAAAMAAAAMAMMMAAPPMPMAAAPMAPAMMAAAMAAA", "PAMMAMMMMMMMMPMAAAMAAMMMAAMAPPAAAMPAMMMMMMPMPMPMPM", "PAAPAMMMPAAAMAMPMAAAMAMMMAAMAMAMPPMAMAAAMAMPMMMPAM", "PAMPAPMPMMMPAMPMMPPAPPAAMMMMAMMPMMMMPAMAMPPAMAPPMM", "PAAPMAAMAAAMAMPMMAPPAAMPMMMAMAPPMAPPMMMPAAMAMMAMAP", "PMAAMAMPMPMMAAMMAPMAMPMMMPMMMAAMMAMMAPMPMMMPMAAAAP", "PPPPAMAMMMAMAPMMMAAMMMMAMMMAMMAMMPMMMMMMAAMPMMMMMP", "PPAPMAMPMMMMMAMAAMAMMMMPMPMPAAPMAMMMMAPAMPPMPPPAMP", "PAPMPAAAMAAAAMAPPPMAAAAMMMPMAMMMAMPPPMMAMAMAMMMAAM", "PMPAMAMPMAMMAMMPMMMAPMAPPMPMAMAAMMPMMAAAAAMAAMMMMM", "PAAMAPMAMPMAAMMMMAMPMPPAMMAPMMPAMPPMPAAMAAMAMMPMPM", "PPAMMMMAMPMPPAMAMPPPAMMAMPAPAAAMPPMAAMPMPMPMMPPMAP", "PMMMPMPAAAAPAAAMMPMAPMMAMMMMMMMMMMPMPPPPPAMAMMPMAA", "PMMAMAMMAPMMPAPPPMMMMAMPAMAPMMAMAMPMAMMPPAMAMMAPMP", "PMAMMAAAMAPMMAAMPMMAMMMMPMAMMMMMAPMPPPPPPMMAMAAMPA", "PAAAPPMAAMPAMMAMAMMAMAMMMAAPMAPAPPAAPMAPMMPAMAMAAP", "PMAMPMAAPAPMMPMAAMAAMMAAMMMMMAAMAAPMPMPMMAAAMAMPMA", "PAMMAAMPMPMPPAAPAMPAAMMPMMMMAAMMAMMAMMAMMAAMPAAAPM", "PPPPPMPMAAPPMMMPMAPMMPMAMPMPAMMAPMPAMPPMPMAMAAMMAP", "PAMAPMMAMMAMPMMMPAAMMAMPMMAPAPAPMAAMMPPMAMMPMAPPMM", "PMAAPMPAPMPMPPPMAAAMPAPMMMPPAPMAMMMAMMAAMMAAAAAPPA", "PAMAPPPMMMMAMMMMAMPMAAMMMPPMPMPMPMPPPPMMPPAAMMMMAA", "PMPMMPMAMMPMAPMPAMMPAMMAPAMMMPMAMMMPMMMAAMMAMAPAMM", "PMMMAMAPPPAAAMPMAAMMMPAPMAAAAAMMAAMPMAMMMAAAPMAPMA", "PMMAAMMMMMAMAMMMAPAMPMAAPPAMMPAAMPPMPMAMPMMPAMMAAM", "PAAPAMAMPMMAAAPMMMPAAAAMAAPPMAMPPAAMPPPMAMPPPAPAMM", "PAAMMMPMAPMPMAAAMMAMMMAMMMPAMMAPPPAMMAAMPMAAMAPAPA", "PAAMMAAAAAMPPAMPMMAAMMPMMAMMAMAPAPAAAPAMMAMMMAPPPP", "PAAMPAPPPAMAAMPMPMMMMMAAAAAMMAPMAPPPPMAMPAMMPMAAPP", "PMAAAAMPAMAAPAMAAAMAMPAAPPMPMMAAAAPPMPPPMMAPPMPMPM", "PMMMAMAMAMAMAAMMMMAMMPPMPPMPMAMPAAPMMPMAPAMAAMMAPM", "PPMMMAAAMMAAAAMAMMPMMAAMAPAPMPMAPAPPAMAPAMAPMPAMMM", "PMAAMPMMAMMPMAMMPMMPAMAMAMMPMMMPPMAPAPAAMPMMAPMAMM", "PMAAAAAAAAAMPAMPAMAMMMMAPAMMMPPPMAAAAAMPAMAMAAPMMM", "PPMAPMPMAAPAMPMMAAAMPAMPPPMAMPMMPMMPMMAMMPMPPPMAMM", "PPPMMMAMMMAMMMMMAMMMMAMMAAAAMPPMMPAAAMMAMPPMMMAAAA"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"fkhulhowofyotrqxwuyblszkhvhjqjmukryvmlmdojccodfmti", "qjbseqbbjhbotxhylizyhuraoxzwmmdfmzxokbddzghfigqnbu", "ewevhwhsblznvipschrhktgkblcphlrvsmetjfvytdsrxxbnzq", "rwdfzewykcqvtenkizdsvvavvlhxndtxpxojcumilfmkxmyorb", "pijflmjdwypufekacesyjbcsimrbxfhpbrpidlepkgwppgyyzs", "vzaswneiarohusvopykkmgbfynbpyhvtmucwoyxrkmlonbnawn", "wahiegkdsoodhaqmipabqqbzhpaqqljpovuyuedisrnrvamcuo", "oltfqsvybtsnkwlvvdwzjgonqiikfkqwtcgrkmlicwrwbpgaet", "gazxhaedsagnhznaljmzuxmzxekjultxopkkaokxihdjxvjeht", "wtpxgcmtpcayykncntefbmsxkioublrmvyfsixwtahdxgnovuw", "hqfdijburdtkxnwirjzhtyffrvfqxknqdmadloqytzxihkmckc", "nvitdmuxgqadcdzxdpghusnehbtnevqdkbkqkgapnzjovmoyem", "imienhiwlgrjcpoywfsizwcehcunepeqamdhppmfmwiugjroff", "hrfcbwbediwlrmwylquzcgesoapyyyvrsswaivkcguhllkbrou", "ircirebvxrmicbogoezrloioitedyohjleporkjmliucjvbciu", "zmoequbzncduysmhxenhlvlogsxpejrvuosbdianbwibpahvxc", "ysurtpaaejwyzczoggltizoyqfywrmysgtamkzeomtwhgtoddt", "dayloookccnzmvvxxbczwksmresrbrfviniwafttlzoafvdjga", "yhuljjgsprswokqqjogeybvukbiucjclmlfwcwcrjdsdetwnje", "edorszncxrufhzxwtnemrsqnmlbwyloqfkyxrcrbpftzujgaye", "sxnndbnkrjjtmewzbwhecqbrxqxhfsggosxkzdfvejzbtbsbly", "uivukwnvfbxothkyeoarnqhvjioegffqfwyrnvxdadsupcokvi", "upgshhwmasqxzrhndtuaiwpllmbjdxbtzajpvwublorqmljkqj", "lrkuurfjqnusvmttdniqitwtlnyxldktvsedvkaxbhvrotpeko", "xgnwjxyzanmuqzvoxlnhgcczpclsqbudagkctovbxgjqlgwiyp", "iurztzseqymbxjchuezhfdryntecrbfkxisbayffyubveevmki", "rcsgmlugfglykpohdfhngctoxuzscjbqupmyjqxnpfdhdtyenb", "garbejaljcekaztglobcqhndiopygamkgnumtnhxikdydhsrlh", "flxvzhzhwnwviazltysxejnygaebussinucegfllyozibmzsto", "zegktcorgejtxjstliwmsekavnsvufxzmzhpldesznqgduqykp", "fnscscevsiimsqmqajkwiglzpujfuwihhvkbmjpyltzmjinbqe", "lxtmnobqhtamiknfvqeuvulweefhmklyslxnkjneflzctlxuyg", "kjkszogguteuvyaetyshmlnxkvpoiucfqqxaozjmfjkvhgftem", "rnmtnkplfwvkwgwrccntcxbhxpzsonpapnslhzsymytiztvnpd", "dgktdgchkcmysxjkqwzmanvhttljpgryqumxzexrufpxmhwptw", "fzcgrvswatfidqwpmzktmckeesuqoccookccrdowlvjllyywxs", "epdwdxqgftcjfxmgannciexbuxcgqxrbcyrqxhanvxmcklfqcy", "eiyaufnnsjeividubqygqwzufujtftnlvbtfmrnxqrqmgntqbc", "brhhlqzxuhondfbrieqfkmezimgnxlnvanagoujhjsanttuzmy", "haktybadmybrjxjectjwrbdupplojvynngznkcjwhzunpvhhlj", "xnmyoytaqcfxrrdbpyxfinvgffqbamqzwrfoxfbpiczjjzxrvd", "gampvgpgrhdqvrdbexeqbrldpglnmsidejxgxydpoyydiitoav", "lmvmgqxwyvmlmbsfjirwvmkxixuamnpaxcmoadtlgihqnvtpur", "hhhthnidthhooaorwdroaeylupdkfwioddtikxssfzrdjxqwkc", "nuuqjdztbjtlgsgnclwcnqbumifhakzqkqcchafwqvizumhxry", "pkpnlxmavicyvuqkmllyyjrgtclwwzxugthevbzhtxthjpxjtz", "fchnzdfyisaqradotudcttwyzbelmerrbossjrzipiorvytwnh", "tvhpvorjafaohrnmdyjuruoypsxvkrmtdhrqzlfwwojxnyskvu", "wgsvnssoltwmdqudpddsnvoqacgjqhddsflnezqbotezegcglb", "usnfjwvlzgzfvffkcjcngedmdnqryhapplektilkvclmgbsfzl"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> names = {"nkqwuufuyvbvkhnyyaovrbsrfhkdneqahpgpnwohendgqeyozr", "azofpzsoypngsojldgxmgfieehzuwchhqqybkcgbaweaqbfdal", "ukxonjetsmbilumeaxlvhuprthpxtzuppzzxavhxiaxkyjsnmf", "ssbvzpgavgmlusmymytwtcsemfnwxvrxkwbxacxzuupvnlsecl", "xskshgguagfkhtmogvtajgbzaeomtdfudavfamjgoipwsldswf", "xgrdnvtirbkanlwsomekdbgymqokvyrxkubkxlsjfzbwdfogbj", "uwneonmdolfzvpxhacbrapztcgwxamgacicpsbtbhiwwrronvp", "uzwpwgrtgbxvugrxgkwtxyhfhnjxuzcdjogknpljeqgvswafgk", "kzpjhqlfnyzarslvtwxhbwanmhbtbqyftnfdotfjbypcgdecva", "vedbdhovoxqyrxdsdyvyljpwbzgdnijnovtqalaelerltkczaj", "ihcxwacmwncthuonaueydrvjprvsrjvbfhaoezewqnoqsvdqep", "cyvaramxazlmijnfsxkkhghdqmznmqxlbzaaxbdswaechogfjx", "sujrtutzxhhgdjjnjvnkwsjtqiokfzkzqjmcjwopguuryqklqv", "yuewwhglwwfnrjzdgoiixdgbboatbocldhwuiepopoxffqishn", "lhghlldnydjcerpzvriwdjnuwhxfiugprgbqrexsdywoevukwl", "dogljlwtzakfuoykyckxjelzsyqqnlgwkgnnqediktlntzkhii", "ohrnljgomjtqwhactideqmmhuyplxtjqtlwgpvofdxziowymgj", "ddjimjmycqzvweeucietdtmjfqcsurqjiosukssdiyjdffgxso", "reqwvblvbpkxtlhctvstjwbnsnokgdacgtgpnoqsdlnnmrcdbm", "lxnqpdlrslauqunxskwaqaajgmxndllhxpmndlqjllqmnzmtfg", "wetpnwrypxtibgfzdemoynyecwvywvbinxaafcwmvsbrubfnfg", "vapjacicnhrqntqhtulhgtxmamiymetjfgolpkzhvfucyanrcx", "blnxpzsfnjyfwfdzhxkicqssbeijbrhyojgqdxqhrewkmbgvog", "amjrgrblqqqcgikdluucvnyqrwccmnfrnkmmwzgygoqstumxfe", "yixcpybalngwitjiqrdfikdrrlniweisvtszlugfpnpdxvimrp", "afhbfrhwiddjqwowjzzysqrrlvnsdqsysbgkhmzleujnjkebne", "blrghuwykoynpkwvkgplqruibljjmwpjzyjgsjizlphqmrvxrx", "ecsxobktfjqslvfrbbquviugwqkmozprnhczeaqmesdlqfbwkb", "zrvulpemzlssrkiswomznwixcabklgldgfswhazzzglethaten", "tsksspbvlvujuaqwteutneghdytjichkjbrgddolbsykbqnntc", "qozdubgoycoxatmydmjrpbaallkejaqhfnwjdxmcltnkdofbxn", "fxtrlwfosiwuapdfdmnrrvftepgkmtuxhcipbuzxlbmbzovfal", "maimphuhnzcyduygovicmgerjvdvcimhtasatyvttpordcyetu", "xeqzmjmdopzmgnzxhmuqnmdbnybsfsnvrljtkgmgslnuzsphrr", "eekttanwzgiiqmejchnwzsujizqcdavltizhihtcvlxyhpuyxj", "hzhjndmepaymbfyndhkqytkqfpzwnzmpocedhgdaryhcppgchv", "decrlomhjiindkkysfdwufevonjslkqvvkchxfnhmvrnyukjel", "rjhmyzwcpjpqzfykicxzkjjucvteyukwzyhutijlbygzltgwgv", "utrsuioanerndiqgwteaklhlmfvdkiysbqyjypyognnwxylmdj", "hpndsstfpiuhvobitjdsxiyanjtxpvvpqfjidnkvdyyxfpoejz", "bjqohbtshfukhmvgpfakeykpfmjiodtcbpznxgimnzpiyedjtp", "xmgbxrdyyycqlhcerrekfqyifapiihumxainebozyzpwssxygg", "btkajnkpiossvxvykweuyiybasfiuwckvcbruxqfuewglrwnky", "osspbwomgkcoyiktbbrkaoplhhtlumuhkmcpozamepaextbbfr", "zmgxkmmsaxhromitkyynzzlngpbgnxxmhoptcejcjjeskuumso", "wozvukgywwtvdeyafqngzntbryolcktwbtwtfusiorjladlqnt", "ejttukfclmywpsjtfkanncwasgocfhjyedbbijpnplocdbhljs", "enraoxiobmrjzmqffxkywjqbebrdpjuvjjcvcmyqnuerbtiobo", "ccfvmpikdfskgiebyvyetcodfhcitoeaihwvberqnswfqmxohb", "ekbvjopsnpenzcbtzudbpwiavrrfjiqnlptohlmwqcewcfyrba"};
    vector<string> attendance = {"PAAMMMMAMAMMMMMMMMMMMAPMPPMAAAAAPPMPMAAMPPPAPAPMAA", "PPMMPMMMPMPPMAMMMAMMPMMMPPPMPAMMMAAMMMMMMAMPPAPMMM", "PMMMMMMAAAPMAAMPAMMPMAMPPAAPAAMPPAMPAAMMMMAAMPAAPA", "PAAMAAPPMMPAAPMMAMAAAPPPMMAAMAMMAPPAAPAMMMMAAMAMMM", "PAAAAAMMMMPMPMPAPPMAMMAPAPAMAMPAPMAAMAAPAAMMMPAAAM", "PMPPAPMPMMAAPAMAMAAAAPMMAAMMAAAAAMMPMAAPAPMAPPMMAM", "PPPPMAAMMMMAPPAMMMAAAAMMAAAMPMMMMMMMAMMMMAAMMMAMPM", "PMPAAAPPMAMMAPMAMPPAAMMMMPAAMMMAMAMMMMMAAMAMMAAPMA", "PMPPAMMPMMAMAAMMAAAMMMMMPAAMAAAPPAMMMMPAMMPPAPAMAA", "PAAAAAMPMAMMAAPAAPMMMMPAAPMMAMMAPAMMMMMPAPMMMMMMPM", "PAAAAPPAMPMAMAMMAMAAAMMMPAAPPPMMMAPMPPAAMAAMAMPMMP", "PMAPPMPMMAAAAAPMMMPMMMMAMAPMMPPPAAMMMPMAMMAAMAPMPA", "PPPMPMPMMAMAPPPPMAPMMPPMMMAMPPAPPPMAAPMMMAMAMAAMAM", "PPMMMAMMPMMMMMMMAAMMPPAMAMAAPAMPPMAAAMAMAMAMPMAAMA", "PPMAMAMMMMPMMMPMMMPMAPAPAAMMAAAMMMAMMMAMAPMMPMAMMA", "PMMAMPMMPAAMPAAMPAMAMPPMPAAPPMAAAPMMPMMAPMMMAMAMPA", "PMPAAAAAAAMMAPAMAAPMPPPPMMPMAMMAPMPPAAPAMAPAMMMPPP", "PAMAMMPAPAMMAMMAAMMAMAPMMAMAMMMAMMMMAAAMMAAPAPPPPP", "PPAMMMAMPAMPAAAMPPMPPPAAAMAMMMAMMMPAPAAAMAMAMPMMMA", "PAAAAMMAAAPAPMAMPAMMMMMPPMPMPMMAAAAMMMAMMMMAMPPPAM", "PPAAPMAPAAPMPMAMMAAMMAMPMMAMMMMAAAPPPPMMMMPMPPMAMA", "PMAAMAMAMPMMAMAMAMPMMPMAMAAMPMPMMAMAAPMMMAAAAAMMAM", "PMMMPAPMPPAAMMPPAMPMPPAMMAPMMPAAPPPAAMPAMMMMPPAMMA", "PPMMAMPAAAAMMPAAPMMAMPAMMPPAPMMAMMAMAMAAMPAPMMPMMM", "PPAPAMMPMMMPPMMMMAAMMPPMAPAMMMPMMAPMMAAMAPAMPPMPMM", "PMAAAPMMPMAMAMMMMPAAMAMMMMMMAAAAMAPAAMPAPAMPAAAAMA", "PAMPPPAMAAMMPMMMAAMMMMPAMAAMAMMPAAAMAMAMMMMMPAMMMA", "PMPMPPAPMMAAAPMAMAAMAAAPMMMPMMMAMAAMMAMAAPMMMAPMMP", "PMPAMAMPAAMAMMAMAMMAAMPAAMPAAPAMAPAAMPMAAMPMAAAMMM", "PMAMMAAMAAMPAMPAMPAPAAPAAMMAMPAMAPAMMAMAPPAPPMAAPM", "PPMPPAAMPMAPMMAMMMMMAMMPAMPAMMAPMAPMAAAMMPMAPPAPPM", "PMMMMMAMAMMMMPPAMAMMAMAAPMMPAMAAMMMMAAMMMMMAAMAMAP", "PAMMPMPMPMAMMPMAAMMAMPMPAAMMAAPAMMPAMAAPMPAMAMPPAA", "PAMPMAMPMMMAMMMPPMPAAMMMPMMMPAMMAMAPMAMPMMPMAAAAAM", "PMAAPMAMMMMMMMPMMAMMAMMAMPAAPMAMMMPMMAAAMAAAAAMMMM", "PMAAAPMAMMPPMMAAAPMMPMPMAAMAAMMMPMMPPPMPMMPMMMMAAA", "PMMMAAMAPMAPPAAMMMMPPPMMAMMAMMPAMMPMPAMPMPMMAMMPMP", "PAMMMAAMAAAAMMAMPMAPAAPAMAAAAMAMMMMPMMMPAAMMPMMMPP", "PMAMAAMAAAPPPMAPAPAAMAPPMPAAPAMAPPPAMMMAMMMMMPMAMA", "PMPAAMMAMAAMAMAPAAAMMMMMAMMAAAMMAAPAAMMAAMMMAAMMAA", "PPMPPMAMAMPMMMMMPAAMPMAMMAAMMPAMMAMAMPAMMMMMMMMAMP", "PMMAMMAPPAMMMAMMPAMAPMMAMAAPAMMAPAMMAPAMMMPPMAMAMP", "PMAMMMMAAMAMMPMMAMMPAMAPAAPPAAAMAMMMAMAMMMAAPMAAMM", "PPAAMAMPAAAAMPAMMAMPAMMPPMMPAMMPMPAMPPMMAMMMAMAPMP", "PAAMPMPMMMPMAMAMMMMPAMPAMAPPMAAAAMAMMPMAMAAAPMMAPM", "PMMMAAMMPAMAAMAMAAMMPPAMAAMAMMAMMMMMMPMMMMMMAPMAAA", "PAMPPMAMAMMAPMPMAAMMMMPPAMAMPAPAMPMAAMMMMPMAPAMAPA", "PMMMMPAAMPPAMAMMMPAAMPMAMMMMMAMMMMMMMAPMPPAAPPMAAM", "PAAAAAMPAMMMMAAAMMMMAPAAMMAAPPMMMAAAPAPMMPMMPMAPMM", "PMMAMMMMMMMPMMAMMAAMAMAMAAAPMMAMMPAPMMPPPAMMAAPMPM"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"nkqwuufuyvbvkhnyyaovrbsrfhkdneqahpgpnwohendgqeyozr", "azofpzsoypngsojldgxmgfieehzuwchhqqybkcgbaweaqbfdal", "ukxonjetsmbilumeaxlvhuprthpxtzuppzzxavhxiaxkyjsnmf", "ssbvzpgavgmlusmymytwtcsemfnwxvrxkwbxacxzuupvnlsecl", "xskshgguagfkhtmogvtajgbzaeomtdfudavfamjgoipwsldswf", "xgrdnvtirbkanlwsomekdbgymqokvyrxkubkxlsjfzbwdfogbj", "uwneonmdolfzvpxhacbrapztcgwxamgacicpsbtbhiwwrronvp", "uzwpwgrtgbxvugrxgkwtxyhfhnjxuzcdjogknpljeqgvswafgk", "kzpjhqlfnyzarslvtwxhbwanmhbtbqyftnfdotfjbypcgdecva", "vedbdhovoxqyrxdsdyvyljpwbzgdnijnovtqalaelerltkczaj", "ihcxwacmwncthuonaueydrvjprvsrjvbfhaoezewqnoqsvdqep", "cyvaramxazlmijnfsxkkhghdqmznmqxlbzaaxbdswaechogfjx", "sujrtutzxhhgdjjnjvnkwsjtqiokfzkzqjmcjwopguuryqklqv", "yuewwhglwwfnrjzdgoiixdgbboatbocldhwuiepopoxffqishn", "lhghlldnydjcerpzvriwdjnuwhxfiugprgbqrexsdywoevukwl", "dogljlwtzakfuoykyckxjelzsyqqnlgwkgnnqediktlntzkhii", "ohrnljgomjtqwhactideqmmhuyplxtjqtlwgpvofdxziowymgj", "ddjimjmycqzvweeucietdtmjfqcsurqjiosukssdiyjdffgxso", "reqwvblvbpkxtlhctvstjwbnsnokgdacgtgpnoqsdlnnmrcdbm", "lxnqpdlrslauqunxskwaqaajgmxndllhxpmndlqjllqmnzmtfg", "wetpnwrypxtibgfzdemoynyecwvywvbinxaafcwmvsbrubfnfg", "vapjacicnhrqntqhtulhgtxmamiymetjfgolpkzhvfucyanrcx", "blnxpzsfnjyfwfdzhxkicqssbeijbrhyojgqdxqhrewkmbgvog", "amjrgrblqqqcgikdluucvnyqrwccmnfrnkmmwzgygoqstumxfe", "yixcpybalngwitjiqrdfikdrrlniweisvtszlugfpnpdxvimrp", "afhbfrhwiddjqwowjzzysqrrlvnsdqsysbgkhmzleujnjkebne", "blrghuwykoynpkwvkgplqruibljjmwpjzyjgsjizlphqmrvxrx", "ecsxobktfjqslvfrbbquviugwqkmozprnhczeaqmesdlqfbwkb", "zrvulpemzlssrkiswomznwixcabklgldgfswhazzzglethaten", "tsksspbvlvujuaqwteutneghdytjichkjbrgddolbsykbqnntc", "qozdubgoycoxatmydmjrpbaallkejaqhfnwjdxmcltnkdofbxn", "fxtrlwfosiwuapdfdmnrrvftepgkmtuxhcipbuzxlbmbzovfal", "maimphuhnzcyduygovicmgerjvdvcimhtasatyvttpordcyetu", "xeqzmjmdopzmgnzxhmuqnmdbnybsfsnvrljtkgmgslnuzsphrr", "eekttanwzgiiqmejchnwzsujizqcdavltizhihtcvlxyhpuyxj", "hzhjndmepaymbfyndhkqytkqfpzwnzmpocedhgdaryhcppgchv", "decrlomhjiindkkysfdwufevonjslkqvvkchxfnhmvrnyukjel", "rjhmyzwcpjpqzfykicxzkjjucvteyukwzyhutijlbygzltgwgv", "utrsuioanerndiqgwteaklhlmfvdkiysbqyjypyognnwxylmdj", "hpndsstfpiuhvobitjdsxiyanjtxpvvpqfjidnkvdyyxfpoejz", "bjqohbtshfukhmvgpfakeykpfmjiodtcbpznxgimnzpiyedjtp", "xmgbxrdyyycqlhcerrekfqyifapiihumxainebozyzpwssxygg", "btkajnkpiossvxvykweuyiybasfiuwckvcbruxqfuewglrwnky", "osspbwomgkcoyiktbbrkaoplhhtlumuhkmcpozamepaextbbfr", "zmgxkmmsaxhromitkyynzzlngpbgnxxmhoptcejcjjeskuumso", "wozvukgywwtvdeyafqngzntbryolcktwbtwtfusiorjladlqnt", "ejttukfclmywpsjtfkanncwasgocfhjyedbbijpnplocdbhljs", "enraoxiobmrjzmqffxkywjqbebrdpjuvjjcvcmyqnuerbtiobo", "ccfvmpikdfskgiebyvyetcodfhcitoeaihwvberqnswfqmxohb", "ekbvjopsnpenzcbtzudbpwiavrrfjiqnlptohlmwqcewcfyrba"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> names = {"zskoyebfoxyveeasistuxkdqyxtnaigcerrzpjddiciwcplkuc", "eeaigznjjtmsfkrbyzvkfgyhthufpkownurcuqhpiwgzritgcw", "dvlvuxrgpgqqectmrcioyhfcibfafqhfiznxsdqdriwuojxjph", "kubuhujziuwmcqjejwrqlorpozsixlwkolymaojkfrzjydsayj", "aelrxbgmgvojyvatlzhpybbjwyczhtvyrwabyyatogipgggylw", "olpmhwvjanbvztumjzxocixeykdvqjnvktkgswgcxehkjeitsa", "tipfgecxrepnstxnswgufzkekzwmojxnmlfcdfoenbjplbozyc", "avjokdipnhhhrhbzjufzvdgwvzisrzcjifhqjwxqupwotjcaox", "gqabwkuretaoddpfyawfdrxalqvnoyfevennboytvtfewsnssf", "oomgwrsfoxezluwrkpptrtoehioqjhtuolimuudduwfzchwiyp", "hmvvkcvuxhmcumqsfhureqykjketlhotjqpdepdfgjcllbmjwf", "wmxcfiidbnoytnwfkeolirlopvsqyfmdvpmlzxjpoicqorndsq", "atmkcotqlrulpfrwqtxnjckldhihzxqmiwghsuxtxynypijawv", "mfmogbpyugxwsggxnsuagjyabwpwyhrsuglnydtcubumbtuapo", "ppcjmbkiqvpssycodrhjasktlckqzhuclytebdnfikzfalsxxm", "qnedfhspvnsbmczdqsaracaaonpobqzkocneokowfdzunajnfk", "gpmwaizocroumukeamnrwxlpzohpijjzldxhjhvkxsqwcrtssi", "kqnvrxozqakwoewjznvgcfmynecxhagwttjwjnhwbxyyxzcoms", "sriqwtkbhcncxyaydpbkmqnergqyhuehtlupkmzuthogenlgon", "cssjvpjxdqbwnbhxqnppfnjjjggaorpuumkgyuefzedoweyyrs", "lzaatioeubwwdmobdorbwqhmcgfptjdjxlbpkqtzizqkhnzpni", "xdsiavlshnucorqysqkjxwfmnjvnhiekjfgnaehhcpwbjtccbi", "alezbxivpptovtvzqjkhelcifywirxjxweovsmivszqfvqzthb", "ynyarqlauvtqiggwxcjksbcmddimpihrmognpjjhzvdodcqcir", "jquwtvzkcyauxepqifpfbfxqtaaenojbmngmsiviypwiqfsccp", "fperzhzbnmvxncnfskssvrmflguwnnpbdvwwapcvxogrumcgeq", "eamxpxvcegvyvsbhvvodtgyibxiruqqpcoexhuoxzgqqsphryh", "jptxylzkeyidzqetdyyrnlooekydgjsbezywcaowgiqvkqrrkg", "zyvhncpzaqmiobsxtmyawhhnqslkufobziudxkdjihoxorinhp", "pksgnjgpmeagwqbutmyxdaurmtzntdhdctgiuxidpflayqqrdk", "mkjwyofsspsgotmxzzkxmrqzjlmzdwhowzwpncosftfwbistez", "phozfynftpsakmnlzyjfiaitwembgwthwonrgezeydmhvngplm", "hrnswhmonxkarimvknanwdldxmlesfcqdvyirjfmobzvvfrtuo", "otppjkwcdnaazltxqbuoafrkjpbcelkqyrfurgvowjqfkozyws", "wwzfmpvacnuuztvewuowdmwxcvvqaqmvyphawovngfvpnawmvy", "uuxaffgfhmgzhenyhsntuqkkabyzgzbltjileevufxreifming", "snzgzwpefcblctuxkppugkhnnrgzwpmkefcpjmujgkneoxdwwe", "jakkfsfbjsyblvlruxsdmnoljalbcrvyzcqmxgrbkwuotkxqdl", "lrfqusqjwthdyocddpblujtrhuhlqtgjgmblqzkqsedtmgwuoq", "bpotdtmqjnfuwsijneqrxfrlyahtqssdinhbudfklbwiewesjv", "llauyhkctgzzdudhhitacvufbzibsqzanxpykrbdwohborazcr", "bkdqznnkhbavxuccymreaqwgefwxcrjbbyjjlzrdtyaqainmav", "zevwmxfgrlnmptwgtmvmoyxwpatlfbbwwkqgydnilfstzselcv", "qgsnzmvjioabvprssjsmpwyzemnyrwvvyzyvolbpajfnxzpdqu", "yejkkztcejjapcblzfpegbfxlsseqsfiufkuxqxcrbdidoolex", "kmjhfnkuwszprexnacivpdzwkjdcvvwjumxuwhyvajgfxoemkz", "iyuzpfyjsllhafmuwsxhqddfiwoqxrkhjifgytsfetgtiajfkq", "ftcxtdchlfgepieqnzchpquovlqirrqbqhbtbhdchggtcpzydr", "genqeqjcqfusohwhiqxzctidttysdcgwrhemylwmkcojsekxae", "acjxrpiklkpuplxakmziroasjlebjlauvaspuqhbvqmpwrvocy"};
    vector<string> attendance = {"PAAAAAMMMPAAAMAAMMPAAAMMMMPPMPPPMAMPMMAAAPMMMAPMMA", "PAPAMPAPPMAPMAPMAPPMAMMAPPAMMAMAMMAPPAAAAPAAPAPMMP", "PAMMAAPAAPMMAPMAMMAMAAMPMAMMMMPMMAAAMMAMMPMMPMMPPM", "PMMMPAAAPMPMMAMMMMMPAAAPMMMAMAAMMMPMAMMPMMMAPMAMMA", "PAMAMAMPMMAMPAAAAPAPMAAMMMPMMPPAPPMAMMMAMMMPAMMAAP", "PAPAMMPAMAAAMMAMPMMMAMPAMPPMMAAAAPMMAPPMMAMAAMPAMP", "PMAAAMMMMAMAMAMMMMMPMAMAAAAAAAMMMPAPMMPPAMMAPAMMAA", "PMAMMAPPPMMAMMPMMMAAMAAAPMPMAPMPPMMAAMMAAMMAMAAAPA", "PAMMMAAMAMPMAPMAPAAPMMMAMMAAMMPAPPMAAMMMMMMMPMPMMM", "PAAMPMAAAMAAMAPMPMAAAMAMAAPMMPPPPAMAAPAPMMPPMMAAAP", "PAPPMPPMMMMAAMMAMAMMMPPAAMMMMMAAMPMMMMMMPAMMPAMPMM", "PAMAMMAMMPMAMPAMAAMMPMMMAPMPAAAMAMMAMMMAMMPAAAPAMA", "PAPMAMAMPPMAAMPMMMAPAPMAAMAMMAMMAAMAMMAPMMMMMAMMMP", "PAAMAMAMPMMMMMMMPMPPPPMAAMPAPMAPAPAMMPPMMPMMAMAMAP", "PPMMAMAMMMAAPMMAPMMPMMAMMMPMMAPMMMMMAPAMPMPAAMPAAM", "PAMAMMAMMMPPMPMMAMPPAAAMPMPAPMAPMAPMPPAAPAMMMAPAPM", "PMMPAMAAMMMMMAPMAAMMPMMMAAMAPMAAMPAAAAMMPMAAPAMMMA", "PMAMAPAMAMAMAMAMMPMAMPMMMAPMMAAPAMPMMAMMMPPMAPAMMA", "PAAMAMPAMMAMAAMAAAPMMPMAPPMAMAAPMAMMPPAAAMMMPMMAMA", "PMMAMAMAPAMPMAPAAAAMMPPMMMMMAAAMMAPMMPAAPPAMPPAAAA", "PMMAMAAPPPAAMPPAAPPMAMPAPAAMMPMPPPPAAAPPMMPPAMMMMA", "PMPMMPMAPPAMAMMMMMMAMPMMMMPAAAMPAMAPMAPPPAPMAMAPAP", "PMAMAPAMMMMPPAMMPAPMPAMPPPPPPAMMMMPMMPPMPAMMAMAMAM", "PMPMPMPMMMPPMPMMMAPAAPAMMMAAMPAPAMMAAAAMMMAMAMAAMP", "PAPMAPAAPPMPPMMAMPAPMMPAMAAPMMAAMAAAAMPAMPMMMMMAMP", "PMMAAMMAPMMMPMMMMAAMPAMMMMPAAAPMMPAMPAMAAPAAMPMMMM", "PAAPPPAMMMPPAAMPPMPAAMAAMMMPPAAAAMAAAMAMAMMMPAMMMA", "PMMMAPAMAPPAAPAAPPMPMMAMMMAMPMMMMAAAPPMAAMAPMMMAMM", "PMMMMMMMMMMAAMMPAMMMMPMMMAAMAAMAMPPMPMAMPMMAMMPMPA", "PPAAMPMAPAMMAMMMMPMMPPPPMPMAMAAPAPMMMMMMMAAMAAAAAA", "PAMMMAMAMMAAMMMAMMAAPAAAPMPMAAMMAMMPAAMPMAAAAPPPMA", "PPAAPAMPPMAAAAPMMPMPMAPAMAMPPAMMAMMAAAAMPPMMMMMAAA", "PAPPAMAAMAMMMPAAMPMAMMPAMMMMAMMPAMMAAMMAMMMMMPMMAM", "PMPPMMMAMMPAMAMMMMPMMMMPMPPPAAMMAMAAAAAPPAMMAPAMMP", "PPAMAMMAPAAMMAAAAPPMAMPMAMMAAMMAMMMMAAPPMPMMMMMMMM", "PAMMMPPAPPAPMMMAAPAAAMAAPMMMAPPAAAPAAPMAMPMMPAAPPM", "PPMPMAMPPMPMAMAPMMPAPPMMPMAMMMMMMMMAAMAPMAMMMAAMAA", "PMPMMMMMMMMMPAMAMMAMAMAPMAPPMPMPPMPMPPAMAAPMMPAMMM", "PMMAMMPAPPMAPAAMMMPMPMMMMMAMAPMAAAPAPAMAMAMMMMPPMA", "PMPMAPMPMPPMMMAMAPPMMMMPPMMMPMAAMPAPMPMMAAPMPAPPAM", "PMMPMMMMMMAPMMMAMAPAAMMMAPPMAAMMMAAMMMPMPPAMPPPPAM", "PAPPMAAMAMMPMMMPAPAPMMAMPAMPPAMPPMAPAMMMMAAMAMMMAP", "PPPMMAMAMAMAMMAAMAMPMMMPAMAAPAMPAPPAAMMAMAMAPPPMMA", "PPAAMMMAPAAMMMMAMAMAMMAAPMPMAMAAMPPAAMAAMMAPAPAMMA", "PMMPAPAMAMPMMMMAMMMAAPMMAMMMMPAMAMMPMMAPPPMPAAAAAP", "PPMPMMMMMAAPAMMMMPPAPPMAAPMPAMAAMAMMMMMMMMMMAMPAMA", "PAAMAMMAAAMMMMPMMPPAMPMPPAPAPPMMMMMMAAPMAMMPPMAMAA", "PAPAPMAMAMMPPPAAPAPAMAMPMAAPMMMPPPMMPAAAPMAPMMPMAP", "PMPPMMPMAPMPPPAAMAMAAMPAMMMMMMMAAMAPMMMAMMPPPPMAAA", "PAPMAAAMAMAAAAAMAAMMMAAMMMMAPMMMAAAAMPMMAPMMAAMAAP"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"zskoyebfoxyveeasistuxkdqyxtnaigcerrzpjddiciwcplkuc", "eeaigznjjtmsfkrbyzvkfgyhthufpkownurcuqhpiwgzritgcw", "dvlvuxrgpgqqectmrcioyhfcibfafqhfiznxsdqdriwuojxjph", "kubuhujziuwmcqjejwrqlorpozsixlwkolymaojkfrzjydsayj", "aelrxbgmgvojyvatlzhpybbjwyczhtvyrwabyyatogipgggylw", "olpmhwvjanbvztumjzxocixeykdvqjnvktkgswgcxehkjeitsa", "tipfgecxrepnstxnswgufzkekzwmojxnmlfcdfoenbjplbozyc", "avjokdipnhhhrhbzjufzvdgwvzisrzcjifhqjwxqupwotjcaox", "gqabwkuretaoddpfyawfdrxalqvnoyfevennboytvtfewsnssf", "oomgwrsfoxezluwrkpptrtoehioqjhtuolimuudduwfzchwiyp", "hmvvkcvuxhmcumqsfhureqykjketlhotjqpdepdfgjcllbmjwf", "wmxcfiidbnoytnwfkeolirlopvsqyfmdvpmlzxjpoicqorndsq", "atmkcotqlrulpfrwqtxnjckldhihzxqmiwghsuxtxynypijawv", "mfmogbpyugxwsggxnsuagjyabwpwyhrsuglnydtcubumbtuapo", "ppcjmbkiqvpssycodrhjasktlckqzhuclytebdnfikzfalsxxm", "qnedfhspvnsbmczdqsaracaaonpobqzkocneokowfdzunajnfk", "gpmwaizocroumukeamnrwxlpzohpijjzldxhjhvkxsqwcrtssi", "kqnvrxozqakwoewjznvgcfmynecxhagwttjwjnhwbxyyxzcoms", "sriqwtkbhcncxyaydpbkmqnergqyhuehtlupkmzuthogenlgon", "cssjvpjxdqbwnbhxqnppfnjjjggaorpuumkgyuefzedoweyyrs", "lzaatioeubwwdmobdorbwqhmcgfptjdjxlbpkqtzizqkhnzpni", "xdsiavlshnucorqysqkjxwfmnjvnhiekjfgnaehhcpwbjtccbi", "alezbxivpptovtvzqjkhelcifywirxjxweovsmivszqfvqzthb", "ynyarqlauvtqiggwxcjksbcmddimpihrmognpjjhzvdodcqcir", "jquwtvzkcyauxepqifpfbfxqtaaenojbmngmsiviypwiqfsccp", "fperzhzbnmvxncnfskssvrmflguwnnpbdvwwapcvxogrumcgeq", "eamxpxvcegvyvsbhvvodtgyibxiruqqpcoexhuoxzgqqsphryh", "jptxylzkeyidzqetdyyrnlooekydgjsbezywcaowgiqvkqrrkg", "zyvhncpzaqmiobsxtmyawhhnqslkufobziudxkdjihoxorinhp", "pksgnjgpmeagwqbutmyxdaurmtzntdhdctgiuxidpflayqqrdk", "mkjwyofsspsgotmxzzkxmrqzjlmzdwhowzwpncosftfwbistez", "phozfynftpsakmnlzyjfiaitwembgwthwonrgezeydmhvngplm", "hrnswhmonxkarimvknanwdldxmlesfcqdvyirjfmobzvvfrtuo", "otppjkwcdnaazltxqbuoafrkjpbcelkqyrfurgvowjqfkozyws", "wwzfmpvacnuuztvewuowdmwxcvvqaqmvyphawovngfvpnawmvy", "uuxaffgfhmgzhenyhsntuqkkabyzgzbltjileevufxreifming", "snzgzwpefcblctuxkppugkhnnrgzwpmkefcpjmujgkneoxdwwe", "jakkfsfbjsyblvlruxsdmnoljalbcrvyzcqmxgrbkwuotkxqdl", "lrfqusqjwthdyocddpblujtrhuhlqtgjgmblqzkqsedtmgwuoq", "bpotdtmqjnfuwsijneqrxfrlyahtqssdinhbudfklbwiewesjv", "llauyhkctgzzdudhhitacvufbzibsqzanxpykrbdwohborazcr", "bkdqznnkhbavxuccymreaqwgefwxcrjbbyjjlzrdtyaqainmav", "zevwmxfgrlnmptwgtmvmoyxwpatlfbbwwkqgydnilfstzselcv", "qgsnzmvjioabvprssjsmpwyzemnyrwvvyzyvolbpajfnxzpdqu", "yejkkztcejjapcblzfpegbfxlsseqsfiufkuxqxcrbdidoolex", "kmjhfnkuwszprexnacivpdzwkjdcvvwjumxuwhyvajgfxoemkz", "iyuzpfyjsllhafmuwsxhqddfiwoqxrkhjifgytsfetgtiajfkq", "ftcxtdchlfgepieqnzchpquovlqirrqbqhbtbhdchggtcpzydr", "genqeqjcqfusohwhiqxzctidttysdcgwrhemylwmkcojsekxae", "acjxrpiklkpuplxakmziroasjlebjlauvaspuqhbvqmpwrvocy"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> names = {"bjnpzqylamrqsbqbiuqagfslqisvsxzefxlpyotnfvanlybsfx", "hbvdrticwtzgnfjonhlodsdjzbdpjrhnyrqqdikfykmwlhaekj", "rrjtndipmqhytoszrghbwzqdfkscbdqnzmmqwicuwhhcpvuzlu", "lcbbiymzlgfcdtajtvubssyicocztsobddcaaqezzocnvmqvcl", "czkevzozzgdmpisyvuzioebdtntewrljbzkanjuqrxxtzhhwak", "nmlywrirngauoauprfegiqqbtlhbwxcmjltkuqesdievqwrvli", "uasobyspylulynhlgsypjirtjouwqawrziiylvmsqgmiargvhm", "jqtavjqgxukiucdafmeyyzndtlixxmpuntjpcygjmndwhnslqv", "hnpooigsklgrhsgmjfirgzrxzsjirhxqncvdfzonlhsujdusxq", "wjbpejcgodbhaznwqrdjecncfwvumfimvkndkhfnfdjepgscrs", "itduhpwyymhoxofcrbmgaovlquitbgrncxpfnaifgfzmgfbfek", "kvuuivhejrjclzkazxynunzuarlzadxysrigundijazmrskolm", "mfvwuigiorskyezjtpdwqllygaxyajarxnjgaewofqixvcpzab", "rgmvnxrascjxawyxliqupiammltmjubqgkbuqpdggpzkavyauv", "zwlrtvcwqqeqkdtmvdslwyumpxzqtilmmzpwabrhfhsspmxjmb", "bgbxufrnzeldsaldqhypbosvsgveejwcjzmsskpmjlkioibqil", "sdcdxgrbprfilcjaewduimkbsuumkevzwjdplzxjudioeapcco", "cajoiwvmjowcarqilpnflisyagwnfbtbcmvewjzahwwiydlbip", "ihplijdrlsdkzoobzqyygdqamajeabufseolnjoursuazddebi", "vhjqvrickpdkrzuypweufqugyoowphhqswoucowhpxlkcbjwub", "uklkwhzkkyabsekmfibgvhpzwipdaatkwdblvgqwfmjxruulvb", "fajxepdcayikveishbxxffjckcukrzbrstuckaizbpgvmbdvvf", "liwbdvgrbvvidodnklqumbcdaphhqtmpagnfeerimwcvxvxfor", "ctyyogsslnarbguqaxnxwpkddqagydwptmjipwmhagrfedhzxp", "tifyenqlxhplutvyoqmgdigydnlyfqzpskqcytarfigmmsourq", "clksvonzlfajmgarxzbrrdveuihshssyjjkycurozzrgxonmxf", "hdtznzmrfazmozedwmxlvlgptkwwfndvnimtsjrbyssbupyhro", "zxtgtrmfljdfehiprblogwqgrlxqaqcdxeybpnbkxchhxymdte", "gsuaiosjchuiammhltvbsdpfgssfhkezplhzorzwknkebzhvcy", "oxlregarptmneujnnjpzbsrkgxqkgmsykvrvzfdigrquqxwoyw", "qcfeghypuntbamnihjtwvzuazqmhsgcfwwjadyxcosrmztoczt", "gqxtnsfegurmovacmonuhjyawhvcoyeoclrqdzecjszxxgnkvp", "sydpbmahvsjecycoiwmdwcstmmowzknruzwjarsflmadumywgp", "jzyiasmkfkbjcwbpjoplfbzrfjccjdcfrrbmizdkynfbsggfof", "wwqozorwygkwzyuvsybiwxefzfenevdhisvtzhmjphfqkugpnb", "ndgblyvztpmbhhehflulxpieiricozdukprkbnsdqyysklzkpq", "jarebbgxqpedchbezemsctkevorletdikjyurkiptlxatremxr", "dzmpoiqfzqtdlukmwbitrhqljsgoqkbsqrdbzmrgghzbleksoi", "rihcqholcsavjyzjikgcuyseizcztatsyxilmggjilfgezkicc", "lbnelgsztovrspgkbdpqspxmghtvkjtxjeuiaqobkjpdidoirr", "lttpgxliqjelaajapjukbiisskovmoqtpywgsyekpmukutleln", "woaezrjhbxrmtrbvmbkskriqbfowrnnmzwftvrmhnqpgnugrah", "fxrtxgcnljppljxotqgufycgliwqxempekmymcoxrlooryfkrg", "uknlwyfwwzzigrpktibcfjnshikivmrsackgfwvwrxsmjpudgq", "ktoomdwlmgfbjaaflspquwalbvsfjmezudgzorhfyqdorrkonj", "xeumzibbnwexcppjqdkhiuslkqvqxznsawkggwwfrylgdjrxkx", "zjgkfqibmjcjkvmnigxaevsyfrzofkxatdijxhfgwmoxkswcrb", "bqxzqoraniduuynfgiayivexihymsxumazmdryzsvjwaqefafx", "jjsynwojdrbrhpgzbfeuuoiscfnzfnqmxhpineoialekgwzrin", "cgykqdpgpnpgrkolbginlvtehnoyuwpldbwpqiaxthssmsgbcc"};
    vector<string> attendance = {"PMMAMPPPMPMPPAMPAMAPMAAMPPMMPMMMMMMAAMMPAMMMAMAAMA", "PMMPAMAAAMAAAMAAPPAMAMAAMAPAMAAMMAPPMAMAPAAMAAMPPM", "PMMMPPMAMAPMMMMAAAAAMMAPMPAPMAAPMAMAPMMMMAAAAMAMMA", "PAPPMAAPPMMMAMMPAMMAPAMAMMAMMPPPMPMAPMPAAAMMAMAMMP", "PPMMMAMPAAAAAMAMMMMMMAMMAPPMMPAAPMPMMPMMAAAAAMPPMM", "PPAPAAAAMMAAAMPPAMAAMMMMMMPMMPAMMPAMMAPMPMMPPMAMPA", "PMMMMPAAAPMMMPPMMPMMAPPAMPAAPMAAAMMMAMPMAPAAMAAPPM", "PMAMAAAAPMMMAAPMAAPMMPAMPPMPMPAMPPMMMMAPMAMPAMAAMP", "PMAAMAMAMMMPAMAAMMMPPAMPPMPMPMAMMMAMMPMAPPPMMMMMMP", "PAMMAPAAPPMAAMPAMPMMMAMMAMMPAAPMMAAAAAPMPAMMMPAMAA", "PMMMMMMMPPMMMAAMPMMPMPAMAAPAAAMPAAMPMAAAMPAAPAAAMA", "PPMMAPMPMAMAMMPPMAPPMMAPAAMAPAMMMMPMMMMMPAAMPAAAAA", "PPAPMMPMMMAAPAPMMMPAPMMMMAAAMMMMAMMAAAPAAAMPMMAMPM", "PPPPPAMPPPMAAAMPAMAMAAMPAMPPPMPMPAPPPAPMMMAAMAAMMM", "PMAAAMMAMMMMMMMMAMPAAAAMAMAMAMAMAAAPPMMAPAPPMMMAMP", "PPAMPAAAPAAMMPAMMMPMMMAAAMAAPAPPMAAAAMAMPAMPMAMMMA", "PPPPAAMPMPMPAPMMMAMAPPMPMMMPPMPMAAPMPMMMMMPMAMMMAM", "PMPMAAAPMAAAMMAAAMMAAPMAAMAMPAMPAAAMPAMAMMMMAPAMAA", "PAPAAMMAMPMAMMMPAMMMMPAMAMMMMAAAMPAAMAAMAMMMMAMAPM", "PAMAMMPAMMAPPAAMMMMMMMAAAPMAMAMPPMPMMMMPMMAMPAMMPA", "PAAPAMPMPAMAMMPMAPMAAAPPMMAMPMMAPMMMMMAAPPMMMPMMAA", "PPMAAPMMMMMMMAPPMMMAMMAAMMPPMMAMMMMMMMMAMMPMAAPAMM", "PAMMMAMMPAMPAAMAAMMAAAAMMMAMPMMMMMMAPPMAAMAPAPMPAM", "PMPAMMAMMMMAMMPMMPMMMMAPAMMAMAAAMPAMMPAMPMPAPPMAAP", "PMMPAMAAAPMAMPPAAAAPMMMMAAAMAMMAMMPMPAMMMMPMPMMMMM", "PMMMPMAAMAMPMPPMAAMPMAPAMMPPMAPPMAMAPPMAPMMMMPPMAM", "PMPMMAPMMAPMMMPMPAAPMMAAMAPMMPMPPAMMAAMMMAAPMMPAPA", "PAAAAMAAMMAMPPMPPAAPAPAMMAPAMPMAPMMAAPMMMMAPMMPMMM", "PMAPMAMPMAMAAMAMAAPMPMPPMMAAMPPAAAPAMAPMAAAMMMPPPA", "PAAMAAAAMAMMMMMMMMAAMMMPMAMAMPPPPAMMPMMPAMMMMMMPMP", "PMPMPPAMMAPMAMMMPAPAAAPAPMPMMAAMPMMMMPMAMAAMPAMMMA", "PMAMAAAAAMAMPMMMPAMPMMAMPMAMAAMAMMPAPAMAAMPMMPPAAM", "PAPMMMMPPAPMAAAMPPMPMAAAPPAMMMPPMMPMAAPPMPAMMPAPMM", "PPAMMMPAMMMPPPMAPPMAMMMAMAMMPPMMAMAMMPMPMAMPMPMPMA", "PPPPAAAMAAAMMAPPAPMPMAAPMAPMMAMMAMPAMPMMAPMMPAAMPM", "PMPMPMPMMMAAMMMPMMMMPMMMMMMAPAPPMAPMPPMAPMMMMAAMPA", "PMMPPMMMAMMMMAAPMMMMPPAMMAPPMMMMMAPPAMPAPAMMAPPMAM", "PMMMAAPMAAAAAAPAMMMPPAAAMPMAMAMMMMAPMPMMPMMAMMPPMA", "PMAAPMMAPMMPAAAAAMMAPMMMPAAMMPMMMMMMAMAPMAPMPPMPMM", "PAMMMMAMAAMMAPAAPPMAAAAPMAAAPAMMAPAMPMAAAPMPMPAPPA", "PMMAMPAMPMAAMMMAPAAMMMAPAMAAAMPPMMPAAAAMMMMMMMAMAP", "PPPAPMAMMAMMAMPAMPMPMPMAPAAAMPMMPAMMMPPAAMPMAAAMAM", "PAAMMMPAAPAMAMAMAMMMPMMMAMAMMAAMMMMPPMAAMMMPPAAMMA", "PMMPMPMPMAAMMMAMAPPPMMAMMPMAMMMMMMAAMAAAPMAAMMMMMM", "PPMMPAPMMAPPPPPPMPMPAAMAMAAMMMAAAMPMMMAAMPAAAPMMAM", "PAMMMMPMMAAMMMAMPAPMAAPAAMPAMPAMMMMAMMMMMMAAPPAAMA", "PMMMAMAMAMAPMMMAMMPAPPMMPMMPMMMMMMPMAMMMMMPAMAMMPM", "PPMAAAPAPPAMAPMMMAMPPAMMAMAMAAMMPPMAMPMMAAMMAMMMPM", "PAAPMPPMAMMPMPPAPAMMMAMAPAMAAPPPAPAAAMAAMAMMMAAMMP", "PAMMMMMAPPMAMMMAPMPPAPMAMAPAMMPPAMMMMMPMMPMPMAAAMA"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bjnpzqylamrqsbqbiuqagfslqisvsxzefxlpyotnfvanlybsfx", "hbvdrticwtzgnfjonhlodsdjzbdpjrhnyrqqdikfykmwlhaekj", "rrjtndipmqhytoszrghbwzqdfkscbdqnzmmqwicuwhhcpvuzlu", "lcbbiymzlgfcdtajtvubssyicocztsobddcaaqezzocnvmqvcl", "czkevzozzgdmpisyvuzioebdtntewrljbzkanjuqrxxtzhhwak", "nmlywrirngauoauprfegiqqbtlhbwxcmjltkuqesdievqwrvli", "uasobyspylulynhlgsypjirtjouwqawrziiylvmsqgmiargvhm", "jqtavjqgxukiucdafmeyyzndtlixxmpuntjpcygjmndwhnslqv", "hnpooigsklgrhsgmjfirgzrxzsjirhxqncvdfzonlhsujdusxq", "wjbpejcgodbhaznwqrdjecncfwvumfimvkndkhfnfdjepgscrs", "itduhpwyymhoxofcrbmgaovlquitbgrncxpfnaifgfzmgfbfek", "kvuuivhejrjclzkazxynunzuarlzadxysrigundijazmrskolm", "mfvwuigiorskyezjtpdwqllygaxyajarxnjgaewofqixvcpzab", "rgmvnxrascjxawyxliqupiammltmjubqgkbuqpdggpzkavyauv", "zwlrtvcwqqeqkdtmvdslwyumpxzqtilmmzpwabrhfhsspmxjmb", "bgbxufrnzeldsaldqhypbosvsgveejwcjzmsskpmjlkioibqil", "sdcdxgrbprfilcjaewduimkbsuumkevzwjdplzxjudioeapcco", "cajoiwvmjowcarqilpnflisyagwnfbtbcmvewjzahwwiydlbip", "ihplijdrlsdkzoobzqyygdqamajeabufseolnjoursuazddebi", "vhjqvrickpdkrzuypweufqugyoowphhqswoucowhpxlkcbjwub", "uklkwhzkkyabsekmfibgvhpzwipdaatkwdblvgqwfmjxruulvb", "fajxepdcayikveishbxxffjckcukrzbrstuckaizbpgvmbdvvf", "liwbdvgrbvvidodnklqumbcdaphhqtmpagnfeerimwcvxvxfor", "ctyyogsslnarbguqaxnxwpkddqagydwptmjipwmhagrfedhzxp", "tifyenqlxhplutvyoqmgdigydnlyfqzpskqcytarfigmmsourq", "clksvonzlfajmgarxzbrrdveuihshssyjjkycurozzrgxonmxf", "hdtznzmrfazmozedwmxlvlgptkwwfndvnimtsjrbyssbupyhro", "zxtgtrmfljdfehiprblogwqgrlxqaqcdxeybpnbkxchhxymdte", "gsuaiosjchuiammhltvbsdpfgssfhkezplhzorzwknkebzhvcy", "oxlregarptmneujnnjpzbsrkgxqkgmsykvrvzfdigrquqxwoyw", "qcfeghypuntbamnihjtwvzuazqmhsgcfwwjadyxcosrmztoczt", "gqxtnsfegurmovacmonuhjyawhvcoyeoclrqdzecjszxxgnkvp", "sydpbmahvsjecycoiwmdwcstmmowzknruzwjarsflmadumywgp", "jzyiasmkfkbjcwbpjoplfbzrfjccjdcfrrbmizdkynfbsggfof", "wwqozorwygkwzyuvsybiwxefzfenevdhisvtzhmjphfqkugpnb", "ndgblyvztpmbhhehflulxpieiricozdukprkbnsdqyysklzkpq", "jarebbgxqpedchbezemsctkevorletdikjyurkiptlxatremxr", "dzmpoiqfzqtdlukmwbitrhqljsgoqkbsqrdbzmrgghzbleksoi", "rihcqholcsavjyzjikgcuyseizcztatsyxilmggjilfgezkicc", "lbnelgsztovrspgkbdpqspxmghtvkjtxjeuiaqobkjpdidoirr", "lttpgxliqjelaajapjukbiisskovmoqtpywgsyekpmukutleln", "woaezrjhbxrmtrbvmbkskriqbfowrnnmzwftvrmhnqpgnugrah", "fxrtxgcnljppljxotqgufycgliwqxempekmymcoxrlooryfkrg", "uknlwyfwwzzigrpktibcfjnshikivmrsackgfwvwrxsmjpudgq", "ktoomdwlmgfbjaaflspquwalbvsfjmezudgzorhfyqdorrkonj", "xeumzibbnwexcppjqdkhiuslkqvqxznsawkggwwfrylgdjrxkx", "zjgkfqibmjcjkvmnigxaevsyfrzofkxatdijxhfgwmoxkswcrb", "bqxzqoraniduuynfgiayivexihymsxumazmdryzsvjwaqefafx", "jjsynwojdrbrhpgzbfeuuoiscfnzfnqmxhpineoialekgwzrin", "cgykqdpgpnpgrkolbginlvtehnoyuwpldbwpqiaxthssmsgbcc"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> names = {"i", "m", "t", "t", "d", "e", "u", "k", "r", "x", "h", "n", "a", "p", "b", "b", "h", "n", "h", "w", "m", "s", "p", "g", "g", "z", "r", "y", "v", "g", "a", "w", "c", "p", "h", "v", "f", "b", "u", "b", "h", "e", "j", "j", "g", "c", "h", "o", "c", "t"};
    vector<string> attendance = {"P", "A", "A", "P", "A", "P", "A", "A", "A", "A", "A", "A", "P", "A", "A", "A", "A", "P", "A", "A", "A", "A", "P", "P", "P", "A", "A", "A", "A", "P", "P", "P", "A", "P", "P", "P", "A", "P", "A", "A", "A", "A", "P", "P", "A", "A", "A", "A", "P", "A"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"m", "t", "d", "u", "k", "r", "x", "h", "n", "p", "b", "b", "h", "h", "w", "m", "s", "z", "r", "y", "v", "c", "f", "u", "b", "h", "e", "g", "c", "h", "o", "t"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> names = {"o", "v", "b", "p", "n", "c", "l", "z", "j", "d", "d", "k", "k", "n", "u", "u", "k", "e", "a", "g", "j", "d", "q", "e", "s", "r", "v", "e", "w", "v", "m", "p", "b", "j", "j", "n", "q", "h", "e", "l", "r", "h", "i", "d", "e", "s", "a", "p", "e", "u"};
    vector<string> attendance = {"A", "P", "A", "A", "P", "A", "P", "A", "A", "P", "A", "A", "A", "A", "P", "A", "P", "P", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "P", "A", "A", "A", "P", "A", "A", "A", "P", "P", "A", "P", "P", "A", "A", "A", "A", "A", "P", "A", "P"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"o", "b", "p", "c", "z", "j", "d", "k", "k", "n", "u", "a", "g", "j", "d", "q", "e", "s", "r", "v", "e", "w", "m", "p", "b", "j", "n", "q", "l", "i", "d", "e", "s", "a", "e"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> names = {"e", "j", "i", "b", "i", "i", "q", "x", "l", "m", "m", "t", "x", "k", "l", "i", "z", "a", "v", "o", "n", "r", "w", "n", "g", "s", "j", "l", "e", "x", "o", "z", "a", "k", "h", "e", "c", "z", "g", "i", "v", "t", "c", "x", "w", "q", "p", "w", "j", "t"};
    vector<string> attendance = {"A", "P", "A", "P", "P", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "P", "A", "P", "P", "P", "A", "A", "A", "A", "A", "A", "A", "P", "A", "A", "P", "A", "P", "P", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "P", "A", "A", "A", "A", "P"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"e", "i", "i", "q", "x", "l", "m", "m", "t", "x", "k", "l", "z", "n", "r", "w", "n", "g", "s", "j", "e", "x", "z", "h", "e", "c", "z", "g", "i", "v", "t", "c", "x", "q", "p", "w", "j"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> names = {"qhZCChHSLNGItYxHTLxdhCkM", "ygDvuPfUkLlwMWydhmEcDUdk", "SNAhQwNxWKJQmAEHhXVIOSEP", "cVYUCagNZQNSTGdUtnLhKMFJ", "JacnxdxYzPrOLkWJKNQrNyHP", "jmcJMjICwFyjlWNMXUhjmBjb", "TcYIOCocgdAMWlZXBqWUrTUH", "XBHPywKJBHRaGodRFWuKXWHm", "uTCBYXaRsvzzArNxUFiNAlNQ", "InBHSyLAeSFMxejuJNLNpgXW", "GGziepnnujyStdfWmwyjkcjm", "MXFmhRTMiaevDdAgzhdCekhm", "MWzwGYSZvbeLIkYhxAwNbHdB", "YjUfXduFYCWtYscbpyyDWLei", "AOJnuQdMmQeQLgODlKVsIXNM", "RQyFrozOCbCMYZnPVYXUhrqU", "vkHvgNJYYJwaYZgpufUkpDoQ", "mWbzeFEclFDlieYeoqZSqVMr", "pTiogiBhWXJMPyxUaNyNnBip", "xQuVcbPwAMreDQdctArFjaeS", "mRqpzUjCOTqYtQozRlEbJcvH", "TcgVJiYvNLbTmufRiwcltFNa", "KoXjxbkgsuEMCwHXHZYZhLOR", "EchyJRtgpUBCiWBtNJnmXtQT", "IxPWiLELmTaRvnwEUSmHEbFI", "AcxDHNVNbxiBzpxQHxVAcoKM", "deSmtOnCKkSaNrAOTDTICrxA", "LKTtgNnzSXZFqqYcLgpazhNO", "sQoBNPgipildvtuURxMkOIJI", "YxtLDWXdFFoWSoCoCStYgnpF", "DotypBwTCCisLTnUStGSpGLd", "DscyBkvNhpEvbOvWVBzghyHV", "ETkUNEvNzhHgmBPPpwQIoZoM", "OgLDnwFZvsFVbxOhFxQINNDx", "wHOuXzlnGqeAbVmUkFgqcYQO", "MktMHnqmKBfBXRQTBqblrNay", "DwTapYRfhjYCAdbeNWfuQFHx", "TRYFpsyzCiQYENpgUsHjodgY", "AqXBldUUFRwEbJEYkQRuqOou", "vkAPXFkXMQBplLNzhGcmgetP", "tkFOgCGwoDMzCXLKaiGrAYMP", "JnqvDnulZIneUljFllXNDxcu", "sHGgNszdCXGKiGQWsWBokeXp", "cGKyipRiQLNciDcYABbevQrr", "anZKuPNUbWIvOBNrMrzkeyhb", "APNbkBwSSQVvfPEiBaPPPHoc", "mwRaRzLLvDHIoplMGPDjQlhD", "WUjJcmybTpYvHwDNxPwEikbG", "KKGpSzQLithOJhjegFXbQuUf", "DecHIutWcTyzFcQigtzCDBGc"};
    vector<string> attendance = {"APPPAPPPPPAAPPPPAPPPA", "PAPAPPPPPPPPPPPPPPPAP", "PAPPPPPAPPPPPPPPAPPPP", "PPPAAPPPAAPPPPPAPPPPP", "PPPPAAPPPPPAPPPPPAPPP", "PAAAPAPPPPPPPAPAPPPPP", "AAPAAPAPPPPAPAPPAPPPA", "PPAPPPPPAPPPPAPPPPPPP", "APPAPPPPPPPPAPPPPPAPP", "PPPPPPPPPPPAPPPAPPPPP", "PPPAPPPAPPPAAAAAPPPAP", "APPPPPAPPPPAPPAPPPPPP", "PAPPPPPPPPPAPPPPPPPAP", "PAPPPPAPPAPAPPPPPPAAP", "PPPPAAPPPAPPPPPPAPAPP", "PPAPPPPPPPPPPPAAPPAPP", "PPPPPPPPPAPAPPAPPPPPP", "APPAAPPAPPPPAAPPPPPPP", "APPPPPPPPPPPPPPPAPPAP", "PPPPAPAPAAPAAAAAPPPPP", "APPPPPPAPPAPPPAAPPPPP", "PPPPPPPPPAAAPPAPPPAAP", "PAAPPAAAPAAPPPPPPPPPA", "PPAPPAPPPPPPPPAAPPAPP", "PPAPPPPPPAAAPPPPPPPPA", "PAAPAPPAPPPPPPPPPAPAP", "PPPPPPPPPPPPPPPPAAAPA", "PPAPAPPPPPAPPPPPPPPPA", "PPPPPAPPPPAPPPPAPPPPP", "APPPAPAPPPPAPAAPAPPPP", "PAPAPPPPAPAPPPAPPAPPP", "PPPPPPAPPPAPPPPPAPPPP", "PPPAPPPPPPAPPPPPPPPPA", "PPPAAPPPPPPPPAPPPPPPA", "AAAPPAPAPPPAPPPPPPPAP", "PPPPPPAPPPAPPPAPPAPPP", "PAPAPAPPPAPPPAAPPPPPP", "AAPAPPPPPPPPPPPAAPPPP", "PPAPPPPPPPAPPPPPAPPPP", "PPPAPPPAAPAPPPPPAPPAA", "PPPAPAPPPAAPPPAPAPPAP", "PAPAPPPPAPPPPPPPPPAAP", "PPAPPPPPPPPPPPPPPAPAP", "PPPPPPAPPPPPPAAPPPPPP", "PPPAPAPPAPPPAPPPPAPPA", "PPPPPPPAPAPPPPPPAPPAP", "APAPPAAPAPPPAPPAPPPPP", "PPPPPPPPPPAPAPAPPPPAP", "APPPPAPPPPPPPPPPPPPPP", "APAAPPPAPAPAPPAPPPAPP"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"qhZCChHSLNGItYxHTLxdhCkM", "jmcJMjICwFyjlWNMXUhjmBjb", "TcYIOCocgdAMWlZXBqWUrTUH", "GGziepnnujyStdfWmwyjkcjm", "YjUfXduFYCWtYscbpyyDWLei", "mWbzeFEclFDlieYeoqZSqVMr", "xQuVcbPwAMreDQdctArFjaeS", "TcgVJiYvNLbTmufRiwcltFNa", "KoXjxbkgsuEMCwHXHZYZhLOR", "AcxDHNVNbxiBzpxQHxVAcoKM", "YxtLDWXdFFoWSoCoCStYgnpF", "DotypBwTCCisLTnUStGSpGLd", "wHOuXzlnGqeAbVmUkFgqcYQO", "DwTapYRfhjYCAdbeNWfuQFHx", "vkAPXFkXMQBplLNzhGcmgetP", "tkFOgCGwoDMzCXLKaiGrAYMP", "anZKuPNUbWIvOBNrMrzkeyhb", "mwRaRzLLvDHIoplMGPDjQlhD", "DecHIutWcTyzFcQigtzCDBGc"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> names = {"UdZQYCOmErvOggBcGkjSCEAGYMLEVDK", "bdSCneXPIOMekKMJksTvHaWukAVfcYw", "cJtjbuyvdgGecCzzhPKNZnLbbiimJCX", "ZmgPajoNfoqCgwCnpoMzOyPoYyOXOEU", "sfWIiVaMYEBdVKfOuiOJOumtAHBKExZ", "lFOmuPGzItVKObiWUIpfOZtyiDOnkYm", "EJkLQHXjsLuWYnMyIRCEPhCboCBLzKW", "LQREbRAqqosxAWpjIYGWKdfTYVFqYiH", "HLCeVqqrQJmtAWbzThzKlOTHzQdgmTZ", "TnaPvukGtdGYxBbTEEBGcLlgvFXsFkW", "zNWUnoOZQTZTBrCTnoFBYNUJcSClLlb", "nMrVIZOMCRDdaZVhpxwlbQyZeiYjagM", "UfjbKoQwaZBvTBbSTUqmEobGkzBIPys", "CLeCLfLVZOPdtgLuGpdSnZNiwGrmVJF", "DjXlLlFNoFSgzeYrzYhUhTKbgxzppnS", "QlAwLEHUWIRZJEzqyCTkLsGeOsOcjAV", "jNevRvscGhySCTNeQVpGOBxFRQXyiHO", "lPZPxNaKnFALPLqcchLiSdmYOjsCwtf", "TuNjnXspoeByXDTjfqmTfysKIhsropu", "dXdzxMbzqwsDfJqhbEmBaTLkNeJPCMa", "KPOjjmWGXeMMsTYwMmxFzVSoGuvmbjz", "ZRUrfLWWwbKzLZNBlXAHkQPPjgLrPgu", "ecbUUrhueCOQcPcvspHpqBYrYSYzzsp", "SwdECICnMEGAWJUuDMMzKIivywEkPse", "dYQChLMYPpVZRqhZwQqWItIBBJyJakd", "lfdndYwxsHFZnFJLwYqvTpDbcGXsZHN", "muxWqoWAOVJcQkzjYLkUTrgcZNuLlXg", "OIVOJwVjSdvjlLAVNlkalNiHpfNlKxF", "MIyVyHcGIFhBEWkMaBNNXIQLhjDwvhz", "lmSQzwBbMWBytDbQaGhvQjsdsChfaML", "yVTPokjpmgxJDqSenzKbJbCdgxynBIp", "PKsojvAfhgtWwshfQNfTglBROATcnOQ", "PjWNkVRcfvQlSdCfAZKbABBVOuaeRKe", "sGWxqSYKuSMPkVapwQJjtRxEZvFfPaw", "eiXLOqzRfLUcinHhcrCMriHvKrmCjeG", "hojOcTssIpDJrAhwYlScZAuxgSlBfNu", "UumLeTHrPHwCxaEldWIIMyORWtepavs", "fqcuncWuUJVRjTvnwYHiFsnGoetlxxh", "pgLnSBxvzLriNYNAWzCSPBaWalFTyMB", "rgcvUMOZQgqXWYVuyktkZXbwcEJzYHZ", "LUAbZwVrLccnzZqoewsBQGtZYRpYsAC", "CYQOCSvWbmyeENuHKEynEvXHCcdNSPE", "VaZDTPrZRNXnEDDLLvSWerpXUmjoYPH", "yjAohbODiISHsVzfLzMXqwJzBgJNKnQ", "MgQpKKFVBCtGicxkTzFmvEQVibuPtrg", "HBwqSEBIncuttgOzFhIKRCVDsmfNQUz", "YFJLmOIkVcZMVoxHWBWVyaIpKHPzWjP", "ynTwejAoiQwsNrRNEOrzGRxFVAEJyha", "xMtHfDoaKCUnTRkWRQpZrAYBgXQplLA", "glBKSosgaPvdVZElJXahWpWdDjMDwxE"};
    vector<string> attendance = {"PAPPPPPPPAPPPPP", "AAAPPPPPAAPPPPP", "APPAAPPPPAAPPPP", "AAPPAAPAPPAAPPA", "AAPPPPPAPAPAPPP", "PPAAAPPAPPPPPAP", "PAPAAPPPAPPPAAP", "PPAPPPPAAPPPPAP", "PAAPAPAPPPPPPPP", "PPPPPAPPPPPPPPP", "PPPPAPPPAAPAPPA", "APAPPAAAPPPAPAA", "PPAPPPPAAPPAPPA", "AAPPPPPPAPAPAAP", "AAPPPAPPPAPPPAP", "PPPAPPPPPAPPPPA", "APPPAPPPPPPPAPP", "PAPPPPPPPPPAPPP", "APPAPAPPPPAPPPP", "APPAAAAPPPAPPPP", "PPPPPAAPPPPAPAP", "AAPAPPPPPPAPPPP", "PPPPPPPPAPAPPPA", "PAAPPPPAPAAPAPP", "AAPPPPAPPPPPAAP", "PPPPPAPPPPPPPPP", "PPPPAAAPPPPPPPA", "PPAPAPPPPPPPAPP", "PPAPPPPAAPAPPPA", "PPPPPPPPAAAPPPP", "PPPPPPAPPAPPAPP", "PAPAPPPPPPAAAPP", "PPPPPPPPAAPPAAP", "PPPPPPAPPPAPPPP", "PPPPPPAPPAPAPPP", "APPPAAPPPPPPPPP", "PPPAPAAPPPAPPAP", "PPAPAPPAPPPPPPP", "PAAPPPPPPAPPPPA", "PAPPPPPPPAPPPAA", "PPPAPPPAPPAPAAP", "PPPAPPAPPPPPPPA", "PPPPAPPPPPAPPPP", "APPAAPAPPAPAPAP", "PPPAAPAPPAPPAAP", "PPPPPPPPAAAPAPP", "AAAPPAAAPAAPPPP", "PPAAAPPAPPAPPPP", "PPAAPPPPAPPAPPP", "PAPPPPPPPPPPPAP"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bdSCneXPIOMekKMJksTvHaWukAVfcYw", "cJtjbuyvdgGecCzzhPKNZnLbbiimJCX", "ZmgPajoNfoqCgwCnpoMzOyPoYyOXOEU", "sfWIiVaMYEBdVKfOuiOJOumtAHBKExZ", "lFOmuPGzItVKObiWUIpfOZtyiDOnkYm", "EJkLQHXjsLuWYnMyIRCEPhCboCBLzKW", "LQREbRAqqosxAWpjIYGWKdfTYVFqYiH", "HLCeVqqrQJmtAWbzThzKlOTHzQdgmTZ", "zNWUnoOZQTZTBrCTnoFBYNUJcSClLlb", "nMrVIZOMCRDdaZVhpxwlbQyZeiYjagM", "UfjbKoQwaZBvTBbSTUqmEobGkzBIPys", "CLeCLfLVZOPdtgLuGpdSnZNiwGrmVJF", "DjXlLlFNoFSgzeYrzYhUhTKbgxzppnS", "TuNjnXspoeByXDTjfqmTfysKIhsropu", "dXdzxMbzqwsDfJqhbEmBaTLkNeJPCMa", "KPOjjmWGXeMMsTYwMmxFzVSoGuvmbjz", "ZRUrfLWWwbKzLZNBlXAHkQPPjgLrPgu", "SwdECICnMEGAWJUuDMMzKIivywEkPse", "dYQChLMYPpVZRqhZwQqWItIBBJyJakd", "muxWqoWAOVJcQkzjYLkUTrgcZNuLlXg", "MIyVyHcGIFhBEWkMaBNNXIQLhjDwvhz", "PKsojvAfhgtWwshfQNfTglBROATcnOQ", "PjWNkVRcfvQlSdCfAZKbABBVOuaeRKe", "UumLeTHrPHwCxaEldWIIMyORWtepavs", "pgLnSBxvzLriNYNAWzCSPBaWalFTyMB", "rgcvUMOZQgqXWYVuyktkZXbwcEJzYHZ", "LUAbZwVrLccnzZqoewsBQGtZYRpYsAC", "yjAohbODiISHsVzfLzMXqwJzBgJNKnQ", "MgQpKKFVBCtGicxkTzFmvEQVibuPtrg", "HBwqSEBIncuttgOzFhIKRCVDsmfNQUz", "YFJLmOIkVcZMVoxHWBWVyaIpKHPzWjP", "ynTwejAoiQwsNrRNEOrzGRxFVAEJyha", "xMtHfDoaKCUnTRkWRQpZrAYBgXQplLA"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> names = {"ylEmCvfkTVjHPHNkDxOKdhmZxEDcSBSXtcN", "sIStRbCQkydfUYRBdMLUTznyRnpuIbJhUNO", "ZsLXFWUswucbSDPrTwzoliRgQTdycwFPAvt", "BZoQvkjOWXIoOwdmVGejuZDJUqSbILJKTwZ", "LrDINmzwbFntmFnJQDWFgPPkWPReuwFymda", "wuapvHKyPvXZqgPiaftgYeisCpcmaULTepJ", "mJhmQkMtPzUmYOIUSsJgwlXMSYkzXxgzzGG", "VVwvhJnVUeGZEovhBSOtesZzfmhKAruTTZs", "ephCKdnEUStAKpcvALzJqtkpnkdBiwgyfEp", "srpTRnPdRvbgDQLwNUaqEPyKTUQeEEBToxE", "RhAwhkipoHtSfbwrZRVYzopgvQEGoQbOnsY", "njbVdKhateQfrxCPhPMiGWIWCsHQrXObxEk", "ThTJnOYFupzBYdhLZTOagUkFwvHYGzkdEMw", "maxlnYSUIUDbBwTEXtReekubroPLNgdQUch", "FOUPxmLyzmZfpIYOvdhzcnrfEbuWyaVCLTL", "bIaFTvSFNFrTScomEtsDVxYYCXHuLZMipeN", "matugKPaMEcyzpsmByqdtoEDUUunQaHNphr", "UPPdHpOWfVLLufjVdJfEJKaCGYbsidPPNgt", "aQhaXXnqtGTWzzfsWAXFEPTPGDSsThfIqev", "qHlMnxPCsEIhDDBouaiWVZfDoNPfduxxImX", "MCIVUukxWaYoTvvqcOOlfCDpRdvHpuhXUpk", "lGezZJrrgNdzUwLKfykEaSgkfdXGMNDFzml", "WrFAuZWfaBzTRXnlHqHCAqDujWKkySmIrwa", "vDOeggCmJTjMFGqKPbxSFpErMOPAVWNHzLe", "hctBgysSADHAoQpmyfLxhjUDNyqpCobtAoI", "forRDoGsRNXRTanWQDWGSeEzfVBNKxOfsrL", "AICPMFaFaukzVskXuwaHcRTZDbMDdduBGky", "iyUtbEYqZNRYKmFcFpZUHTLQjmZUGXqeVQp", "LzDKfHbKEBBeZYHtsBvfOKmTcvoUBnMeBWQ", "mikUelnKJiYWHOqJBnkQUziiMXsoXBtLKJP", "tZSYDzJuLFAqGyPqScuoFIQcGewOCkvekan", "onkrvipAoDKDdibYmebkWkYPKcdrEWLVXdB", "hkyJRiHYpQfikWqVegYVAVJFGojnnhojhTY", "TLOxmaeaHbuletJYtLrhlarkBMCdiUBVhle", "eTmfksScXRSpjQfAEvvSoPUOwvHXBRGGfPd", "IsacWQElDtudECxscOsshXbsfMBJLCVPSPE", "MCNNUOVjWovRTNPcFjsuJnaLNgxQwJXRDKM", "aeHQnzmbRaojrmolAcBDeODmNYmAOuUCRry", "XymfOXvjypDEoRnaEpvCDYrNZWsGPwjRdwc", "foQgctaBqXSAjaBWMtYxVxQEqIWxHFZVLJh", "QpGNHZdZgikrxsRFiPoRnKDjzAYBmJtFmMf", "gotqvPUleLNeezYJJukZKYgUkheTPILmSch", "aweWpRkzKWFoqRIifBsqlKbLZIIgNusNgNr", "eJlIwpBEgeDoyuqGIyvlZWRQhybJnhXnpbc", "KFUeJOFcHWGPlFRbFwykXZBFqDahPUQqEBS", "rCDXhewTzqhgLcNSesPVqvACfVRQmcTSUYf", "UDfBhFtLBIWhbAJxjLtGIneurZZFtbGSLiY", "WZDVWytYUsoNNoHDUaGLcAYjucNPrTDbOJA", "CrNGTywEnRJqUlncinNiZGxmjUAoqoSUnms", "EXrLScYcsMRTZkVaWZgGGjRpDvBgKXVprRU"};
    vector<string> attendance = {"PPPPPAPPPPPPPPPPAPAP", "PAPAPPPPAPPPAPPAAPPA", "APAPAPPAPPPAPPPPAPAP", "PPPPPPPAAPPPPPPAPPPP", "PPPPPPAPAAAAPPPAPPAA", "PPAPAAAAPPPPPPPPPPPP", "PAPPAAPPPPPPPPPPAPAP", "PPPPPAPPAAPPPAAPPPPA", "APPPPPAAPPAPPPAPAPPA", "PPPPPPPPPPPPPAPAAAPP", "PPPPPPPPPAPPPPAAAPPA", "AAPPPPAPPAPAPAPPPAPP", "AAPAPPPPAPAPPPPAPPPP", "PPAPPPPPPAAAAPPPPAPP", "PPPPAPPPPPPPPPPPPPPP", "PPPPPPPPAPPPPPPPPPPP", "PPPPPPPPAPPPPAPPPPAA", "PPAPPPPAPAAAPPAPPPPA", "PPPPPAPAPPAPPPPAAAPP", "PPAPPPPPAPPAPPPPPAPA", "PAAPPAPAPPPPPAAAPPPP", "APPPAPPPPPPPPPPPAPAP", "PPAPPPPPPPPPPAAPPAPP", "PPPAPPPPAPAPPPAPAPPP", "PPPPPAPPAPPPPPAAAAPP", "PPPPPPPPPPPAPAPPPPAA", "AAPPPPPAPPPPPAPPPAAP", "APPPPPPAPPPPPPPAPPPP", "PAPAPPAPPPPPPPPPPPPP", "APPPPPAPPPPPPAAPAPPA", "PPPPPPPPAPPPPPPPPPPP", "PPAAPPPPPPPPPPAPPAPP", "PAPPPPPPPAPPPPPAAPAP", "AAPPPPPPPPPPPAAAPPPP", "PAPPPPAPPPPPPPAPPPPP", "PPAPPPPAPAAPAPAAPPPP", "PPPAPPPPPAPPPAPPPAPA", "PAAPPPPAPAPAPPPPPPPA", "PAPPPPPPPAAPPPPPPPPP", "PAPAPAPAAAPAPPPPAPAA", "PAAPPPPAAPAAPPAPAPPP", "PPAPAPAPAPPPPPPAPPPP", "PPPPPAPPPPPPPPPPAPAP", "PAPPPAPPAPPAAPAPPAPA", "AAPPPPPPPPPPPPAPAPAP", "APPPAPAPPAAPAPPPPAPP", "AAAPPAPPPPPPAPPAPPAP", "PPPPPPPAAPAPAPPPPPPP", "PPAPPAAPPPPAPPPPPPAP", "PPPAAPPPPPPPPAPPPAAA"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"sIStRbCQkydfUYRBdMLUTznyRnpuIbJhUNO", "ZsLXFWUswucbSDPrTwzoliRgQTdycwFPAvt", "LrDINmzwbFntmFnJQDWFgPPkWPReuwFymda", "VVwvhJnVUeGZEovhBSOtesZzfmhKAruTTZs", "ephCKdnEUStAKpcvALzJqtkpnkdBiwgyfEp", "njbVdKhateQfrxCPhPMiGWIWCsHQrXObxEk", "ThTJnOYFupzBYdhLZTOagUkFwvHYGzkdEMw", "maxlnYSUIUDbBwTEXtReekubroPLNgdQUch", "UPPdHpOWfVLLufjVdJfEJKaCGYbsidPPNgt", "aQhaXXnqtGTWzzfsWAXFEPTPGDSsThfIqev", "MCIVUukxWaYoTvvqcOOlfCDpRdvHpuhXUpk", "hctBgysSADHAoQpmyfLxhjUDNyqpCobtAoI", "AICPMFaFaukzVskXuwaHcRTZDbMDdduBGky", "mikUelnKJiYWHOqJBnkQUziiMXsoXBtLKJP", "IsacWQElDtudECxscOsshXbsfMBJLCVPSPE", "aeHQnzmbRaojrmolAcBDeODmNYmAOuUCRry", "foQgctaBqXSAjaBWMtYxVxQEqIWxHFZVLJh", "QpGNHZdZgikrxsRFiPoRnKDjzAYBmJtFmMf", "eJlIwpBEgeDoyuqGIyvlZWRQhybJnhXnpbc", "rCDXhewTzqhgLcNSesPVqvACfVRQmcTSUYf", "UDfBhFtLBIWhbAJxjLtGIneurZZFtbGSLiY", "EXrLScYcsMRTZkVaWZgGGjRpDvBgKXVprRU"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> names = {"DlVJyHun", "LgLlifxs", "hUYVxWGn", "fdXGGEvo", "gzNDwCRY", "SuCsfmoO", "DAeNRCMh", "lVYPMQbA", "FYRERTAA", "hMgiMYVC", "xGTEIsHb", "IvgWbUvt", "EDblqjeq", "nEVofplW", "ybDCOqzn", "AqKFiOUj", "eTkdimeh", "MwivxxRh", "SzRvnOET", "azDjGfJb", "vwxPAIxq", "MnIjunba", "kurnzquZ", "zDwUWAEv", "XNHUtphx", "ytHJHVtz", "VBnOKxSC", "cicgvQYc", "udKFOhas", "ghMumGpm", "WCHIMaaq", "rIyasmpN", "NkcpFtzO", "BUzSQOtR", "yDqJVHLu", "ppLAHLGW", "SVkjAjzb", "FHHSOiXL", "cNwNxzMM", "bZAUCUjE", "BuDktIZz", "DJEAWvIQ", "xPdoYZli", "LhwMAoNS", "tyixSQri", "OZpJxIVi", "OiISWgDG", "DPyXJugP", "PJDtcDbD", "rAGWHBdi"};
    vector<string> attendance = {"PPAPPPPPPAPPPPPAAPPPAPPAPAAAAPPPAPPPPAPAPAAPPAAPAA", "PAPPPAPPPPAPAAPPPPPPPPPPAPAPPPAPAPPPPAPPAAAPAAPAPA", "PAPPPAPAPPPPPPPPAPAPAPPPPPAPPPAPAPAPAPAPPPPPPAPPPA", "APAAPAPPPAPAPPPAPAPPAPAPPPPPPAPPPPPPPPPPAAPPPAPPPP", "PPAPPPAAPPPPPPAPAPPAPAAAPPPPPPPPPPPPPPPPPPPPAPAPPP", "PPPPAPPAPPPPPAAAAPPPPPAPPPPPAPPAAPPPPAPAPPPPAPPAAA", "APPAAPPAPAPPPPPPPAPPPPAPPAPAPPAAPPPPAPPPPAPPPPAPPP", "APPPAAPPPPPPPPAPAPPAAPAAPAPPPPAPPPPPPPAPPAAPAPPPPP", "PPAPPPPAPAPPPAPAPPPPAPPPPPAAPPAPPPPAPPAPPPPAPPPPAP", "PAPPPAPPAAPPAPPPPPPPPAPPPPAAAPAPPPPPPPAPPPAPPPPPPP", "APPPAPPPPPPPPPAPPPAPPAAAPPPPPAAPPAPPAAPAPPPPPPPPPP", "PPAPAPPPPPPPPAAPAPPPPPAAPPAAPPPPPAAPAPAPPAPAAPPPPP", "APAAPPPPAPPAPAPAAPPAPPAPPPPPAPPPPPAPPPPAPPPPAPPPPP", "APPPPAPPPPPPPAPAPAPAPPPPPPAPAPPPPPPPAAAPPAAAPAAPPP", "PPPPAPPAPPPPPPAPPPPPPPAPPPPPPPPPPPPPPAPPPAPPPAPPPA", "PPPAPPAAPPPPPPAPPPAPPPPPPPPPAPPPPPPPPPPPPPPPPPPPAP", "PAAPPAPPPPPPAPPPPPPAAPPPPPAPPAPPAPAPPPPPPAAAPPAAPP", "PPPAPAPPPPPAPPPAAAPPPPPPPPPAPPPPAPAPAPAPAPPPPPAAPP", "APAPPPAPPPPPAAPPPPAPAPPPAPAPPAPPAAPAPAPAPPPAAPPAAP", "PPPPPAAPPPPPPAPAPPPPPAPPPPAAPPPPPPAPPPAPPPPPPPPPAP", "PAPPAAAPPPAPAPAPPPPPPPPPPPAPPPPPAPAAPPPAPPAPPPAAPP", "PAPPPPPPPPPPAAPPPPPPAPPPPAAAPAAPAPPPPAPPPPPAAPPPPP", "APAPPPPPPPPPPPPAPAPPPPPAPPPPPPPAAAPPPAPPAAAPPPPPPP", "PPPPPPAPPPAAAPAPPPPPPPPPAPPPPAPPPPAPPPAPPPPAPPPPPP", "PPPAAPAPPPPPPAAAPPPAPPPPPPPPAPPAAPAPAAPPPPPPPPPAPP", "APAPPPAAPPPPAPPPPAPPPPAPPPAPPPPPPPPPAAPPAPPPPAPPPP", "PPPPAPPPPAPAAPAPPPPPAPPPPPAAAAPAAPAPPPAPPPAPPPPPPP", "PAAPPPPAPPPPPPPPPPAPPPAAPAPAAAPAAPAPPPPPPPPPPAPPPP", "PPPPPPAPPPAPPPPAPAPPPPPPPAPPPPPAPPAPPPPAAAPPAAAPPA", "PAAAPPPPPAAPPAAPPAAAAPPPPAPPAAPPPAPAAPPPPPPPPAPAPP", "PPAPPAPPAAPAPPPPPPPPPAAAPPPPPPPPPPAPPAPPPPPPPPPAPA", "PPAPAPPPPPPPPAPAPPAAPPPAPPPPPPPAPPAPPAAAPPPPAPPPPP", "PPPPAPPAPPPPPAPPAPPPPAPPPAPAPPAPPPPAPPPPPPPAAPAPPP", "PPPPPPAAPPAPPPPAPPPPAPPAPPPPPAPPAPPPPAAPAPPPPPPPPA", "PPPPPPPPPAPPPAPAPPPAPAPPPAPPPPAAPAPPPPPPAAAPPPAPPP", "PPAAPPPPAPPPAPAPAPPPPPPPPPPPPPPPAPPAPPPPPAPPPPPPPP", "APPPPPPPAAPPPAAPPPPPAPPPPPPPPPAAPPPPPAPPPPPAPPPPAA", "APAPPPPPPPAPAPPPPPAAPAAPAPPPPAPAPPAPPPAPPAPPPPPAPP", "PPAPPPPPPPAPPAPPPPPPPPAPPPPPAPPPPPPPPPPPPPAPPPAPPP", "PPPPPAPPPAPPPAAAAAPPPAPAPPPPPAPPPPAPPAPPPPPPPAPPPP", "PPPPPAPPPPPPPAPPAPPPPAPPAPAPPPPPPAAPPPPPAAPPPAPPPP", "PPAPAPPPPAPPPPPPPPPPPAAPPAPPPPPPPPPPPAPAPPAPPPPPPA", "PPAAPPAPPPPAAPPPPPPPAPPPPPPPPPPPPPPPAPPAPPPPPAPAPA", "APAAAAAPPPPPAPPPPPPAPPAPPPAAPPPPPPPPPPPPPPAAAPPAPP", "PAAPPAAPPAAAPAAPPPPPPPPPAPPAPPAPPPPPPPPAAPPAPPPPAP", "PPPPPAAAPPPPPPPPAPAAPAPPAPPPPPPPPPAPAPPPPPPPPPPPPP", "PPPPAAAPAPPAPAPPPPPAPPPPPPPPPAPPPPPAPPPPAPPPPAPPPP", "PAPPPAPAPPPPAPAAPAPPPPPAPAPPPPAPAPPPAPPAPPPPPPPPPA", "PPPAPPPPPAPPPPPPPAPPPPPPAPPPPPPPPPAPPPAAPPPPPPPPAP", "PPPPPAAAAPPAPAPPPAPPPPPPPAPPPPPPPAPPPAPPPAPPAPPPPA"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"DlVJyHun", "LgLlifxs", "hUYVxWGn", "fdXGGEvo", "SuCsfmoO", "DAeNRCMh", "lVYPMQbA", "FYRERTAA", "xGTEIsHb", "IvgWbUvt", "EDblqjeq", "nEVofplW", "eTkdimeh", "MwivxxRh", "SzRvnOET", "vwxPAIxq", "MnIjunba", "XNHUtphx", "VBnOKxSC", "cicgvQYc", "udKFOhas", "ghMumGpm", "rIyasmpN", "yDqJVHLu", "FHHSOiXL", "bZAUCUjE", "LhwMAoNS", "tyixSQri", "DPyXJugP", "rAGWHBdi"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> names = {"sNcfpuQNilcobfZDbPgwKIJeTxJKafyvecoarpqNpgyW", "qJnqekJtBXZYbVvpjVncXajIQOMieFmTIZiYALmNMTMa", "mboYBDfwLAOGIXlsHYxLpdYehOWlxFDCQAllzUBnJbLG", "TyFBZjzigrEGBnVSeSIdBtdmCsMJizDpqZTGANEtPInm", "tgjLhikXNMjyJWRSHEjgPuyqqqQmxkGULwHWUkvgTmds", "NBcBnihFqvzdaGXdVnUacOoGubtAlUOZjBYZVmOiOOGL", "VhBBOmMOUwmXiMWQqUdqwlaXoabIIFNAYaiGwbfikURw", "CwPWusMSIYfQhDevtmSbuPLoiIyIGoBYsXLfuWKIwBTc", "EIQZdXLmCPVUmmQSXzlPmdlvXPLqqChCzNqQjyvQJLIa", "KYwWPdUwLemPMEiGHGoMMDScONeQYkNxxCPiyOONmOiF", "sfpOottpJWuiXaPcBlOSDWSQgJHCBxiOnOrIkSkRQvAf", "HvsTyOoLAmoRKQbRezIKxXHKujgtUnVkaGAstEehHIwq", "yGRHXAZZywurXLuONGyDktixQuDbLZjOFWLTnktAubtP", "PWzbacGpJagllzzsgFiQjdADxjsBwOHVaIbEmtsjJztz", "WDTwtpEFkloauRvlfHMbloxycGVfNqlFNlxwljgqBiWI", "PKcoALLvCYIgmNRfrtXeHsCyYITqgnJsvCYGvuGPHPxt", "SnVxUHCuplqTdRCkmTuZtBbHzlThZlAVqgTSYXroBMFr", "OHcxHZBPmodIQnEzAmoRhVAzaieLAfUOuWkOEXoFndaX", "xjwEOZiuGHdycZdqWhRRlAPSuHWFTlXBVyGbZonLjOUo", "FHGqNeUSDEeUpnDiVnDDMZcKxCLjjLzWOjXWMewhwPkN", "uxrljNojnCMIjfhqRnAedSnnQtWtXCUCeLuDfmSSDKIY", "ADIIQqNRfFGsmaPqTDLdtAHrjquQbqnHtZdpTszYgLnn", "YzfDkqiQXMUnhGuaKYAvYjUFnhaZAXIaILzAlWkJEWcK", "zcgWEatEaDAUHmwaPyQooDkylQQKRzUAbphZZeRJYAqG", "AxodRluVyIpxrFHxMMNoXpxPFZzAsKXHdDrYOLYNbNaq", "JamESAiZJAYIjbcjoYPfwEddmrlnQyQBCJMlzuxnLBvA", "ZRlIOlNyHBLNhiJxIEiFGjsaUBFlQGowyFZpXsQDRfjo", "PBvhuyErgxLgaZyxbLEeWFHELcNoGRPeUPiRnzUovtio", "VRXeKaTfuLpfOJANWXdYxfCQsDDQrNMBmQMFHopnXslt", "ZmQTErCYHzidwZtMDvYluJqXMROLQZlFeOKGdGCUCytS", "iMmWSorMRixIwdnFZVIVXZHTeUGWvfmujhbzgoWTvRMf", "SArWjDiXqSfmeZgryYLAokpLpPgpwQNKUFUKRcSlRvtC", "MyiTGTjPLTwuNiMVxawIQGSluxGxSvcPCISXQOKgRJNv", "LHHgInqZYPWIeJFtRtRUPDKhpjHzTilMJEaniirhiuaJ", "xvuMFnAYTUIeZMQyTiolaOIZslLbgsQtvsHJHUYTJkRb", "fAEXLNioWcstkKhJsBlYAMWmoIemCbmnqaqQtyrWYqfY", "XvryApVOPUROtPLbXZJRvHczvbjjmaiHVfwajMQvryzI", "INfmjScKHgVzbDHkTyMhXxchZSPYAIQhKStVJyZqCktc", "zDxufEgNSvSjpjUrJkKCMBIHYqJNAqDhhomxmpnwqjdc", "IrwRBjaikgpYVsdcFDmxylWeEBennryHPufHgOzQIWks", "YpbphcqPbqZVtBQkZadahUVXjXwqaKsvblQWdQJZvMgt", "gHgxxPgAxlWCMwQKPHdhRIRVTmFiFSRXTYnIRUmBYSHp", "TLWGQBKatjIEcrGOeXoUBhezjMLVEkmOiSwACuTqQQfl", "gcTgXTUsqDcMwOPXpCcKkjsutThdUoUVCYmqixNsCuwV", "AcqFyEuBpkAPPTQnxzpQISWqpoTtQAfIXcvexDCfRCGa", "TOxQOtTmxDrWWVffSUezOQYuYvNMMdIFOcIASCaAKAIR", "nYSfWbQETLoRVwIYJftvNBoyQiEYZMMvJXQZXKEZvtMj", "OlpUqTpnCgdpueYYPeiQBJZrFvXoGaxQdmBSuSrLqIuS", "uUziMbIfqSeQnGmPwFGMskQrSFQdNxfJSxBDIsRGCKwN", "YKwQlEVWJHDrMyJvzOVhJFXXPEdYtxCUTYYRFydYmEID"};
    vector<string> attendance = {"APPAAPPPPAPPPPPAAPPPPPPAPPPPPPPPPPPPPAAAPPPPPPPAPP", "APAPPPPPPPAPPPPAPPPPAAPAPPPAPPPPPPPPAAAPPPPPPPPPPA", "PPAPPAPPPAPAPPPPPPAAAPPPPPPPPPPAAPPAAPPPPPPPAPPPAP", "PPPPPPPPPAPPAPAPPPAPPPAAPPPPPPPPPPPPAPAAPPPAPPAPPP", "APAPPAPPPPPPPPAAPPPPPPAPPPPAPAPPPPPPPAPPPAAPPPAPPP", "APPAPAAPPPPAPPAPPPPPPPAPPPPAPPPPPAPPPPAPPAAPAPPAPA", "PAPPPPAAPAPPAPPAAPPPPPPPPPAAAPAPPAAAPPAAAPAAPPPPPP", "AAAPPAPPAPPPPPPAAPPPPAPPAPPPPAPPPPPPPPPPPAPAPPAPPP", "PAPPPPPPPAPPPPPPPPPAPAPPPPPAPAAPPPPPAAPPPAAPPPAPAP", "PPPPPPPAPPPAPPPAPPPPAAAPAPPPPPPAPAPPPAAPPPAAPPAPPP", "PAAPAPPPPAAPAPPPPPPPPPPAPPPAPPPPAPPPPAPPPAPPPPPPPP", "APPPAPPAPPPPPAPPPPPAPPPPPPPPPPPPAPPPPPAAPPAPPAPPAP", "PPPPPPPPAAAPPPAPAPAAPAPAAPPAPAAPPPAPPPPPPAPPPPPAPP", "PAAPPPPPPPAPPPPPPAPPPPPAPPPPPPPAAPPAPPAPAPPPPPAPPA", "PPPAAPPAPAPPPPPPPPPPAPAPAPAPPAPPPPAAPAAPPAPAPPAAPA", "PPAPPPPPAPPPPAPAPAPAAPAAPPPAAPPPPPPPPPPAPPPPPPPAPP", "PAPPAPAPPPPPAAPPPPPPAPPPPPAPPPPPPPAAAPAPPAPPAPAAAP", "PPPPAPAAAPPPAPAPPPPPAPPPAPPPAPAAAPPPAPPPPPPPPPPAAP", "PPPPAPPPAPPPPPPPPPPPAPPPPPPPPPPPAAPAPAPPPAAPPPPPPA", "PPPPPPPPAPPPAAAPPPAPPPPPPAAPAAPPAPPPPPPAPPPPPPPPPP", "PPPPPPPPAPPPPPAPAPPPPPAPPAPPPPPPPPPPPPPAPAPPAPPPPP", "PAPPPAPPPPPPAPPPPAAAPPPPAPPPPPPPPAPPPPPPPAPPAPAPAP", "APPPAAPPPPAPPPPPPPPPPPPPPPAPAPPPPPPPPAPPPAAPPPPAAP", "PAAPPPPAPPPPPPPPPAPPPPPPPPPPPPPPPPAPPPPPPAPPPAPAPP", "PPPAAPPPPPAPPPPPPPPPPAPAPPAPPPPPPPPAPPAPAPAPPAAAPP", "PPPPPPAPPPPPPAPPAAAPAPPPAPAPPPPPPPPAPPPPPAPPPPPPPP", "PAPPAAPPAPPPPPAPPAAPPAPPAPPPPPAPPPPPPAPPPAPPAAPPPP", "APPPAPPPAPPPAPPPAPPPPPAPPPPPPPPPAPPPPAPPAPPPPPPPAP", "AAPPAPPPAPPAAPPPPPPAPPPPPPPAAAPPPAPAAPPPPPPPPPPAPP", "PPPPAPPPPPPAPAPAAAPPAPPAPPAPPAPAPPPPAAPPPPPPAPPPAP", "AAPPAPPAPPPPPPPAPPPPPAPAPPAPPPPAAPAPPPPAPPPPAPPPAP", "PPPPPPPPPPPPPPAPPPPPPPAPAPPPAPPPPPPPPPAAPAPPPPPAPA", "APPPAPAPAPPPPPPPPPPAAPAPAAPPPPPAPPAAPAAPPPAPAPPPPP", "PPPAAPPPAPPPPAPPPPPAPPAPPPPPPAPAAPPPPPAPPPAPPPPPPA", "PPPAPAAPPPPPPPAPAPPAPPPPPPPPPPPPPPPAAPPPAPPPPAPPPP", "APPAPPPAAPAAAAPPPPPPAPPPPAPAPPPAAPAPPPPPPPPPAPPPPP", "PPAPAPPAPPPPAPPPPPPAAPPPPPPAPAAPPPPAPPPPPPPAPPPAPP", "AAAAPPPPAPPPAPPAPPPPAPPPPAPPAPPPAPPPPPPAAAPPAPAPPP", "PPAAPPAAPPAPPPPAPPPPPPAPPPPPPPPPPAPPAPPPPAPPPPPPPP", "PAPAPPPPPPPPPAAPAPPPPPPPPAPPPPAPAPPPAPPPPAPPPPAPAP", "PAAPAPPPPPPPPAPPPAPPPPPPAPPPPPPPPPPPPPAPPPPPPPAAAA", "PPAPPAPPPAAAPPAPPPPPPPPAPPPPPPAAPPPPAPPAPPPPPPPPPA", "AAPAPAPPAAPPPPAAAAAPPPAPPPPAPPPPPPPPAPPPPPPAPPPPPP", "APPPPPPPPPPAPAPPAPAPPPPAPPPAPPAAPPAAPAPAPPAPPPAPPP", "PAPAPPPPPPPPAAPPPPPPAPPPPPPPPPPAPAAAAPPPAPPAAPPAPA", "AAAPPPPPPPPPPPPPAPPAAPPPPPPPPPPAPAPPPPPPAPPAAPPPAA", "PPPPAAPPPPPAAPPAPPPAPAPPAPPPPPPPPPPPPPAPAAAPPPPPPP", "PPPPAPPPPAAAPPAAAPPPPAPPAPAPAPPPAPPAAPAPPPPAPAPPPP", "APPPPPPAPPPPPPAAAAPPPPAPPPPPPAPPPPPPPPPPPPPPPPPPPP", "PPPAPPPPPPPPPPPPPPPPPPPAPPPPAPPPPAAPPAPPPPAPAAAPPA"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"mboYBDfwLAOGIXlsHYxLpdYehOWlxFDCQAllzUBnJbLG", "NBcBnihFqvzdaGXdVnUacOoGubtAlUOZjBYZVmOiOOGL", "VhBBOmMOUwmXiMWQqUdqwlaXoabIIFNAYaiGwbfikURw", "CwPWusMSIYfQhDevtmSbuPLoiIyIGoBYsXLfuWKIwBTc", "EIQZdXLmCPVUmmQSXzlPmdlvXPLqqChCzNqQjyvQJLIa", "KYwWPdUwLemPMEiGHGoMMDScONeQYkNxxCPiyOONmOiF", "yGRHXAZZywurXLuONGyDktixQuDbLZjOFWLTnktAubtP", "WDTwtpEFkloauRvlfHMbloxycGVfNqlFNlxwljgqBiWI", "PKcoALLvCYIgmNRfrtXeHsCyYITqgnJsvCYGvuGPHPxt", "SnVxUHCuplqTdRCkmTuZtBbHzlThZlAVqgTSYXroBMFr", "OHcxHZBPmodIQnEzAmoRhVAzaieLAfUOuWkOEXoFndaX", "AxodRluVyIpxrFHxMMNoXpxPFZzAsKXHdDrYOLYNbNaq", "ZRlIOlNyHBLNhiJxIEiFGjsaUBFlQGowyFZpXsQDRfjo", "VRXeKaTfuLpfOJANWXdYxfCQsDDQrNMBmQMFHopnXslt", "ZmQTErCYHzidwZtMDvYluJqXMROLQZlFeOKGdGCUCytS", "iMmWSorMRixIwdnFZVIVXZHTeUGWvfmujhbzgoWTvRMf", "MyiTGTjPLTwuNiMVxawIQGSluxGxSvcPCISXQOKgRJNv", "fAEXLNioWcstkKhJsBlYAMWmoIemCbmnqaqQtyrWYqfY", "INfmjScKHgVzbDHkTyMhXxchZSPYAIQhKStVJyZqCktc", "TLWGQBKatjIEcrGOeXoUBhezjMLVEkmOiSwACuTqQQfl", "gcTgXTUsqDcMwOPXpCcKkjsutThdUoUVCYmqixNsCuwV", "AcqFyEuBpkAPPTQnxzpQISWqpoTtQAfIXcvexDCfRCGa", "TOxQOtTmxDrWWVffSUezOQYuYvNMMdIFOcIASCaAKAIR", "OlpUqTpnCgdpueYYPeiQBJZrFvXoGaxQdmBSuSrLqIuS"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> names = {"qwmehJULKZ", "SeODkhDAuP", "dNcIHlzrKH", "bmQjthGZOD", "WKehTmSSbw", "asLfJAsfkI", "FYAudwDZtv", "AZwvwiMctL", "VKIwNXfoUE", "MDEKPPyVKi", "FSEeZtkOMd", "WbklRzhnuu", "atCZFdmxeU", "CXqbsyJkpy", "ebvtpOulAZ", "HwghjqoSIV", "UHXjfSihwV", "vUsXyHkpmi", "HuygJYAicp", "NVlsZNPFYz", "rJJyAQVsct", "EWAnawdVwQ", "OpdrSxhfyf", "UMcoiuExWg", "GXKCFScqfW", "ySTTHwSYFb", "boYAgWqZrU", "BfXAbkLIxw", "KmnvDQFYQL", "ezUMKXnYxP", "ETpNzMvBWi", "BkzsrXjsKf", "FwQmYWlFFw", "zZdMjytKVF", "secIerjiIk", "WeqkgLcgdy", "yEAZVdEhUQ", "EEoVqrRwVI", "KqgfOrXMNd", "sWDOvRTJZU", "tVjnLwPcWH", "bhWHmEwueg", "mhHdXHTjgr", "xWIZrYaxAB", "LqLQoLjnJw", "XehTZnhLgw", "dNXqshDcXm", "aovvPMuBjQ", "WXPUdORhOm", "VtxdgbCigb"};
    vector<string> attendance = {"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMAMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMPMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMAMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMPMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMAMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMAMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MPMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MAMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMPM", "MMMMMMMMMMMAMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMAMMMMMMMMMMM", "MMMMMMMMMMMMMAMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMPMMMMMMMMMMM", "AMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMAMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMAMMMMM", "PMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMAMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMAMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMAMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMPMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMAMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMPMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMPMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMAMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMPMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMPMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMPMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMAMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMPMMMM", "MMMMMMMMMMMMAMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMAMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMAMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMPMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMPMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMAMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMPMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMAMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMAMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMAMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMPMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMA", "MMMMMMMMMMMMMMMMMMPMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMAMMM", "MMMMMMMMMMMMPMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMAMMMMMM", "MMPMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMPMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMAMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMPMMMMMMMMMMMMMMMMMMM"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"qwmehJULKZ", "dNcIHlzrKH", "WKehTmSSbw", "asLfJAsfkI", "AZwvwiMctL", "MDEKPPyVKi", "FSEeZtkOMd", "WbklRzhnuu", "CXqbsyJkpy", "ebvtpOulAZ", "HwghjqoSIV", "vUsXyHkpmi", "HuygJYAicp", "NVlsZNPFYz", "EWAnawdVwQ", "GXKCFScqfW", "KmnvDQFYQL", "ETpNzMvBWi", "BkzsrXjsKf", "FwQmYWlFFw", "WeqkgLcgdy", "EEoVqrRwVI", "KqgfOrXMNd", "sWDOvRTJZU", "bhWHmEwueg", "xWIZrYaxAB", "XehTZnhLgw", "WXPUdORhOm"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> names = {"q"};
    vector<string> attendance = {"A"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"q"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> names = {"q"};
    vector<string> attendance = {"P"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
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
    vector<string> names = {"q"};
    vector<string> attendance = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"q"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> names = {"q"};
    vector<string> attendance = {"PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> names = {"hi"};
    vector<string> attendance = {"MPPA"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"hi"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> names = {"Justin"};
    vector<string> attendance = {"PAAPP"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Justin"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> names = {"a"};
    vector<string> attendance = {"PPPPAAMMMM"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> names = {"Justin"};
    vector<string> attendance = {"PAPP"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> names = {"Mansi", "Arjun", "Nikhil", "Taneja"};
    vector<string> attendance = {"PPPPMPPAPP", "AAMAAPP", "PPPPAAP", "PPPAAAMPP"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Arjun", "Nikhil", "Taneja"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> names = {"A"};
    vector<string> attendance = {"AAMMMMMMM"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> names = {"Justin", "Chris"};
    vector<string> attendance = {"AMMMM", "PPPPA"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Justin"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> names = {"Julian"};
    vector<string> attendance = {"PPAP"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> names = {"Ala"};
    vector<string> attendance = {"PPAM"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Ala"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> names = {"abcd"};
    vector<string> attendance = {"PPPAM"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> names = {"John"};
    vector<string> attendance = {"MMMMMMP"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> names = {"jdlsfk", "sdfsdf"};
    vector<string> attendance = {"MMPPA", "MMPPPAAAAA"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"jdlsfk", "sdfsdf"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> names = {"Hanna"};
    vector<string> attendance = {"AMMMMMMMMMMA"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Hanna"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> names = {"fdsafdsfds", "fdsa", "fdsafd", "fd"};
    vector<string> attendance = {"PMAAAMMMMMMMM", "PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPAAAAAAAAAAMMMMMMMMMM", "PPPPPPPPPPPPPPPPPPPPPPPPPPPAAAAAAAAAAMMMMMMMMMM", "PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPAAAAAAAAAMMMMMMMMMM"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"fdsafdsfds", "fdsafd"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> names = {"asd"};
    vector<string> attendance = {"MMMMMMMMMMA"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"asd"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> names = {"Justin"};
    vector<string> attendance = {"AAPPMMMM"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Justin"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> names = {"Just", "Dima"};
    vector<string> attendance = {"PPPPPMMMMMMMA", "PPPPPPPMMMAAA"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Dima"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> names = {"asd"};
    vector<string> attendance = {"APPMM"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"asd"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> names = {"Justin"};
    vector<string> attendance = {"AMMMMMMMMM"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Justin"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> names = {"a"};
    vector<string> attendance = {"AMMMMM"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> names = {"merong"};
    vector<string> attendance = {"MMMMMMMA"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"merong"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> names = {"petr"};
    vector<string> attendance = {"MMMMMAMMMM"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"petr"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> names = {"AJA"};
    vector<string> attendance = {"MMMMMMMMMAPP"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AJA"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> names = {"Peter"};
    vector<string> attendance = {"AMMMMMMM"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Peter"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> names = {"name"};
    vector<string> attendance = {"MAPPP"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> names = {"Sunny"};
    vector<string> attendance = {"PPAAAAMMMMMMMMMM"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Sunny"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> names = {"Justin", "Chris"};
    vector<string> attendance = {"PAAPP", "AMMMM"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Justin", "Chris"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> names = {"hgfh", "hgfdh", "ghfd", "ghfdh", "fdsh"};
    vector<string> attendance = {"AAMPPPPP", "AAMMPPPPPP", "AAMMPPPPP", "AAAPPPPPP", "P"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"hgfh", "ghfd", "ghfdh"};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> names = {"John"};
    vector<string> attendance = {"PPPA"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> names = {"Abc"};
    vector<string> attendance = {"AAPPMMMMMMMMMM"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Abc"};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> names = {"aaa", "bbb", "ccc", "ddd"};
    vector<string> attendance = {"PPAA", "PPAAAM", "PPAAMM", "PPAAA"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aaa", "bbb", "ccc", "ddd"};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> names = {"X"};
    vector<string> attendance = {"PMMMMA"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"X"};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> names = {"Justin"};
    vector<string> attendance = {"APMMMMMMMMMM"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Justin"};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> names = {"a"};
    vector<string> attendance = {"AMMMMMMMM"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a"};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> names = {"anim"};
    vector<string> attendance = {"AAPPMMMMMMMMMMMMM"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"anim"};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> names = {"Zamba", "Diego"};
    vector<string> attendance = {"AAAAAAAAAP", "AAAAAAAAAP"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Zamba", "Diego"};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> names = {"Sunny"};
    vector<string> attendance = {"PPPPAM"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> names = {"Mohammed"};
    vector<string> attendance = {"AAPPMMMMMM"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Mohammed"};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> names = {"Justin", "Chris"};
    vector<string> attendance = {"AMPPP", "PPPPA"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
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
    vector<string> names = {"Just", "Dima"};
    vector<string> attendance = {"MMMMMMMMMMAPPPP", "PPPPPPPMMMAAA"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Dima"};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> names = {"Justin"};
    vector<string> attendance = {"PAAPPPPPPPPPPMMMMMPA"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> names = {"jack"};
    vector<string> attendance = {"PPPPMMMMMMMMMMM"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> names = {"Justin"};
    vector<string> attendance = {"AMMMM"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Justin"};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> names = {"Andre"};
    vector<string> attendance = {"AMMMMMMMMMM"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Andre"};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> names = {"A"};
    vector<string> attendance = {"PPPPMA"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> names = {"Joe", "James"};
    vector<string> attendance = {"MMMMMMMMMMMMMMMPPPA", "MMMMMMMMMMMMMMMMMMMMMPPPPPPP"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
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
    vector<string> names = {"Name"};
    vector<string> attendance = {"A"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Name"};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> names = {"john"};
    vector<string> attendance = {"PPMAM"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"john"};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> names = {"Justin"};
    vector<string> attendance = {"PMMMMMMA"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Justin"};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> names = {"Sunny"};
    vector<string> attendance = {"PPPAMMMMMMMMMMMMMMMMMMM"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> names = {"A"};
    vector<string> attendance = {"MMMA"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A"};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> names = {"Justin"};
    vector<string> attendance = {"AMMPP"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Justin"};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> names = {"Sunny"};
    vector<string> attendance = {"PPPAM"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> names = {"Mansi", "Arjun", "Nikhil", "Taneja"};
    vector<string> attendance = {"PPPPMPPAPP", "AAMAAPPMMMMMMMMMMMMMMM", "PPPPAAP", "PPPAAAMPP"};
    AttendanceShort* pObj = new AttendanceShort();
    clock_t start = clock();
    vector<string> result = pObj->shortList(names, attendance);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Arjun", "Nikhil", "Taneja"};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22629907&rd=10709&pm=7777
********************************************************************************
#include <vector>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <queue>
#include <algorithm>
#include <sstream>
#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <ctime>
using namespace std;
 
 
class AttendanceShort {
public:
  vector <string> shortList(vector <string>, vector <string>);
};
 
vector <string> AttendanceShort::shortList(vector <string> names, vector <string> attendance) {
  vector<string> ans;
  for(int i=0;i<names.size();i++){
    int all=0;
    int here=0;
    for(int j=0;j<attendance[i].size();j++){
      if(attendance[i][j]=='M')continue;
 
      all++;
      if(attendance[i][j]=='P')here++;
    }
    if(here*4/3<all)ans.push_back(names[i]);
  }
 
  return ans;
}
 
//
// All My Achievements Are Dedicated To Lala
// Powered by [KawigiEdit] 3.0!

********************************************************************************
*******************************************************************************/