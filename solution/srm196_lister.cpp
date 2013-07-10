/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2825
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

class Lister {
public:
    vector<string> doList(int pageWidth, vector<string> names);
};

vector<string> Lister::doList(int pageWidth, vector<string> names) {
    vector<string> ret;
    return ret;
}


int test0() {
    int pageWidth = 10;
    vector<string> names = {"bob", "abernathy", "x"};
    Lister* pObj = new Lister();
    clock_t start = clock();
    vector<string> result = pObj->doList(pageWidth, names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"abernathy ", "bob ", "x "};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int pageWidth = 11;
    vector<string> names = {"bob", "abernathy", "x"};
    Lister* pObj = new Lister();
    clock_t start = clock();
    vector<string> result = pObj->doList(pageWidth, names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"abernathy x", "bob "};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int pageWidth = 10;
    vector<string> names = {"bob", "a", "x"};
    Lister* pObj = new Lister();
    clock_t start = clock();
    vector<string> result = pObj->doList(pageWidth, names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a bob x "};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int pageWidth = 10;
    vector<string> names = {"a", "b", "a", "c", "d", "ab", "e", "f", "g"};
    Lister* pObj = new Lister();
    clock_t start = clock();
    vector<string> result = pObj->doList(pageWidth, names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a ab c e g", "a b d f "};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int pageWidth = 18;
    vector<string> names = {"a", "b", "a", "c", "d", "ab", "e", "f", "g"};
    Lister* pObj = new Lister();
    clock_t start = clock();
    vector<string> result = pObj->doList(pageWidth, names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a a ab b c d e f g"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int pageWidth = 17;
    vector<string> names = {"a", "b", "a", "c", "d", "ab", "e", "f", "g"};
    Lister* pObj = new Lister();
    clock_t start = clock();
    vector<string> result = pObj->doList(pageWidth, names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a ab c e g ", "a b d f "};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int pageWidth = 10;
    vector<string> names = {"x", "teddy", "andy"};
    Lister* pObj = new Lister();
    clock_t start = clock();
    vector<string> result = pObj->doList(pageWidth, names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"andy x ", "teddy "};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int pageWidth = 10;
    vector<string> names = {"aaaaaaaaaa", "bbbbbbbbbb", "cccccccccc", "dddddddddd", "eeeeeeeeee", "ffffffffff", "gggggggggg", "hhhhhhhhhh"};
    Lister* pObj = new Lister();
    clock_t start = clock();
    vector<string> result = pObj->doList(pageWidth, names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aaaaaaaaaa", "bbbbbbbbbb", "cccccccccc", "dddddddddd", "eeeeeeeeee", "ffffffffff", "gggggggggg", "hhhhhhhhhh"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int pageWidth = 21;
    vector<string> names = {"aaaaaaaaaa", "bbbbbbbbbb", "cccccccccc", "dddddddddd", "eeeeeeeeee", "ffffffffff", "gggggggggg", "hhhhhhhhhh"};
    Lister* pObj = new Lister();
    clock_t start = clock();
    vector<string> result = pObj->doList(pageWidth, names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aaaaaaaaaa eeeeeeeeee", "bbbbbbbbbb ffffffffff", "cccccccccc gggggggggg", "dddddddddd hhhhhhhhhh"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int pageWidth = 32;
    vector<string> names = {"aaaaaaaaaa", "bbbbbbbbbb", "cccccccccc", "dddddddddd", "eeeeeeeeee", "ffffffffff", "gggggggggg"};
    Lister* pObj = new Lister();
    clock_t start = clock();
    vector<string> result = pObj->doList(pageWidth, names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aaaaaaaaaa dddddddddd ffffffffff", "bbbbbbbbbb eeeeeeeeee gggggggggg", "cccccccccc "};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int pageWidth = 32;
    vector<string> names = {"aaa", "baa", "caa", "daa", "eaa", "faa", "gaa", "haa", "iaa", "jaa", "kaa", "laaaaaaa", "maaaaaaa", "naa", "oaa", "paa", "qaa", "raa", "saa", "taa", "uaa", "vaa", "waa", "xaa", "yaa", "zaa", "zba", "zca", "zda", "zea", "zfa", "zga", "zha", "zia", "zja", "zka"};
    Lister* pObj = new Lister();
    clock_t start = clock();
    vector<string> result = pObj->doList(pageWidth, names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aaa gaa laaaaaaa qaa vaa zba zga", "baa haa maaaaaaa raa waa zca zha", "caa iaa naa saa xaa zda zia", "daa jaa oaa taa yaa zea zja", "eaa kaa paa uaa zaa zfa zka", "faa "};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int pageWidth = 31;
    vector<string> names = {"aaa", "baa", "caa", "daa", "eaa", "faa", "gaa", "haa", "iaa", "jaa", "kaa", "laaaaaaa", "maaaaaaa", "naa", "oaa", "paa", "qaa", "raa", "saa", "taa", "uaa", "vaa", "waa", "xaa", "yaa", "zaa", "zba", "zca", "zda", "zea", "zfa", "zga", "zha", "zia", "zja", "zka"};
    Lister* pObj = new Lister();
    clock_t start = clock();
    vector<string> result = pObj->doList(pageWidth, names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aaa iaa paa waa zea ", "baa jaa qaa xaa zfa ", "caa kaa raa yaa zga ", "daa laaaaaaa saa zaa zha ", "eaa maaaaaaa taa zba zia ", "faa naa uaa zca zja ", "gaa oaa vaa zda zka ", "haa "};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int pageWidth = 31;
    vector<string> names = {"aaa", "baa", "caa", "daa", "eaa", "faa", "gaa", "haa", "iaa", "jaa", "kaa", "laaaaaa", "maaaaaa", "naa", "oaa", "paa", "qaa", "raa", "saa", "taa", "uaa", "vaa", "waa", "xaa", "yaa", "zaa", "zba", "zca", "zda", "zea", "zfa", "zga", "zha", "zia", "zja", "zka"};
    Lister* pObj = new Lister();
    clock_t start = clock();
    vector<string> result = pObj->doList(pageWidth, names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aaa gaa maaaaaa saa yaa zfa", "baa haa naa taa zaa zga", "caa iaa oaa uaa zba zha", "daa jaa paa vaa zca zia", "eaa kaa qaa waa zda zja", "faa laaaaaa raa xaa zea zka"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int pageWidth = 10;
    vector<string> names = {"a", "jj", "d", "i", "g", "b", "e", "hh", "f", "c"};
    Lister* pObj = new Lister();
    clock_t start = clock();
    vector<string> result = pObj->doList(pageWidth, names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a d g i ", "b e hh jj ", "c f "};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int pageWidth = 18;
    vector<string> names = {"ebfaeff", "efaeca", "gd", "f", "dd", "agde", "dbfdaefadg", "gcaddf", "fg", "gffb", "effcg", "dcbggaf", "bec", "dcgefgefg", "gee", "eeaec", "aacfcf", "ed", "fdecgggf", "a", "abefeebgdf", "bgbggaacfa", "abfaabcbgd", "dddgcfdb"};
    Lister* pObj = new Lister();
    clock_t start = clock();
    vector<string> result = pObj->doList(pageWidth, names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a ", "aacfcf ", "abefeebgdf ", "abfaabcbgd ", "agde ", "bec ", "bgbggaacfa ", "dbfdaefadg ", "dcbggaf ", "dcgefgefg ", "dd ", "dddgcfdb ", "ebfaeff ", "ed ", "eeaec ", "efaeca ", "effcg ", "f ", "fdecgggf ", "fg ", "gcaddf ", "gd ", "gee ", "gffb "};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int pageWidth = 79;
    vector<string> names = {"fdfcgac", "afb", "fe", "affdecba", "cgcg", "afdb", "fcbcfagae", "abdebcbd", "bge", "gfedbgaae", "d", "dfgfdegcc", "dcd", "fcb", "abcbee", "fdggcadaa", "caacbd", "ebcbcf", "bcgcccfae", "ddb", "cafed", "afbabccc", "g", "ggcfafda", "geegdcfddc", "gaaacdedg", "gba", "gbdaeebea", "agefdcgec", "fgcg"};
    Lister* pObj = new Lister();
    clock_t start = clock();
    vector<string> result = pObj->doList(pageWidth, names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"abcbee afdb bge d dfgfdegcc fcbcfagae fe gaaacdedg geegdcfddc ", "abdebcbd affdecba caacbd dcd ebcbcf fdfcgac fgcg gba gfedbgaae ", "afb agefdcgec cafed ddb fcb fdggcadaa g gbdaeebea ggcfafda ", "afbabccc bcgcccfae cgcg "};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int pageWidth = 29;
    vector<string> names = {"afbbgcgc", "ccd", "decgdfcgfg", "cf", "bfcbged", "eebbeffd", "ga", "abaccg", "ga"};
    Lister* pObj = new Lister();
    clock_t start = clock();
    vector<string> result = pObj->doList(pageWidth, names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"abaccg ccd decgdfcgfg ga ", "afbbgcgc cf eebbeffd ga ", "bfcbged "};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int pageWidth = 34;
    vector<string> names = {"fdaaagecf", "ebb", "gd", "c", "d", "fde", "edcacbcfd", "cbcc", "bdabaccace"};
    Lister* pObj = new Lister();
    clock_t start = clock();
    vector<string> result = pObj->doList(pageWidth, names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bdabaccace d edcacbcfd fde ", "c ebb fdaaagecf gd ", "cbcc "};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int pageWidth = 39;
    vector<string> names = {"bbffagg", "bbbbfccd", "eeedcgfg", "d", "cg", "gbc", "g", "bbf", "gb", "d", "abcebgee", "dded", "dfcafggfac", "abeb", "agee", "egbadabfbb"};
    Lister* pObj = new Lister();
    clock_t start = clock();
    vector<string> result = pObj->doList(pageWidth, names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"abcebgee bbf d dfcafggfac g ", "abeb bbffagg d eeedcgfg gb ", "agee cg dded egbadabfbb gbc ", "bbbbfccd "};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int pageWidth = 35;
    vector<string> names = {"aee", "agc", "g", "fg", "bce", "bfaa", "gcdbagfdag", "cafg", "ccad", "dbcgfbdcd", "de", "gfc", "caefa", "cebacce", "ccbdgacbb", "gbbfd"};
    Lister* pObj = new Lister();
    clock_t start = clock();
    vector<string> result = pObj->doList(pageWidth, names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aee caefa ccbdgacbb de gbbfd ", "agc cafg cebacce fg gcdbagfdag ", "bce ccad dbcgfbdcd g gfc ", "bfaa "};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int pageWidth = 33;
    vector<string> names = {"g", "babec", "bafffebe", "bffaf", "decdgfgcbc", "bacfeddea", "g", "deecgabcg", "c"};
    Lister* pObj = new Lister();
    clock_t start = clock();
    vector<string> result = pObj->doList(pageWidth, names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"babec bffaf decdgfgcbc g ", "bacfeddea c deecgabcg g ", "bafffebe "};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int pageWidth = 12;
    vector<string> names = {"a", "b", "c", "d", "e", "ffff", "gggg", "h", "i"};
    Lister* pObj = new Lister();
    clock_t start = clock();
    vector<string> result = pObj->doList(pageWidth, names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a d ffff h ", "b e gggg i ", "c "};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int pageWidth = 12;
    vector<string> names = {"a", "b", "c", "d", "e", "fff", "gggg", "h", "i"};
    Lister* pObj = new Lister();
    clock_t start = clock();
    vector<string> result = pObj->doList(pageWidth, names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a d gggg ", "b e h ", "c fff i "};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int pageWidth = 18;
    vector<string> names = {"a", "b", "c", "d", "e", "longword", "longerword", "y", "z"};
    Lister* pObj = new Lister();
    clock_t start = clock();
    vector<string> result = pObj->doList(pageWidth, names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a d longerword y ", "b e longword z ", "c "};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int pageWidth = 10;
    vector<string> names = {"aaaaaaaaaa"};
    Lister* pObj = new Lister();
    clock_t start = clock();
    vector<string> result = pObj->doList(pageWidth, names);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aaaaaaaaaa"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=272072&rd=5071&pm=2825
********************************************************************************
#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <functional> 
#include <numeric> 
#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
#include <queue> 
using namespace std; 
typedef vector<int> VI;  typedef vector<vector<int> > VVI; 
typedef vector<string> VS;  typedef vector<vector<string> > VVS; 
typedef signed long long i64;  typedef unsigned long long u64; 
 
int width(VS &b, int s, int e) { 
  int ret = 0; 
  for( int i = s; i < e; i++ ) ret >?= b[i].size(); 
} 
 
class Lister { 
public: 
vector <string> doList(int a, vector <string> b) { 
  int i, j, k, x, y, z, n; 
  vector <string> ret; 
 
  sort(b.begin(), b.end()); 
  int nc, rows, wid, bestrows = 1000, bestwid; 
  for( nc = 1; nc <= b.size(); nc++ ) { 
    rows = (b.size()+nc-1)/nc; 
    if( rows > bestrows ) continue; 
    wid = 0; 
    int spill = b.size()%nc; 
    for( int cw = 0; cw < b.size(); ) { 
      if( wid ) wid++; 
      n = b.size()/nc + (spill-- > 0); 
      wid += width(b, cw, cw+n); 
      cw += n; 
    } 
    if( wid > a ) continue; 
    if( rows == bestrows && wid >= bestwid ) continue; 
    bestrows = rows; bestwid = wid; 
    wid = 0; 
    ret = VS(rows); 
    spill = b.size()%nc; 
    for( int cw = 0; cw < b.size(); ) { 
      if( wid ) wid++; 
      for( i = 0; i < ret.size(); i++ ) 
        while( ret[i].size() < wid ) ret[i] += ' '; 
      n = b.size()/nc + (spill-- > 0); 
      wid += x = width(b, cw, cw+n); 
      for( i = 0; i < n; i++ ) ret[i] += b[cw+i]; 
      cw += n; 
    } 
    for( i = 0; i < ret.size(); i++ ) 
      while( ret[i].size() < a ) ret[i] += ' '; 
  } 
  return ret; 
} 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/