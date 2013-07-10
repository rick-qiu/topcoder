/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12331
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

class FoxAndHandle {
public:
    string lexSmallestName(string S);
};

string FoxAndHandle::lexSmallestName(string S) {
    string ret;
    return ret;
}


int test0() {
    string S = "foxfox";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "fox";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string S = "ccieliel";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "ceil";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string S = "abaabbab";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "aabb";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string S = "bbbbaaaa";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "bbaa";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string S = "fedcbafedcba";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "afedcb";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string S = "nodevillivedon";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "deilvon";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string S = "bkbkaajaajkkmfmfliffajaelhihlihajaeohggholihoggo";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "baaaajkkfmfehhlihjgglioo";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string S = "kcbbdikcbbdi";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "bbdikc";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string S = "aaaaaaaaaaaaaaaaaa";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string S = "hhhh";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "hh";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string S = "adadaddebecbaedeebbadadaddebecbaedeebb";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaabbddddebecbedee";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string S = "liahkaliahka";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "aalihk";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string S = "ghdhahcfegahcgafhfhabghdhahcfegahcgafhfhab";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaabghdhhcfeghcgfhfh";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string S = "lbdlbd";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "bdl";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string S = "nssnlatrvxqgdcatobphpnssnlatrvxqgdcatobphp";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "aabhnssnltrvxqgdctopp";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string S = "nstnst";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "nst";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string S = "kkjolfghvkkjolfghv";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "fghkkjolv";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string S = "jbofhjljgjbofhjljg";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "bfgjohjlj";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string S = "nfilggcacgnfilggcacg";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "acgnfilgcg";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string S = "abhnaccicabhnaccic";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "aabhnccic";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string S = "efbaebadacafecabcefaefbaebadacafecabcefa";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaefbebdcfecbcef";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string S = "idfbieidfbie";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "beidfi";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string S = "cbjfidccahfhjeabcbjfidccahfhjeab";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "aabcbjfidcchfhje";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string S = "umnlhebpumbronkquumnlhebpumbronkqu";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "bbkqumnlhepumronu";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string S = "uliwgjuuliwgju";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "gjuliwu";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string S = "bncmhohshdabncmhohshda";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "abncmhohshd";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string S = "cbbbabbaaacabcccaacabcbbbabbaaacabcccaacab";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaabcbbbbbcbcccc";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string S = "pngilmanqiodjmjqlapngilmanqiodjmjqla";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "aapngilmnqiodjmjql";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string S = "aaabbbaaaaaabbaaabbbaaaaaabb";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaabbbbb";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string S = "feekcffkfeekcffk";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "cfeekffk";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string S = "bfebaabfebaa";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "aabfeb";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string S = "hoiphoip";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "hiop";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string S = "dfcqqdfhjenirnllhbmdfcqqdfhjenirnllhbm";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "bdfcqqdfhjenirnllhm";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string S = "aa";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string S = "caefdedcdecaefdedcde";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "accefdedde";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string S = "kmmllclfimjaidgkmmllclfimjaidg";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "adgkmmllclfimji";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string S = "aaaaaabaababbabaaaaaabaababbab";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaabbbbb";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string S = "kbsouijvfaabvkbsouijvfaabv";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "aabkbsouijvfv";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string S = "smweaamsmweaam";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "aamsmwe";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string S = "chch";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "ch";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string S = "ff";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "f";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string S = "bbababbaba";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "aabbb";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string S = "cbdifojmjbndocbdifojmjbndo";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "bbcdifojmjndo";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string S = "fkcbejiafcfjcjimmjjghmdeafkcbejiafcfjcjimmjjghmdea";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "aafkcbejifcfjcjimmjjghmde";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string S = "hgdifclibebibgjglkjnhkbhgdifclibebibgjglkjnhkb";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "bbbbhgdifclieigjglkjnhk";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string S = "aaaaaaaaaaaaaaaa";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaa";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string S = "bhigdikmkgdipbkibjbhigdikmkgdipbkibj";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "bbbhigdikmkgdipkij";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string S = "acabacab";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "aabc";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string S = "ee";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "e";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string S = "bgbg";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "bg";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string S = "hnpbafrebbhnpbafrebb";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "abbhnpbfre";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string S = "thcgupthcgup";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "cgpthu";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string S = "accbabadeeaccbabadee";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaccbbdee";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string S = "fokgpenjjlrefajhepfokgpenjjlrefajhep";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "aefokgpenjjlrefjhp";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string S = "ljombhhosdhcpmnolibgdkiljombhhosdhcpmnolibgdki";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "bbdiljomhhosdhcpmnolgki";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string S = "jlpomfbglenmdqcjlpomfbglenmdqc";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "bcjlpomfglenmdq";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string S = "hshs";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "hs";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string S = "cohvhooorsffjrmmontivbjcohvhooorsffjrmmontivbj";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "bcohvhooorsffjrmmontivj";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string S = "icejddraacdpliiefpegrospicejddraacdpliiefpegrosp";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "aacdeegicejddrpliifprosp";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string S = "oo";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "o";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string S = "koseomlnmohajlbnbphghkoseomlnmohajlbnbphgh";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "abbghkoseomlnmohjlnph";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string S = "dsds";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "ds";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string S = "kefcfgicdjbbahikefcfgicdjbbahi";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "ahikefcfgcdjbbi";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string S = "ghgh";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "gh";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string S = "khhejxlkxmpjmsfitdgkeqkhhejxlkxmpjmsfitdgkeq";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "dekhhejxlkxmpjmsfitgkq";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string S = "jobgncfidoaanmomnhcbhakjobgncfidoaanmomnhcbhak";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "aaajobgncfidonmomnhcbhk";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string S = "gvhfhkuivvufuhpbgvhfhkuivvufuhpb";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "bgvhfhkuivvufuhp";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string S = "nidbednljlkcnmdmljlfbhbnidbednljlkcnmdmljlfbhb";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "bbbnidednljlkcnmdmljlfh";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string S = "fbeiibfbeiib";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "bbfeii";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string S = "qtptpsdtgcekqtptpsdtgcek";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "cekqtptpsdtg";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string S = "qrnjnqorrgkakenlcrlllqrnjnqorrgkakenlcrlll";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "aclllqrnjnqorrgkkenlr";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string S = "nrdbqiinjaqomibodlilsbnrdbqiinjaqomibodlilsb";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "abbnrdbqiinjqomiodlils";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string S = "qieppnjcskjplupeamgqpqtqieppnjcskjplupeamgqpqt";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "agpqiepnjcskjplupemqpqt";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string S = "ffjaibhcglhkiffjaibhcglhki";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "abcffjihglhki";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string S = "hqchbpqghmvpgcepdnvblhqchbpqghmvpgcepdnvbl";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "bbhqchpqghmvpgcepdnvl";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string S = "ccfcccdcfdeddcaebfbccfcccdcfdeddcaebfb";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "abbccfcccdcfdeddcef";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string S = "opoepcibabfpbjdickiopoepcibabfpbjdicki";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "abbciopoepbfpjdicki";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string S = "wqgrftamjcgtammulqabmrwipwqgrftamjcgtammulqabmrwip";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "aaabipwqgrftmjcgtmmulqmrw";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string S = "mftoncoadnibksdfmftoncoadnibksdf";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "abdfmftoncodniks";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string S = "greqceanereokwhvptuaiqgreqceanereokwhvptuaiq";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "aagreqcenereokwhvptuiq";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string S = "dd";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "d";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string S = "kihmilalfmkihmilalfm";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "afkihmillm";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string S = "eobkhpceobkhpc";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "bceokhp";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string S = "unlgmoxnomsinlunlgmoxnomsinl";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "gilunlmoxnomsn";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string S = "kdqqrjdejoqlinkdqqrjdejoqlin";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "ddeikqqrjjoqln";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string S = "fgacafhffcaceebfgedafafgacafhffcaceebfgedafa";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaafgcfhffcceebfgedf";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string S = "efdeefde";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "deef";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string S = "ebacaeebacae";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "aaebce";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string S = "aohjpioefipaohjpioefip";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "aefiohjpiop";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string S = "ccbabbaaccbabbaa";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaccbbb";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string S = "alcfickgoajhfcihalcfickgoajhfcih";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "aachlcfickgojfih";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string S = "bealcdbhbjefcfcbealcdbhbjefcfc";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "abbbelcdhjefcfc";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string S = "phddddanqnhqqrkamihkaphddddanqnhqqrkamihka";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaphddddnqnhqqrkmihk";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string S = "hmlhicfnihlonninecfoohmlhicfnihlonninecfoo";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "ccfhmlhifnihlonnineoo";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string S = "jcjlnkkcamahcacjcjlnkkcamahcac";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "aaacjcjlnkkcmhc";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string S = "bcbecfdicbfgchccfaefecbcbecfdicbfgchccfaefec";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "abcbecfdicbfgchccfefec";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string S = "cjaffaknjkcjaffaknjk";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "aacjffknjk";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string S = "jgbbbiaaeafacggcbcjgbbbiaaeafacggcbc";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaabcjgbbbiefcggc";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string S = "ccbdccebheihcbefcdbhhbgccbdccebheihcbefcdbhhbg";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "bbbbbccdcceheihcefcdhhg";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string S = "nbnknbnk";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "bknn";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string S = "afbacdbeafbacdbe";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "aabefbcd";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string S = "ldmeqhgnrrfocfhfoldmeqhgnrrfocfhfo";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "cffldmeqhgnrrfoho";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string S = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string S = "hfcchijgdajffcdcchfcchijgdajffcdcc";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "accchfcchijgdjffd";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string S = "fqatwhboemrpxauxmxlfqatwhboemrpxauxmxl";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "aafqtwhboemrpxuxmxl";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string S = "dgdeafheiiebdfhkdhdgdeafheiiebdfhkdh";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "abdddgdefheiiefhkh";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string S = "dqbqfrchfombkgdqbqfrchfombkg";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "bbdqqfrchfomkg";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string S = "bbbaab";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "bab";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string S = "foxfoxfoxfoxfoxfox";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "fffooxoxx";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string S = "zzyyxxaabbccddeeffgghhiijjkkllmmnnooppqqrrssttuuvv";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "zyxabcdefghijklmnopqrstuv";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string S = "fkhtbqsnuegusptebdgbhbfolnqpbdltrohkbmbsrnlbhsltmn";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "begubbbflnqpdltohkmsrhstn";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    string S = "baba";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "ab";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    string S = "mqxmhlvqczcaqzlyezvkqnkkcxenukqjjqeazcvueswvhwsqqy";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "malezkcxenkqjqzcvusvhwqqy";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    string S = "aabbccddeeffgghhiijjkkllmmnnooppqqrrssttuuvvwwxxyy";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefghijklmnopqrstuvwxy";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    string S = "ccaacc";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "acc";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    string S = "adefghadefghciklomciklomprtyuprtyulooppoolyurttruy";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "adefghcikllmooppoyurttruy";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    string S = "zyxzyxzyxzyxzyxzyxzyxzyxzyxzyxzyxzyxzyxzyxzyxzyxaa";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxxxxzyzyzyzyzyzyzyzya";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    string S = "zzyyxxwwvvuuttssrrqqppoonnmmllkkjjiihhggffeeddccbb";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "zyxwvutsrqponmlkjihgfedcb";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    string S = "zyxwvutsrqponmlkjihgfedcbzyxwvutsrqponmlkjihgfedcb";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "bzyxwvutsrqponmlkjihgfedc";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    string S = "abba";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "ab";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    string S = "abbbacaabc";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "ababc";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    string S = "azzzzaaa";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "azza";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    string S = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    string S = "yxwvutsrqponmlkjihgfedcbayxwvutsrqponmlkjihgfedcba";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "ayxwvutsrqponmlkjihgfedcb";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    string S = "ppaappbbllaallbbllvv";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "aappbblllv";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    string S = "jjhsrrthqbteqytyrwrsxmnoeegtrgaxbmkwepkazpinlizolr";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "jhbeqtyrrsegtaxmkwpinlzor";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    string S = "zzbccbaa";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "zbca";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    string S = "aaaaaaaaaabbbbbbbbbbccccccccccddddddddddeeeeeeeeee";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaabbbbbcccccdddddeeeee";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    string S = "bbbbbbbbbbbbbbbbbbbbbbaaaaaaaaaaaaaaaaaaaaaa";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "bbbbbbbbbbbaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    string S = "bccbaa";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "bca";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    string S = "zlnyznttyl";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "lnyzt";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    string S = "bccaab";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "bca";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    string S = "hnyhbxibuamwukxaymuncubdakwbatptihydkhkpjbzcpbpjyz";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "akxamuncubdkwbptihyhbpjyz";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    string S = "hebhajejba";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "bhaej";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    string S = "jihtsiigtisajsgojthuqtorrfnmntnrfnnnqagtmusourgjou";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "higiajsgjqtfmntnrntsourou";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    string S = "bbbbbbaabb";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "bbabb";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    string S = "nacnbacb";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "acnb";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    string S = "aayyxxwwvvuuttssrrqqppoonnmmllkkjjiihhggffeeddccbb";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "ayxwvutsrqponmlkjihgfedcb";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    string S = "afgzgfgaffgyyggafayafgayayafffzfgzyyzzyzgzyyzzagza";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "aaffgaaafgffgyyyzgzyyzzgz";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    string S = "babccbaaba";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "abcab";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    string S = "baab";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "ab";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    string S = "nazmysmosnmfjlnxjcgoraopzpnnxjpbmflnagpfbyajocfryy";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "ammosaopznnxjbflngpfjcryy";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    string S = "abzjubzuwebdehbwzwqkhfbjptkfkbwbfdbjbkzfpzfjzbtfqa";
    FoxAndHandle* pObj = new FoxAndHandle();
    clock_t start = clock();
    string result = pObj->lexSmallestName(S);
    clock_t end = clock();
    delete pObj;
    string expected = "abbubdebwhbfkwfjkzfpzjztq";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20463878&rd=15185&pm=12331
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
 
int a[33]; 
int b[33]; 
 
class FoxAndHandle { 
public: 
  string lexSmallestName(string S) { 
    CL(a,0); 
    REP(i,S.size()) a[S[i]-'a']++; 
    REP(i,26) a[i]/=2; 
 
    string res = ""; 
    int pos = -1; 
    while(res.size()!=S.size()/2){ 
      REP(i,26)if(a[i]){ 
        bool good = 1; 
 
        a[i]--; 
        int npos = pos + 1; 
        while(npos<S.size() && S[npos]!=char('a'+i)) npos++; 
 
        if(npos>=S.size()) good=0; 
        if(good){ 
          CL(b,0); 
          FOR(j,npos+1,S.size()) b[S[j]-'a']++; 
          REP(j,26)if(b[j]<a[j]) good=0; 
        } 
 
        a[i]++; 
 
        if(good){ 
          res.pb(char('a'+i)); 
          a[i]--; 
          pos=npos; 
          break; 
        } 
      } 
    } 
    return res; 
  } 
}; 
 
 
 
// Powered by FileEdit
// Powered by moj 4.17 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/