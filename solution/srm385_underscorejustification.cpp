/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8482
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

class UnderscoreJustification {
public:
    string justifyLine(vector<string> words, int width);
};

string UnderscoreJustification::justifyLine(vector<string> words, int width) {
    string ret;
    return ret;
}


int test0() {
    vector<string> words = {"A", "quick", "brown", "fox", "jumps", "over", "the", "lazy", "dog"};
    int width = 50;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "A___quick__brown__fox__jumps__over__the__lazy__dog";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> words = {"Alpha", "Beta", "Gamma", "Delta", "Epsilon"};
    int width = 32;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "Alpha_Beta_Gamma__Delta__Epsilon";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> words = {"Hello", "world", "John", "said"};
    int width = 29;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "Hello____world___John____said";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> words = {"qTS", "V"};
    int width = 32;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "qTS____________________________V";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> words = {"darfguz", "RHIR"};
    int width = 22;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "darfguz___________RHIR";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> words = {"wvptv", "vz"};
    int width = 18;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "wvptv___________vz";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> words = {"lPMI", "ciao"};
    int width = 14;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "lPMI______ciao";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> words = {"Swn", "dgqzdr"};
    int width = 26;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "Swn_________________dgqzdr";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> words = {"WWLAV", "oI"};
    int width = 31;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "WWLAV________________________oI";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> words = {"Q", "bxGb"};
    int width = 49;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "Q____________________________________________bxGb";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> words = {"cyn", "QQvAbRVZQo", "F"};
    int width = 22;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "cyn____QQvAbRVZQo____F";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> words = {"pNW", "C", "Ef"};
    int width = 8;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "pNW_C_Ef";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> words = {"dy", "feq", "IQX"};
    int width = 48;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "dy____________________feq____________________IQX";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> words = {"xOPWUX", "pgs", "DTipu"};
    int width = 60;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "xOPWUX_______________________pgs_______________________DTipu";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> words = {"LP", "xFJ", "fB"};
    int width = 25;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "LP_________xFJ_________fB";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> words = {"Ocwd", "aw", "uB"};
    int width = 22;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "Ocwd_______aw_______uB";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> words = {"Q", "Y", "i"};
    int width = 33;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "Q_______________Y_______________i";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> words = {"Uzj", "B", "Qhk", "W"};
    int width = 80;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "Uzj________________________B________________________Qhk________________________W";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> words = {"s", "KKYA", "LGEW", "TDk"};
    int width = 30;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "s______KKYA______LGEW______TDk";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> words = {"dEXU", "ITDU", "tcki", "P"};
    int width = 31;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "dEXU______ITDU______tcki______P";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> words = {"g", "pWLBJEROOR", "htklcw", "craji"};
    int width = 58;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "g____________pWLBJEROOR____________htklcw____________craji";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> words = {"E", "a", "g", "f"};
    int width = 7;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "E_a_g_f";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> words = {"d", "x", "rTN", "gfb"};
    int width = 11;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "d_x_rTN_gfb";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> words = {"U", "s", "i", "p"};
    int width = 14;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "U____s___i___p";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> words = {"mD", "hw", "uxs", "Sx"};
    int width = 107;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "mD_________________________________hw_________________________________uxs________________________________Sx";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> words = {"eVONOQOTE", "Nr", "WxjXEKeEP", "VuhSnjy"};
    int width = 33;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "eVONOQOTE__Nr__WxjXEKeEP__VuhSnjy";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> words = {"zOJ", "N", "zjf", "a"};
    int width = 113;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "zOJ___________________________________N___________________________________zjf___________________________________a";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> words = {"XsF", "Xi", "Txx", "YM", "TTHBL"};
    int width = 19;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "XsF_Xi_Txx_YM_TTHBL";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> words = {"qA", "CBW", "Gis", "XXKH", "RPLRD"};
    int width = 29;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "qA___CBW___Gis___XXKH___RPLRD";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> words = {"M", "G", "z", "J", "J"};
    int width = 9;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "M_G_z_J_J";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> words = {"s", "H", "t", "U", "dl"};
    int width = 78;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "s__________________H__________________t__________________U__________________dl";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> words = {"vd", "mzVVRL", "nZTPS", "iiwyv", "rPD"};
    int width = 25;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "vd_mzVVRL_nZTPS_iiwyv_rPD";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> words = {"lzg", "pL", "ntc", "xB", "o"};
    int width = 27;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "lzg____pL____ntc____xB____o";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> words = {"y", "KHW", "Tmu", "E", "Bi"};
    int width = 104;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "y_______________________KHW_______________________Tmu________________________E________________________Bi";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> words = {"PI", "zP", "uhq", "O", "mML"};
    int width = 17;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "PI__zP__uhq_O_mML";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> words = {"PEV", "VJN", "YcjTW", "Zv", "Tcnww"};
    int width = 37;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "PEV____VJN_____YcjTW_____Zv_____Tcnww";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> words = {"xg", "Za", "tsEz", "iHKSBPV", "xzPGCJb"};
    int width = 65;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "xg__________Za___________tsEz___________iHKSBPV___________xzPGCJb";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> words = {"I", "ei", "jz", "tGt", "kcbs"};
    int width = 19;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "I__ei__jz__tGt_kcbs";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> words = {"gA", "TXQO", "Nk", "TsFdlR", "Egrkg"};
    int width = 39;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "gA_____TXQO_____Nk_____TsFdlR_____Egrkg";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> words = {"NLeV", "Mitucder", "KaWTkQwr", "mswyjn", "pwuepi"};
    int width = 56;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "NLeV______Mitucder______KaWTkQwr______mswyjn______pwuepi";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> words = {"ZXo", "cerea", "pPRBF", "bNIBA", "aeo"};
    int width = 45;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "ZXo______cerea______pPRBF______bNIBA______aeo";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> words = {"Srfy", "hrBnFC", "iIFUQFW", "qF", "mer"};
    int width = 42;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "Srfy_____hrBnFC_____iIFUQFW_____qF_____mer";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> words = {"BHJK", "MjCwmW", "Thplfm", "Ha", "Fpfpfui", "T"};
    int width = 31;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "BHJK_MjCwmW_Thplfm_Ha_Fpfpfui_T";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> words = {"F", "Auke", "Xdzuula", "GC", "MOWMV", "BgqBRNM"};
    int width = 106;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "F________________Auke________________Xdzuula________________GC________________MOWMV________________BgqBRNM";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> words = {"CV", "LI", "hZKHSAI", "a", "ig", "OWV"};
    int width = 47;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "CV______LI______hZKHSAI______a______ig______OWV";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> words = {"KOZNRHXL", "uOSLt", "j", "qOUXUIYL", "df", "iWi"};
    int width = 32;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "KOZNRHXL_uOSLt_j_qOUXUIYL_df_iWi";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> words = {"Mh", "m", "tV", "z", "lV", "mp"};
    int width = 90;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "Mh________________m________________tV________________z________________lV________________mp";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> words = {"UO", "fX", "pBXN", "hHy", "o", "ngev"};
    int width = 21;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "UO_fX_pBXN_hHy_o_ngev";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> words = {"Kgq", "TLX", "NM", "BLP", "HK", "WO"};
    int width = 21;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "Kgq_TLX_NM_BLP_HK__WO";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> words = {"dzclLlb", "fC", "ogitgc", "xq", "aYZOC", "sP"};
    int width = 40;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "dzclLlb____fC___ogitgc___xq___aYZOC___sP";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> words = {"Ofa", "Bndhw", "KyvL", "IuQ", "CgzJ", "PZ"};
    int width = 48;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "Ofa_____Bndhw_____KyvL_____IuQ______CgzJ______PZ";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> words = {"Wtb", "Vbrp", "twj", "w", "jP", "yuvs"};
    int width = 45;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "Wtb_____Vbrp______twj______w______jP_____yuvs";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> words = {"FP", "bFME", "VzU", "ae", "idh", "nL"};
    int width = 35;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "FP____bFME___VzU____ae____idh____nL";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> words = {"r", "YjXF", "OpadCEb", "Uxd", "X", "Vqpty"};
    int width = 46;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "r_____YjXF_____OpadCEb_____Uxd_____X_____Vqpty";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> words = {"R", "aS", "bG", "c", "pD", "j"};
    int width = 64;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "R___________aS___________bG___________c___________pD___________j";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> words = {"estnkhmtp", "JSgzE", "EM", "PumQ", "HYUCzvA", "UMVRAVKHD", "Folzgraevp"};
    int width = 64;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "estnkhmtp___JSgzE___EM___PumQ___HYUCzvA___UMVRAVKHD___Folzgraevp";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> words = {"hWF", "VQ", "BCPM", "P", "WH", "NZ", "AP"};
    int width = 52;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "hWF______VQ______BCPM______P______WH______NZ______AP";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> words = {"BeM", "T", "Suac", "KO", "fDZm", "ak", "j"};
    int width = 29;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "BeM__T__Suac__KO__fDZm__ak__j";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> words = {"pLWDF", "Rsdz", "Onlarie", "i", "DMEQBI", "lf", "UEfYPotV"};
    int width = 57;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "pLWDF____Rsdz____Onlarie____i____DMEQBI____lf____UEfYPotV";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> words = {"tO", "u", "sa", "cp", "b", "y", "eO"};
    int width = 17;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "tO_u_sa_cp_b_y_eO";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> words = {"TVGP", "cpgmtp", "lCMMWSBUZ", "tpad", "gZYLJ", "bkl", "rIVL"};
    int width = 47;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "TVGP__cpgmtp__lCMMWSBUZ__tpad__gZYLJ__bkl__rIVL";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> words = {"WES", "UqvU", "FGWN", "WguC", "DRH", "L", "L"};
    int width = 51;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "WES_____UqvU_____FGWN_____WguC_____DRH_____L______L";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> words = {"pfybfjy", "CDBBCXUK", "Bojggetd", "V", "cutyHtocd", "Okffnlt", "TQFT"};
    int width = 141;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "pfybfjy________________CDBBCXUK________________Bojggetd________________V_________________cutyHtocd________________Okffnlt________________TQFT";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> words = {"CV", "kM", "uE", "c", "ii", "lS", "b"};
    int width = 25;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "CV___kM__uE__c__ii__lS__b";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> words = {"kQ", "Bvqpx", "B", "DR", "JUQ", "R", "TjHC"};
    int width = 33;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "kQ__Bvqpx__B__DR___JUQ___R___TjHC";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> words = {"v", "XSj", "Qic", "Yeb", "L", "K", "S"};
    int width = 28;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "v__XSj__Qic__Yeb___L___K___S";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> words = {"Vfbexr", "m", "e", "M", "j", "NXB", "k"};
    int width = 23;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "Vfbexr__m__e_M__j_NXB_k";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> words = {"g", "y", "Y", "I", "z", "PS", "S"};
    int width = 24;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "g___y__Y__I___z___PS___S";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> words = {"ERLC", "iPJHKN", "Iiz", "rSEKI", "btmRO", "fE", "vXGXAK"};
    int width = 65;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "ERLC______iPJHKN_____Iiz______rSEKI______btmRO______fE_____vXGXAK";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> words = {"J", "T", "k", "u", "m", "d", "q"};
    int width = 24;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "J__T___k___u___m___d___q";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> words = {"iUFiRZj", "T", "Hzrfwfb", "KHQBZJT", "VZFZFSZD", "RmyhwwA", "QtUszF"};
    int width = 151;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "iUFiRZj__________________T__________________Hzrfwfb__________________KHQBZJT__________________VZFZFSZD__________________RmyhwwA__________________QtUszF";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> words = {"jYBFV", "sf", "qG", "kQFk", "uNWWCVN", "gvrafn", "oNYOV"};
    int width = 43;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "jYBFV__sf__qG__kQFk__uNWWCVN__gvrafn__oNYOV";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> words = {"tM", "yi", "xC", "gUZUAVA", "gBD", "hkmx", "c"};
    int width = 33;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "tM__yi__xC__gUZUAVA__gBD__hkmx__c";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> words = {"i", "G", "Xkp", "PYRT", "Hj", "X", "Ik", "Lh"};
    int width = 51;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "i_____G_____Xkp_____PYRT_____Hj_____X_____Ik_____Lh";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> words = {"Wfgd", "G", "Fr", "AVA", "NHJAVBD", "VBICRS", "C", "Sxyflt"};
    int width = 65;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "Wfgd_____G_____Fr_____AVA_____NHJAVBD_____VBICRS_____C_____Sxyflt";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> words = {"OUMN", "u", "T", "TZAX", "NBQreD", "Q", "Kgonlj", "JGZC"};
    int width = 34;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "OUMN_u_T_TZAX_NBQreD_Q_Kgonlj_JGZC";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> words = {"vo", "dTLsSF", "mpm", "ySY", "lvnsud", "mKp", "jwlynp", "lAg"};
    int width = 39;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "vo_dTLsSF_mpm_ySY_lvnsud_mKp_jwlynp_lAg";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> words = {"yIPMWUG", "pirqu", "qGZJL", "wnq", "qSYjegz", "oVEG", "s", "ofi"};
    int width = 91;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "yIPMWUG________pirqu________qGZJL________wnq________qSYjegz________oVEG________s________ofi";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> words = {"rupggxep", "fnbghipoe", "jaazkwj", "tSI", "mcdVFH", "tmtd", "tEPVNFMY", "rtzleuyvw"};
    int width = 61;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "rupggxep_fnbghipoe_jaazkwj_tSI_mcdVFH_tmtd_tEPVNFMY_rtzleuyvw";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> words = {"Exqoyu", "Gvl", "PYHsp", "USTZkeGU", "WsS", "Lvh", "LDCNF", "RTQ"};
    int width = 79;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "Exqoyu______Gvl______PYHsp______USTZkeGU______WsS______Lvh______LDCNF_______RTQ";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> words = {"HV", "SC", "R", "AB", "N", "Ls", "Azi", "S"};
    int width = 43;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "HV____SC____R____AB____N____Ls____Azi_____S";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> words = {"rDBXESRR", "hjdbrr", "fmso", "tP", "fdDTUCDxs", "oYZP", "plszy", "ax"};
    int width = 56;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "rDBXESRR___hjdbrr___fmso__tP__fdDTUCDxs__oYZP__plszy__ax";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> words = {"Telkmje", "Pnvqxfvlzs", "Qp", "RPFOyb", "CY", "MEOMWNEMA", "MKxUN", "ZhtiJaDlV"};
    int width = 102;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "Telkmje_______Pnvqxfvlzs_______Qp_______RPFOyb_______CY________MEOMWNEMA________MKxUN________ZhtiJaDlV";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> words = {"g", "s", "i", "S", "B", "Q", "Fx", "r"};
    int width = 33;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "g____s____i___S___B___Q___Fx____r";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> words = {"UtwhY", "r", "xIKWP", "p", "roe", "zIV", "tUKXNISB", "svLwrPHQ"};
    int width = 44;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "UtwhY__r__xIKWP__p_roe_zIV_tUKXNISB_svLwrPHQ";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> words = {"exZBZtAO", "lxM", "zJQR", "lveimpd", "v", "x", "hANG", "zU"};
    int width = 63;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "exZBZtAO_____lxM_____zJQR_____lveimpd_____v_____x____hANG____zU";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> words = {"lCYYbMqVuY", "Bnf", "Cbc", "M", "XVNJIREAY", "Phglbw", "DOKGANXOW", "Wnw"};
    int width = 57;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "lCYYbMqVuY_Bnf__Cbc__M__XVNJIREAY__Phglbw__DOKGANXOW__Wnw";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> words = {"rRKYFSMNT", "vvulic", "xXUBLHA", "yu", "pAWJKRYR", "zc", "vh", "c"};
    int width = 50;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "rRKYFSMNT__vvulic__xXUBLHA__yu__pAWJKRYR__zc__vh_c";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> words = {"RaNSd", "rzE", "vVKDLUN", "ap", "yHknji", "ys", "kOPOL", "wwngGdb"};
    int width = 50;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "RaNSd__rzE__vVKDLUN__ap__yHknji__ys__kOPOL_wwngGdb";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> words = {"Jg", "pafb", "oPGJZUEL", "xbqa", "sJPEYI", "wXIWvAy", "uxhuyb", "oukpSpw"};
    int width = 58;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "Jg__pafb__oPGJZUEL__xbqa__sJPEYI__wXIWvAy__uxhuyb__oukpSpw";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> words = {"po", "KtJ", "S", "OG", "GTS", "Ieek", "BX", "Y", "CS"};
    int width = 28;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "po_KtJ_S_OG_GTS_Ieek_BX_Y_CS";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> words = {"Zj", "Wytsbfqk", "KUOC", "Gaqzlqjb", "Saxbnnwvv", "JCt", "UFNV", "Xahvetg", "KNViOZ"};
    int width = 91;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "Zj_____Wytsbfqk_____KUOC_____Gaqzlqjb_____Saxbnnwvv_____JCt_____UFNV_____Xahvetg_____KNViOZ";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> words = {"pzf", "hRD", "pNs", "m", "eMJ", "kUS", "bpf", "cOV", "z"};
    int width = 31;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "pzf_hRD_pNs_m_eMJ_kUS_bpf_cOV_z";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> words = {"wzsppxg", "Y", "bQ", "ki", "uFCM", "cnzrwg", "Iwpazpa", "Cjndbas", "d"};
    int width = 45;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "wzsppxg_Y_bQ_ki_uFCM_cnzrwg_Iwpazpa_Cjndbas_d";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> words = {"A", "oC", "mER", "lB", "z", "m", "xR", "o", "d"};
    int width = 30;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "A__oC__mER__lB__z__m__xR__o__d";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> words = {"S", "jhs", "utrwqmh", "dkuvct", "xH", "v", "h", "xmrijkq", "iGZ"};
    int width = 159;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "S________________jhs________________utrwqmh________________dkuvct________________xH________________v________________h________________xmrijkq________________iGZ";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> words = {"a", "IeY", "bVJO", "YVL", "RG", "Fteoc", "Tzsir", "UXEBz", "Wvz"};
    int width = 40;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "a_IeY__bVJO_YVL_RG_Fteoc_Tzsir_UXEBz_Wvz";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> words = {"zepmvo", "y", "aCQP", "iTIHNRX", "dv", "ex", "fdWiQb", "aPST", "c"};
    int width = 42;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "zepmvo__y_aCQP_iTIHNRX_dv_ex_fdWiQb_aPST_c";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> words = {"Hdoba", "OD", "P", "V", "J", "Q", "O", "WH", "BVEU"};
    int width = 28;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "Hdoba_OD_P_V_J_Q_O__WH__BVEU";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> words = {"a", "QLajpl", "O", "Wjlxen", "YLYV", "D", "XBNX", "Bpjn", "N"};
    int width = 47;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "a__QLajpl__O__Wjlxen__YLYV__D___XBNX___Bpjn___N";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> words = {"MTTK", "J", "UVE", "I", "KPYJ", "Uty", "Ll", "E", "Jhux"};
    int width = 67;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "MTTK_____J_____UVE_____I_____KPYJ______Uty______Ll______E______Jhux";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> words = {"E", "iw", "fY", "r", "qEW", "tDDE", "lp", "p", "iB"};
    int width = 54;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "E_____iw_____fY_____r_____qEW____tDDE____lp____p____iB";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> words = {"h", "u", "w", "n", "c", "a", "q", "b", "b"};
    int width = 85;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "h__________u__________w__________n__________c_________a_________q_________b_________b";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> words = {"w", "O", "N", "B", "X", "A", "M", "A", "F"};
    int width = 30;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "w__O__N__B___X___A___M___A___F";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> words = {"S", "b", "oRL", "dd", "b", "zNcE", "gKoDH", "oTFZ", "TMAF"};
    int width = 38;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "S__b__oRL__dd__b__zNcE_gKoDH_oTFZ_TMAF";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> words = {"xYNRYI", "VTSbqv", "Chf", "L", "Fkubuz", "D", "XcaRz", "A", "F"};
    int width = 44;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "xYNRYI_VTSbqv_Chf__L__Fkubuz__D__XcaRz__A__F";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> words = {"zYV", "rIGjFq", "kvgwtpb", "sEA", "uSRTD", "hsXWBnp", "mXh", "iVs", "eS"};
    int width = 77;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "zYV_____rIGjFq_____kvgwtpb_____sEA_____uSRTD_____hsXWBnp_____mXh____iVs____eS";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> words = {"ur", "j", "RDc", "c", "E", "eKX", "Daj", "W", "PFba"};
    int width = 34;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "ur__j_RDc__c__E__eKX__Daj__W__PFba";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> words = {"hUlJgP", "sCF", "bLvDKa", "g", "lHKESX", "zK", "wnct", "my", "vrigq"};
    int width = 66;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "hUlJgP____sCF____bLvDKa____g____lHKESX____zK____wnct____my___vrigq";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> words = {"b", "Q", "CT", "NU", "DG", "M", "X", "C", "Km"};
    int width = 29;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "b__Q__CT__NU__DG__M__X__C__Km";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> words = {"Z", "x", "r", "m", "h", "z", "f", "p", "d"};
    int width = 65;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "Z_______x_______r_______m_______h_______z_______f_______p_______d";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> words = {"u", "G", "L", "Y", "Q", "P", "A", "Z", "U", "F"};
    int width = 19;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "u_G_L_Y_Q_P_A_Z_U_F";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> words = {"mMLYLYJMQ", "Hnn", "Uqhoii", "Aervhp", "XO", "ADVCc", "WK", "Xlgz", "GGRURY", "SPG"};
    int width = 64;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "mMLYLYJMQ__Hnn__Uqhoii__Aervhp__XO__ADVCc__WK__Xlgz__GGRURY__SPG";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> words = {"msCoJVs", "uUDRZF", "AXWcgy", "Uxw", "yxjuf", "SZbNXoY", "S", "BADE", "h", "j"};
    int width = 77;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "msCoJVs____uUDRZF____AXWcgy____Uxw____yxjuf____SZbNXoY____S____BADE____h____j";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> words = {"soy", "ffcd", "M", "Md", "Psb", "WW", "AJU", "Nv", "Vp", "Bx"};
    int width = 33;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "soy_ffcd_M_Md_Psb_WW_AJU_Nv_Vp_Bx";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> words = {"s", "niw", "nNwE", "sB", "uv", "yzy", "qx", "t", "v", "qeJUG"};
    int width = 150;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "s______________niw______________nNwE______________sB______________uv______________yzy______________qx______________t______________v______________qeJUG";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> words = {"iMZWH", "aB", "h", "rrrdx", "u", "xblH", "nS", "zXJL", "lYRTE", "nDZZ"};
    int width = 51;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "iMZWH__aB__h__rrrdx__u__xblH__nS__zXJL__lYRTE__nDZZ";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> words = {"snx", "bAUeq", "kSeYYRPV", "stxo", "aNkGLhy", "vPSlrJOe", "bEQHTOCW", "vm", "lIMCSS", "dysm"};
    int width = 83;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "snx____bAUeq___kSeYYRPV___stxo___aNkGLhy___vPSlrJOe___bEQHTOCW___vm___lIMCSS___dysm";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> words = {"b", "ajt", "m", "Q", "GR", "T", "G", "NZ", "PlG", "Yiv"};
    int width = 38;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "b___ajt___m__Q__GR__T__G__NZ__PlG__Yiv";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> words = {"PuTd", "jE", "zVVQL", "KP", "eUX", "X", "qMH", "x", "ets", "zSZP"};
    int width = 111;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "PuTd__________jE__________zVVQL_________KP_________eUX_________X_________qMH_________x_________ets_________zSZP";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> words = {"dkYD", "y", "P", "WPBX", "kZJQ", "lG", "sEH", "QtDC", "kn", "D"};
    int width = 47;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "dkYD___y__P__WPBX___kZJQ___lG__sEH__QtDC__kn__D";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> words = {"x", "E", "K", "W", "E", "D", "Ko", "Se", "U", "Dv"};
    int width = 53;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "x____E____K____W____E____D_____Ko_____Se_____U_____Dv";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> words = {"X", "F", "PJ", "a", "RXG", "Tiapo", "Ve", "Maj", "HjcS", "Ci"};
    int width = 37;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "X_F_PJ__a_RXG_Tiapo_Ve__Maj__HjcS__Ci";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> words = {"wve", "lsnc", "cmrb", "aYKUUXV", "j", "kgnf", "nVSseP", "nT", "f", "m"};
    int width = 91;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "wve_______lsnc_______cmrb_______aYKUUXV_______j______kgnf______nVSseP______nT______f______m";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> words = {"y", "Vyau", "XWGQUAJA", "vXNV", "ylsnaywi", "CQTTWENEMV", "KGUK", "TxJ", "Ax", "Pmavu"};
    int width = 126;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "y________Vyau________XWGQUAJA_________vXNV_________ylsnaywi________CQTTWENEMV________KGUK_________TxJ_________Ax_________Pmavu";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> words = {"RPMI", "Ktb", "uqTzM", "CWXh", "BLMY", "xFMBUX", "o", "nSD", "Dmmjpu", "ozlcvm"};
    int width = 83;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "RPMI____Ktb_____uqTzM____CWXh____BLMY_____xFMBUX_____o_____nSD____Dmmjpu_____ozlcvm";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> words = {"fOh", "c", "y", "bpkt", "cW", "k", "ngav", "zjp", "eVFN", "jfm"};
    int width = 131;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "fOh____________c____________y____________bpkt____________cW____________k____________ngav___________zjp___________eVFN___________jfm";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> words = {"Byk", "desKP", "rWaljEJQI", "juzbBPv", "qQM", "i", "lCRWDZJDZ", "qfhu", "jg", "alPNKBGAMH"};
    int width = 69;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "Byk__desKP__rWaljEJQI__juzbBPv__qQM__i__lCRWDZJDZ__qfhu_jg_alPNKBGAMH";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> words = {"knxd", "dLUEjP", "eJBZpmg", "rhaxvr", "rdBFRbX", "sRF", "XIRAB", "vQXPYA", "hXQ", "ylPVD"};
    int width = 78;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "knxd___dLUEjP___eJBZpmg___rhaxvr___rdBFRbX___sRF__XIRAB___vQXPYA___hXQ___ylPVD";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> words = {"m", "h", "oD", "fMY", "xZ", "sW", "m", "e", "zQ", "xOg"};
    int width = 35;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "m__h__oD__fMY__xZ__sW__m__e__zQ_xOg";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> words = {"ww", "H", "Ak", "E", "VKq", "LTI", "Hxq", "Pc", "WGO", "D"};
    int width = 48;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "ww___H___Ak___E___VKq___LTI___Hxq___Pc___WGO___D";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> words = {"V", "QV", "Z", "Ees", "Jlk", "RH", "r", "ve", "KYx", "CIP"};
    int width = 48;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "V___QV___Z___Ees___Jlk___RH___r___ve___KYx___CIP";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> words = {"R", "c", "ju", "fA", "a", "q", "z", "k", "fN", "x"};
    int width = 94;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "R_________c_________ju_________fA_________a_________q_________z_________k_________fN_________x";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> words = {"XEDTNZJ", "OtGt", "ljCFFnEsiL", "Lj", "gpq", "WUYWXDZ", "tnkwpcldo", "CEgsor", "VjX", "YPZDEFKO"};
    int width = 200;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "XEDTNZJ_______________OtGt________________ljCFFnEsiL_______________Lj________________gpq_______________WUYWXDZ________________tnkwpcldo________________CEgsor________________VjX________________YPZDEFKO";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> words = {"f", "gso", "LEHKVMWZN", "tzbeh", "bki", "ZTJNHR", "jszxbkyme", "xgrbry", "G", "NNOROT"};
    int width = 200;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "f_________________gso________________LEHKVMWZN_________________tzbeh_________________bki________________ZTJNHR_________________jszxbkyme_________________xgrbry_________________G_________________NNOROT";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> words = {"CdXiQzlD", "CVLULLJ", "djollqsw", "PFJLK", "ahbghGX", "UQLPFHMDUN", "nxj", "xacvk", "HNGONA", "SHT"};
    int width = 200;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "CdXiQzlD_______________CVLULLJ________________djollqsw_______________PFJLK________________ahbghGX_______________UQLPFHMDUN________________nxj_______________xacvk_______________HNGONA_______________SHT";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> words = {"ZNTWC", "sohdzh", "Z", "qehafq", "WKfPOuo", "CE", "YEPJ", "ZUKP", "NLETXZTXE", "MBAA"};
    int width = 200;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "ZNTWC_________________sohdzh________________Z_________________qehafq_________________WKfPOuo_________________CE_________________YEPJ_________________ZUKP_________________NLETXZTXE_________________MBAA";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> words = {"BN", "QGXLUDC", "wROD", "hwlojcjjmf", "fsfjat", "nRjvAA", "FQ", "qkkd", "TNOJDLAB", "kvu"};
    int width = 200;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "BN________________QGXLUDC_________________wROD_________________hwlojcjjmf_________________fsfjat_________________nRjvAA________________FQ________________qkkd________________TNOJDLAB________________kvu";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> words = {"TM", "hrrjpsk", "H", "HSLBQZL", "EDHOCB", "YLcuPbYwWr", "LK", "sMJGGiggZh", "S", "pg"};
    int width = 200;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "TM_________________hrrjpsk________________H_________________HSLBQZL_________________EDHOCB_________________YLcuPbYwWr_________________LK_________________sMJGGiggZh_________________S_________________pg";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> words = {"ztgkxylzc", "BbsfrM", "kibeXbBq", "mcr", "C", "yfopqvgdt", "MlndEC", "fvie", "lfyul", "JW"};
    int width = 200;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "ztgkxylzc________________BbsfrM_________________kibeXbBq_________________mcr________________C_________________yfopqvgdt________________MlndEC________________fvie________________lfyul________________JW";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> words = {"JMEMHB", "EltleUWqvV", "PGKAYLzdDR", "HUINTZCL", "YMDCCKZDUY", "vc", "ymcnlf", "iksy", "mlcsbutg", "Oot"};
    int width = 200;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "JMEMHB______________EltleUWqvV______________PGKAYLzdDR_______________HUINTZCL_______________YMDCCKZDUY_______________vc_______________ymcnlf_______________iksy_______________mlcsbutg_______________Oot";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> words = {"TQbT", "b", "th", "oaxvomd", "d", "FJLG", "WIYWKEZPFI", "FMRNNVJVH", "yIpLOVYn", "QA"};
    int width = 200;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "TQbT_________________b_________________th_________________oaxvomd_________________d________________FJLG_________________WIYWKEZPFI_________________FMRNNVJVH_________________yIpLOVYn_________________QA";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> words = {"CCACGATK", "halckmxr", "A", "nMvsjO", "tljh", "oddpu", "cdxiqvkh", "yvrh", "ekonldl", "wliy"};
    int width = 200;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "CCACGATK_________________halckmxr________________A________________nMvsjO________________tljh________________oddpu________________cdxiqvkh________________yvrh________________ekonldl________________wliy";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<string> words = {"A", "b"};
    int width = 3;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "A_b";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<string> words = {"Hello", "world", "John", "said"};
    int width = 29;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "Hello____world___John____said";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<string> words = {"A", "a", "A", "a", "A", "a", "A"};
    int width = 51;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "A________a_______A________a_______A_______a_______A";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<string> words = {"Alpha", "Beta", "Gamma", "Delta", "Epsilon"};
    int width = 32;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "Alpha_Beta_Gamma__Delta__Epsilon";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<string> words = {"A", "B", "c"};
    int width = 6;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "A_B__c";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<string> words = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"};
    int width = 200;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "a______________________b_____________________c_____________________d_____________________e_____________________f_____________________g_____________________h_____________________i_____________________j";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<string> words = {"a", "b", "c"};
    int width = 10;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "a____b___c";
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<string> words = {"alpha", "Gamma", "Delta"};
    int width = 19;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "alpha__Gamma__Delta";
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<string> words = {"a", "A", "b", "v", "c", "C", "v", "e", "E", "e"};
    int width = 200;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "a_____________________A______________________b_____________________v_____________________c_____________________C_____________________v_____________________e_____________________E_____________________e";
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<string> words = {"aa", "BB", "ac", "bca", "CDER", "adfw", "we", "AAA"};
    int width = 100;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "aa___________BB____________ac___________bca___________CDER___________adfw___________we___________AAA";
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<string> words = {"A", "A", "a"};
    int width = 6;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "A_A__a";
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<string> words = {"Hello", "world", "John", "said", "asd", "SDfdsf", "fdsDFsfsdf", "DFdfsdfs"};
    int width = 80;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "Hello_____world_____John_____said_____asd_____SDfdsf_____fdsDFsfsdf_____DFdfsdfs";
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<string> words = {"a", "b"};
    int width = 4;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "a__b";
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<string> words = {"H", "W"};
    int width = 3;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "H_W";
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<string> words = {"Ala", "kota", "ma"};
    int width = 200;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "Ala________________________________________________________________________________________________kota_______________________________________________________________________________________________ma";
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<string> words = {"aaa", "aa", "aSD", "aaa"};
    int width = 22;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "aaa____aa____aSD___aaa";
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<string> words = {"A", "B", "C", "d"};
    int width = 9;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "A_B__C__d";
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<string> words = {"a", "A", "A"};
    int width = 6;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "a_A__A";
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<string> words = {"AAAAA", "AAAAA", "AAAAA", "AAAAA", "aaaaa"};
    int width = 31;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAA_AAAAA_AAAAA__AAAAA__aaaaa";
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<string> words = {"A", "B", "C", "D", "a"};
    int width = 12;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "A_B__C__D__a";
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<string> words = {"A", "a", "B", "b", "C", "c", "a", "z", "a", "z"};
    int width = 35;
    UnderscoreJustification* pObj = new UnderscoreJustification();
    clock_t start = clock();
    string result = pObj->justifyLine(words, width);
    clock_t end = clock();
    delete pObj;
    string expected = "A___a__B___b__C___c___a___z___a___z";
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=251074&rd=10810&pm=8482
********************************************************************************
#include <string>
#include <vector>
#include <map>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <set>
#include <iostream>
#include <sstream>
#include <cstddef>
#include <algorithm>
#include <utility>
#include <iterator>
#include <numeric>
#include <list>
#include <complex>
#include <cctype>
 
using namespace std;
 
typedef vector<int> vi;
typedef vector<string> vs;
typedef long long ll;
typedef complex<double> pnt;
typedef pair<int, int> pii;
 
#define RA(x) (x).begin(), (x).end()
#define FE(i, x) for (typeof((x).begin()) i = (x).begin(); i != (x).end(); i++)
#define SZ(x) ((int) (x).size())
 
 
class UnderscoreJustification
{
public:
    string justifyLine(vector <string> words, int width);
};
 
string UnderscoreJustification::justifyLine(vector <string> words, int width)
{
    int N = words.size();
    int wch = 0;
    for (int i = 0; i < N; i++)
        wch += SZ(words[i]);
    int tgap = width - wch;
    int low = tgap / (N - 1);
    int high = low + 1;
    int nhigh = tgap % (N - 1);
    int nlow = N - 1 - nhigh;
 
    string out = words[0];
    for (int i = 1; i < N; i++)
    {
        bool prefer_high = islower(words[i][0]);
        if (!nhigh) prefer_high = false;
        if (!nlow) prefer_high = true;
        if (prefer_high)
        {
            out += string(high, '_');
            nhigh--;
        }
        else
        {
            out += string(low, '_');
            nlow--;
        }
        out += words[i];
    }
    return out;
}
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/