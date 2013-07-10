/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8155
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

class SoftwareCompanies {
public:
    vector<string> produceData(vector<string> names, vector<string> process, vector<int> cost, vector<int> amount, string company1, string company2);
};

vector<string> SoftwareCompanies::produceData(vector<string> names, vector<string> process, vector<int> cost, vector<int> amount, string company1, string company2) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> names = {"topcoder", "doodle", "nasa", "ninny", "idm", "noname", "kintel"};
    vector<string> process = {"doodle nasa noname", "idm ninny noname", "idm ninny noname", "kintel", "kintel", "", ""};
    vector<int> cost = {1, 2, 7, 4, 6, 1, 2};
    vector<int> amount = {50, 10, 11, 9, 14, 11, 23};
    string company1 = "topcoder";
    string company2 = "kintel";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"doodle", "idm", "kintel", "nasa", "ninny", "topcoder"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> names = {"topcoder", "google", "nasa", "lilly", "ibm", "intel"};
    vector<string> process = {"google nasa", "ibm lilly", "ibm lilly", "intel", "intel", ""};
    vector<int> cost = {1, 2, 7, 4, 6, 2};
    vector<int> amount = {50, 10, 11, 9, 12, 23};
    string company1 = "topcoder";
    string company2 = "intel";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"google", "ibm", "intel", "lilly", "nasa", "topcoder"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> names = {"topcoder", "google", "zasa", "zilly", "ibm", "intel"};
    vector<string> process = {"google zasa", "ibm zilly", "ibm zilly", "intel", "intel", ""};
    vector<int> cost = {1, 2, 2, 2, 2, 2};
    vector<int> amount = {50, 10, 11, 9, 12, 23};
    string company1 = "topcoder";
    string company2 = "intel";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"google", "ibm", "intel", "topcoder", "zasa", "zilly"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> names = {"topcoder", "google", "zasa", "zilly", "ibm", "intel"};
    vector<string> process = {"google zasa", "ibm zilly", "ibm zilly", "intel", "intel", ""};
    vector<int> cost = {1, 2, 7, 4, 6, 2};
    vector<int> amount = {50, 10, 11, 9, 12, 23};
    string company1 = "topcoder";
    string company2 = "intel";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"google", "ibm", "intel", "topcoder", "zasa", "zilly"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> names = {"a", "b", "c", "d"};
    vector<string> process = {"", "c", "d", ""};
    vector<int> cost = {0, 2, 7, 41};
    vector<int> amount = {5, 5, 7, 6};
    string company1 = "b";
    string company2 = "d";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b", "c", "d"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> names = {"a", "b", "c", "d"};
    vector<string> process = {"", "c", "d", ""};
    vector<int> cost = {1, 2, 7, 41};
    vector<int> amount = {5, 5, 7, 6};
    string company1 = "b";
    string company2 = "d";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b", "c", "d"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> names = {"om", "ptd", "hnde", "pty", "a", "qqp", "put", "ywu", "gj", "xcwl", "rf", "s"};
    vector<string> process = {"ptd qqp put rf s", "om pty a qqp put gj xcwl rf s", "om ptd ywu gj rf s", "om ptd hnde a qqp put ywu gj xcwl s", "hnde pty ywu gj xcwl rf s", "om ptd hnde a put ywu gj s", "om a qqp xcwl s", "om pty a qqp put gj xcwl s", "om ptd hnde a qqp put xcwl rf s", "a put ywu gj rf s", "om pty a qqp put", "ptd pty a qqp put ywu gj rf"};
    vector<int> cost = {91, 13, 82, 50, 50, 94, 53, 56, 61, 37, 61, 33};
    vector<int> amount = {66, 60, 34, 96, 26, 75, 54, 82, 61, 92, 34, 45};
    string company1 = "put";
    string company2 = "om";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"om", "put"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> names = {"mwp", "px", "y", "xrak", "xevy", "f", "h", "dl", "kb", "o", "qplw", "caq"};
    vector<string> process = {"y f h dl kb o caq", "xevy f dl kb qplw caq", "mwp px xrak xevy f dl kb o qplw caq", "mwp y f h dl kb o qplw caq", "mwp px y f h kb o caq", "mwp px y xrak xevy o", "y xrak xevy qplw caq", "y f kb o qplw", "mwp y xrak xevy f dl qplw caq", "mwp y xrak xevy f kb qplw caq", "px y xrak xevy f h o caq", "mwp px xrak f h dl qplw"};
    vector<int> cost = {21, 92, 99, 40, 0, 81, 67, 18, 12, 91, 64, 80};
    vector<int> amount = {95, 4, 53, 79, 69, 67, 50, 40, 34, 21, 2, 86};
    string company1 = "dl";
    string company2 = "kb";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"dl", "kb"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> names = {"eq", "joj", "ct", "cg", "qly", "i", "hgg", "ii", "k", "y", "sipq", "ug"};
    vector<string> process = {"qly hgg k y sipq ug", "eq ct i hgg ii y ug", "joj cg qly i hgg ii y ug", "eq joj ct i hgg ii sipq", "eq joj ii k y sipq ug", "joj ct cg qly k y ug", "eq joj ct ii sipq ug", "eq qly k ug", "eq ct cg i hgg y sipq ug", "eq joj cg i hgg ii sipq ug", "eq joj ct qly i ii y ug", "ct cg i k sipq"};
    vector<int> cost = {97, 60, 55, 8, 95, 54, 30, 22, 33, 79, 20, 90};
    vector<int> amount = {10, 13, 56, 82, 28, 71, 50, 66, 18, 60, 7, 62};
    string company1 = "i";
    string company2 = "ii";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"cg", "i", "ii"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> names = {"e", "zzkk", "fz", "sn", "kx", "ca", "nr", "zkx", "p", "kufm", "ihiw", "mekj"};
    vector<string> process = {"zzkk fz sn kx ca zkx p kufm mekj", "e fz kx ca nr zkx p ihiw", "e zzkk sn kx p ihiw mekj", "fz kx nr zkx p kufm mekj", "fz sn ca nr zkx mekj", "e zzkk kx nr kufm ihiw mekj", "sn kx zkx p kufm mekj", "zzkk fz sn kx ca nr kufm ihiw mekj", "e zzkk sn kx zkx", "zzkk sn ca nr zkx p ihiw mekj", "e zzkk fz sn kx ca nr zkx p kufm", "e fz sn kx ca nr p ihiw"};
    vector<int> cost = {48, 18, 50, 52, 49, 12, 29, 13, 89, 10, 49, 85};
    vector<int> amount = {60, 69, 7, 14, 66, 27, 85, 1, 76, 71, 25, 96};
    string company1 = "e";
    string company2 = "kufm";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"e", "kufm"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> names = {"bwnw", "rv", "vslc", "ob", "cdd", "joel", "s", "q", "npk", "d", "mfnj", "op"};
    vector<string> process = {"rv vslc ob cdd joel d mfnj op", "bwnw vslc ob cdd joel s q npk d mfnj op", "rv ob cdd joel q npk d mfnj op", "rv vslc cdd joel s q mfnj op", "bwnw rv vslc ob joel s q npk d mfnj op", "bwnw vslc ob cdd s mfnj", "vslc ob cdd q npk mfnj op", "bwnw rv vslc ob cdd s npk d mfnj op", "bwnw rv vslc ob cdd s q d op", "bwnw rv vslc ob joel s npk mfnj op", "vslc ob cdd joel s q npk op", "rv vslc joel s q npk d mfnj"};
    vector<int> cost = {0, 87, 91, 29, 22, 1, 56, 74, 93, 32, 44, 4};
    vector<int> amount = {49, 47, 78, 44, 59, 72, 40, 5, 17, 91, 94, 28};
    string company1 = "op";
    string company2 = "cdd";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bwnw", "cdd", "joel", "op"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> names = {"itfr", "tztk", "kk", "o", "os", "iym", "gbfi", "aul", "jrd", "djxr", "mch", "opa"};
    vector<string> process = {"tztk o os iym gbfi aul djxr mch", "o iym gbfi jrd djxr mch opa", "itfr o iym jrd djxr opa", "itfr tztk kk os gbfi aul jrd djxr mch opa", "itfr tztk kk iym gbfi aul jrd djxr opa", "itfr tztk kk o gbfi aul jrd djxr mch opa", "itfr o os iym aul jrd djxr mch opa", "itfr tztk kk o os iym gbfi jrd djxr mch", "itfr tztk kk o os iym gbfi djxr mch opa", "o os gbfi mch opa", "itfr kk o gbfi aul jrd djxr", "itfr tztk kk o os iym gbfi jrd djxr mch"};
    vector<int> cost = {31, 2, 55, 42, 85, 4, 25, 28, 58, 12, 61, 26};
    vector<int> amount = {15, 93, 7, 94, 32, 44, 53, 66, 87, 45, 12, 60};
    string company1 = "kk";
    string company2 = "tztk";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"iym", "kk", "tztk"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> names = {"o", "isdw", "w", "zejj", "x", "pax", "z", "vrpf", "kyd", "rg", "knz", "onja"};
    vector<string> process = {"isdw zejj x pax z kyd rg knz onja", "o w zejj x pax z vrpf kyd rg knz onja", "o isdw zejj x z vrpf kyd knz onja", "o isdw w x pax z vrpf onja", "o isdw w zejj pax z vrpf kyd rg onja", "o w zejj x z vrpf kyd rg onja", "o isdw zejj x pax vrpf kyd rg knz onja", "o isdw zejj kyd rg knz onja", "o w zejj x pax z knz onja", "o isdw w pax vrpf knz onja", "isdw w pax z vrpf kyd onja", "o isdw w zejj x pax z vrpf kyd rg knz"};
    vector<int> cost = {96, 52, 0, 53, 45, 35, 18, 3, 29, 48, 29, 43};
    vector<int> amount = {13, 75, 94, 70, 7, 27, 33, 10, 25, 2, 95, 13};
    string company1 = "o";
    string company2 = "rg";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"o", "rg"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> names = {"lmbc", "iz", "k", "q", "dnzb", "h", "zm", "n", "brku", "ph", "rv", "xqaz"};
    vector<string> process = {"k q dnzb h zm n brku ph rv xqaz", "q dnzb zm brku ph rv xqaz", "lmbc q dnzb h zm n brku ph rv xqaz", "lmbc iz k dnzb h zm n brku ph rv xqaz", "lmbc iz q zm n brku ph rv", "iz n brku rv xqaz", "lmbc iz k q dnzb n brku rv xqaz", "lmbc iz k q dnzb brku ph rv xqaz", "lmbc iz k q dnzb rv xqaz", "iz k q dnzb h zm n rv xqaz", "lmbc iz q dnzb h zm n brku xqaz", "lmbc iz k q dnzb h zm n brku ph rv"};
    vector<int> cost = {49, 37, 41, 38, 72, 72, 4, 76, 39, 88, 80, 40};
    vector<int> amount = {34, 82, 17, 58, 37, 53, 72, 88, 35, 61, 12, 35};
    string company1 = "h";
    string company2 = "q";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"h", "iz", "q"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> names = {"pgz", "gk", "xz", "zux", "pmw", "a", "jztl", "nz", "y", "rye", "sfip", "bsqr"};
    vector<string> process = {"gk xz zux pmw a jztl nz rye sfip", "pgz pmw a jztl nz rye bsqr", "pgz gk zux pmw a jztl nz y rye", "xz pmw a jztl y rye sfip", "gk xz zux jztl rye sfip", "pgz gk xz zux jztl nz y rye bsqr", "pgz gk xz zux pmw nz rye sfip bsqr", "pgz gk xz pmw a jztl rye sfip", "pgz gk xz zux pmw a jztl rye sfip bsqr", "pgz gk xz zux pmw a jztl y sfip", "pgz gk xz zux pmw nz y rye bsqr", "pgz gk xz zux pmw a jztl nz y sfip"};
    vector<int> cost = {26, 94, 54, 88, 27, 74, 98, 13, 78, 22, 71, 32};
    vector<int> amount = {44, 9, 41, 2, 87, 49, 15, 99, 9, 90, 66, 59};
    string company1 = "pgz";
    string company2 = "rye";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"pgz", "rye"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> names = {"b", "bz", "ba", "d", "z", "ca", "y", "a", "x"};
    vector<string> process = {"bz ba z ca", "ba", "d", "", "ca", "d", "a", "x", ""};
    vector<int> cost = {5, 5, 5, 10, 6, 6, 3, 0, 3};
    vector<int> amount = {10, 7, 10, 9, 6, 9, 23, 13, 11};
    string company1 = "b";
    string company2 = "d";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b", "ba", "d"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> names = {"b", "bz", "ba", "d", "z", "ca", "y", "a", "x"};
    vector<string> process = {"bz ba z ca", "ba", "d", "", "ca", "d", "a", "x", ""};
    vector<int> cost = {5, 5, 5, 10, 6, 6, 3, 1, 3};
    vector<int> amount = {10, 7, 10, 9, 6, 9, 23, 13, 11};
    string company1 = "b";
    string company2 = "d";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b", "ba", "d"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> names = {"x", "y", "z", "t", "u", "w", "s", "r", "q", "p", "o", "k"};
    vector<string> process = {"y", "z", "t", "u", "w", "s", "r", "q", "p", "o", "k", ""};
    vector<int> cost = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    vector<int> amount = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    string company1 = "x";
    string company2 = "k";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"k", "o", "p", "q", "r", "s", "t", "u", "w", "x", "y", "z"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> names = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l"};
    vector<string> process = {"b c", "d e f g", "d e f g", "h i j", "h i j", "h i j", "h i j", "k l", "k l", "k l", "", ""};
    vector<int> cost = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    vector<int> amount = {1000000, 500000, 500000, 250000, 250000, 250000, 250000, 300000, 300000, 400000, 1000000, 1000000};
    string company1 = "a";
    string company2 = "l";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "l"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> names = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l"};
    vector<string> process = {"b c d e f g h i j k l", "a c d e f g h i j k l", "a b d e f g h i j k l", "a b c e f g h i j k l", "a b c d f g h i j k l", "a b c d e g h i j k l", "a b c d e f h i j k l", "a b c d e f g i j k l", "a b c d e f g h j k l", "a b c d e f g h i k l", "a b c d e f g h i j l", "a b c d e f g h i j k"};
    vector<int> cost = {101, 201, 301, 401, 501, 601, 701, 801, 901, 1001, 1101, 1201};
    vector<int> amount = {90, 23, 35, 123, 7, 67, 23, 675, 23, 45, 230, 560};
    string company1 = "a";
    string company2 = "k";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "k"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> names = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l"};
    vector<string> process = {"b c d e f g h i j l", "a c d e f g h i j k l", "a b d e f g h i j k l", "a b c e f g h i j k l", "a b c d f g h i j k l", "a b c d e g h i j k l", "a b c d e f h i j k l", "a b c d e f g i j k l", "a b c d e f g h j k l", "a b c d e f g h i k l", "a b c d e f g h i j l", "a b c d e f g h i j k"};
    vector<int> cost = {101, 201, 301, 4401, 501, 601, 701, 8801, 901, 1001, 1101, 9201};
    vector<int> amount = {90, 23, 35, 123, 7, 67, 23, 675, 23, 45, 230, 560};
    string company1 = "a";
    string company2 = "k";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b", "f", "k"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> names = {"a", "b", "c", "d", "e", "f", "end", "teg", "uu", "cc", "tc"};
    vector<string> process = {"f b", "c e cc", "d end", "", "d b", "e", "d", "end", "tc f", "tc teg", "uu a"};
    vector<int> cost = {100, 20, 1000, 15, 16, 12, 54, 45, 33, 22, 18};
    vector<int> amount = {82, 23, 43, 86, 91, 10, 95, 23, 54, 65, 45};
    string company1 = "uu";
    string company2 = "end";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b", "cc", "end", "tc", "teg", "uu"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> names = {"aa", "ab", "ac", "ad", "ae", "a", "af", "ag", "ah"};
    vector<string> process = {"ad", "ag", "ab ad", "ae ag ah", "ah af", "ad ac", "", "ah", "af"};
    vector<int> cost = {345, 234, 567, 234, 567, 24, 546, 234, 456};
    vector<int> amount = {35, 16, 15, 26, 18, 40, 40, 12, 20};
    string company1 = "a";
    string company2 = "af";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "ab", "ac", "ad", "ae", "af", "ag", "ah"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> names = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l"};
    vector<string> process = {"b c d e f g h i j k l", "a c d e f g h i j k l", "a b d e f g h i j k l", "a b c e f g h i j k l", "a b c d f g h i j k l", "a b c d e g h i j k l", "a b c d e f h i j k l", "a b c d e f g i j k l", "a b c d e f g h j k l", "a b c d e f g h i k l", "a b c d e f g h i j l", "a b c d e f g h i j k"};
    vector<int> cost = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    vector<int> amount = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    string company1 = "a";
    string company2 = "k";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "k"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> names = {"coma", "comb", "comc", "comd"};
    vector<string> process = {"comb", "coma", "comd", "comc"};
    vector<int> cost = {10, 54, 18, 93};
    vector<int> amount = {10, 10, 10, 10};
    string company1 = "comb";
    string company2 = "comc";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> names = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l"};
    vector<string> process = {"b", "c e", "d", "c f", "d f", "g", "f", "e g", "", "k l", "i", ""};
    vector<int> cost = {5, 2, 3, 1, 6, 12, 76, 2, 8, 2, 9, 1};
    vector<int> amount = {10, 6, 2, 8, 10, 4, 9, 8, 2, 32, 41, 19};
    string company1 = "a";
    string company2 = "g";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b", "e", "f", "g"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> names = {"si", "na", "l", "co", "i", "pi", "v", "mo", "g", "mr", "t", "zjb"};
    vector<string> process = {"na", "si l", "na i", "i pi", "l co", "v", "pi mo zjb", "v zjb", "mo mr", "g", "mr zjb", "t mo v"};
    vector<int> cost = {10, 25, 3, 14, 65, 18, 7, 9, 11, 17, 1, 2};
    vector<int> amount = {15, 11, 10, 3, 7, 18, 7, 9, 12, 8, 11, 5};
    string company1 = "na";
    string company2 = "zjb";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"co", "i", "l", "na", "pi", "v", "zjb"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> names = {"rfc", "cab", "opos", "krf", "cfi", "zuks", "viki", "ieeie", "kvik", "orki", "galeb"};
    vector<string> process = {"cfi krf", "rfc krf opos", "krf cab zuks cfi", "rfc cfi opos", "", "galeb", "orki ieeie", "kvik", "krf opos cfi orki", "galeb", "orki"};
    vector<int> cost = {1, 2, 5, 7, 10, 4, 8, 16, 101, 7, 6};
    vector<int> amount = {14, 5, 9, 3, 98, 15, 101, 7, 53, 12, 17};
    string company1 = "opos";
    string company2 = "viki";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> names = {"dun", "pex", "sin", "te", "rex", "lon", "ve", "per", "sun", "tor", "smor"};
    vector<string> process = {"pex smor", "rex tor", "rex te", "ve pex", "tor", "smor per ve", "lon sun", "sun lon", "ve", "smor sun", "lon"};
    vector<int> cost = {3, 5, 9, 12, 14, 71, 58, 91, 2, 103, 66};
    vector<int> amount = {23, 78, 45, 12, 56, 8, 1, 25, 28, 58, 50};
    string company1 = "dun";
    string company2 = "per";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"dun", "lon", "per", "smor"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> names = {"mi", "liv", "bcc", "gl", "paj", "up", "gav", "ctt", "prst", "j", "jokiii", "prd"};
    vector<string> process = {"liv", "gav", "mi liv paj gl up", "mi", "gav liv", "bcc", "", "paj", "gav jokiii", "prst", "j", ""};
    vector<int> cost = {12, 5, 69, 4, 14, 25, 11, 20, 36, 8, 17, 125};
    vector<int> amount = {4, 25, 58, 41, 10, 26, 6, 7, 89, 12, 14, 256};
    string company1 = "bcc";
    string company2 = "j";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
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
    vector<string> names = {"aaa", "bbb", "ccc", "ddd", "eee", "fff", "ggg", "hhh", "iii", "jjj", "kkk"};
    vector<string> process = {"bbb ccc iii", "eee fff", "ddd", "bbb fff", "fff", "ccc", "", "fff ddd", "ggg jjj", "fff", "jjj hhh eee"};
    vector<int> cost = {9, 10, 15, 4, 5, 80, 1, 33, 27, 19, 20};
    vector<int> amount = {10, 12, 14, 9, 8, 7, 1, 2, 5, 3, 3};
    string company1 = "eee";
    string company2 = "bbb";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bbb", "ccc", "ddd", "eee", "fff"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> names = {"abc", "acb", "bac", "bca", "cab", "cba", "dea", "dae", "aed", "ade", "ead"};
    vector<string> process = {"acb", "bac", "bca", "cab", "cba", "dea", "dae", "aed", "ade", "ead", ""};
    vector<int> cost = {2, 5, 1, 6, 8, 2, 7, 9, 3, 5, 8};
    vector<int> amount = {1000000, 100000, 100000, 100000, 10000, 10000, 10000, 10000, 1000, 1000, 1000};
    string company1 = "abc";
    string company2 = "ead";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"abc", "acb", "ade", "aed", "bac", "bca", "cab", "cba", "dae", "dea", "ead"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> names = {"zvrk", "pr", "eg", "dog", "moj", "sis", "mis", "tis", "kris", "krispi", "muki", "to"};
    vector<string> process = {"moj mis to", "sis tis krispi", "mis pr sis dog", "tis kris zvrk", "sis krispi pr", "muki zvrk", "pr muki", "", "dog to muki", "moj muki", "pr", "tis mis"};
    vector<int> cost = {10, 2, 7, 8, 19, 12, 14, 16, 18, 20, 6, 13};
    vector<int> amount = {4, 8, 2, 5, 3, 7, 6, 1, 8, 7, 9, 11};
    string company1 = "dog";
    string company2 = "krispi";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"dog", "kris", "krispi", "muki", "pr"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> names = {"c", "b", "a"};
    vector<string> process = {"b", "c", ""};
    vector<int> cost = {1, 1, 0};
    vector<int> amount = {1, 1, 22};
    string company1 = "c";
    string company2 = "b";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b", "c"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> names = {"mrjs", "swdo", "rzze", "t", "s", "pv", "u", "at", "xu", "fzq", "vfpm", "pc"};
    vector<string> process = {"swdo t s at xu fzq pc", "mrjs rzze t s pv at fzq vfpm pc", "mrjs swdo t s pv fzq vfpm pc", "mrjs swdo s pv u at xu fzq vfpm pc", "mrjs rzze t u at fzq vfpm pc", "mrjs swdo rzze t u at xu fzq", "mrjs swdo rzze t s pv at fzq vfpm", "mrjs swdo rzze s pv fzq pc", "mrjs swdo rzze s pv u at fzq vfpm", "mrjs rzze t pv u at xu vfpm pc", "mrjs swdo rzze t s pv at fzq pc", "mrjs rzze t s u fzq vfpm"};
    vector<int> cost = {86, 44, 72, 74, 26, 28, 22, 85, 46, 10, 71, 45};
    vector<int> amount = {72, 48, 58, 47, 67, 49, 27, 14, 13, 95, 13, 51};
    string company1 = "pc";
    string company2 = "s";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"pc", "s"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> names = {"lv", "jq", "mki", "srwk", "x", "zpp", "ut", "s", "wwtw", "fgx", "zpr", "ie"};
    vector<string> process = {"jq mki srwk x zpp ut wwtw fgx zpr ie", "mki x zpp s wwtw fgx zpr", "lv jq srwk x zpp s wwtw fgx", "x ut s wwtw fgx zpr ie", "lv jq mki srwk zpp ut s wwtw fgx", "lv jq srwk x ut s fgx", "lv jq mki srwk x zpp wwtw ie", "lv jq mki srwk x zpp ut fgx", "lv jq mki srwk x zpp ut s fgx zpr ie", "jq x zpp ut s wwtw ie", "lv jq mki srwk x zpp ut s wwtw ie", "jq mki srwk x zpp wwtw fgx zpr"};
    vector<int> cost = {71, 81, 92, 63, 49, 19, 66, 49, 66, 85, 53, 8};
    vector<int> amount = {49, 99, 67, 84, 70, 5, 4, 6, 9, 73, 67, 21};
    string company1 = "lv";
    string company2 = "srwk";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"lv", "srwk"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> names = {"vc", "zjhm", "vf", "l", "km", "x", "kh", "a", "ahg", "p", "xfdi", "j"};
    vector<string> process = {"vf l x kh a ahg p xfdi j", "vc l km x kh a p xfdi j", "l x kh a ahg p xfdi j", "vc zjhm vf km x kh a ahg p j", "vc zjhm vf l x kh a p xfdi j", "vc zjhm vf l km kh a ahg j", "vc zjhm l km x a ahg p xfdi j", "vf l x kh p xfdi j", "vc zjhm vf l km x a p", "zjhm vf l x kh xfdi j", "vc zjhm vf l km x a ahg p", "zjhm vf l km x kh ahg p xfdi"};
    vector<int> cost = {45, 47, 76, 77, 65, 85, 95, 82, 24, 83, 50, 68};
    vector<int> amount = {47, 84, 16, 68, 81, 67, 12, 12, 79, 71, 11, 77};
    string company1 = "a";
    string company2 = "j";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "j"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> names = {"udm", "wjg", "rnew", "c", "n", "j", "rbi", "z", "yb", "gw", "kr", "wmww"};
    vector<string> process = {"wjg rnew c n j z gw kr", "udm rnew c n j rbi z yb gw kr wmww", "udm wjg c n rbi yb wmww", "udm wjg rnew n j z yb gw kr", "udm wjg rnew c j rbi z yb gw kr wmww", "udm wjg rnew c n rbi z yb gw kr wmww", "udm wjg rnew c n j yb gw kr wmww", "wjg rnew n j rbi yb gw kr wmww", "udm wjg rnew c j rbi z gw kr wmww", "udm wjg rnew n rbi z yb wmww", "udm wjg rnew c n j rbi z yb gw wmww", "udm wjg rnew c j rbi z yb gw kr"};
    vector<int> cost = {35, 73, 50, 9, 27, 3, 92, 21, 91, 98, 52, 15};
    vector<int> amount = {58, 3, 9, 8, 12, 77, 24, 66, 64, 37, 33, 8};
    string company1 = "rnew";
    string company2 = "udm";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"rnew", "udm"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> names = {"nj", "bm", "oz", "qd", "y", "t", "oqt", "c", "e", "bd", "fqy", "di"};
    vector<string> process = {"bm oz qd y t oqt e bd fqy di", "nj oz y t oqt c e bd fqy di", "nj bm qd y t oqt c e fqy di", "nj bm oz y t oqt c e bd fqy", "nj bm oz qd oqt c bd di", "nj bm oz qd y oqt e bd fqy", "nj bm oz qd y t c e bd fqy di", "nj bm qd y oqt e bd fqy di", "bm qd y oqt c bd fqy di", "nj bm oz qd y t oqt c e fqy di", "qd y t oqt c bd di", "nj oz qd y t c e bd fqy"};
    vector<int> cost = {31, 72, 19, 50, 2, 64, 20, 85, 77, 42, 0, 94};
    vector<int> amount = {56, 89, 54, 17, 64, 47, 50, 50, 75, 57, 34, 4};
    string company1 = "di";
    string company2 = "y";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"di", "fqy", "y"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> names = {"edqe", "dfo", "xe", "ezm", "kis", "nue", "jsow", "ymer", "ser", "mx", "k", "ns"};
    vector<string> process = {"dfo xe ezm nue jsow ymer ser k ns", "edqe xe ezm kis nue jsow ymer mx k ns", "edqe dfo ezm nue ymer", "edqe dfo xe kis nue jsow ymer ser mx ns", "edqe dfo xe ezm nue jsow ser k ns", "edqe xe ezm kis jsow ymer ser mx ns", "edqe dfo xe ezm kis nue ymer ser mx ns", "edqe dfo ezm kis jsow mx k ns", "edqe dfo ezm kis nue mx k ns", "edqe dfo xe kis nue ymer ser k ns", "edqe xe ezm kis nue jsow ymer ser mx ns", "xe ezm kis jsow ymer ser k"};
    vector<int> cost = {40, 75, 12, 30, 74, 60, 33, 55, 96, 47, 90, 20};
    vector<int> amount = {90, 69, 14, 42, 11, 32, 44, 58, 1, 43, 36, 20};
    string company1 = "kis";
    string company2 = "dfo";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"dfo", "kis"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> names = {"lfku", "iql", "ev", "ih", "uh", "o", "sc", "gqe", "es", "x", "f", "vnhx"};
    vector<string> process = {"iql ev ih uh o sc es x f vnhx", "lfku ev ih uh o sc gqe x f vnhx", "lfku iql ih uh o sc gqe es x f vnhx", "ev uh o sc gqe es x f vnhx", "lfku iql ev ih o sc es x f vnhx", "lfku iql ev ih uh sc gqe es x", "lfku iql ev ih uh o gqe x f vnhx", "lfku iql ih uh o sc es x vnhx", "lfku ev ih uh o gqe x f", "lfku iql ev ih uh o sc gqe es vnhx", "lfku iql ev ih uh o sc gqe es vnhx", "lfku iql ev uh o sc gqe es x f"};
    vector<int> cost = {72, 7, 57, 59, 23, 81, 51, 90, 53, 59, 59, 98};
    vector<int> amount = {43, 78, 86, 30, 66, 82, 1, 34, 26, 83, 29, 17};
    string company1 = "ev";
    string company2 = "ih";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ev", "ih"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> names = {"bykl", "wv", "g", "a", "e", "o", "ycvw", "mkv", "z", "ca", "vyzl", "irih"};
    vector<string> process = {"wv g e o ycvw mkv z ca vyzl irih", "bykl g a e o ycvw z ca vyzl irih", "bykl wv a e o ycvw mkv z ca vyzl irih", "bykl wv g e o ycvw mkv ca irih", "bykl wv g a o ycvw mkv z ca vyzl irih", "bykl wv g a e ycvw mkv z ca vyzl irih", "bykl wv g a e o mkv ca vyzl irih", "bykl wv g a e o ycvw z vyzl irih", "bykl wv a e o ycvw mkv ca vyzl irih", "wv g a e o mkv z vyzl irih", "bykl wv g a e o ycvw mkv ca irih", "bykl wv g e o ycvw mkv z ca"};
    vector<int> cost = {62, 53, 21, 41, 28, 32, 16, 66, 80, 94, 58, 65};
    vector<int> amount = {41, 99, 8, 45, 87, 34, 33, 26, 63, 34, 40, 46};
    string company1 = "a";
    string company2 = "vyzl";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "e", "vyzl"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> names = {"lio", "vdg", "uzyk", "rhp", "e", "q", "r", "pzjt", "qnkr", "xn", "y", "son"};
    vector<string> process = {"vdg uzyk rhp e q r pzjt qnkr xn y son", "uzyk rhp e q pzjt qnkr xn y son", "lio vdg e q r pzjt qnkr xn y son", "lio vdg uzyk e q pzjt qnkr xn y son", "lio vdg uzyk rhp q r pzjt qnkr y son", "vdg uzyk rhp e r pzjt qnkr xn y son", "lio vdg uzyk rhp e q pzjt qnkr xn son", "lio vdg uzyk rhp e q r qnkr xn y son", "lio vdg e q r pzjt xn y son", "lio vdg rhp e q r pzjt qnkr y son", "vdg uzyk rhp e q r pzjt qnkr xn son", "lio vdg rhp q pzjt qnkr xn y"};
    vector<int> cost = {13, 41, 79, 97, 7, 94, 5, 38, 35, 82, 78, 65};
    vector<int> amount = {68, 65, 24, 51, 4, 45, 1, 79, 31, 12, 47, 59};
    string company1 = "uzyk";
    string company2 = "r";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"r", "uzyk"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> names = {"s", "fv", "amb", "drz", "fwu", "ts", "lrt", "gpb", "wch", "h", "bjyn", "ai"};
    vector<string> process = {"fv drz fwu ts gpb h bjyn", "s amb fwu ts lrt gpb wch h ai", "s fv drz fwu ts lrt gpb wch h bjyn ai", "s fv amb fwu ts lrt gpb wch h bjyn ai", "fv amb drz ts lrt gpb wch h ai", "s fv amb drz fwu lrt gpb wch h bjyn ai", "fv amb drz fwu ts gpb wch ai", "s fv drz fwu ts lrt wch bjyn ai", "s fv amb drz lrt gpb h bjyn ai", "s amb drz fwu ts lrt gpb wch bjyn ai", "fv amb drz fwu ts lrt wch h ai", "fv amb drz fwu ts lrt gpb wch bjyn"};
    vector<int> cost = {90, 37, 5, 47, 99, 55, 77, 63, 16, 3, 50, 89};
    vector<int> amount = {3, 35, 37, 41, 32, 66, 67, 21, 97, 75, 53, 53};
    string company1 = "s";
    string company2 = "bjyn";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bjyn", "s"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> names = {"jw", "p", "oi", "wpt", "yyje", "jody", "ifq", "bnd", "ij", "xlh", "lj", "yi"};
    vector<string> process = {"p oi wpt jody ifq bnd xlh lj yi", "jw oi wpt yyje jody ifq bnd xlh lj yi", "p yyje jody ifq bnd lj yi", "jw p oi yyje jody bnd ij xlh lj yi", "jw p oi wpt jody bnd ij xlh lj yi", "jw p oi wpt yyje ifq ij xlh lj yi", "jw p oi wpt yyje jody bnd ij xlh", "jw wpt yyje jody xlh yi", "jw p oi wpt yyje jody bnd xlh lj", "jw p oi yyje jody bnd ij yi", "jw p oi wpt yyje jody ifq bnd ij xlh yi", "jw oi wpt yyje jody ifq ij xlh lj"};
    vector<int> cost = {74, 40, 6, 3, 51, 10, 16, 85, 43, 76, 4, 5};
    vector<int> amount = {27, 30, 87, 22, 1, 73, 56, 47, 90, 26, 99, 95};
    string company1 = "bnd";
    string company2 = "ij";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bnd", "ij", "yi"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> names = {"ju", "fo", "omil", "ud", "ndwi", "rmi", "m", "f", "ng", "tk", "oagd", "wxjk"};
    vector<string> process = {"fo ud ndwi rmi m f ng tk oagd wxjk", "ju omil ud ndwi rmi m f ng oagd wxjk", "ju fo ud ndwi rmi m ng tk oagd wxjk", "ju fo ndwi rmi m ng tk oagd wxjk", "ju fo omil ud rmi m f ng tk oagd wxjk", "ju fo omil ud ng tk oagd wxjk", "ju fo omil ud ndwi f ng oagd wxjk", "ju fo omil ndwi rmi m ng tk oagd wxjk", "ju fo omil ud ndwi rmi m tk oagd wxjk", "fo omil ud ndwi m f ng oagd wxjk", "ju fo omil ud ndwi rmi m f ng tk wxjk", "ju fo omil ud ndwi rmi m f ng tk oagd"};
    vector<int> cost = {39, 91, 38, 9, 53, 76, 96, 24, 11, 36, 35, 35};
    vector<int> amount = {39, 2, 38, 64, 83, 97, 33, 28, 48, 44, 40, 75};
    string company1 = "wxjk";
    string company2 = "ndwi";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ndwi", "wxjk"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> names = {"aa", "ba", "ca", "da", "ea", "ga", "fa"};
    vector<string> process = {"ba ca", "da ca", "ba ga", "ea", "fa", "fa ea", "ea ga"};
    vector<int> cost = {0, 0, 0, 0, 0, 0, 0};
    vector<int> amount = {18, 5, 3, 7, 8, 5, 17};
    string company1 = "aa";
    string company2 = "ea";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aa", "ba", "ca", "da", "ea", "fa", "ga"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> names = {"b", "bz", "ba", "d", "z", "ca", "y", "a", "x"};
    vector<string> process = {"bz ba z ca", "ba", "d", "", "ca", "d", "a", "x", ""};
    vector<int> cost = {5, 5, 5, 10, 6, 6, 3, 1, 3};
    vector<int> amount = {10, 7, 10, 9, 6, 9, 23, 13, 11};
    string company1 = "b";
    string company2 = "d";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b", "ba", "d"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> names = {"a", "b", "c", "d", "e", "f", "g", "h"};
    vector<string> process = {"b g", "c e", "d", "a", "f", "d", "h", "c"};
    vector<int> cost = {1, 1, 1, 2, 1, 1, 1, 1};
    vector<int> amount = {1, 1, 1, 2, 1, 1, 1, 1};
    string company1 = "a";
    string company2 = "d";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b", "c", "d"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> names = {"a", "b", "l"};
    vector<string> process = {"l b", "l", ""};
    vector<int> cost = {1000000, 1, 1000000};
    vector<int> amount = {1000000, 1, 1000000};
    string company1 = "a";
    string company2 = "l";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "l"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> names = {"topcoder", "doodle", "nasa", "ninny", "idm", "noname", "kintel"};
    vector<string> process = {"doodle nasa noname", "idm ninny noname", "idm ninny noname", "kintel", "kintel", "", ""};
    vector<int> cost = {1, 2, 7, 4, 6, 1, 2};
    vector<int> amount = {1, 10, 11, 9, 14, 11, 23};
    string company1 = "topcoder";
    string company2 = "kintel";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"doodle", "kintel", "ninny", "topcoder"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> names = {"a", "b"};
    vector<string> process = {"b", ""};
    vector<int> cost = {20, 20};
    vector<int> amount = {20, 20};
    string company1 = "a";
    string company2 = "b";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> names = {"a", "b", "c", "d", "e", "f", "g"};
    vector<string> process = {"b c", "d", "d", "e f", "g", "g", "a"};
    vector<int> cost = {1, 2, 4, 8, 16, 32, 64};
    vector<int> amount = {2, 1, 1, 1, 1, 1, 2};
    string company1 = "a";
    string company2 = "g";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b", "d", "e", "g"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> names = {"b", "bz", "ba", "d", "z", "ca", "y", "a", "x"};
    vector<string> process = {"bz ba z ca", "ba", "d", "", "ca", "d", "a", "x", ""};
    vector<int> cost = {5, 5, 5, 10, 6, 6, 3, 0, 3};
    vector<int> amount = {1, 10000, 10000, 50000, 10000, 10000, 10000, 10000, 10000};
    string company1 = "b";
    string company2 = "d";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b", "ba", "d"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> names = {"a", "bb", "c", "d", "e"};
    vector<string> process = {"bb c d e", "a d", "", "e", ""};
    vector<int> cost = {100, 200, 300, 400, 500};
    vector<int> amount = {10, 20, 30, 40, 50};
    string company1 = "bb";
    string company2 = "e";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bb", "d", "e"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> names = {"a", "b", "c", "d"};
    vector<string> process = {"c d", "a", "b", "b"};
    vector<int> cost = {1, 1, 1, 2};
    vector<int> amount = {1, 2, 1, 2};
    string company1 = "a";
    string company2 = "b";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b", "c"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> names = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l"};
    vector<string> process = {"b c", "d e f", "g h i j k", "l", "a c k", "k l", "a", "b", "d", "g", "i", "j"};
    vector<int> cost = {1000000, 654143, 15456, 2134, 1, 654, 7, 1000, 1, 1, 1, 1};
    vector<int> amount = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    string company1 = "a";
    string company2 = "l";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "c", "d", "i", "l"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> names = {"a", "b", "c", "d"};
    vector<string> process = {"b c", "d", "d", ""};
    vector<int> cost = {10, 5, 5, 10};
    vector<int> amount = {20, 10, 10, 10};
    string company1 = "a";
    string company2 = "d";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b", "d"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> names = {"a", "b", "c", "d"};
    vector<string> process = {"b c", "d", "d", ""};
    vector<int> cost = {1, 2, 3, 4};
    vector<int> amount = {5, 5, 5, 10};
    string company1 = "a";
    string company2 = "d";
    SoftwareCompanies* pObj = new SoftwareCompanies();
    clock_t start = clock();
    vector<string> result = pObj->produceData(names, process, cost, amount, company1, company2);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b", "d"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7446789&rd=12176&pm=8155
********************************************************************************
#include<queue> 
#include<map> 
#include<algorithm> 
#include<sstream> 
#include<string> 
#include<vector> 
#include<cmath> 
using namespace std; 
 
#define FOR(i,a,b) for(int i = (a); i < (b); ++i) 
#define REP(i,n) FOR(i,0,n) 
#define FORE(it,x) for(typeof(x.begin()) it=x.begin();it!=x.end();++it) 
#define pb push_back 
#define all(x) (x).begin(),(x).end() 
#define CLEAR(x,with) memset(x,with,sizeof(x)) 
#define sz size() 
typedef long long ll; 
 
const int MAXV = 40; 
struct NetworkFlow 
{ 
  int flow[MAXV][MAXV], cap[MAXV][MAXV], totalFlow, V; 
  NetworkFlow(int V): V(V) { CLEAR(cap,0); CLEAR(flow,0);totalFlow = 0; } 
 
  void addEdge(int a, int b, int c) { cap[a][b] += c; } 
 
  void push(int a, int b, int c) { flow[a][b] += c; flow[b][a] = - flow[a][b]; } 
  int res(int a, int b) { return cap[a][b] - flow[a][b]; } 
 
  int pushFlow(int source = 0, int sink = 1) 
  { 
    vector<int> pred(V, -1); queue<int> q; 
    q.push(source); pred[source] = source; 
    while(!q.empty() && pred[sink] == -1) 
    { 
      int u = q.front(); q.pop(); 
      for(int v = 0; v < V; ++v) if(res(u,v) > 0 && pred[v] == -1) { pred[v] = u; q.push(v); } 
    } 
    if(pred[sink] == -1) return 0; 
    int h, amt = 987654321; 
    h = sink; while(pred[h] != h) { amt <?= res(pred[h], h); h = pred[h]; } 
    h = sink; while(pred[h] != h) { push(pred[h], h, amt); h = pred[h]; } 
    totalFlow += amt; 
    return amt; 
  } 
}; 
 
 
struct SoftwareCompanies  
{ 
  int graph[12][12]; 
  int n; 
  vector<string> generate(const vector<string>& names, int mask) 
  { 
    vector<string> ret; 
    REP(i,n) if(mask&(1<<i)) ret.pb(names[i]); 
    sort(all(ret)); 
    return ret; 
  } 
  vector <string> produceData(vector <string> names, vector <string> process, vector <int> cost, vector <int> amount, string company1, string company2)  
  { 
    CLEAR(graph,0); 
    n = names.sz; 
    map<string,int> m; 
    REP(i,n) m[names[i]] = i; 
    CLEAR(graph,0); 
    REP(i,n) 
    { 
      istringstream inp(process[i]); 
      string b; 
      while(inp >> b) 
      { 
        int j = m[b]; 
        graph[i][j] = 1; 
      } 
    } 
    int bestMoney = 0, bestAmount = 0; 
    vector<string> ret; 
    int src = m[company1], snk = m[company2]; 
    int ourMask = (1<<src) | (1<<snk); 
    REP(mask,(1<<n)) 
    { 
      if((mask&ourMask) != ourMask) continue; 
      NetworkFlow flow(n*2); 
      int totalCost = 0; 
      REP(i,n) if(mask&(1<<i))  
      { 
        totalCost += cost[i]; 
        flow.addEdge(i*2, i*2+1, amount[i]); 
        REP(j,n) if(graph[i][j] && mask&(1<<j)) 
        { 
          flow.addEdge(i*2+1, j*2, 987654321); 
        } 
      } 
      while(flow.pushFlow(src*2, snk*2+1)); 
      if(bestAmount < flow.totalFlow || (bestAmount == flow.totalFlow && bestMoney >= totalCost)) 
      { 
        vector<string> cand = generate(names, mask); 
        if(bestAmount == flow.totalFlow && bestMoney == totalCost && cand > ret) continue; 
        bestAmount = flow.totalFlow; 
        bestMoney = totalCost; 
        ret = cand; 
      } 
    } 
    return ret; 
  } 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/