/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6210
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

class ContextFreeGrammars {
public:
    int countParsingTrees(vector<string> rules, unknown seed, string word);
};

int ContextFreeGrammars::countParsingTrees(vector<string> rules, unknown seed, string word) {
    int ret;
    return ret;
}


int test0() {
    vector<string> rules = {"A ::= BD", "B ::= bB | b | Bb", "D ::= dD", "D ::= d"};
    unknown seed = A;
    string word = "bdd";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
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
    vector<string> rules = {"A ::= BD", "B ::= bB | b | Bb", "D ::= dD", "D ::= d"};
    unknown seed = A;
    string word = "bbd";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> rules = {"A ::= BD", "B ::= bB | b | Bb", "D ::= dD", "D ::= d"};
    unknown seed = A;
    string word = "ddbb";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
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
    vector<string> rules = {"B ::= topcoder | topcoder", "B ::= topcoder"};
    unknown seed = B;
    string word = "topcoder";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> rules = {"A ::= BCD", "Z ::= z", "B ::= Cz | Dz | Zz", "C ::= Bz | Dz", "D ::= Cz | Bz"};
    unknown seed = X;
    string word = "zzz";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> rules = {"B ::= bB | bB | bB | bB | b"};
    unknown seed = B;
    string word = "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbb";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> rules = {"B ::= bB | b | Bb"};
    unknown seed = B;
    string word = "bbbbbbbbbbb";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 1024;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> rules = {"A ::= aB | aC | aD | aE | aF | aG | aH | a | b | c", "B ::= aA | aC | aD | aE | aF | aG | aH | a | b | c", "C ::= aB | aA | aD | aE | aF | aG | aH | a | b | c", "D ::= aB | aC | aA | aE | aF | aG | aH | a | b | c", "E ::= aB | aC | aD | aA | aF | aG | aH | a | b | c", "F ::= aB | aC | aD | aE | aA | aG | aH | a | b | c", "G ::= aB | aC | aD | aE | aF | aA | aH | a | b | c", "H ::= aB | aC | aD | aE | aF | aG | aA | a | b | c"};
    unknown seed = A;
    string word = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> rules = {"A ::= a | aA | aB | aC | aD | aE | aF | aG | aH", "A ::= a | aI | aJ | aK | aL | aM | aN | aO | aP", "B ::= a | aB | aC | aD | aE | aF | aG | aH | aI", "B ::= a | aJ | aK | aL | aM | aN | aO | aP | aQ", "C ::= a | aC | aD | aE | aF | aG | aH | aI | aJ", "C ::= a | aK | aL | aM | aN | aO | aP | aQ | aR", "D ::= a | aD | aE | aF | aG | aH | aI | aJ | aK", "D ::= a | aL | aM | aN | aO | aP | aQ | aR | aS", "E ::= a | aE | aF | aG | aH | aI | aJ | aK | aL", "E ::= a | aM | aN | aO | aP | aQ | aR | aS | aT", "F ::= a | aF | aG | aH | aI | aJ | aK | aL | aM", "F ::= a | aN | aO | aP | aQ | aR | aS | aT | aU", "G ::= a | aG | aH | aI | aJ | aK | aL | aM | aN", "G ::= a | aO | aP | aQ | aR | aS | aT | aU | aV", "H ::= a | aH | aI | aJ | aK | aL | aM | aN | aO", "H ::= a | aP | aQ | aR | aS | aT | aU | aV | aW", "I ::= a | aI | aJ | aK | aL | aM | aN | aO | aP", "I ::= a | aQ | aR | aS | aT | aU | aV | aW | aX", "J ::= a | aJ | aK | aL | aM | aN | aO | aP | aQ", "J ::= a | aR | aS | aT | aU | aV | aW | aX | aY", "K ::= a | aK | aL | aM | aN | aO | aP | aQ | aR", "K ::= a | aS | aT | aU | aV | aW | aX | aY | aA", "L ::= a | aL | aM | aN | aO | aP | aQ | aR | aS", "L ::= a | aT | aU | aV | aW | aX | aY | aA | aB", "M ::= a | aM | aN | aO | aP | aQ | aR | aS | aT", "M ::= a | aU | aV | aW | aX | aY | aA | aB | aC", "N ::= a | aN | aO | aP | aQ | aR | aS | aT | aU", "N ::= a | aV | aW | aX | aY | aA | aB | aC | aD", "O ::= a | aO | aP | aQ | aR | aS | aT | aU | aV", "O ::= a | aW | aX | aY | aA | aB | aC | aD | aE", "P ::= a | aP | aQ | aR | aS | aT | aU | aV | aW", "P ::= a | aX | aY | aA | aB | aC | aD | aE | aF", "Q ::= a | aQ | aR | aS | aT | aU | aV | aW | aX", "Q ::= a | aY | aA | aB | aC | aD | aE | aF | aG", "R ::= a | aR | aS | aT | aU | aV | aW | aX | aY", "R ::= a | aA | aB | aC | aD | aE | aF | aG | aH", "S ::= a | aS | aT | aU | aV | aW | aX | aY | aA", "S ::= a | aB | aC | aD | aE | aF | aG | aH | aI", "T ::= a | aT | aU | aV | aW | aX | aY | aA | aB", "T ::= a | aC | aD | aE | aF | aG | aH | aI | aJ", "U ::= a | aU | aV | aW | aX | aY | aA | aB | aC", "U ::= a | aD | aE | aF | aG | aH | aI | aJ | aK", "V ::= a | aV | aW | aX | aY | aA | aB | aC | aD", "V ::= a | aE | aF | aG | aH | aI | aJ | aK | aL", "W ::= a | aW | aX | aY | aA | aB | aC | aD | aE", "W ::= a | aF | aG | aH | aI | aJ | aK | aL | aM", "X ::= a | aX | aY | aA | aB | aC | aD | aE | aF", "X ::= a | aG | aH | aI | aJ | aK | aL | aM | aN", "Y ::= a | aY | aA | aB | aC | aD | aE | aF | aG", "Y ::= a | aH | aI | aJ | aK | aL | aM | aN | aO"};
    unknown seed = O;
    string word = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> rules = {"A ::= a | Aa | Ba | Ca | Da | Ea | Fa | Ga | Ha", "A ::= a | Ia | Ja | Ka | La | Ma | Na | Oa | Pa", "B ::= a | Ba | Ca | Da | Ea | Fa | Ga | Ha | Ia", "B ::= a | Ja | Ka | La | Ma | Na | Oa | Pa | Qa", "C ::= a | Ca | Da | Ea | Fa | Ga | Ha | Ia | Ja", "C ::= a | Ka | La | Ma | Na | Oa | Pa | Qa | Ra", "D ::= a | Da | Ea | Fa | Ga | Ha | Ia | Ja | Ka", "D ::= a | La | Ma | Na | Oa | Pa | Qa | Ra | Sa", "E ::= a | Ea | Fa | Ga | Ha | Ia | Ja | Ka | La", "E ::= a | Ma | Na | Oa | Pa | Qa | Ra | Sa | Ta", "F ::= a | Fa | Ga | Ha | Ia | Ja | Ka | La | Ma", "F ::= a | Na | Oa | Pa | Qa | Ra | Sa | Ta | Ua", "G ::= a | Ga | Ha | Ia | Ja | Ka | La | Ma | Na", "G ::= a | Oa | Pa | Qa | Ra | Sa | Ta | Ua | Va", "H ::= a | Ha | Ia | Ja | Ka | La | Ma | Na | Oa", "H ::= a | Pa | Qa | Ra | Sa | Ta | Ua | Va | Wa", "I ::= a | Ia | Ja | Ka | La | Ma | Na | Oa | Pa", "I ::= a | Qa | Ra | Sa | Ta | Ua | Va | Wa | Xa", "J ::= a | Ja | Ka | La | Ma | Na | Oa | Pa | Qa", "J ::= a | Ra | Sa | Ta | Ua | Va | Wa | Xa | Ya", "K ::= a | Ka | La | Ma | Na | Oa | Pa | Qa | Ra", "K ::= a | Sa | Ta | Ua | Va | Wa | Xa | Ya | Aa", "L ::= a | La | Ma | Na | Oa | Pa | Qa | Ra | Sa", "L ::= a | Ta | Ua | Va | Wa | Xa | Ya | Aa | Ba", "M ::= a | Ma | Na | Oa | Pa | Qa | Ra | Sa | Ta", "M ::= a | Ua | Va | Wa | Xa | Ya | Aa | Ba | Ca", "N ::= a | Na | Oa | Pa | Qa | Ra | Sa | Ta | Ua", "N ::= a | Va | Wa | Xa | Ya | Aa | Ba | Ca | Da", "O ::= a | Oa | Pa | Qa | Ra | Sa | Ta | Ua | Va", "O ::= a | Wa | Xa | Ya | Aa | Ba | Ca | Da | Ea", "P ::= a | Pa | Qa | Ra | Sa | Ta | Ua | Va | Wa", "P ::= a | Xa | Ya | Aa | Ba | Ca | Da | Ea | Fa", "Q ::= a | Qa | Ra | Sa | Ta | Ua | Va | Wa | Xa", "Q ::= a | Ya | Aa | Ba | Ca | Da | Ea | Fa | Ga", "R ::= a | Ra | Sa | Ta | Ua | Va | Wa | Xa | Ya", "R ::= a | Aa | Ba | Ca | Da | Ea | Fa | Ga | Ha", "S ::= a | Sa | Ta | Ua | Va | Wa | Xa | Ya | Aa", "S ::= a | Ba | Ca | Da | Ea | Fa | Ga | Ha | Ia", "T ::= a | Ta | Ua | Va | Wa | Xa | Ya | Aa | Ba", "T ::= a | Ca | Da | Ea | Fa | Ga | Ha | Ia | Ja", "U ::= a | Ua | Va | Wa | Xa | Ya | Aa | Ba | Ca", "U ::= a | Da | Ea | Fa | Ga | Ha | Ia | Ja | Ka", "V ::= a | Va | Wa | Xa | Ya | Aa | Ba | Ca | Da", "V ::= a | Ea | Fa | Ga | Ha | Ia | Ja | Ka | La", "W ::= a | Wa | Xa | Ya | Aa | Ba | Ca | Da | Ea", "W ::= a | Fa | Ga | Ha | Ia | Ja | Ka | La | Ma", "X ::= a | Xa | Ya | Aa | Ba | Ca | Da | Ea | Fa", "X ::= a | Ga | Ha | Ia | Ja | Ka | La | Ma | Na", "Y ::= a | Ya | Aa | Ba | Ca | Da | Ea | Fa | Ga", "Y ::= a | Ha | Ia | Ja | Ka | La | Ma | Na | Oa"};
    unknown seed = F;
    string word = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> rules = {"A ::= a | Aa | aB | Ca | aD | Ea | aF | Ga | aH", "A ::= a | Ia | aJ | Ka | aL | Ma | aN | Oa | aP", "B ::= a | Ba | aC | Da | aE | Fa | aG | Ha | aI", "B ::= a | Ja | aK | La | aM | Na | aO | Pa | aQ", "C ::= a | Ca | aD | Ea | aF | Ga | aH | Ia | aJ", "C ::= a | Ka | aL | Ma | aN | Oa | aP | Qa | aR", "D ::= a | Da | aE | Fa | aG | Ha | aI | Ja | aK", "D ::= a | La | aM | Na | aO | Pa | aQ | Ra | aS", "E ::= a | Ea | aF | Ga | aH | Ia | aJ | Ka | aL", "E ::= a | Ma | aN | Oa | aP | Qa | aR | Sa | aT", "F ::= a | Fa | aG | Ha | aI | Ja | aK | La | aM", "F ::= a | Na | aO | Pa | aQ | Ra | aS | Ta | aU", "G ::= a | Ga | aH | Ia | aJ | Ka | aL | Ma | aN", "G ::= a | Oa | aP | Qa | aR | Sa | aT | Ua | aV", "H ::= a | Ha | aI | Ja | aK | La | aM | Na | aO", "H ::= a | Pa | aQ | Ra | aS | Ta | aU | Va | aW", "I ::= a | Ia | aJ | Ka | aL | Ma | aN | Oa | aP", "I ::= a | Qa | aR | Sa | aT | Ua | aV | Wa | aX", "J ::= a | Ja | aK | La | aM | Na | aO | Pa | aQ", "J ::= a | Ra | aS | Ta | aU | Va | aW | Xa | aY", "K ::= a | Ka | aL | Ma | aN | Oa | aP | Qa | aR", "K ::= a | Sa | aT | Ua | aV | Wa | aX | Ya | aA", "L ::= a | La | aM | Na | aO | Pa | aQ | Ra | aS", "L ::= a | Ta | aU | Va | aW | Xa | aY | Aa | aB", "M ::= a | Ma | aN | Oa | aP | Qa | aR | Sa | aT", "M ::= a | Ua | aV | Wa | aX | Ya | aA | Ba | aC", "N ::= a | Na | aO | Pa | aQ | Ra | aS | Ta | aU", "N ::= a | Va | aW | Xa | aY | Aa | aB | Ca | aD", "O ::= a | Oa | aP | Qa | aR | Sa | aT | Ua | aV", "O ::= a | Wa | aX | Ya | aA | Ba | aC | Da | aE", "P ::= a | Pa | aQ | Ra | aS | Ta | aU | Va | aW", "P ::= a | Xa | aY | Aa | aB | Ca | aD | Ea | aF", "Q ::= a | Qa | aR | Sa | aT | Ua | aV | Wa | aX", "Q ::= a | Ya | aA | Ba | aC | Da | aE | Fa | aG", "R ::= a | Ra | aS | Ta | aU | Va | aW | Xa | aY", "R ::= a | Aa | aB | Ca | aD | Ea | aF | Ga | aH", "S ::= a | Sa | aT | Ua | aV | Wa | aX | Ya | aA", "S ::= a | Ba | aC | Da | aE | Fa | aG | Ha | aI", "T ::= a | Ta | aU | Va | aW | Xa | aY | Aa | aB", "T ::= a | Ca | aD | Ea | aF | Ga | aH | Ia | aJ", "U ::= a | Ua | aV | Wa | aX | Ya | aA | Ba | aC", "U ::= a | Da | aE | Fa | aG | Ha | aI | Ja | aK", "V ::= a | Va | aW | Xa | aY | Aa | aB | Ca | aD", "V ::= a | Ea | aF | Ga | aH | Ia | aJ | Ka | aL", "W ::= a | Wa | aX | Ya | aA | Ba | aC | Da | aE", "W ::= a | Fa | aG | Ha | aI | Ja | aK | La | aM", "X ::= a | Xa | aY | Aa | aB | Ca | aD | Ea | aF", "X ::= a | Ga | aH | Ia | aJ | Ka | aL | Ma | aN", "Y ::= a | Ya | aA | Ba | aC | Da | aE | Fa | aG", "Y ::= a | Ha | aI | Ja | aK | La | aM | Na | aO"};
    unknown seed = G;
    string word = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> rules = {"A ::= x | Az | zB | Cz | zD | Ez | zF | Gz | zH", "A ::= x | Iz | zJ | Kz | zL | Mz | zN | Oz | zP", "B ::= x | Bz | zC | Dz | zE | Fz | zG | Hz | zI", "B ::= x | Jz | zK | Lz | zM | Nz | zO | Pz | zQ", "C ::= x | Cz | zD | Ez | zF | Gz | zH | Iz | zJ", "C ::= x | Kz | zL | Mz | zN | Oz | zP | Qz | zR", "D ::= x | Dz | zE | Fz | zG | Hz | zI | Jz | zK", "D ::= x | Lz | zM | Nz | zO | Pz | zQ | Rz | zS", "E ::= x | Ez | zF | Gz | zH | Iz | zJ | Kz | zL", "E ::= x | Mz | zN | Oz | zP | Qz | zR | Sz | zT", "F ::= z | Fz | zG | Hz | zI | Jz | zK | Lz | zM", "F ::= z | Nz | zO | Pz | zQ | Rz | zS | Tz | zU", "G ::= x | Gz | zH | Iz | zJ | Kz | zL | Mz | zN", "G ::= x | Oz | zP | Qz | zR | Sz | zT | Uz | zV", "H ::= x | Hz | zI | Jz | zK | Lz | zM | Nz | zO", "H ::= x | Pz | zQ | Rz | zS | Tz | zU | Vz | zW", "I ::= x | Iz | zJ | Kz | zL | Mz | zN | Oz | zP", "I ::= x | Qz | zR | Sz | zT | Uz | zV | Wz | zX", "J ::= x | Jz | zK | Lz | zM | Nz | zO | Pz | zQ", "J ::= x | Rz | zS | Tz | zU | Vz | zW | Xz | zY", "K ::= x | Kz | zL | Mz | zN | Oz | zP | Qz | zR", "K ::= x | Sz | zT | Uz | zV | Wz | zX | Yz | zA", "L ::= x | Lz | zM | Nz | zO | Pz | zQ | Rz | zS", "L ::= x | Tz | zU | Vz | zW | Xz | zY | Az | zB", "M ::= x | Mz | zN | Oz | zP | Qz | zR | Sz | zT", "M ::= x | Uz | zV | Wz | zX | Yz | zA | Bz | zC", "N ::= x | Nz | zO | Pz | zQ | Rz | zS | Tz | zU", "N ::= x | Vz | zW | Xz | zY | Az | zB | Cz | zD", "O ::= x | Oz | zP | Qz | zR | Sz | zT | Uz | zV", "O ::= x | Wz | zX | Yz | zA | Bz | zC | Dz | zE", "P ::= x | Pz | zQ | Rz | zS | Tz | zU | Vz | zW", "P ::= x | Xz | zY | Az | zB | Cz | zD | Ez | zF", "Q ::= x | Qz | zR | Sz | zT | Uz | zV | Wz | zX", "Q ::= x | Yz | zA | Bz | zC | Dz | zE | Fz | zG", "R ::= x | Rz | zS | Tz | zU | Vz | zW | Xz | zY", "R ::= x | Az | zB | Cz | zD | Ez | zF | Gz | zH", "S ::= x | Sz | zT | Uz | zV | Wz | zX | Yz | zA", "S ::= x | Bz | zC | Dz | zE | Fz | zG | Hz | zI", "T ::= x | Tz | zU | Vz | zW | Xz | zY | Az | zB", "T ::= x | Cz | zD | Ez | zF | Gz | zH | Iz | zJ", "U ::= x | Uz | zV | Wz | zX | Yz | zA | Bz | zC", "U ::= x | Dz | zE | Fz | zG | Hz | zI | Jz | zK", "V ::= x | Vz | zW | Xz | zY | Az | zB | Cz | zD", "V ::= x | Ez | zF | Gz | zH | Iz | zJ | Kz | zL", "W ::= x | Wz | zX | Yz | zA | Bz | zC | Dz | zE", "W ::= x | Fz | zG | Hz | zI | Jz | zK | Lz | zM", "X ::= x | Xz | zY | Az | zB | Cz | zD | Ez | zF", "X ::= x | Gz | zH | Iz | zJ | Kz | zL | Mz | zN", "Y ::= x | Yz | zA | Bz | zC | Dz | zE | Fz | zG", "Y ::= x | Hz | zI | Jz | zK | Lz | zM | Nz | zO"};
    unknown seed = H;
    string word = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> rules = {"A ::= z | zAz | zBz | zCz | zDz | zEz | zFz | zGz", "A ::= z | zHz | zIz | zJz | zKz | zLz | zMz | zNz", "B ::= z | zBz | zCz | zDz | zEz | zFz | zGz | zHz", "B ::= z | zIz | zJz | zKz | zLz | zMz | zNz | zOz", "C ::= z | zCz | zDz | zEz | zFz | zGz | zHz | zIz", "C ::= z | zJz | zKz | zLz | zMz | zNz | zOz | zPz", "D ::= z | zDz | zEz | zFz | zGz | zHz | zIz | zJz", "D ::= z | zKz | zLz | zMz | zNz | zOz | zPz | zQz", "E ::= z | zEz | zFz | zGz | zHz | zIz | zJz | zKz", "E ::= z | zLz | zMz | zNz | zOz | zPz | zQz | zRz", "F ::= z | zFz | zGz | zHz | zIz | zJz | zKz | zLz", "F ::= z | zMz | zNz | zOz | zPz | zQz | zRz | zSz", "G ::= z | zGz | zHz | zIz | zJz | zKz | zLz | zMz", "G ::= z | zNz | zOz | zPz | zQz | zRz | zSz | zTz", "H ::= z | zHz | zIz | zJz | zKz | zLz | zMz | zNz", "H ::= z | zOz | zPz | zQz | zRz | zSz | zTz | zUz", "I ::= z | zIz | zJz | zKz | zLz | zMz | zNz | zOz", "I ::= z | zPz | zQz | zRz | zSz | zTz | zUz | zVz", "J ::= z | zJz | zKz | zLz | zMz | zNz | zOz | zPz", "J ::= z | zQz | zRz | zSz | zTz | zUz | zVz | zWz", "K ::= z | zKz | zLz | zMz | zNz | zOz | zPz | zQz", "K ::= z | zRz | zSz | zTz | zUz | zVz | zWz | zXz", "L ::= z | zLz | zMz | zNz | zOz | zPz | zQz | zRz", "L ::= z | zSz | zTz | zUz | zVz | zWz | zXz | zYz", "M ::= z | zMz | zNz | zOz | zPz | zQz | zRz | zSz", "M ::= z | zTz | zUz | zVz | zWz | zXz | zYz | zAz", "N ::= z | zNz | zOz | zPz | zQz | zRz | zSz | zTz", "N ::= z | zUz | zVz | zWz | zXz | zYz | zAz | zBz", "O ::= z | zOz | zPz | zQz | zRz | zSz | zTz | zUz", "O ::= z | zVz | zWz | zXz | zYz | zAz | zBz | zCz", "P ::= z | zPz | zQz | zRz | zSz | zTz | zUz | zVz", "P ::= z | zWz | zXz | zYz | zAz | zBz | zCz | zDz", "Q ::= z | zQz | zRz | zSz | zTz | zUz | zVz | zWz", "Q ::= z | zXz | zYz | zAz | zBz | zCz | zDz | zEz", "R ::= z | zRz | zSz | zTz | zUz | zVz | zWz | zXz", "R ::= z | zYz | zAz | zBz | zCz | zDz | zEz | zFz", "S ::= z | zSz | zTz | zUz | zVz | zWz | zXz | zYz", "S ::= z | zAz | zBz | zCz | zDz | zEz | zFz | zGz", "T ::= z | zTz | zUz | zVz | zWz | zXz | zYz | zAz", "T ::= z | zBz | zCz | zDz | zEz | zFz | zGz | zHz", "U ::= z | zUz | zVz | zWz | zXz | zYz | zAz | zBz", "U ::= z | zCz | zDz | zEz | zFz | zGz | zHz | zIz", "V ::= z | zVz | zWz | zXz | zYz | zAz | zBz | zCz", "V ::= z | zDz | zEz | zFz | zGz | zHz | zIz | zJz", "W ::= z | zWz | zXz | zYz | zAz | zBz | zCz | zDz", "W ::= z | zEz | zFz | zGz | zHz | zIz | zJz | zKz", "X ::= z | zXz | zYz | zAz | zBz | zCz | zDz | zEz", "X ::= z | zFz | zGz | zHz | zIz | zJz | zKz | zLz", "Y ::= z | zYz | zAz | zBz | zCz | zDz | zEz | zFz", "Y ::= z | zGz | zHz | zIz | zJz | zKz | zLz | zMz"};
    unknown seed = Y;
    string word = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> rules = {"A ::= z | AA | BB | CC | DD | EE | FF | GG | HH", "A ::= z | HH | II | JJ | KK | LL | MM | NN | OO", "B ::= z | BB | CC | DD | EE | FF | GG | HH | II", "B ::= z | II | JJ | KK | LL | MM | NN | OO | PP", "C ::= z | CC | DD | EE | FF | GG | HH | II | JJ", "C ::= z | JJ | KK | LL | MM | NN | OO | PP | QQ", "D ::= z | DD | EE | FF | GG | HH | II | JJ | KK", "D ::= z | KK | LL | MM | NN | OO | PP | QQ | RR", "E ::= z | EE | FF | GG | HH | II | JJ | KK | LL", "E ::= z | LL | MM | NN | OO | PP | QQ | RR | SS", "F ::= z | FF | GG | HH | II | JJ | KK | LL | MM", "F ::= z | MM | NN | OO | PP | QQ | RR | SS | TT", "G ::= z | GG | HH | II | JJ | KK | LL | MM | NN", "G ::= z | NN | OO | PP | QQ | RR | SS | TT | UU", "H ::= z | HH | II | JJ | KK | LL | MM | NN | OO", "H ::= z | OO | PP | QQ | RR | SS | TT | UU | VV", "I ::= z | II | JJ | KK | LL | MM | NN | OO | PP", "I ::= z | PP | QQ | RR | SS | TT | UU | VV | WW", "J ::= z | JJ | KK | LL | MM | NN | OO | PP | QQ", "J ::= z | QQ | RR | SS | TT | UU | VV | WW | XX", "K ::= z | KK | LL | MM | NN | OO | PP | QQ | RR", "K ::= z | RR | SS | TT | UU | VV | WW | XX | YY", "L ::= z | LL | MM | NN | OO | PP | QQ | RR | SS", "L ::= z | SS | TT | UU | VV | WW | XX | YY | AA", "M ::= z | MM | NN | OO | PP | QQ | RR | SS | TT", "M ::= z | TT | UU | VV | WW | XX | YY | AA | BB", "N ::= z | NN | OO | PP | QQ | RR | SS | TT | UU", "N ::= z | UU | VV | WW | XX | YY | AA | BB | CC", "O ::= z | OO | PP | QQ | RR | SS | TT | UU | VV", "O ::= z | VV | WW | XX | YY | AA | BB | CC | DD", "P ::= z | PP | QQ | RR | SS | TT | UU | VV | WW", "P ::= z | WW | XX | YY | AA | BB | CC | DD | EE", "Q ::= z | QQ | RR | SS | TT | UU | VV | WW | XX", "Q ::= z | XX | YY | AA | BB | CC | DD | EE | FF", "R ::= z | RR | SS | TT | UU | VV | WW | XX | YY", "R ::= z | YY | AA | BB | CC | DD | EE | FF | GG", "S ::= z | SS | TT | UU | VV | WW | XX | YY | AA", "S ::= z | AA | BB | CC | DD | EE | FF | GG | HH", "T ::= z | TT | UU | VV | WW | XX | YY | AA | BB", "T ::= z | BB | CC | DD | EE | FF | GG | HH | II", "U ::= z | UU | VV | WW | XX | YY | AA | BB | CC", "U ::= z | CC | DD | EE | FF | GG | HH | II | JJ", "V ::= z | VV | WW | XX | YY | AA | BB | CC | DD", "V ::= z | DD | EE | FF | GG | HH | II | JJ | KK", "W ::= z | WW | XX | YY | AA | BB | CC | DD | EE", "W ::= z | EE | FF | GG | HH | II | JJ | KK | LL", "X ::= z | XX | YY | AA | BB | CC | DD | EE | FF", "X ::= z | FF | GG | HH | II | JJ | KK | LL | MM", "Y ::= z | YY | AA | BB | CC | DD | EE | FF | GG", "Y ::= z | GG | HH | II | JJ | KK | LL | MM | NN"};
    unknown seed = P;
    string word = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> rules = {"A ::= QQ | AA | BB | CC | DD | EE | FF | GG | HH", "A ::= z | II | JJ | KK | LL | MM | NN | OO | PP", "B ::= RR | BB | CC | DD | EE | FF | GG | HH | II", "B ::= z | JJ | KK | LL | MM | NN | OO | PP | QQ", "C ::= SS | CC | DD | EE | FF | GG | HH | II | JJ", "C ::= z | KK | LL | MM | NN | OO | PP | QQ | RR", "D ::= TT | DD | EE | FF | GG | HH | II | JJ | KK", "D ::= z | LL | MM | NN | OO | PP | QQ | RR | SS", "E ::= UU | EE | FF | GG | HH | II | JJ | KK | LL", "E ::= z | MM | NN | OO | PP | QQ | RR | SS | TT", "F ::= VV | FF | GG | HH | II | JJ | KK | LL | MM", "F ::= z | NN | OO | PP | QQ | RR | SS | TT | UU", "G ::= WW | GG | HH | II | JJ | KK | LL | MM | NN", "G ::= z | OO | PP | QQ | RR | SS | TT | UU | VV", "H ::= XX | HH | II | JJ | KK | LL | MM | NN | OO", "H ::= z | PP | QQ | RR | SS | TT | UU | VV | WW", "I ::= YY | II | JJ | KK | LL | MM | NN | OO | PP", "I ::= z | QQ | RR | SS | TT | UU | VV | WW | XX", "J ::= AA | JJ | KK | LL | MM | NN | OO | PP | QQ", "J ::= z | RR | SS | TT | UU | VV | WW | XX | YY", "K ::= BB | KK | LL | MM | NN | OO | PP | QQ | RR", "K ::= z | SS | TT | UU | VV | WW | XX | YY | AA", "L ::= CC | LL | MM | NN | OO | PP | QQ | RR | SS", "L ::= z | TT | UU | VV | WW | XX | YY | AA | BB", "M ::= DD | MM | NN | OO | PP | QQ | RR | SS | TT", "M ::= z | UU | VV | WW | XX | YY | AA | BB | CC", "N ::= EE | NN | OO | PP | QQ | RR | SS | TT | UU", "N ::= z | VV | WW | XX | YY | AA | BB | CC | DD", "O ::= FF | OO | PP | QQ | RR | SS | TT | UU | VV", "O ::= z | WW | XX | YY | AA | BB | CC | DD | EE", "P ::= GG | PP | QQ | RR | SS | TT | UU | VV | WW", "P ::= z | XX | YY | AA | BB | CC | DD | EE | FF", "Q ::= HH | QQ | RR | SS | TT | UU | VV | WW | XX", "Q ::= z | YY | AA | BB | CC | DD | EE | FF | GG", "R ::= II | RR | SS | TT | UU | VV | WW | XX | YY", "R ::= z | AA | BB | CC | DD | EE | FF | GG | HH", "S ::= JJ | SS | TT | UU | VV | WW | XX | YY | AA", "S ::= z | BB | CC | DD | EE | FF | GG | HH | II", "T ::= KK | TT | UU | VV | WW | XX | YY | AA | BB", "T ::= z | CC | DD | EE | FF | GG | HH | II | JJ", "U ::= LL | UU | VV | WW | XX | YY | AA | BB | CC", "U ::= z | DD | EE | FF | GG | HH | II | JJ | KK", "V ::= MM | VV | WW | XX | YY | AA | BB | CC | DD", "V ::= z | EE | FF | GG | HH | II | JJ | KK | LL", "W ::= NN | WW | XX | YY | AA | BB | CC | DD | EE", "W ::= z | FF | GG | HH | II | JJ | KK | LL | MM", "X ::= OO | XX | YY | AA | BB | CC | DD | EE | FF", "X ::= z | GG | HH | II | JJ | KK | LL | MM | NN", "Y ::= PP | YY | AA | BB | CC | DD | EE | FF | GG", "Y ::= a | HH | II | JJ | KK | LL | MM | NN | OO"};
    unknown seed = E;
    string word = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzza";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> rules = {"A ::= QQ | AA | BB | CC | DD | EE | FF | GG | HH", "A ::= z | II | JJ | KK | LL | MM | NN | OO | PP", "B ::= RR | BB | CC | DD | EE | FF | GG | HH | II", "B ::= z | JJ | KK | LL | MM | NN | OO | PP | QQ", "C ::= SS | CC | DD | EE | FF | GG | HH | II | JJ", "C ::= z | KK | LL | MM | NN | OO | PP | QQ | RR", "D ::= TT | DD | EE | FF | GG | HH | II | JJ | KK", "D ::= z | LL | MM | NN | OO | PP | QQ | RR | SS", "E ::= UU | EE | FF | GG | HH | II | JJ | KK | LL", "E ::= z | MM | NN | OO | PP | QQ | RR | SS | TT", "F ::= VV | FF | GG | HH | II | JJ | KK | LL | MM", "F ::= z | NN | OO | PP | QQ | RR | SS | TT | UU", "G ::= WW | GG | HH | II | JJ | KK | LL | MM | NN", "G ::= z | OO | PP | QQ | RR | SS | TT | UU | VV", "H ::= XX | HH | II | JJ | KK | LL | MM | NN | OO", "H ::= z | PP | QQ | RR | SS | TT | UU | VV | WW", "I ::= YY | II | JJ | KK | LL | MM | NN | OO | PP", "I ::= z | QQ | RR | SS | TT | UU | VV | WW | XX", "J ::= AA | JJ | KK | LL | MM | NN | OO | PP | QQ", "J ::= z | RR | SS | TT | UU | VV | WW | XX | YY", "K ::= BB | KK | LL | MM | NN | OO | PP | QQ | RR", "K ::= z | SS | TT | UU | VV | WW | XX | YY | AA", "L ::= CC | LL | MM | NN | OO | PP | QQ | RR | SS", "L ::= z | TT | UU | VV | WW | XX | YY | AA | BB", "M ::= DD | MM | NN | OO | PP | QQ | RR | SS | TT", "M ::= z | UU | VV | WW | XX | YY | AA | BB | CC", "N ::= EE | NN | OO | PP | QQ | RR | SS | TT | UU", "N ::= z | VV | WW | XX | YY | AA | BB | CC | DD", "O ::= FF | OO | PP | QQ | RR | SS | TT | UU | VV", "O ::= z | WW | XX | YY | AA | BB | CC | DD | EE", "P ::= GG | PP | QQ | RR | SS | TT | UU | VV | WW", "P ::= z | XX | YY | AA | BB | CC | DD | EE | FF", "Q ::= HH | QQ | RR | SS | TT | UU | VV | WW | XX", "Q ::= z | YY | AA | BB | CC | DD | EE | FF | GG", "R ::= II | RR | SS | TT | UU | VV | WW | XX | YY", "R ::= z | AA | BB | CC | DD | EE | FF | GG | HH", "S ::= JJ | SS | TT | UU | VV | WW | XX | YY | AA", "S ::= z | BB | CC | DD | EE | FF | GG | HH | II", "T ::= KK | TT | UU | VV | WW | XX | YY | AA | BB", "T ::= z | CC | DD | EE | FF | GG | HH | II | JJ", "U ::= LL | UU | VV | WW | XX | YY | AA | BB | CC", "U ::= z | DD | EE | FF | GG | HH | II | JJ | KK", "V ::= MM | VV | WW | XX | YY | AA | BB | CC | DD", "V ::= z | EE | FF | GG | HH | II | JJ | KK | LL", "W ::= NN | WW | XX | YY | AA | BB | CC | DD | EE", "W ::= z | FF | GG | HH | II | JJ | KK | LL | MM", "X ::= OO | XX | YY | AA | BB | CC | DD | EE | FF", "X ::= z | GG | HH | II | JJ | KK | LL | MM | NN", "Y ::= zzzY | zYz | Yzzzzz | zzzzY | zz | Yzzzzz", "Z ::= Aa | aA | AAa | AaA | AAAAAaAA | AAAa | bY"};
    unknown seed = Z;
    string word = "bzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 860994;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> rules = {"A ::= xA | Ax | x | xBx", "B ::= xxB | Bxx | x | xCx", "C ::= xxxC | Cxxx | x | xx", "C ::= xxx | xxx | xxxx | xxxxxx | xxxxxxx", "C ::= xxxxxxxxx | xxxxxxxxxxx", "B ::= xxxxxxxxxxxxxxx", "C ::= xxxxxxxxxxxxxxxxxxD", "D ::= xD | x | Dxx | xxDxx", "D ::= xxxxx | xxxxxxx | xxxxxxxx | xxxxxxxx"};
    unknown seed = A;
    string word = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> rules = {"G ::= gG | Gg | g"};
    unknown seed = G;
    string word = "gggggggggggggggggggggggggggggg";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 536870912;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> rules = {"G ::= gG | Gg | g"};
    unknown seed = G;
    string word = "ggggggggggggggggggggggggggggggg";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> rules = {"A ::= xA | Ax | x | xBx", "B ::= xxB | Bxx | x | xCx", "C ::= xxxC | Cxxx | x | xx", "C ::= xxx | xxx | xxxx | xxxxxx | xxxxxxx", "C ::= xxxxxxxxx | xxxxxxxxxxx", "B ::= xxxxxxxxxxxxxxx", "C ::= xxxxxxxxxxxxxxxxxxD", "D ::= xD | x | Dxx | xxDxx", "D ::= xxxxx | xxxxxxx | xxxxxxxx | xxxxxxxx", "D ::= xxxxxxxx"};
    unknown seed = A;
    string word = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> rules = {"A ::= xA | Ax | x | xBx", "B ::= xxB | Bxx | x | xCx", "C ::= xxxC | Cxxx | x | xx", "C ::= xxx | xxx | xxxx | xxxxxx | xxxxxxx", "C ::= xxxxxxxxx | xxxxxxxxxxx", "B ::= xxxxxxxxxxxxxxx", "C ::= xxxxxxxxxxxxxxxxxxD", "D ::= xD | x | Dxx | xxDxx", "D ::= xxxxx | xxxxxxx | xxxxxxxx | xxxxxxxx", "D ::= xxxxxxxx", "A ::= xF", "F ::= xF | xxxx"};
    unknown seed = A;
    string word = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> rules = {"H ::= HQ | QH | h", "Q ::= QH | HQ | HH"};
    unknown seed = Q;
    string word = "hhhhhhhh";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 2096;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> rules = {"A ::= ABCDEFGHIJKLMNOPQR | UVWXYABCDEFGHIJKLM | a", "B ::= BCDEFGHIJKLMNOPQRS | VWXYABCDEFGHIJKLMN | b", "C ::= CDEFGHIJKLMNOPQRST | WXYABCDEFGHIJKLMNO | c", "D ::= DEFGHIJKLMNOPQRSTU | XYABCDEFGHIJKLMNOP | d", "E ::= EFGHIJKLMNOPQRSTUV | YABCDEFGHIJKLMNOPQ | e", "F ::= FGHIJKLMNOPQRSTUVW | ABCDEFGHIJKLMNOPQR | f", "G ::= GHIJKLMNOPQRSTUVWX | BCDEFGHIJKLMNOPQRS | g", "H ::= HIJKLMNOPQRSTUVWXY | CDEFGHIJKLMNOPQRST | h", "I ::= IJKLMNOPQRSTUVWXYA | DEFGHIJKLMNOPQRSTU | i", "J ::= JKLMNOPQRSTUVWXYAB | EFGHIJKLMNOPQRSTUV | j", "K ::= KLMNOPQRSTUVWXYABC | FGHIJKLMNOPQRSTUVW | k", "L ::= LMNOPQRSTUVWXYABCD | GHIJKLMNOPQRSTUVWX | l", "M ::= MNOPQRSTUVWXYABCDE | HIJKLMNOPQRSTUVWXY | m", "N ::= NOPQRSTUVWXYABCDEF | IJKLMNOPQRSTUVWXYA | n", "O ::= OPQRSTUVWXYABCDEFG | JKLMNOPQRSTUVWXYAB | o", "P ::= PQRSTUVWXYABCDEFGH | KLMNOPQRSTUVWXYABC | p", "Q ::= QRSTUVWXYABCDEFGHI | LMNOPQRSTUVWXYABCD | q", "R ::= RSTUVWXYABCDEFGHIJ | MNOPQRSTUVWXYABCDE | r", "S ::= STUVWXYABCDEFGHIJK | NOPQRSTUVWXYABCDEF | s", "T ::= TUVWXYABCDEFGHIJKL | OPQRSTUVWXYABCDEFG | t", "U ::= UVWXYABCDEFGHIJKLM | PQRSTUVWXYABCDEFGH | u", "V ::= VWXYABCDEFGHIJKLMN | QRSTUVWXYABCDEFGHI | v", "W ::= WXYABCDEFGHIJKLMNO | RSTUVWXYABCDEFGHIJ | w", "X ::= XYABCDEFGHIJKLMNOP | STUVWXYABCDEFGHIJK | x", "Y ::= YABCDEFGHIJKLMNOPQ | TUVWXYABCDEFGHIJKL | y", "A ::= a | b | c | d | e | f | g | h | i | j | k", "B ::= b | c | d | e | f | g | h | i | j | k | l", "C ::= c | d | e | f | g | h | i | j | k | l | m", "D ::= d | e | f | g | h | i | j | k | l | m | n", "E ::= e | f | g | h | i | j | k | l | m | n | o", "F ::= f | g | h | i | j | k | l | m | n | o | p", "G ::= g | h | i | j | k | l | m | n | o | p | q", "H ::= h | i | j | k | l | m | n | o | p | q | r", "I ::= i | j | k | l | m | n | o | p | q | r | s", "J ::= j | k | l | m | n | o | p | q | r | s | t", "K ::= k | l | m | n | o | p | q | r | s | t | u", "L ::= l | m | n | o | p | q | r | s | t | u | v", "M ::= m | n | o | p | q | r | s | t | u | v | w", "N ::= n | o | p | q | r | s | t | u | v | w | x", "O ::= o | p | q | r | s | t | u | v | w | x | y", "P ::= p | q | r | s | t | u | v | w | x | y | a", "Q ::= q | r | s | t | u | v | w | x | y | a | b", "R ::= r | s | t | u | v | w | x | y | a | b | c", "S ::= s | t | u | v | w | x | y | a | b | c | d", "T ::= t | u | v | w | x | y | a | b | c | d | e", "U ::= u | v | w | x | y | a | b | c | d | e | f", "V ::= v | w | x | y | a | b | c | d | e | f | g", "W ::= w | x | y | a | b | c | d | e | f | g | h", "X ::= x | y | a | b | c | d | e | f | g | h | i", "Y ::= y | a | b | c | d | e | f | g | h | i | j"};
    unknown seed = Q;
    string word = "rxnopqrstuvwxyabcdefabcdefghijklmni";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 524288;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> rules = {"A ::= xByCz | FyG | MN | XXX | XYX | xZ", "B ::= abcCCC | abcdeB | abB", "B ::= Bcde | abcde | ab | cde", "C ::= de | ef | def | d | f", "C ::= Babcde | abcdeC | abCCC | abc", "F ::= aF | bF | cF | dF | eF | xF | xG", "G ::= Fz | Gz | Cz | Bz | abcdeG | Gabcde | abcde", "M ::= xMy", "N ::= yNz", "M ::= GG", "N ::= GG", "X ::= a | b | c | d | e | XyX | xX | Xz", "X ::= XXcXX", "Z ::= XXX"};
    unknown seed = A;
    string word = "xabcdeabcdeyabcdeabcdez";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 77;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> rules = {"I ::= ABCD", "A ::= aA | a", "B ::= Bb | b", "C ::= CcC | c", "D ::= dD | d"};
    unknown seed = I;
    string word = "aaaabbbbcccddddddddd";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> rules = {"J ::= JJ | aa | ab | ba | bb | ababbK", "K ::= JJ"};
    unknown seed = J;
    string word = "ababbababbabbbabbbbbaaab";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 59061;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> rules = {"I ::= CI | CC", "C ::= a | b | c | d | e | f | g | h", "C ::= i | j | k | l | m | n | q | r", "C ::= s | t | u | v | w | x | y", "F ::= TzIoTzIp", "T ::= int | char | bool", "N ::= one | two | three", "E ::= IoEp | zN | FzE | IzE"};
    unknown seed = E;
    string word = "boolzfibointznnpzvarzfiboztwop";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> rules = {"I ::= CI | CC", "C ::= a | b | c | d | e | f | g | h", "C ::= i | j | k | l | m | n | q | r", "C ::= s | t | u | v | w | x | y", "F ::= TzIoTzIp", "T ::= int | char | bool", "N ::= one | two | three", "E ::= IoEp | zN | FzE | IzE"};
    unknown seed = E;
    string word = "threezcharzcharocharzcharpzzthree";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> rules = {"W ::= qAqBq", "A ::= rMrNr | RMRNR", "B ::= AA | RmrNr", "M ::= MmM | m", "N ::= nN | n", "R ::= r | r"};
    unknown seed = W;
    string word = "qrmmmmmmmrnnnnnnnrqrmrnrrmrnrq";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 3645;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> rules = {"U ::= u"};
    unknown seed = U;
    string word = "u";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> rules = {"P ::= k"};
    unknown seed = P;
    string word = "p";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
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
    vector<string> rules = {"P ::= p", "Q ::= PP | uQ | u | pQ"};
    unknown seed = Q;
    string word = "up";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> rules = {"A ::= a", "B ::= a", "D ::= a"};
    unknown seed = C;
    string word = "a";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
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
    vector<string> rules = {"A ::= a | DF | CG | ED", "A ::= CE | GB | EE | AB", "B ::= b | GD | DF | EC", "B ::= EA | AG | GF | BB", "C ::= c | AC | BB | EC", "C ::= AG | AC | DC | GC", "D ::= d | CD | GA | FE", "D ::= EB | EE | GG | AB", "E ::= e | DG | FG | FB", "E ::= DD | EG | AD | GC", "F ::= f | DB | EA | DE", "F ::= FE | CF | CB | FG", "G ::= g | DD | BD | FA", "G ::= EA | EC | DF | GA"};
    unknown seed = E;
    string word = "fcgfbgb";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> rules = {"A ::= a | CR | UC | QM | MI | OI | IK | OP", "A ::= DG | MA | VP | EB | HE | CG | MD | CE", "B ::= b | JU | VB | GD | CQ | OJ | IK | IJ", "B ::= EK | IH | AK | IJ | QF | KH | QM | FV", "C ::= c | KV | EB | AM | VT | OD | MJ | NN", "C ::= JT | GV | IE | SK | LU | KM | BS | MJ", "D ::= d | SN | CO | OB | TP | AF | HF | GG", "D ::= AV | GJ | EC | EG | PR | NQ | EU | IK", "E ::= e | NB | BT | JD | IH | JM | PE | NM", "E ::= MD | JJ | BD | EQ | MR | IR | QV | SR", "F ::= f | NT | MT | MD | SG | SS | JI | AT", "F ::= FS | SK | IH | MC | DR | IE | TC | LM", "G ::= g | CM | MS | QV | ND | KG | AC | UC", "G ::= CI | QN | RD | UJ | QA | CU | UQ | OK", "H ::= h | CQ | II | EL | IN | EA | TJ | FC", "H ::= KT | BQ | OT | UM | QL | VB | QR | LA", "I ::= i | UR | VA | QB | KJ | CN | AC | BH", "I ::= CM | HS | IQ | GL | HP | CD | CK | BU", "J ::= j | KJ | KP | FF | HO | SS | IO | FV", "J ::= FU | IV | QB | FL | GH | AD | UK | BO", "K ::= k | DH | BC | NA | UN | SP | CF | LU", "K ::= TR | CP | BF | EN | MU | FD | BU | FG", "L ::= l | CH | HL | AM | FD | LI | OE | FB", "L ::= ST | CL | DA | HH | EF | IQ | AB | RP", "M ::= m | PC | OV | EO | DB | ME | CK | DV", "M ::= BT | EE | JK | OP | IS | SV | PS | JD", "N ::= n | UM | IO | JL | SN | BM | GA | NQ", "N ::= VG | KE | NB | TF | JL | ER | JI | BD", "O ::= o | BV | EI | GH | EV | EB | OL | BA", "O ::= LO | RV | PQ | HK | AF | MA | IR | PG", "P ::= p | HO | IJ | GH | QN | JS | JA | UB", "P ::= VI | SO | IC | EM | MJ | UE | TS | CD", "Q ::= q | HP | MT | FU | TR | JE | OP | FO", "Q ::= QO | KI | AI | DG | OU | MU | BU | GH", "R ::= r | GU | QP | PH | TO | DV | TA | QF", "R ::= BF | NL | OL | UR | MJ | VC | VP | SI", "S ::= s | JB | CM | EP | MD | HI | SV | UC", "S ::= JN | GR | HF | RU | AB | PA | RT | QM", "T ::= t | TC | QR | TQ | UB | NK | JP | JM", "T ::= AC | JK | AL | IO | RV | EH | KI | VO", "U ::= u | OQ | AJ | PE | HJ | IA | GL | ND", "U ::= OU | CV | TP | IC | LH | KN | HJ | VP", "V ::= v | PR | UF | QA | VM | QI | BJ | TV", "V ::= JE | BK | QG | KC | FG | QQ | AA | QM"};
    unknown seed = G;
    string word = "roapkupurqmerdhqiseplkjarocmjlvlqij";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> rules = {"A ::= a | WM | KQ | PU | LE | WJ | BR | WI", "A ::= RW | HQ | PE | ET | TV | SF | EK | TV", "B ::= b | FO | EB | QK | EP | BQ | WC | MM", "B ::= QC | KH | FP | HO | IO | HD | DF | LK", "C ::= c | OE | OX | LE | WW | SN | PT | RL", "C ::= RT | WI | VS | QA | TW | LA | BM | SA", "D ::= d | XK | RD | OF | DF | SM | KF | VM", "D ::= GD | HG | IL | TG | HS | TE | TQ | OA", "E ::= e | XX | RK | EU | UI | UD | GM | EP", "E ::= UN | WL | OF | OK | SK | DO | OB | AP", "F ::= f | IQ | ES | QC | HE | AB | OX | KO", "F ::= AF | LN | CS | XQ | XX | NI | UD | UT", "G ::= g | MN | OC | QI | US | BO | CG | QQ", "G ::= ND | WU | KE | HR | QH | FH | BP | SC", "H ::= h | ND | OR | AH | SS | NK | DI | DQ", "H ::= LX | XB | VX | BS | AX | LK | WE | QX", "I ::= i | VL | CS | VT | HA | LX | MC | VK", "I ::= SA | XL | QS | GE | RP | UN | QR | LO", "J ::= j | JI | MF | KW | KV | SL | TA | AT", "J ::= PN | PM | EV | JM | JD | BL | ST | OE", "K ::= k | LV | FK | BB | NR | NE | RK | CM", "K ::= RD | BJ | DG | KN | BR | GV | SW | TQ", "L ::= l | FU | AP | SV | KG | ER | OD | NM", "L ::= PE | AD | SV | VV | IC | AH | FC | DA", "M ::= m | XV | NX | AH | TB | IN | OA | MP", "M ::= FI | LP | UU | TS | FI | IE | WQ | VB", "N ::= n | EJ | GJ | PG | UT | VX | SF | TV", "N ::= JD | JQ | PG | OU | VP | MJ | AF | ET", "O ::= o | HD | NK | HN | CC | EM | CN | KP", "O ::= UP | DF | RL | BB | UN | FN | QX | BC", "P ::= p | SP | EH | PJ | EA | GR | AB | BM", "P ::= WL | AA | DN | OR | RP | IV | WU | MS", "Q ::= q | LO | OO | JG | JI | TT | EV | IS", "Q ::= SF | XI | HX | BN | PC | BB | RG | HL", "R ::= r | VS | VX | CX | RX | LN | NG | DF", "R ::= DB | GO | NH | RM | MS | VW | HG | QP", "S ::= s | XS | VH | AV | VC | LT | GS | CI", "S ::= LJ | SM | UJ | QH | HP | WW | HN | VX", "T ::= t | EX | XC | DJ | NR | AP | WJ | BN", "T ::= JJ | MQ | NT | EN | HR | IA | NB | NP", "U ::= u | RU | VQ | HL | HQ | CT | BW | DT", "U ::= UA | ML | HE | UP | PJ | UM | FP | KL", "V ::= v | XU | DU | UB | PE | KN | XC | TI", "V ::= CO | IK | JT | LE | XX | LH | FR | EV", "W ::= w | FS | WV | FX | AS | OG | TG | WW", "W ::= DT | TE | MK | JE | BA | FF | TO | LH", "X ::= x | PI | FB | BI | VO | RD | OQ | LU", "X ::= FR | TI | VV | QC | UE | AQ | AW | UG"};
    unknown seed = O;
    string word = "wregqgvrxmndiqgrsisjujrliuwmixvjibq";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 3477025;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> rules = {"A ::= a | EC | TH | VC | QP | IG | PC | AR", "A ::= AC | JD | SQ | TF | MP | OJ | QU | DG", "B ::= b | SM | IK | CT | UD | DB | PA | AT", "B ::= QI | GB | CQ | BP | IH | HT | DM | VB", "C ::= c | LE | UL | CQ | DI | IA | JN | NE", "C ::= LD | RA | SI | SS | JL | QR | LA | AO", "D ::= d | PH | JL | EU | LF | CB | UF | CL", "D ::= QG | DV | RA | TJ | PS | IR | BI | SR", "E ::= e | BR | QJ | PF | TI | SO | PK | NR", "E ::= EM | CJ | HP | RP | RA | EC | SE | QM", "F ::= f | SA | CE | EM | MC | BO | TT | VQ", "F ::= GI | EN | TV | CI | OT | OK | KT | DV", "G ::= g | MB | OG | GP | GL | LI | UJ | DH", "G ::= ED | BS | EC | HF | UL | CD | JQ | FA", "H ::= h | QR | ND | TM | CJ | GO | AO | VD", "H ::= PQ | SL | MR | MJ | VB | DF | FP | CF", "I ::= i | MJ | IV | KU | QK | SN | GG | SU", "I ::= UB | FI | FL | QT | RD | QE | ED | AJ", "J ::= j | BA | DI | BT | KK | OO | FB | JS", "J ::= CG | ON | VH | OO | IN | GG | GC | LV", "K ::= k | GH | TD | HN | VI | RP | GI | GV", "K ::= TR | RA | LP | IF | UF | NJ | CT | IV", "L ::= l | UU | ER | SC | DG | AI | AE | NE", "L ::= VB | FC | RA | FU | JK | JH | TC | KM", "M ::= m | RE | SG | FB | KE | LV | VI | CL", "M ::= EN | LF | OI | QK | NF | RA | JI | DA", "N ::= n | VD | LD | MI | HR | ML | FO | BU", "N ::= HO | MQ | NC | FE | RC | VG | CE | OS", "O ::= o | LU | SD | NN | KC | EP | CI | AQ", "O ::= CO | TB | PP | DU | AE | HL | JN | QQ", "P ::= p | TL | QS | AN | RJ | ST | LS | RK", "P ::= SB | UK | PM | ND | DD | VN | FB | GB", "Q ::= q | PF | US | NT | SB | GN | MO | FM", "Q ::= PQ | BT | DR | QT | EQ | OH | SD | VH", "R ::= r | FQ | JK | JD | KV | OB | LG | SV", "R ::= CS | KJ | TS | KP | PQ | VU | TS | KB", "S ::= s | PO | NL | OP | NC | AB | QK | KV", "S ::= JG | JV | LD | LC | FL | NG | TT | DM", "T ::= t | KH | RE | RD | EC | PB | PT | AG", "T ::= GN | MI | PD | MD | FN | AU | AJ | GV", "U ::= u | TD | HO | HF | GL | RU | TR | AG", "U ::= BK | OT | DR | GO | KD | MT | AU | OE", "V ::= v | ON | LJ | LN | BU | LA | BI | RO", "V ::= MS | IN | UR | QG | LJ | VM | JE | IT"};
    unknown seed = E;
    string word = "cqlgcavahedvsofvqai";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 497;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> rules = {"A ::= a | FO | KH | MO | LH | EK | NM | MB", "A ::= KD | EE | MD | MO | JJ | BD | KO | JM", "B ::= b | MA | HN | DD | MO | CI | EM | JN", "B ::= GN | GH | LE | DA | NK | KL | JI | OE", "C ::= c | LN | OD | BK | EA | BG | BD | BB", "C ::= FG | FM | IF | GO | GF | MM | NG | LG", "D ::= d | OF | BO | AK | OK | IH | IE | CH", "D ::= EK | NC | NB | DK | GD | GG | MA | FI", "E ::= e | CJ | HJ | KI | AE | GO | FB | GN", "E ::= DH | JE | HI | KE | GH | MN | HO | JO", "F ::= f | OH | KB | AI | NN | HA | GM | GC", "F ::= MJ | NI | FC | DO | EK | KF | FF | HH", "G ::= g | FK | MH | AO | JH | CD | OD | GF", "G ::= GO | JF | IB | EA | OK | OH | FJ | MF", "H ::= h | DN | JH | HL | CF | NJ | CL | LC", "H ::= AI | NI | JB | OL | ND | IF | DO | OC", "I ::= i | IO | EJ | JN | JJ | NO | DB | AF", "I ::= MM | NO | IB | FD | GB | AF | GI | LM", "J ::= j | MB | JF | BL | GD | DB | FM | BF", "J ::= AI | OE | MH | LF | JD | LB | ON | KD", "K ::= k | CN | DH | GC | AG | LJ | MO | JE", "K ::= LF | HM | HO | IE | DK | EB | KJ | CO", "L ::= l | CK | BO | GF | JB | GD | LN | MH", "L ::= GM | JM | DO | JK | HN | JF | EL | EO", "M ::= m | OA | AK | AE | JA | GM | HG | HC", "M ::= BB | HL | GH | MK | BH | JO | IE | AE", "N ::= n | LK | IL | EF | JC | HD | HK | AN", "N ::= AM | OO | CM | OG | EE | HJ | IN | DJ", "O ::= o | CB | CO | HK | DL | KA | LK | MK", "O ::= LD | KB | MK | NC | EA | EE | GM | EA"};
    unknown seed = I;
    string word = "bjacjddmdkbdjingbcm";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 15329990;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> rules = {"A ::= a | IM | AD | OH | LD | GL | GG | HK", "A ::= OL | ED | CE | II | MK | IL | OI | BO", "B ::= b | AF | CG | CL | FE | LM | DK | DF", "B ::= CN | MJ | EO | AC | GL | DM | FN | AL", "C ::= c | BN | CK | FG | MI | KC | GF | CJ", "C ::= NB | HN | HI | EA | EL | HO | AI | BO", "D ::= d | MN | FI | IF | BF | KG | CN | JB", "D ::= BE | OJ | AN | LF | FI | LJ | FO | GN", "E ::= e | KD | ON | BN | EE | DN | NK | OL", "E ::= NH | AL | DC | EF | OA | IM | FJ | GD", "F ::= f | HC | NB | CA | MB | JD | ON | OA", "F ::= HE | JJ | JA | EI | IH | HM | EB | OF", "G ::= g | IJ | FM | MB | BI | HC | LN | FF", "G ::= BJ | MO | NE | IB | OA | LN | IL | MC", "H ::= h | NK | AM | AB | DH | IE | HB | GO", "H ::= GM | NJ | KN | HC | LD | MM | FI | EN", "I ::= i | FB | BB | MF | LL | OJ | IE | FH", "I ::= FH | ID | JD | LD | BL | DD | LI | JI", "J ::= j | LC | HE | JL | CO | HO | GO | CD", "J ::= GN | GC | II | ON | BC | CE | LL | GE", "K ::= k | DK | JO | CO | DA | EG | BA | NO", "K ::= NK | IE | LN | HF | AC | FA | EC | HN", "L ::= l | KD | DC | ID | EC | AK | JJ | BG", "L ::= OD | KD | LC | DL | OA | IA | JE | NF", "M ::= m | BH | JL | JN | EN | HL | OM | DN", "M ::= LG | DM | KM | KL | CC | HO | NF | GN", "N ::= n | KF | HE | FF | LL | OO | IH | GJ", "N ::= LF | JD | HI | NO | JD | MG | LL | KA", "O ::= o | CN | JG | JL | GH | ME | DO | NG", "O ::= BK | JK | JJ | CD | GG | AG | CA | CF"};
    unknown seed = M;
    string word = "jooicknhiiokgjba";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 214916;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> rules = {"A ::= a | CF | BB | EC", "A ::= DC | BC | CB", "B ::= b | BC | AC | FC", "B ::= BC | DB | FF", "C ::= c | FC | FE | CE", "C ::= AE | EA | CE", "D ::= d | FF | DD | AE", "D ::= CF | FE | AF", "E ::= e | EA | DE | CF", "E ::= AF | EA | EA", "F ::= f | CD | CE | BF", "F ::= CE | CD | FB"};
    unknown seed = D;
    string word = "fdefdccfbcca";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 1724;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> rules = {"A ::= a | BB | AB", "A ::= DC | AA", "B ::= b | CA | BB", "B ::= BA | CA", "C ::= c | BC | DD", "C ::= AD | AA", "D ::= d | BA | CA", "D ::= DB | AA"};
    unknown seed = C;
    string word = "acabdcbb";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 304;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> rules = {"A ::= a | IC | BH | BA | HD | KB | LB", "A ::= IK | CD | KJ | AH | DJ | KG", "B ::= b | IL | IA | FL | KK | LA | EL", "B ::= JA | LA | BH | KE | KK | BI", "C ::= c | DL | FH | KD | EI | GL | KH", "C ::= LL | IF | IJ | EE | FE | FG", "D ::= d | BL | AJ | FI | AL | LF | KH", "D ::= KD | AE | GB | HA | KC | GL", "E ::= e | EB | FB | FF | KK | GJ | GE", "E ::= GF | DG | JG | BL | IH | DB", "F ::= f | KA | HH | DH | FB | HJ | HG", "F ::= FC | BC | AE | HF | BF | HE", "G ::= g | KD | BD | LD | IG | EB | LA", "G ::= KL | DB | JJ | HH | AE | KD", "H ::= h | CB | AJ | GH | DJ | GL | DD", "H ::= KE | DF | KI | GL | GK | GA", "I ::= i | BA | IA | IK | JF | KD | AG", "I ::= EI | HI | FL | CL | AK | BB", "J ::= j | IA | JF | FH | GD | EC | HF", "J ::= DJ | HJ | GL | DB | BD | AL", "K ::= k | DK | CH | CA | AG | IB | GI", "K ::= BH | BA | KJ | LK | KJ | HB", "L ::= l | HI | JL | LF | EJ | DJ | DD", "L ::= EL | LI | AB | LC | DB | FJ"};
    unknown seed = H;
    string word = "bdjldclcbdlikegkhdkj";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 519129364;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> rules = {"A ::= a | NB | JM | EF | MA | LD | HC | EI", "A ::= AI | AB | DB | ND | KE | CL | EE", "B ::= b | LE | KL | HB | JE | NI | HG | CM", "B ::= NH | FJ | CG | JK | IJ | AI | GD", "C ::= c | IM | DF | IL | LC | MM | DL | HD", "C ::= DF | HM | EC | KH | JJ | FA | MN", "D ::= d | EK | HG | LE | EG | NI | LD | KG", "D ::= BG | FH | BD | JC | NN | AF | FE", "E ::= e | NF | FN | DG | IA | BL | DK | ML", "E ::= AA | MH | MK | HM | HD | CG | NL", "F ::= f | FI | LF | JK | EG | KH | AN | EF", "F ::= CI | EG | CJ | EM | GE | CM | IG", "G ::= g | MI | LL | AH | EG | KH | GJ | BK", "G ::= MK | KM | MM | EI | JF | GD | KK", "H ::= h | EM | DC | MB | FA | DN | EF | KA", "H ::= LI | CD | CM | LC | ED | IJ | EF", "I ::= i | ML | MH | FM | DK | FM | NJ | KL", "I ::= BL | MG | KA | BG | BN | GN | JC", "J ::= j | AD | DI | GC | CL | JC | LB | LG", "J ::= DM | JI | ID | CH | BI | AL | CE", "K ::= k | FH | IF | DA | MC | MM | FK | KH", "K ::= AJ | LE | CB | FC | HH | NB | BE", "L ::= l | CB | EN | IE | NB | MF | FF | GA", "L ::= CK | HL | FI | DH | FD | AL | LE", "M ::= m | BH | GH | CF | KD | NK | EJ | NJ", "M ::= MI | GI | DM | MB | KH | LC | HJ", "N ::= n | AL | GH | HJ | NK | GA | DH | AC", "N ::= EF | DA | GC | KG | KE | GD | EJ"};
    unknown seed = N;
    string word = "nicdaadkdhhamdbddgmehhjheecj";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> rules = {"A ::= a | JD | EB | CI | CD | EG", "A ::= GH | CF | CC | IA | IC", "B ::= b | CC | DA | AH | CD | DC", "B ::= ED | AB | GD | BI | AB", "C ::= c | DC | DA | IC | GA | FD", "C ::= FG | CD | IC | AE | AC", "D ::= d | AC | IA | GA | GG | JE", "D ::= BH | CD | CF | IA | GE", "E ::= e | GE | CI | BH | AH | FG", "E ::= AI | FI | DC | FC | GG", "F ::= f | II | JC | AD | DJ | BD", "F ::= JH | BE | CB | FG | HB", "G ::= g | GB | JI | FA | EI | AE", "G ::= BI | IE | DH | JA | BE", "H ::= h | AH | DA | GB | AB | FE", "H ::= JC | AB | IB | HB | HF", "I ::= i | AB | ED | CA | JE | GC", "I ::= ID | HJ | CG | DI | BD", "J ::= j | BB | II | JG | AE | BA", "J ::= IB | FF | CG | JD | HA"};
    unknown seed = C;
    string word = "ahgjgiaibfieeigdacfj";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 2381974;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> rules = {"A ::= a | RH | YM | BA | ZP | KQ | UD", "B ::= b | YY | SZ | EY | TI | VV | WQ", "C ::= c | MD | OV | CE | BH | EB | GK", "D ::= d | TG | JK | RG | NV | UX | BJ", "E ::= e | UU | NO | GY | FQ | GU | IF", "F ::= f | GW | ZV | FN | YL | BF | XG", "G ::= g | IA | UK | GE | AR | KI | IH", "H ::= h | GM | IR | IL | VP | GC | IW", "I ::= i | PA | AY | RC | RE | QS | SV", "J ::= j | YP | JY | NL | YZ | OO | II", "K ::= k | OO | LH | OF | QH | UI | TF", "L ::= l | PP | TY | MP | SL | FM | CR", "M ::= m | DN | VI | TI | IF | VD | GX", "N ::= n | HX | FW | TC | AH | EN | AZ", "O ::= o | NR | CA | QX | CR | KT | PE", "P ::= p | XD | IZ | FY | BC | YW | KU", "Q ::= q | ND | HY | BF | UW | PT | KP", "R ::= r | VC | JX | TW | GK | JR | YQ", "S ::= s | JG | FP | QS | KS | CP | QK", "T ::= t | QA | LC | CN | EC | FV | FR", "U ::= u | RW | MI | MZ | HZ | CJ | KG", "V ::= v | OT | VX | HY | JC | FF | CI", "W ::= w | XU | LI | RO | LG | OV | ZW", "X ::= x | GH | PW | RM | CT | MG | JC", "Y ::= y | RP | KB | PM | TY | TA | YJ", "Z ::= z | PQ | IS | ZK | GM | ME | UC"};
    unknown seed = O;
    string word = "elqzcsunofeaaheapaaknxqvsdvgpylnsof";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> rules = {"A ::= a | GT | YH | FF | WJ | RE | QP | ZJ | TG", "B ::= b | NW | WG | SN | EH | JY | FU | BE | YR", "C ::= c | QL | ZJ | ZX | EU | NV | AF | UC | YI", "C ::= FP | WZ | FO | YX", "D ::= d | LX | EG | SW | NM | GX | RB | RH | VV", "D ::= WA | LV | LT | WU", "E ::= e | NF | LF | DC | VJ | NB | BH | AG | LT", "E ::= BU | RC | SY | FZ", "F ::= f | ZZ | ZZ | IN | ZI | GB | DY | OI | FN", "F ::= GX | AG | LG | EL", "G ::= g | PR | KH | CG | EX | FT | UA | BI | WE", "G ::= VP | OB | DX | OG", "H ::= h | GB | XP | KW | GZ | GA | KV | BS | QG", "H ::= FA | LW | KH | HJ", "I ::= i | SU | LB | PF | JD | HR | RG | AY | HM", "I ::= IJ | HP | IT | XT", "J ::= j | ZM | AX | IQ | YY | BZ | ZO | OW | IM", "J ::= JR | BT | KN | VM", "K ::= k | TU | DG | SK | RD | PV | NH | XL | CT", "K ::= BS | KY | NM | DL", "L ::= l | CT | XJ | IP | OU | XL | ZM | PQ | AI", "L ::= CS | FL | DF | JM", "M ::= m | NG | KV | TZ | RA | IW | TC | QW | GD", "M ::= LR | VY | GN | SJ", "N ::= n | NZ | RY | FO | VE | PD | LR | SP | MJ", "N ::= AW | YJ | EG | LS", "O ::= o | KW | XE | RY | PR | PX | BZ | SQ | PR", "O ::= OX | JH | DE | YJ", "P ::= p | HI | QQ | QR | SI | LA | AQ | XE | BT", "P ::= AA | TH | MH | JI", "Q ::= q | NT | DF | DX | CQ | WU | ZA | ST | MB", "Q ::= QK | ZN | XL | TK", "R ::= r | YF | BM | GR | AE | LJ | UQ | SW | YB", "R ::= DB | HC | LI | XS", "S ::= s | AI | UM | RI | OP | DE | XI | VX | UI", "S ::= CX | EO | KN | HK", "T ::= t | OH | FD | UH | NL | PJ | BV | IP | KH", "T ::= PD | TY | PY | LX", "U ::= u | MB | FB | QW | JT | YE | YU | WH | RP", "U ::= OC | HP | VK | RE", "V ::= v | OT | NW | KQ | AC | DF | WC | FB | EV", "V ::= SN | KC | PQ | VC", "W ::= w | WP | KE | PD | KP | CT | TZ | JG | VE", "W ::= HS | ZW | GQ | JF", "X ::= x | RY | PM | OP | TZ | RT | IL | QR | XC", "X ::= HV | FG | ZM | TV", "Y ::= y | GU | QN | FZ | YL | YM | XU | QQ | VZ", "Y ::= KQ | VG | CE | SL", "Z ::= z | JI | ZI | BO | IY | XK | WX | QJ | JT", "Z ::= RT | VD | RR | QX"};
    unknown seed = D;
    string word = "amidrxtuiyccyrpmjjbibgakbejmlgbiomv";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> rules = {"A ::= a | UL | TA | FN | WG | GY | EX | FG | FF", "B ::= b | BT | GW | PX | EP | FS | QX | FL | YX", "C ::= c | EL | ZH | TC | PT | RQ | OV | TD | MS", "C ::= VU | WI | QE | EI", "D ::= d | HN | YN | YL | FV | BX | PC | QL | ZK", "D ::= JW | CH | YQ | PA", "E ::= e | IH | PQ | XT | NU | KE | XS | XM | TY", "E ::= VJ | CP | AX | RE", "F ::= f | FB | KS | WW | BU | MV | IR | IA | CS", "F ::= FY | EZ | YT | DC", "G ::= g | NP | YT | JE | HO | XJ | KJ | YR | TD", "G ::= GV | YP | YZ | IH", "H ::= h | NI | YM | JU | PK | IY | AJ | TS | WC", "H ::= QI | PH | OR | WR", "I ::= i | BW | EB | FV | MQ | CE | YU | ZZ | IT", "I ::= KB | EJ | HS | VS", "J ::= j | GP | RC | RN | DG | HP | HE | CW | WP", "J ::= SU | NA | QH | TN", "K ::= k | EX | OA | HW | AK | PQ | VY | SS | OP", "K ::= PG | VY | TC | BQ", "L ::= l | LW | CC | MR | FI | IN | IF | KW | OG", "L ::= EO | OD | FN | MD", "M ::= m | XX | DG | BR | WI | ZF | EW | PZ | VH", "M ::= YC | SF | BX | RK", "N ::= n | QB | VJ | UW | TZ | NQ | EB | AK | AE", "N ::= BT | RP | TR | SZ", "O ::= o | GH | BG | TP | KH | FT | PC | ZD | PY", "O ::= HS | TG | OI | IT", "P ::= p | NM | SM | YC | VP | IZ | IQ | BX | TS", "P ::= EN | PK | AY | VS", "Q ::= q | DS | PV | OV | AN | KD | CM | OY | SS", "Q ::= AB | AI | XJ | TM", "R ::= r | XV | WH | ST | EF | VM | PS | WT | RD", "R ::= GX | AL | FJ | IU", "S ::= s | IJ | VR | MD | FJ | IS | GP | UJ | WE", "S ::= FU | QG | ZA | PK", "T ::= t | IC | JB | GP | CV | IX | QG | VE | GF", "T ::= DG | OB | ME | RE", "U ::= u | KQ | RK | BP | VQ | KK | MG | VH | BA", "U ::= RQ | IB | WY | VN", "V ::= v | EH | SM | LC | SI | MP | RE | XR | DJ", "V ::= SH | IO | NW | SA", "W ::= w | JO | ED | YF | WE | BA | AZ | BL | VU", "W ::= KH | UP | DL | GY", "X ::= x | HR | AB | PP | WJ | HT | VK | DO | IZ", "X ::= OX | LA | QW | NU", "Y ::= y | ZC | RY | PU | LO | HC | ZJ | LZ | MK", "Y ::= UA | TR | LA | PN", "Z ::= z | PI | UB | WZ | TG | BD | PZ | VF | XX", "Z ::= RE | LS | PD | EI"};
    unknown seed = Y;
    string word = "pfokcofedzryeoszzjpdpoxfnwuepflcxcl";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 166;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> rules = {"A ::= a | DB | CO | LG | PH | MV | CL | IW | VC", "B ::= b | VF | WY | RG | VJ | HL | YY | SW | JQ", "C ::= c | QX | II | NU | CH | IL | RV | GD | TQ", "C ::= YU | TK | KF | NC", "D ::= d | NY | GI | AM | CK | GH | VF | NH | GV", "D ::= UF | YS | PX | OA", "E ::= e | YC | QF | RF | SQ | YV | JH | MY | SI", "E ::= KN | LF | DU | JS", "F ::= f | SH | SH | ZO | YE | RJ | UH | FY | LP", "F ::= KB | UI | AJ | GM", "G ::= g | TN | PI | GY | ZL | FG | RQ | AP | KF", "G ::= KA | XM | WH | LX", "H ::= h | UD | ZR | YL | MB | XW | SU | UW | OS", "H ::= TT | SX | SV | PH", "I ::= i | XM | AR | EI | JE | NE | XK | RJ | FW", "I ::= IO | WO | LJ | KR", "J ::= j | YL | DK | BN | BU | YY | WY | CU | RG", "J ::= KU | RL | TF | EG", "K ::= k | WE | XK | II | LP | TL | XH | XG | FV", "K ::= CF | BD | EF | TZ", "L ::= l | PM | FU | MI | VY | UX | YP | TQ | ND", "L ::= QU | RC | ED | VA", "M ::= m | JZ | UN | MS | SO | KR | CX | NY | JQ", "M ::= DS | MX | FZ | YR", "N ::= n | LT | JX | UD | CC | NK | ZI | AY | ZR", "N ::= RF | ED | KU | FZ", "O ::= o | TY | IV | QY | HK | LD | KP | RU | LA", "O ::= JK | FL | LC | QL", "P ::= p | CU | UM | OV | NP | EI | RK | AJ | XY", "P ::= KH | IU | ON | LI", "Q ::= q | GC | TH | QH | OZ | BX | TX | NY | DS", "Q ::= KH | PA | CA | JL", "R ::= r | CN | QP | CG | MZ | MO | DI | BF | CX", "R ::= EJ | CL | NW | YO", "S ::= s | EI | KI | US | HL | SE | FR | IO | EO", "S ::= XM | KZ | MR | MP", "T ::= t | GE | RE | NO | BZ | SJ | XK | IS | RK", "T ::= HB | NI | UN | BM", "U ::= u | BO | KI | FM | VX | CC | WE | JX | TV", "U ::= OX | RC | LY | OC", "V ::= v | PH | XW | QK | FG | QP | OS | VF | QX", "V ::= UK | PL | MH | VW", "W ::= w | LR | WL | PA | XH | ML | CN | XK | QA", "W ::= HB | JL | NK | BK", "X ::= x | IY | MH | IR | NO | NI | DX | KL | BS", "X ::= WS | CN | RH | DV", "Y ::= y | PF | PN | LF | RY | FR | FB | DO | BI", "Y ::= HZ | HU | TX | AZ", "Z ::= z | CV | UT | MG | JB | MJ | VE | PE | PI", "Z ::= RG | DP | MH | KC"};
    unknown seed = D;
    string word = "icwxwlkulhfvnbimmizvtkcafnnxbabvdvc";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> rules = {"A ::= a | KW | PB | NV | SF | AP | KB | ZN | TI", "B ::= b | HY | DP | MQ | OZ | PM | WF | MW | ZR", "C ::= c | HQ | EM | VX | BI | BX | HJ | VL | JE", "C ::= DF | NI | CJ | PT | JV | MU", "D ::= d | GI | VR | GB | RJ | YT | RY | DA | BF", "D ::= EP | NL | SS | OG | XK | YT", "E ::= e | SU | FL | IX | AH | OG | AI | XD | HR", "E ::= BL | KZ | BE | ZV | NE | LO", "F ::= f | DW | WS | PO | XB | KT | VU | HR | YH", "F ::= LG | NY | PU | DT | NN | WZ", "G ::= g | UQ | UF | VN | BC | JO | JE | VP | OC", "G ::= RM | PM | KN | IZ | YQ | UC", "H ::= h | BD | QV | SE | BI | IY | TD | TR | XM", "H ::= BQ | CX | JH | IG | DM | BA", "I ::= i | JW | EP | ES | IX | QP | DQ | DO | FV", "I ::= FJ | SA | LE | ZT | RK | QT", "J ::= j | IQ | EC | DC | TK | DE | GG | GX | IM", "J ::= JX | JX | EE | IK | YW | BL", "K ::= k | QG | JF | WU | ZB | RZ | OX | VH | UQ", "K ::= XJ | WU | QE | TP | WZ | EW", "L ::= l | RB | CT | RM | ZN | DE | GT | YJ | BU", "L ::= SD | FH | TQ | ZU | LG | DD", "M ::= m | HR | UL | JZ | GZ | HL | YM | TR | VV", "M ::= VJ | PY | RI | CM | RG | VW", "N ::= n | WX | IW | QS | XH | YT | XK | JQ | AG", "N ::= WM | VT | LM | UG | ZP | JQ", "O ::= o | FI | ZT | WD | CP | BD | PI | VQ | MF", "O ::= UJ | QT | HL | HZ | TU | XM", "P ::= p | RX | NF | YB | SD | HE | VY | YT | WV", "P ::= AA | PW | PK | RQ | ON | ZU", "Q ::= q | ZG | RI | KJ | CN | PV | IE | EN | QD", "Q ::= TE | SY | EO | PL | CD | HT", "R ::= r | NP | OG | UF | FM | AN | WE | NY | CJ", "R ::= EU | BA | RZ | LC | BA | DN", "S ::= s | ST | RW | HP | AK | XZ | CU | OY | HI", "S ::= VN | KD | KF | EZ | GV | SJ", "T ::= t | QL | TK | FP | VT | CL | HO | LR | MJ", "T ::= QE | BU | ID | OO | PD | NQ", "U ::= u | VO | YZ | EO | BE | NE | FH | TC | RY", "U ::= XO | OA | LE | YF | PP | OM", "V ::= v | BT | KT | CP | FV | DT | WJ | LO | DD", "V ::= ZV | SR | DC | AT | BT | GZ", "W ::= w | OW | QM | XB | IA | KD | OB | MD | ZE", "W ::= SH | ZC | BH | HX | SQ | AE", "X ::= x | BX | ZY | EK | KA | ER | CL | OO | NK", "X ::= BL | YI | YU | KN | US | WF", "Y ::= y | QO | EC | QX | BY | MF | AM | LY | YE", "Y ::= BU | MW | TD | UZ | DY | YF", "Z ::= z | OE | OZ | GR | YB | DH | LI | NM | TW", "Z ::= FV | HS | EG | PR | UZ | HZ"};
    unknown seed = M;
    string word = "ebgrwhasojvuhfwexrvjfelnestmdqdclor";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 1230142;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> rules = {"A ::= a | LU | SJ | BA | JG | HF | DG | DU | UW", "B ::= b | NK | EX | KZ | BB | JI | RP | MJ | XW", "C ::= c | GU | EE | XW | HJ | UX | IA | UQ | RV", "C ::= HY | AO | TH | CR | FW | PN", "D ::= d | YI | UB | UC | LY | GK | YD | YH | WK", "D ::= QH | QJ | TD | NN | NK | CE", "E ::= e | LH | IW | OO | FK | JU | YS | BT | ER", "E ::= CR | WL | BR | ZK | QX | NI", "F ::= f | NF | RY | XP | WZ | SR | BX | TT | RM", "F ::= RT | XA | WF | FD | QW | FJ", "G ::= g | PP | IC | RB | FG | TH | JZ | NG | OK", "G ::= ZW | OP | QO | UT | JG | QK", "H ::= h | KT | VZ | LJ | ZM | GY | FQ | OF | IJ", "H ::= QS | KC | UD | CN | BG | JR", "I ::= i | VC | CX | HI | XB | UC | IC | KG | ZF", "I ::= VW | BH | GJ | AH | PZ | DU", "J ::= j | FF | UT | TT | OJ | CI | TU | ER | XH", "J ::= VQ | KX | CJ | YI | RW | HW", "K ::= k | UG | OF | MV | SQ | CL | XG | RD | ZL", "K ::= ZM | TL | KX | CX | YU | UV", "L ::= l | MB | FF | EK | FV | NC | WK | QC | UY", "L ::= XU | TH | PJ | GB | VD | LG", "M ::= m | GX | NB | PY | VU | DV | UW | TJ | UK", "M ::= CY | KM | HN | UK | WA | HR", "N ::= n | GB | EG | YQ | UN | TZ | OI | FZ | GS", "N ::= ME | SV | XL | HI | TQ | VT", "O ::= o | GX | EU | DH | PS | PL | TO | DK | BA", "O ::= MF | PM | FV | AM | BD | TX", "P ::= p | EA | WO | VP | FT | ZX | PA | UF | WT", "P ::= DY | QM | TD | WZ | WM | UA", "Q ::= q | UD | WB | CX | TH | LM | PN | PB | SD", "Q ::= LO | UZ | KT | KO | EK | RD", "R ::= r | AJ | FQ | EL | TM | ES | PD | PM | ON", "R ::= ET | QF | OS | XV | WW | FJ", "S ::= s | XZ | EB | GO | YL | XE | BJ | XK | OL", "S ::= UV | CM | MV | KX | KF | QJ", "T ::= t | AK | JF | DK | EE | EH | BC | XJ | UV", "T ::= ZX | OF | VD | OP | LN | QO", "U ::= u | QF | HW | BP | NP | RP | LT | TW | AU", "U ::= YY | KE | PD | GJ | GW | FK", "V ::= v | OX | OX | XW | MN | DF | PY | TQ | FP", "V ::= NM | VZ | UH | LG | UI | MM", "W ::= w | XW | QE | CG | FJ | MQ | QT | FK | BN", "W ::= GL | BC | XZ | ZY | RP | MG", "X ::= x | CQ | HI | BP | MW | VU | LW | TX | HD", "X ::= UG | YN | ZB | FU | KE | TW", "Y ::= y | TU | JS | YF | NU | FV | YN | UL | UD", "Y ::= AT | JW | CD | IJ | OX | BG", "Z ::= z | UY | XM | MR | MP | XF | AA | XQ | XG", "Z ::= CB | XO | SN | FR | KB | LQ"};
    unknown seed = N;
    string word = "ocipdlmmuozbtwcbqetugkuvaozbmodwbht";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 126164447;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> rules = {"A ::= a | RT | HO | AG | IF | LW | WJ | SO | MQ", "B ::= b | UO | LQ | QZ | OZ | JX | UZ | QC | GH", "C ::= c | TZ | JZ | RK | IQ | TL | UH | ZN | CS", "C ::= VH | AJ | XJ | WM | RT | ZI", "D ::= d | RD | KL | OQ | HG | XA | CE | HL | LC", "D ::= SD | HF | AH | SI | NR | XR", "E ::= e | TA | OL | NO | OM | KD | YH | ST | LZ", "E ::= BG | SU | XK | UW | ZV | HX", "F ::= f | PS | AP | XG | QY | UR | XE | OM | KA", "F ::= UR | ZS | PY | UY | BT | GW", "G ::= g | TB | KP | BJ | KV | FY | UL | JA | KV", "G ::= GZ | WS | MG | JM | FK | JH", "H ::= h | ZT | WP | AQ | XL | IJ | UR | XW | DH", "H ::= IX | BI | ST | XY | IS | ZQ", "I ::= i | JQ | AS | PS | BH | JI | ZN | EE | NV", "I ::= SS | KT | EZ | VY | KA | MI", "J ::= j | HS | OY | SP | OF | GS | MT | AH | GZ", "J ::= YI | CJ | AB | WN | KR | VW", "K ::= k | GK | YV | QJ | XM | EG | IV | KX | IW", "K ::= QC | XI | UD | RM | EU | HY", "L ::= l | IW | EL | OY | TC | LF | NU | SU | HE", "L ::= DN | QT | XV | BH | HQ | TQ", "M ::= m | RB | SJ | KE | LN | OO | OJ | QE | JC", "M ::= ZX | XJ | TF | CI | CW | RT", "N ::= n | DB | ZL | HG | SC | WJ | LM | XZ | AB", "N ::= XQ | JK | BQ | VR | GU | VT", "O ::= o | PM | QV | HG | YC | ER | KO | MO | XF", "O ::= HL | OL | UA | EC | YG | PW", "P ::= p | QM | QS | HZ | SR | XF | LL | TG | DU", "P ::= DI | KT | RE | OF | QI | XQ", "Q ::= q | JJ | SP | EN | SF | KB | UD | GM | DL", "Q ::= HU | MM | AK | CI | UN | YS", "R ::= r | DC | HE | MJ | OI | AI | QA | CN | CU", "R ::= MO | FZ | AK | WT | LE | IB", "S ::= s | DA | MH | GV | FX | QR | YC | LT | BZ", "S ::= PB | BL | EA | XP | TM | JP", "T ::= t | XM | IN | ZL | WQ | RY | EI | RZ | RI", "T ::= YQ | AA | RW | ZI | IZ | SI", "U ::= u | OQ | CF | WI | IU | EF | ZV | RV | DI", "U ::= WN | DU | PI | PB | LO | RS", "V ::= v | UX | RR | HK | GY | CK | FV | HP | RH", "V ::= UC | TR | PK | DX | YZ | FU", "W ::= w | GN | WK | WS | BR | GX | CY | TN | IT", "W ::= ZP | NJ | ZP | TZ | UV | LU", "X ::= x | IA | SJ | GM | OA | IJ | RE | XO | FQ", "X ::= WQ | TE | WR | LE | QE | XT", "Y ::= y | TV | KX | CN | KG | AT | MN | VK | GG", "Y ::= UJ | IN | TY | VG | XP | ZC", "Z ::= z | QT | QQ | IQ | GB | IK | MY | YN | KC", "Z ::= GF | RE | RY | UR | LA | KI"};
    unknown seed = G;
    string word = "rqbwfleuajrojgwkhjpnezlldqgyrnlslvk";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> rules = {"A ::= a | LW | EP | CK | WY | IE | WV | MY | GV", "B ::= b | OR | AU | MX | TX | EZ | GG | PU | PT", "C ::= c | KY | LG | XR | WR | MT | ZN | BC | DA", "C ::= WS | HJ | IS | IS | GC | FI | RL | JK", "D ::= d | QN | BE | XW | LS | JQ | HS | SW | BU", "D ::= FH | FM | NQ | EB | SE | DT | XE | HD", "E ::= e | CH | WE | DO | ML | YD | LM | UC | VZ", "E ::= KX | MB | TZ | SS | LS | FC | QG | TU", "F ::= f | SF | YI | OO | VD | XZ | OR | DT | BG", "F ::= PW | MG | XO | EJ | VJ | NH | IW | KB", "G ::= g | DA | RF | RS | ZV | QD | KC | ZK | CI", "G ::= PB | LN | UQ | FR | ZH | HK | SQ | YE", "H ::= h | CQ | TD | PY | IH | DQ | IW | OP | RL", "H ::= QD | JV | JZ | UG | JW | MV | AU | HX", "I ::= i | IW | PE | YD | QJ | BC | YZ | DZ | YV", "I ::= TQ | UV | PI | CM | MR | RN | WR | BI", "J ::= j | AZ | BL | VW | PS | ER | QB | SV | XM", "J ::= GP | ZT | XT | YP | FR | TT | DW | NT", "K ::= k | KT | FY | JK | FA | KI | OH | CB | BF", "K ::= EP | IB | YQ | GU | NN | LZ | OA | TA", "L ::= l | RN | UH | LQ | NL | DO | LL | JS | XN", "L ::= II | LV | YU | TU | LW | RR | FK | ID", "M ::= m | VT | WA | YM | BX | QI | ZH | SB | ZU", "M ::= XS | QQ | AR | XB | JQ | DV | CI | AA", "N ::= n | XM | MW | FO | UR | UK | LD | IS | AA", "N ::= CE | DO | DH | JV | AX | II | OU | IF", "O ::= o | RV | XY | NF | PG | OG | QM | WB | UT", "O ::= NZ | EH | MO | ZA | GI | ME | RN | OW", "P ::= p | OE | DW | SA | QU | ZI | QX | HL | RE", "P ::= NG | XA | OF | IJ | QY | KJ | MM | EG", "Q ::= q | LA | ZO | LH | LP | VQ | EM | AF | JB", "Q ::= KN | PK | GL | KT | CB | JS | OJ | CU", "R ::= r | FT | DE | QJ | CJ | CK | TX | DK | WC", "R ::= RJ | EV | VI | WT | PE | AN | AX | SI", "S ::= s | NY | KL | NX | BN | VK | GU | LI | VE", "S ::= MH | XB | IC | WQ | WO | MH | FK | PK", "T ::= t | JY | YC | ZF | BB | KC | SY | UM | CP", "T ::= IX | LZ | CZ | ZH | RR | VH | SJ | RB", "U ::= u | UZ | EB | BR | UN | GY | TY | WD | QS", "U ::= MC | EJ | ZC | BF | DN | UQ | QL | LB", "V ::= v | WW | ZO | UA | OK | OO | QU | WD | HK", "V ::= YK | KV | IH | RZ | KZ | XG | ZK | NG", "W ::= w | FM | YJ | PF | IV | NY | XE | PV | YO", "W ::= RW | LZ | EM | DS | LB | FD | QR | IY", "X ::= x | GF | WF | QJ | KU | UC | UI | IR | RE", "X ::= TY | XA | YO | ZW | GX | QX | SJ | IU", "Y ::= y | AC | BU | BV | JP | QL | JB | AC | YY", "Y ::= JT | BB | LK | VJ | CX | TG | EF | PZ", "Z ::= z | KE | WQ | YR | UT | MI | OX | TF | WW", "Z ::= RK | JU | GG | VW | CG | TA | PR | YL"};
    unknown seed = F;
    string word = "dyszbcctrmuuscwjtxwaovjbudsxhmdswmy";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 681448;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> rules = {"A ::= a | WT | AF | MW | TK | ZY | CH | VH | QB", "B ::= b | RI | KK | MZ | OW | AR | EI | XF | PV", "C ::= c | TQ | NU | ZL | QQ | HV | YX | FD | SI", "C ::= VS | GL | ZM | KG | FK | SS | RK | HS", "D ::= d | LD | CI | XF | GN | OZ | XL | CR | JY", "D ::= AA | BT | EH | FP | GL | CC | NF | KP", "E ::= e | QG | SW | KQ | BE | EI | YA | OR | DE", "E ::= GB | QQ | JX | PP | AQ | YX | JU | TM", "F ::= f | OT | BB | ML | ZK | LK | FL | FT | BR", "F ::= ER | XO | QW | PJ | AF | TA | GN | CG", "G ::= g | ZW | FQ | KV | ZM | UT | UQ | EH | YG", "G ::= DS | EE | BQ | TS | KA | KQ | AE | KJ", "H ::= h | JH | CL | NA | HP | UF | AM | KO | IG", "H ::= RO | WB | WZ | FF | LF | HD | KC | ZK", "I ::= i | YG | HP | ZO | YN | HW | PI | JE | VY", "I ::= OS | VI | PR | IT | IF | SJ | HP | HY", "J ::= j | DR | GI | HY | KV | NE | HN | KG | WL", "J ::= MC | JA | OD | OR | XU | YX | BH | DI", "K ::= k | XB | TI | FV | FS | CG | ZM | IN | HV", "K ::= CV | LJ | FZ | BI | DP | FB | ZM | XP", "L ::= l | RY | BM | IV | AF | NS | BA | TP | YX", "L ::= KW | HJ | GO | KE | EK | FU | MS | WW", "M ::= m | RK | WZ | LN | PZ | KX | VI | YM | HO", "M ::= UL | JV | WE | BY | TE | KV | UN | QG", "N ::= n | MP | FD | AJ | KD | HW | WA | ED | ZB", "N ::= JG | KX | KM | JP | ZN | ZX | KB | HJ", "O ::= o | YX | JM | AH | KC | FL | KZ | RS | ZR", "O ::= MB | BA | BG | SG | GR | PX | XF | II", "P ::= p | SS | HP | GZ | XU | IQ | CY | EU | VV", "P ::= FE | YD | FU | GQ | LP | AQ | TZ | JY", "Q ::= q | PA | ZS | HH | TA | BQ | EY | OF | JO", "Q ::= RA | FN | SX | MA | WT | ST | HN | SK", "R ::= r | PV | PU | ZX | TU | PX | SM | VE | HC", "R ::= OS | AF | BJ | OF | WQ | HW | PD | FH", "S ::= s | HK | LN | YY | GM | IG | LZ | PB | GU", "S ::= TC | JX | BH | UP | SK | KA | UH | HO", "T ::= t | PZ | TT | TG | QT | FF | BK | ZI | OB", "T ::= PN | MS | EL | TB | DW | FY | PV | JW", "U ::= u | ED | BW | RQ | TK | PD | KI | WH | ZA", "U ::= YJ | TV | JE | AB | RA | WT | KD | TJ", "V ::= v | ZB | LA | GH | VY | DC | RK | TL | SE", "V ::= XY | MB | RE | TA | MQ | RA | CB | RK", "W ::= w | QF | FW | FD | OG | NU | IK | UG | AU", "W ::= RY | PA | CL | QU | WQ | CY | ZQ | ZF", "X ::= x | MT | VZ | BK | QQ | TF | JR | XD | HT", "X ::= IP | YM | LF | RW | VC | OE | AE | KZ", "Y ::= y | EC | AC | MY | BZ | YA | JK | AR | JU", "Y ::= DV | GR | ZU | UX | DX | QR | WI | ZS", "Z ::= z | SP | ZX | DF | SK | TB | XU | XS | BG", "Z ::= VX | WB | EB | CV | LR | JW | DV | IA"};
    unknown seed = V;
    string word = "lvrkqphpdkymvhapmdtmcbgfvxolzplauta";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> rules = {"A ::= a | NI | EO | XD | XZ | VZ | QF | KG | KV", "B ::= b | GC | XF | LG | XS | YK | YB | NW | WG", "C ::= c | AK | US | JM | IY | NL | YG | VZ | WK", "C ::= VC | IU | WG | TJ | JQ | VY | VG | DS", "D ::= d | MT | GV | EO | TT | IS | AC | OD | IS", "D ::= AQ | KB | WU | SE | PT | KO | ES | WD", "E ::= e | TH | AP | VT | PU | AP | HG | BY | GU", "E ::= DV | KV | PL | DE | CF | TY | CY | KM", "F ::= f | RS | EG | RP | SV | QE | IQ | HU | AD", "F ::= YK | ZV | MT | SB | BP | HX | DP | NW", "G ::= g | OL | TW | BJ | KS | MB | AN | PA | KO", "G ::= CT | UY | LK | WP | CR | OT | KW | KH", "H ::= h | XC | HN | BC | EG | OM | BM | ZX | PW", "H ::= FK | WP | NU | JD | JC | OI | RH | PF", "I ::= i | IF | FL | QZ | VG | UO | SD | IJ | LD", "I ::= OX | TO | AK | ME | UO | VC | JY | PZ", "J ::= j | PY | UT | CV | ZP | MV | MS | GU | PR", "J ::= BR | EJ | PX | LB | TF | CL | PV | DU", "K ::= k | ZI | PQ | HB | CR | UV | SY | XI | BX", "K ::= PM | TX | KZ | NP | EO | RX | HO | NQ", "L ::= l | CC | RX | VS | JU | YP | JK | DE | EK", "L ::= AW | CP | JU | TE | ZJ | DY | NY | LS", "M ::= m | WM | SK | OP | QL | TY | OT | CR | BY", "M ::= UC | MR | QW | EQ | TF | OQ | VE | MT", "N ::= n | DI | VR | QB | WN | ZK | IQ | GH | FO", "N ::= JH | IS | JF | ZC | IM | XX | FY | SX", "O ::= o | LU | UZ | NC | AM | BH | GB | ZM | VZ", "O ::= VH | KE | RW | QJ | EG | BX | OO | KZ", "P ::= p | ZN | WD | ZE | LB | UQ | VA | RG | UX", "P ::= PI | CK | QA | SF | DA | JC | SX | VW", "Q ::= q | KF | HJ | TU | YR | SR | TG | BO | VD", "Q ::= OB | LV | XZ | LX | PE | WK | UX | AG", "R ::= r | QS | SQ | NS | GI | JO | NK | RQ | OH", "R ::= GA | ED | YT | XE | IH | JI | AW | QU", "S ::= s | QN | UV | ZG | QX | NT | AW | PG | CA", "S ::= MH | LV | AT | TY | AZ | HD | DF | EF", "T ::= t | MB | JW | JH | IT | YF | NT | RD | FF", "T ::= GQ | LG | TP | UA | AS | YQ | FO | TV", "U ::= u | US | CS | BT | XI | BP | HS | VJ | DM", "U ::= SQ | AZ | CF | EZ | FX | TD | YT | GS", "V ::= v | OS | PG | FP | BL | OV | BN | NB | JM", "V ::= EO | GY | XS | BR | JG | NE | BP | ZF", "W ::= w | AG | BE | TB | GO | DZ | OP | JF | YE", "W ::= AO | BT | JO | CI | PZ | LA | UW | NL", "X ::= x | UM | WT | EP | VW | KV | IJ | KD | UW", "X ::= NC | OD | IR | XF | NA | CQ | UD | HK", "Y ::= y | JU | FQ | PW | TU | RI | CP | CI | RW", "Y ::= HM | LR | HK | NF | PK | DO | IC | QH", "Z ::= z | HM | HD | OY | EM | MM | XB | VQ | SY", "Z ::= NA | RR | QO | IP | JO | FN | GD | LT"};
    unknown seed = Z;
    string word = "thkyiflrggribzonsocrwqnmckldvzieoin";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 10910185;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> rules = {"A ::= a | NI | EO | XD | XZ | VZ | QF | KG | KV", "B ::= b | GC | XF | LG | XS | YK | YB | NW | WG", "C ::= c | AK | US | JM | IY | NL | YG | VZ | WK", "C ::= VC | IU | WG | TJ | JQ | VY | VG | DS", "D ::= d | MT | GV | EO | TT | IS | AC | OD | IS", "D ::= AQ | KB | WU | SE | PT | KO | ES | WD", "E ::= e | TH | AP | VT | PU | AP | HG | BY | GU", "E ::= DV | KV | PL | DE | CF | TY | CY | KM", "F ::= f | RS | EG | RP | SV | QE | IQ | HU | AD", "F ::= YK | ZV | MT | SB | BP | HX | DP | NW", "G ::= g | OL | TW | BJ | KS | MB | AN | PA | KO", "G ::= CT | UY | LK | WP | CR | OT | KW | KH", "H ::= h | XC | HN | BC | EG | OM | BM | ZX | PW", "H ::= FK | WP | NU | JD | JC | OI | RH | PF", "I ::= i | IF | FL | QZ | VG | UO | SD | IJ | LD", "I ::= OX | TO | AK | ME | UO | VC | JY | PZ", "J ::= j | PY | UT | CV | ZP | MV | MS | GU | PR", "J ::= BR | EJ | PX | LB | TF | CL | PV | DU", "K ::= k | ZI | PQ | HB | CR | UV | SY | XI | BX", "K ::= PM | TX | KZ | NP | EO | RX | HO | NQ", "L ::= l | CC | RX | VS | JU | YP | JK | DE | EK", "L ::= AW | CP | JU | TE | ZJ | DY | NY | LS", "M ::= m | WM | SK | OP | QL | TY | OT | CR | BY", "M ::= UC | MR | QW | EQ | TF | OQ | VE | MT", "N ::= n | DI | VR | QB | WN | ZK | IQ | GH | FO", "N ::= JH | IS | JF | ZC | IM | XX | FY | SX", "O ::= o | LU | UZ | NC | AM | BH | GB | ZM | VZ", "O ::= VH | KE | RW | QJ | EG | BX | OO | KZ", "P ::= p | ZN | WD | ZE | LB | UQ | VA | RG | UX", "P ::= PI | CK | QA | SF | DA | JC | SX | VW", "Q ::= q | KF | HJ | TU | YR | SR | TG | BO | VD", "Q ::= OB | LV | XZ | LX | PE | WK | UX | AG", "R ::= r | QS | SQ | NS | GI | JO | NK | RQ | OH", "R ::= GA | ED | YT | XE | IH | JI | AW | QU", "S ::= s | QN | UV | ZG | QX | NT | AW | PG | CA", "S ::= MH | LV | AT | TY | AZ | HD | DF | EF", "T ::= t | MB | JW | JH | IT | YF | NT | RD | FF", "T ::= GQ | LG | TP | UA | AS | YQ | FO | TV", "U ::= u | US | CS | BT | XI | BP | HS | VJ | DM", "U ::= SQ | AZ | CF | EZ | FX | TD | YT | GS", "V ::= v | OS | PG | FP | BL | OV | BN | NB | JM", "V ::= EO | GY | XS | BR | JG | NE | BP | ZF", "W ::= w | AG | BE | TB | GO | DZ | OP | JF | YE", "W ::= AO | BT | JO | CI | PZ | LA | UW | NL", "X ::= x | UM | WT | EP | VW | KV | IJ | KD | UW", "X ::= NC | OD | IR | XF | NA | CQ | UD | HK", "Y ::= y | JU | FQ | PW | TU | RI | CP | CI | RW", "Y ::= HM | LR | HK | NF | PK | DO | IC | QH", "Z ::= z | thkyiflrggribzonsocrwqnmckldvzieoin", "Z ::= asdfASDFAESdfsdSDGSDGRESsdsdSDFSDdfglksmSDFA"};
    unknown seed = P;
    string word = "thkyiflrggribzonsocrwqnmckldvzieoin";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 380087;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> rules = {"Z ::= zZ | Zz | zZ | Zz | zZ", "Z ::= zZ | Zz | zZ | Zz | Zz", "Z ::= z"};
    unknown seed = Z;
    string word = "zzzzzzzzzz";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> rules = {"A ::= BB | x", "B ::= CC", "C ::= AA"};
    unknown seed = B;
    string word = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 6545;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> rules = {"A ::= aBaCa | ZZ", "B ::= aAaCa | ZZ", "C ::= aBaAa | ZZ", "Z ::= a | aZ"};
    unknown seed = A;
    string word = "aaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 272443;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> rules = {"A ::= a | NI | EO | XD | XZ | VZ | QF | KG | KV", "B ::= b | GC | XF | LG | XS | YK | YB | NW | WG", "C ::= c | AK | US | JM | IY | NL | YG | VZ | WK", "C ::= VC | IU | WG | TJ | JQ | VY | VG | DS", "D ::= d | MT | GV | EO | TT | IS | AC | OD | IS", "D ::= AQ | KB | WU | SE | PT | KO | ES | WD", "E ::= e | TH | AP | VT | PU | AP | HG | BY | GU", "E ::= DV | KV | PL | DE | CF | TY | CY | KM", "F ::= f | RS | EG | RP | SV | QE | IQ | HU | AD", "F ::= YK | ZV | MT | SB | BP | HX | DP | NW", "G ::= g | OL | TW | BJ | KS | MB | AN | PA | KO", "G ::= CT | UY | LK | WP | CR | OT | KW | KH", "H ::= h | XC | HN | BC | EG | OM | BM | ZX | PW", "H ::= FK | WP | NU | JD | JC | OI | RH | PF", "I ::= i | IF | FL | QZ | VG | UO | SD | IJ | LD", "I ::= OX | TO | AK | ME | UO | VC | JY | PZ", "J ::= j | PY | UT | CV | ZP | MV | MS | GU | PR", "J ::= BR | EJ | PX | LB | TF | CL | PV | DU", "K ::= k | ZI | PQ | HB | CR | UV | SY | XI | BX", "K ::= PM | TX | KZ | NP | EO | RX | HO | NQ", "L ::= l | CC | RX | VS | JU | YP | JK | DE | EK", "L ::= AW | CP | JU | TE | ZJ | DY | NY | LS", "M ::= m | WM | SK | OP | QL | TY | OT | CR | BY", "M ::= UC | MR | QW | EQ | TF | OQ | VE | MT", "N ::= n | DI | VR | QB | WN | ZK | IQ | GH | FO", "N ::= JH | IS | JF | ZC | IM | XX | FY | SX", "O ::= o | LU | UZ | NC | AM | BH | GB | ZM | VZ", "O ::= VH | KE | RW | QJ | EG | BX | OO | KZ", "P ::= p | ZN | WD | ZE | LB | UQ | VA | RG | UX", "P ::= PI | CK | QA | SF | DA | JC | SX | VW", "Q ::= q | KF | HJ | TU | YR | SR | TG | BO | VD", "Q ::= OB | LV | XZ | LX | PE | WK | UX | AG", "R ::= r | QS | SQ | NS | GI | JO | NK | RQ | OH", "R ::= GA | ED | YT | XE | IH | JI | AW | QU", "S ::= s | QN | UV | ZG | QX | NT | AW | PG | CA", "S ::= MH | LV | AT | TY | AZ | HD | DF | EF", "T ::= t | MB | JW | JH | IT | YF | NT | RD | FF", "T ::= GQ | LG | TP | UA | AS | YQ | FO | TV", "U ::= u | US | CS | BT | XI | BP | HS | VJ | DM", "U ::= SQ | AZ | CF | EZ | FX | TD | YT | GS", "V ::= v | OS | PG | FP | BL | OV | BN | NB | JM", "V ::= EO | GY | XS | BR | JG | NE | BP | ZF", "W ::= w | AG | BE | TB | GO | DZ | OP | JF | YE", "W ::= AO | BT | JO | CI | PZ | LA | UW | NL", "X ::= x | UM | WT | EP | VW | KV | IJ | KD | UW", "X ::= NC | OD | IR | XF | NA | CQ | UD | HK", "Y ::= y | JU | FQ | PW | TU | RI | CP | CI | RW", "Y ::= HM | LR | HK | NF | PK | DO | IC | QH", "Z ::= z | hkyiflrggribzonsocrwqnmckldvzieoin", "P ::= thkyiflrggribzonsocrwqnmckldvzieoin | tZ"};
    unknown seed = P;
    string word = "thkyiflrggribzonsocrwqnmckldvzieoin";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 380089;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> rules = {"I ::= iA | iB | iC | iD | iCD | iCC | iAAA", "A ::= lA | Al | l", "B ::= llB | llB | ll", "C ::= llllC | llCll | llll", "D ::= lDlllllll | llllDllll | llllllll"};
    unknown seed = I;
    string word = "illlllllllll";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 12544;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> rules = {"X ::= xxx | xG | xZ", "Z ::= Gx | Xx | XxX | x"};
    unknown seed = X;
    string word = "xxxxxxxxxx";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> rules = {"A ::= abcdefghijklAmnopqrstuvwxyzA | aA | xA | z"};
    unknown seed = A;
    string word = "abcdefghijklxaaaxzmnopqrstuvwxyzxaz";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> rules = {"W ::= Wp"};
    unknown seed = W;
    string word = "ppppppppppppppppppppppppppppppppppp";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> rules = {"W ::= Wp | p"};
    unknown seed = W;
    string word = "ppppppppppppppppppppppppppppppppppp";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> rules = {"W ::= ppppppppppppppppppppppppppppppppppp"};
    unknown seed = W;
    string word = "ppppppppppppppppppppppppppppppppppp";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> rules = {"Z ::= iZ | iZ | iZ | iAf | iB", "B ::= xB | xB | xB | xB | xB", "B ::= xB | xB | xB | xB | xB", "A ::= XB", "B ::= x", "X ::= x | xX"};
    unknown seed = Z;
    string word = "iiixxxxxxxxxxf";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> rules = {"F ::= fF | f", "G ::= fG | fG | f", "I ::= FG"};
    unknown seed = I;
    string word = "ffffffffffffffffff";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 131071;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> rules = {"O ::= OO | o | OO | OO | OO | OO | OO | OO"};
    unknown seed = O;
    string word = "oooooooo";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 353299947;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> rules = {"O ::= OO | o | OO | OO | OO | OO | OO | OO", "P ::= iO | iO | iO | iO | iO | iO | iO | iO", "Q ::= iP | iP | iP | iP | iP | iP | iP | iP"};
    unknown seed = Q;
    string word = "iiooooooo";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 993898752;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> rules = {"A ::= AAaAA | AAAAA | AaAaA", "A ::= aAaAa | AAAaa | aAaAA | a | aaaa"};
    unknown seed = A;
    string word = "aaaaaaaaaaaaaaaaaaaaaaaaa";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 142067506;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> rules = {"B ::= AAaAA | AAAAA | AaAaA | a | AC | CA", "A ::= aBaBa | BBBaa | aBaBB | a | aaaa", "C ::= aCCaB | CCABB | BABAC | CCCCC | aaa"};
    unknown seed = B;
    string word = "aaaaaaaaaaaaaaaaaaaaaaaaa";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 3955448;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> rules = {"B ::= AAaAA | AAAAA | AaAaA | a | AC | CA", "A ::= aBaBa | BBBaa | aBaBB | aa | BD", "C ::= aCCaB | CCABB | BABAC | CCCCC | aaa", "D ::= DDADA | DBCDA | DDABC | CABAC | aaa"};
    unknown seed = C;
    string word = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 3799813;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> rules = {"A ::= BrsC | tBrC | tCBr | CrBt | sA | u | CC", "B ::= ArCs | sCuA | uAsC | AutC | tB | Bs | r", "C ::= r | s | t | u | AB"};
    unknown seed = A;
    string word = "rstutrsutrutrusutsu";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 224;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> rules = {"R ::= STU | SUT | TSU | RTUS | RUST | RUTS", "R ::= RSTU | RSUT | RTSU | TUS | UST | UTS", "S ::= aT | aU | Ua | Ta | a", "T ::= bS | bU | Ub | Sb | b", "U ::= cT | cS | Sc | Tc | c", "R ::= SU | US | ST | TS | UT | TU"};
    unknown seed = R;
    string word = "abcacbbacbcacabcba";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 1799573;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> rules = {"R ::= STU | SUT | TSU | RTUS | RUST | RUTS", "R ::= RSTU | RSUT | RTSU | TUS | UST | UTS", "S ::= aT | aU | Ua | Ta | a | aR", "T ::= bS | bU | Ub | Sb | b | bR", "U ::= cT | cS | Sc | Tc | c | cR", "R ::= SU | US | ST | TS | UT | TU"};
    unknown seed = R;
    string word = "abcacbbacbcacabcba";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 341283608;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> rules = {"R ::= STU | SUT | TSU | RTUS | RUST | RUTS", "R ::= RSTU | RSUT | RTSU | TUS | UST | UTS", "S ::= aT | aU | Ua | Ta | a | aR | Ra", "T ::= bS | bU | Ub | Sb | b | bR | Rb", "U ::= cT | cS | Sc | Tc | c | cR", "R ::= SU | US | ST | TS | UT | TU"};
    unknown seed = R;
    string word = "abcacbbacbcacabcba";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> rules = {"A ::= QQ | AA | BB | CC | DD | EE | FF | GG | HH", "A ::= z | II | JJ | KK | LL | MM | NN | OO | PP", "B ::= RR | BB | CC | DD | EE | FF | GG | HH | II", "B ::= y | JJ | KK | LL | MM | NN | OO | PP | QQ", "C ::= SS | CC | DD | EE | FF | GG | HH | II | JJ", "C ::= z | KK | LL | MM | NN | OO | PP | QQ | RR", "D ::= TT | DD | EE | FF | GG | HH | II | JJ | KK", "D ::= a | LL | MM | NN | OO | PP | QQ | RR | SS", "E ::= UU | EE | FF | GG | HH | II | JJ | KK | LL", "E ::= b | MM | NN | OO | PP | QQ | RR | SS | TT", "F ::= VV | FF | GG | HH | II | JJ | KK | LL | MM", "F ::= f | NN | OO | PP | QQ | RR | SS | TT | UU", "G ::= WW | GG | HH | II | JJ | KK | LL | MM | NN", "G ::= z | OO | PP | QQ | RR | SS | TT | UU | VV", "H ::= XX | HH | II | JJ | KK | LL | MM | NN | OO", "H ::= i | PP | QQ | RR | SS | TT | UU | VV | WW", "I ::= YY | II | JJ | KK | LL | MM | NN | OO | PP", "I ::= z | QQ | RR | SS | TT | UU | VV | WW | XX", "J ::= AA | JJ | KK | LL | MM | NN | OO | PP | QQ", "J ::= k | RR | SS | TT | UU | VV | WW | XX | YY", "K ::= BB | KK | LL | MM | NN | OO | PP | QQ | RR", "K ::= m | SS | TT | UU | VV | WW | XX | YY | AA", "L ::= CC | LL | MM | NN | OO | PP | QQ | RR | SS", "L ::= o | TT | UU | VV | WW | XX | YY | AA | BB", "M ::= DD | MM | NN | OO | PP | QQ | RR | SS | TT", "M ::= p | UU | VV | WW | XX | YY | AA | BB | CC", "N ::= EE | NN | OO | PP | QQ | RR | SS | TT | UU", "N ::= z | VV | WW | XX | YY | AA | BB | CC | DD", "O ::= FF | OO | PP | QQ | RR | SS | TT | UU | VV", "O ::= q | WW | XX | YY | AA | BB | CC | DD | EE", "P ::= GG | PP | QQ | RR | SS | TT | UU | VV | WW", "P ::= x | XX | YY | AA | BB | CC | DD | EE | FF", "Q ::= HH | QQ | RR | SS | TT | UU | VV | WW | XX", "Q ::= x | YY | AA | BB | CC | DD | EE | FF | GG", "R ::= II | RR | SS | TT | UU | VV | WW | XX | YY", "R ::= z | AA | BB | CC | DD | EE | FF | GG | HH", "S ::= JJ | SS | TT | UU | VV | WW | XX | YY | AA", "S ::= x | BB | CC | DD | EE | FF | GG | HH | II", "T ::= KK | TT | UU | VV | WW | XX | YY | AA | BB", "T ::= x | CC | DD | EE | FF | GG | HH | II | JJ", "U ::= LL | UU | VV | WW | XX | YY | AA | BB | CC", "U ::= j | DD | EE | FF | GG | HH | II | JJ | KK", "V ::= MM | VV | WW | XX | YY | AA | BB | CC | DD", "V ::= x | EE | FF | GG | HH | II | JJ | KK | LL", "W ::= NN | WW | XX | YY | AA | BB | CC | DD | EE", "W ::= x | FF | GG | HH | II | JJ | KK | LL | MM", "X ::= OO | XX | YY | AA | BB | CC | DD | EE | FF", "X ::= v | GG | HH | II | JJ | KK | LL | MM | NN", "Y ::= zzzY | zYz | zYz | zzzzY | zz | Yzzzzz", "Z ::= bAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA | Zzzz"};
    unknown seed = Z;
    string word = "bzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 33692055;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> rules = {"A ::= AA | a"};
    unknown seed = A;
    string word = "aaaaaaaaaaaaaaaaaaa";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 477638700;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> rules = {"K ::= kk", "K ::= kkkkkkkkkkkkkkkkk", "K ::= KKKKKKKK", "K ::= Kj | jK | jKj | KjK", "K ::= j | k"};
    unknown seed = K;
    string word = "kjkjkkkkjkkkjkkkkkkkkkkkkkkkkk";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 163331273;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> rules = {"V ::= v | WW", "W ::= v | VV"};
    unknown seed = V;
    string word = "vvvvvvvvvvvvvvvvvv";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 129644790;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> rules = {"T ::= t | Tt | tT | TtT"};
    unknown seed = T;
    string word = "tttttttttttttttttt";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 477638700;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> rules = {"O ::= p | PP", "P ::= o | OO"};
    unknown seed = O;
    string word = "oopopopppooooppppooopppppoooppppop";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 54233177;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> rules = {"O ::= p | PP", "P ::= o | OO"};
    unknown seed = O;
    string word = "oopopopppooooppppooopppppoooppppopo";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
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
    vector<string> rules = {"O ::= p | PP", "P ::= o | OO"};
    unknown seed = P;
    string word = "oopopopppooooppppooopppppoooppppop";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
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
    vector<string> rules = {"O ::= p | PP", "P ::= o | OO"};
    unknown seed = P;
    string word = "pppppppppppppppppppppppppppppppp";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 70068713;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> rules = {"A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax", "A ::= x | x | x | x | x | x | x | x | AA | xA | Ax"};
    unknown seed = A;
    string word = "xx";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 8040000;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> rules = {"A ::= BCDEFG | FAABCDEE", "A ::= AABBBBBAAAABBBBBAAAAAABBABBAABBAABA", "A ::= AAAAABBBBBAAAAABBBBB", "A ::= AAABBBABAAB", "B ::= z | Az", "A ::= z | Az", "C ::= z | Az", "D ::= z | Dz", "E ::= z | Dz", "F ::= z | Az", "G ::= z | Az", "H ::= z | Az"};
    unknown seed = A;
    string word = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> rules = {"A ::= BBBBBBBBBBBBBBB", "B ::= a", "B ::= aa", "B ::= aaa", "B ::= aaaa", "B ::= aaaaa", "B ::= aaaaaa", "B ::= aaaaaaa", "B ::= aaaaaaaa", "B ::= aaaaaaaaa", "B ::= aaaaaaaaaa", "B ::= aaaaaaaaaaa", "B ::= aaaaaaaaaaaa", "B ::= aaaaaaaaaaaaa", "B ::= aaaaaaaaaaaaaa", "B ::= aaaaaaaaaaaaaaa", "B ::= aaaaaaaaaaaaaaaa"};
    unknown seed = A;
    string word = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 77558760;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> rules = {"A ::= aA | aA | aA | aA | aA", "A ::= aA | aA | aA | aA | aA", "A ::= a"};
    unknown seed = A;
    string word = "aaaaaaaaaa";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> rules = {"A ::= QQ | WW | EE | RR | TT | YY | UU | II | OO", "Q ::= QQ | WW | EE | RR | TT | YY | UU | II | OO", "W ::= QQ | WW | EE | RR | TT | YY | UU | II | OO", "E ::= QQ | WW | EE | RR | TT | YY | UU | II | OO", "R ::= QQ | WW | EE | RR | a | YY | UU | II | OO", "T ::= QQ | WW | EE | RR | TT | YY | UU | II | OO", "Y ::= QQ | WW | EE | RR | TT | YY | UU | II | OO", "U ::= QQ | WW | EE | RR | TT | YY | UU | II | OO", "I ::= QQ | WW | EE | RR | TT | YY | UU | II | OO", "O ::= AA | SS | DD | FF | GG | HH | JJ | KK | LL", "A ::= QQ | WW | EE | RR | TT | YY | UU | II | PP", "S ::= QQ | WW | EE | RR | TT | YY | UU | II | PP", "D ::= QQ | WW | EE | RR | TT | YY | UU | II | PP", "F ::= QQ | WW | EE | RR | TT | YY | UU | II | PP", "G ::= QQ | WW | EE | RR | TT | YY | UU | II | PP", "H ::= QQ | WW | EE | RR | TT | YY | UU | II | PP", "J ::= QQ | WW | EE | RR | TT | YY | UU | II | PP", "K ::= QQ | WW | EE | RR | TT | YY | UU | a | PP"};
    unknown seed = A;
    string word = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaab";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> rules = {"B ::= bB | bB | bB | bB | b"};
    unknown seed = B;
    string word = "bbbbbbbbbbbbbbbb";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> rules = {"B ::= AAAAAAAAA", "A ::= a | a | a | a | a | a | a | a | a | a"};
    unknown seed = B;
    string word = "aaaaaaaaa";
    ContextFreeGrammars* pObj = new ContextFreeGrammars();
    clock_t start = clock();
    int result = pObj->countParsingTrees(rules, seed, word);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8357090&rd=9822&pm=6210
********************************************************************************
// another fine solution by misof
// #includes {{{
#include <algorithm>
#include <numeric>
 
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
 
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cassert>
 
#include <cmath>
#include <complex>
using namespace std;
// }}}
 
/////////////////// PRE-WRITTEN CODE FOLLOWS, LOOK DOWN FOR THE SOLUTION ////////////////////////////////
 
// pre-written code {{{
#define CLEAR(t) memset((t),0,sizeof(t))
#define FOR(i,a,b) for(int i=(int)(a);i<=(int)(b);++i)
#define REP(i,n) for(int i=0;i<(int)(n);++i)
#define SIZE(t) ((int)((t).size()))
vector<string> SPLIT( const string& s, const string& delim =" " ) { vector<string> res; string t; for ( unsigned int i = 0 ; i != s.size() ; i++ ) { if ( delim.find( s[i] ) != string::npos ) { if ( !t.empty() ) { res.push_back( t ); t = ""; } } else { t += s[i]; } } if ( !t.empty() ) { res.push_back(t); } return res; }
typedef vector<int> VI;
typedef vector<string> VS;
// }}}
 
/////////////////// CODE WRITTEN DURING THE COMPETITION FOLLOWS ////////////////////////////////
 
int rules[100000][4];
int RC;
int N;
 
long long dasa[52][52][2200];
 
class ContextFreeGrammars {
public:
  int countParsingTrees(vector <string> _rules, char seed, string word) {
    RC=0; N = 52;
 
    vector<int> prePismeno[26];
    REP(i,26) prePismeno[i].push_back(i);
    
    REP(i,SIZE(_rules)) {
      VS V = SPLIT(_rules[i]," :=|");
      int P = SIZE(V) - 1;
      FOR(i,1,P) {
        int left = V[0][0] - 'A' + 26;
        VI right;
        if (V[i].size() == 1) {
          prePismeno[ V[i][0]-'a' ].push_back(left);
        } else {
          REP(j,V[i].size()) {
            if (islower(V[i][j])) 
              right.push_back(V[i][j]-'a');
            else 
              right.push_back(V[i][j]-'A'+26);
          }
          while (right.size() > 2) {
            rules[RC][0] = left;
            rules[RC][1] = right[0];
            rules[RC][2] = N;
            RC++;
            left = N;
            N++;
            right.erase(right.begin());
          }
          rules[RC][0] = left;
          rules[RC][1] = right[0];
          rules[RC][2] = right[1];
          RC++;
        }
      }
    }
 
    CLEAR(dasa);
 
    int L = SIZE(word);
 
    REP(i,L) {
      int x = word[i]-'a';
      REP(j,SIZE(prePismeno[x])) dasa[i][i+1][ prePismeno[x][j] ]++;
    }
 
    FOR(l,2,L) REP(z,L) {
      int k = z+l;
      if (k > L) continue;
      FOR(l1,1,l-1) {
        REP(r,RC) {
          dasa[z][k][ rules[r][0] ] += dasa[z][z+l1][ rules[r][1] ] * dasa[z+l1][k][ rules[r][2] ];
          dasa[z][k][ rules[r][0] ] <?= 1234567890;
        }
      }
    }
    
    int res = dasa[0][L][ seed-'A'+26 ];
    if (res > 1000000000) res = -1;
    return res;
  }
 
 
};
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/