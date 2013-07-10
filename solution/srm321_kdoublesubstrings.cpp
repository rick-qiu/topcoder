/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6757
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

class KDoubleSubstrings {
public:
    int howMuch(vector<string> str, int k);
};

int KDoubleSubstrings::howMuch(vector<string> str, int k) {
    int ret;
    return ret;
}


int test0() {
    vector<string> str = {"aa"};
    int k = 0;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
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
    vector<string> str = {"aaaa"};
    int k = 0;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> str = {"contest", "kontest"};
    int k = 1;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> str = {"abacaba", "d", "abacaba"};
    int k = 1;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> str = {"areyouready"};
    int k = 2;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> str = {"a"};
    int k = 1;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> str = {"aa"};
    int k = 2;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
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
    vector<string> str = {"aaa"};
    int k = 3;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> str = {"aab"};
    int k = 4;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> str = {"cabb"};
    int k = 5;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> str = {"cbbb"};
    int k = 6;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> str = {"aad"};
    int k = 7;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> str = {"aabbdc"};
    int k = 8;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> str = {"dbe"};
    int k = 9;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> str = {"bb"};
    int k = 10;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> str = {"efd", "c"};
    int k = 12;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> str = {"edeebaefdcc", "aag"};
    int k = 0;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> str = {"dcabeccabafg", "fafhe"};
    int k = 16;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> str = {"ihcgcifgba", "hbicgfhgehdiadd"};
    int k = 18;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 156;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> str = {"agbehdid", "eahdbbc"};
    int k = 20;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> str = {"icckfifbjkkdiihkgeab", "kbabbjdhdjdecahachkkc", "habeegkjhdbh"};
    int k = 22;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 696;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> str = {"aeebceilcdb", "gidijbiadcce", "eiblaafaegea"};
    int k = 24;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 306;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> str = {"bkfddfelgdelekmjjmllaeam", "lchfkkaa", "jffefhilmhihgffjdgh"};
    int k = 26;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 650;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> str = {"ehckhedh", "bdncndjki", "dajaedhmhkncelkdcc"};
    int k = 0;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> str = {"oeicbknnlbkcdcladjehjlomfc", "jhehoiglh", "mlllfnbbihde"};
    int k = 30;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 552;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> str = {"c", "ndl", "npnfkllnmieoknfibcnbbij", "mjdkjbhnjhgkggjknj"};
    int k = 32;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 506;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> str = {"hlhnbbcamjmmqfboiopcagqqlkbdqkmlcg", "kependmnonipqogjnkqicli", "imkkohqfhigc", "ldgjnnbhnmmmmqnlqp"};
    int k = 34;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1841;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> str = {"ofckocgmhcjjclffokm", "aaomqeccemrbrp", "nhaqrjaolqlfbngepbgoinigrerremplckr", "jahfa"};
    int k = 36;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1332;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> str = {"gablkobidpnlmpfg", "raldoeojcisihkpkdpqhfpaoggqpcilgjiqap", "khkaeskdlljks", "b"};
    int k = 38;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1122;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> str = {"gielldmtgoona", "tttfjttrslotcrprmccinsbk", "ddpenjimco", "joblodkpaqgcreqljomkbmatoecpkt"};
    int k = 40;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1482;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> str = {"bbcokbapkekmgjsnppaqrgoiatjdmmhhpggtcraq", "aebtkq", "ooasjbgpsgjkcl", "nfgiliudabtnklftbsstthujunmhcmrrtglr", "outpqhkjefchoggfbakinnbtjot"};
    int k = 42;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3497;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> str = {"bnkoimragqabgvndq", "ilfltjjjduogbrucejgqvptffpnrbqmdhqfehbrva", "vnkdsaeiisqtkalnaulig", "elcnnfpovstpljgur", "tnmiudeqboqtjjofmj"};
    int k = 44;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3114;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> str = {"saqwddmppwwwaheujifkjvmqdawuedhbcs", "gsbljhudsgunbmmjlsqdvvekfhbvijo", "hhvamfknehd", "wklvielfldrpdbovgujmdbgrbgmbupgfkkpgpvavhvd", "ubutvpcuhtnrrlhasuoetfjqki"};
    int k = 46;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 4681;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> str = {"ractorelmrugqwmisah", "cflimcmk", "nscjeuudjoutnogivvajoqbojowpduboluwp", "veqptmtopcaarnhfruevwgdkgothmkpih", "pxocnqcftcmeldgcgogonduuwemrgihhnguaixu"};
    int k = 48;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 4267;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> str = {"edjpnovxcvsbpkelvocwvxxvvnnnbvdmmyowfebt", "akcpadvqcn", "xtgennm", "yjjpstekoytxkjyiwptrufibpnsadrcjiepyahuc", "wrsohefbjblwrwbalekvxoayujcnhjoijqx"};
    int k = 50;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 4156;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> str = {"ufbxjfzjymmrwneystelujapvdtabfwgumcrtiqztldoig", "njncgxnbdpmefbmxbahhapunciecjokesttzepkrvaoqnt", "ubyfkdtryifvjzjbfcxedjsytupnnkdtgwbudpvzqgbwhy", "cdbilywllahbclgxwaeipoeqowjymkfewxagtibizbsmjy", "bjlugtwsigpkejttlbiecrsmbcqfnzpxkeolejpebfgnux"};
    int k = 7;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1613;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> str = {"ufbxjfzjymmrwneystelujapvdtabfwgumcrtiqztldoig", "njncgxnbdpmefbmxbahhapunciecjokesttzepkrvaoqnt", "ubyfkdtryifvjzjbfcxedjsytupnnkdtgwbudpvzqgbwhy", "cdbilywllahbclgxwaeipoeqowjymkfewxagtibizbsmjy", "bjlugtwsigpkejttlbiecrsmbcqfnzpxkeolejpebfgnux"};
    int k = 92;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 12852;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> str = {"unuzipwtfmvdyxwahaanpjvlrtizdwazemsazbueziptrgc", "vmwdmrhckvetgowivnogroqoavngdpzwpahcjjpyfhdbmhm", "obuqtvrojcnnwsijmvvkqlhitgcbftdgimrossihfiphmto", "rmvfosamsqendwvfgbfpdypkomvczinndhnmjcdeuvogyeh", "cpvfhrzrtcaijjiunqaavzgleciuaswdgfumpvbahtqfjux"};
    int k = 8;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1934;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> str = {"nycpcydapxqcuenjxfwpvaqcjmhpeujyrxhluahxlldpukk", "qayfyhtebvmlvghjudnqleuqfjxnzgbsffpiiuspnhtnadm", "ixlpxgeakylpeotuszkgbzdxbxfbsbquvyucdcgggpairzy", "eybbiofzvmnjopuucztuxunyvqpxrtdfebnvmmiclpuyquu", "yppejanwmsrwyywlahuezxbbxcseoopkyituuffisbjuuzr"};
    int k = 94;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 13418;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> str = {"ngvrbiakxxblxngmnmsrqylxdcxqelprzxxuduneshpwclxw", "bsboobdtgmacigpoluxlyyaxykknjuubmzhcqqstagbsqcja", "uewkygqgsdqfydhrchxmrnerwrrzpcfqgcyuxhmbisxnjtpy", "kjxcemahqvpnvblmdjegznqaukgtqbpuiopkptzigooqnsnn", "hlxdbjxnwewbjectvurhofkahzyazcychyywfubetxstgdjc"};
    int k = 9;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2165;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> str = {"eeyqmfoimuxdijmhrqruwlswvgvjspypzzcaectnpybgjlfs", "xvdvzslbbmyvgerprwvxesucsmckvtznratcmudisxhlflyp", "nqjovufgpmvtamrvcpvkeiazvbvubxubaokujrdjopkyizoc", "oboooluwsljhnplzpnvdppqjsvhaqncjhisuqwueftmbenbl", "eozzftccyymatayldatuviicsbdzmflksabtefjqodcrjlpj"};
    int k = 96;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 13986;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> str = {"emtslpkrtugokrfjgxowojntrylkvgdiizsjmvzvvumnrltzk", "pxmgzltkoocidykzdbxaveujzyzyodjykptirgqlmvbrbvhpx", "itoylmtajidvdnsprxryfrmrwryhctnpfmypivuyrorbzdkwe", "otciqzrhcooxqyafvpervopvqbkqqsjywdedrnqhxkhxhudag", "tkiqwfopdygzxvjamlaaknjrozstfsuhrybzncckrshochpbe"};
    int k = 10;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2471;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> str = {"drmmmospzreibqcbnczpimzghankqglbjxugqqiycedvsleaa", "fkopdmnhjvhehczdihvnnysmojhoesuckyqtaxvdwdahbhfau", "jhjhvvfkslsvqkvoaladsknsvxgedpxqpiasslzzxspvvbrww", "odesjiwjupqmmumbrlkpmaijrstzvkfksrgbaqwyjsxhojksf", "bmmubklsbfhfnfkiqaxhicotksasqrpqdoyyrhzcuvhdhgfqq"};
    int k = 98;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 14595;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> str = {"xvqwrnbzqfrdyawiuodbomappqupksiivlskejslcgdsvcifia", "viqvxbljbncbjoakxhtdlouqbgwgdsqegkeqbsojorqbdoeomn", "etstzkldtgtsvpkekvqznrwyvjbijclkxdrgdmgrsgbfatphrn", "lcgncdqjoufaswhlieemkszggmhoxdugmiqtctlwtnoplxkxbk", "krctslmaieckqdaslccjuimogbaikyudlfkfbjiujcntmjiybs"};
    int k = 1;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 271;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> str = {"xiesqvfhbfwhrjoeoblxanjzzhoohjxuejkqpxiwpnhhfdgoly", "ecfiynsgybacvykyieczneoqgbpuvccolzivvfagmhttmgmxko", "ugjgpikynpsgnorghrhmfkvcaqkuibszqegiovrmybgdfbjpsc", "lptycrpjpjkbzkdghhmzmjbmcyklpbvqtebwnzzgzqptpewtsu", "neamxovvsjuakvpxadndrvavetohikjkohhqmuzoltxnlqvqrb"};
    int k = 100;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 15179;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> str = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    int k = 0;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 15625;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> str = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    int k = 100;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 15625;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> str = {"abbbaaabaaaabbbaaabababbbbbaabbaabbbaaaaaaaabbbbba", "bbaaabbbabaabbbbbababbbbaabbaaabbbababaabababbbabb", "baaababababaabaabaabaaababaabbbaaaaaabbaabbbaaabba", "aaabbaabbbbabababbaabbabbabbbaababbbbaaababaabbbaa", "bbababababbabaaaaaabbaababaabbabbaaaaababbabbabbbb"};
    int k = 0;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 235;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> str = {"ddacbdddbbdddccaabcaaddaadaaddabdbabbbddaaadcdcdca", "cbdabacbdbcaacbdaaddcdccbbaacaaccabbbdcdabadabcdab", "aaabdbbdacbdcccdbdabdcabbcbdcbcbcddaaadbacbdbbdbdb", "abcadbdaabbddcabccccaccddaacacadabcdcbbcbbcdabdbcc", "dbcabbcdccbbabbcddcbbbcbcaabdcdbcbcdabdbacbddccddc"};
    int k = 100;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 15624;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> str = {"fhehddgfgfbfadadfceaadhcaaeecebafghfdfcegcgcdhddhf", "ebgaefefgghgcdahdcfhgafcahbgghgagefddeahdhchdadeae", "dfahffgfebaggecdhcedgehgedchfhdhgedebfbaddgfdabhce", "dbdcbeehgcfeehbfbebadfccdhfaghhghaggbgehhefffchaaa", "hehdeeebhehgeaehdgbbhcbecfgacgfffbabbffdbgffhdbebf"};
    int k = 100;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 15467;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> str = {"adfjpljckiajabmiecdokegnkafclinfcflkgpdggcbfgficfb", "cpmiffehmcdbgkkpkoecnlhfmgfibfdlgdedamnhonbepimgbf", "gledbcjdhfndjnlfcmnilmgmldhpdhkkbpopphkolbgofajdbm", "ikababdcbfjojebfpcjoobikopmbabonpekdpognogehnmkcon", "aombgfhbipkjkchebaokaiidglhiahhoopnkomgjmbmghfgocc"};
    int k = 100;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 15274;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> str = {"buqfgbuzwwwjrxpouplspmwgcrvitjklxespkhhfnabeweqicf", "tvkrbguozzadrwfehyyetlbwxebbsdpeydectydazzvjpylrfv", "dksypsrlexdbhrmlpdvfrbgyewkytqsisiqmgvuoutsmvcwxxc", "uwmuhuvlaylajawtjemhrgvjxaxnvnhysjhcdpdnxhwarosjho", "fdgdnaonjprftvwvbajrxtkqbmxmcplomwlgkjxbtwyqwkcerw"};
    int k = 100;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 15184;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> str = {"abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcab", "bcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcaba", "cabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabca", "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcab", "bcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcaba"};
    int k = 1;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1540;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> str = {"aaaaaaabbbbbb", "fffffhhhhbbbbccc", "aa"};
    int k = 3;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 97;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> str = {"asdf", "dfghfgh", "jghjghjfhksdfgsd", "sdfgsdfgsdfg", "sdfsdf"};
    int k = 2;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 132;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> str = {"abcdefghijklmnopqrstuwxyz"};
    int k = 7;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 126;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> str = {"aa"};
    int k = 5;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> str = {"areyouready"};
    int k = 2;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> str = {"aagsdfhhhhdgfgggggdfdgdfffff"};
    int k = 1;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> str = {"aa"};
    int k = 2;
    KDoubleSubstrings* pObj = new KDoubleSubstrings();
    clock_t start = clock();
    int result = pObj->howMuch(str, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=287130&rd=10001&pm=6757
********************************************************************************
#include <vector>
#include <set>
#include <stack>
#include <algorithm>
#include <sstream>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <queue>
 
using namespace std;
 
typedef vector<int> VI;
typedef vector<string> VS;
 
// ********************************************* //
 
class KDoubleSubstrings {
public:
  int howMuch(vector <string>, int);
};
 
int KDoubleSubstrings::howMuch(vector <string> str, int kk) {
  
  int ret = 0;
  
  string full = "";
  
  for (int i = 0; i < str.size(); i++) full = full + str[i];
  
  int N = full.length();
  
  for (int i = 0; i < N; i++) {
    for (int j = i+1; j < N; j++) {
      int len = j-i+1;
      if (len % 2 != 0) continue;
      string lh = "", rh = "";
      for (int k = 0; k < len/2; k++) lh = lh + full[i+k];
      for (int k = len/2; k < len; k++) rh = rh + full[i+k];
      int numdiff = 0;
      for (int k = 0; k < lh.length(); k++) {
        if (lh[k] != rh[k]) numdiff++;
      }
      if (numdiff <= kk) ret++;
    }
  }
  
  return ret;
}

********************************************************************************
*******************************************************************************/