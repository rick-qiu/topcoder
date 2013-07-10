/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11471
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

class LargestSubsequence {
public:
    string getLargest(string s);
};

string LargestSubsequence::getLargest(string s) {
    string ret;
    return ret;
}


int test0() {
    string s = "test";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "tt";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string s = "a";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string s = "example";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "xple";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string s = "aquickbrownfoxjumpsoverthelazydog";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zyog";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string s = "zzyyxxwwvvuuttssrrqqppoonnmmllkkjjiihhggffeeddccaa";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zzyyxxwwvvuuttssrrqqppoonnmmllkkjjiihhggffeeddccaa";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string s = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string s = "dtbsthudhqvqxxmqxusna";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxusna";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string s = "ddifmyqoojkeyiee";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "yyiee";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string s = "mhdsrshovdancelcihqcrsfdfvsrgstsxvzh";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zh";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string s = "vslheaxwhc";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "xwhc";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string s = "lumguibrvvnvwnwhzail";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zl";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string s = "hctiodxvzmllfgri";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zri";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string s = "zjxhngujgnhlqpkfwuseqzcrxzjsltdekwoiklfgkywdpj";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zzzywpj";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string s = "sw";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "w";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string s = "xpmjapuoeqouquzjnuyxzajdrn";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zzrn";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string s = "rkkpfgidl";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "rpl";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string s = "phqhlsucxtebkyemlykfmzlznmopuhgvdambgpiglo";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zzvpo";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string s = "bzslcgclmgzulhxdrhkogsbuofrjrapcdutisprkrvosug";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zzxvug";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string s = "puluqyrejeyurtkeaufs";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "yyuus";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string s = "znm";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "znm";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string s = "nxaiqgj";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "xqj";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string s = "rsng";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "sng";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string s = "sxcpfwwyjsjfkrxpycnvcwvcnghwphpxrlfmcccvyppfr";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "yyyr";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string s = "ubvbsmbdayynthasljdikieqdjbnmr";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "yytsr";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string s = "dvypuukxnjiqwavhfsypfghhqhumbfznmjn";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "znn";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string s = "t";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "t";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string s = "lohyungouxtdkoqncecbecamiglwxamgkyjoisgymbeynmpftc";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "yyyytc";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string s = "mvcjkcbtzdyet";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zyt";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string s = "zjejurusuqdatseyswqghs";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zyws";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string s = "rkjqiepcwkgoobtawithjybepylvvwm";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "yywm";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string s = "sggqrxlcadkjjxcomhqgqpzkyetpz";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zz";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string s = "oizojobmoeyncmosopractypj";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zyypj";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string s = "qxydejwry";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "yy";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string s = "rnlrwcsgegebmwweybg";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "yg";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string s = "xbulkgnapqrb";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "xurb";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string s = "fqgq";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "qq";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string s = "euthsnsugfxtmfkwtlldwenybjfafvecasosvnxbs";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "yxs";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string s = "oxedpvevehtmfsletplcpnndvlxduxxwieibnthkhfnkpvhj";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxwvj";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string s = "akvccoziowkmrzpdwsvybiszfccgowzlosn";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zzzzsn";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string s = "ixnaxxjgbmisqsjxjxgc";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxgc";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string s = "i";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "i";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string s = "djouowzmqzafubqqenotqmwzfgcmtpveanvmb";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zzzvvmb";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string s = "qparcaihdnyk";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "yk";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string s = "frraeazgnzdmhtbtaymysglanvdqlbmqicqw";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zzyyw";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string s = "jeottiolzlxcy";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zy";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string s = "gubnawecsnsekp";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "wssp";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string s = "uiktpzkdxynlifewoqmmbilpddlpecxndkebucbghbjqan";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zyxuqn";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string s = "cjpxagblsqilexcqzjngqhnc";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zqnc";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string s = "jvgloimmvsdhfgdafmzhxbzwfhkntrjpaocnidhfzeooqp";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zzzqp";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string s = "mdvmgsxmxnvxgjtsheoxvmgoryhnkswbznzvfrdrqjm";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zzvrrqm";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string s = "aanhrzdsbbhdoezohvuhzoeaekxpwhnj";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zzzxwnj";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string s = "hhf";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "hhf";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string s = "onltutgmnnpxiwue";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "xwue";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string s = "ygng";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "yng";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string s = "sgrmksiyzesherusczthyotrbtzvegbzkulsprvikhohlyg";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zzzzyg";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string s = "rgzoaitknjjioypjiaevejqldjgtw";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zyw";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string s = "iynwupnztulzbyk";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zzyk";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string s = "mrtnnhfvaqtctfuipndaye";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "ye";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string s = "zegbcvvxxfqxo";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zxxxo";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string s = "kwpxplhnattmiuhdq";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "xuq";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string s = "zkhpjjfztbnxs";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zzxs";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string s = "wdxxiqzyhhxsp";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zyxsp";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string s = "egdnuvamuhkucdfvssxavdjuymvzgfymr";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zyr";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string s = "kwjuffpavnbkypmtfuxvabwj";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "yxwj";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string s = "jbxoquxgeettykaciacheofaqceidc";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "yqidc";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string s = "pnmqqmkogrhghpqwcpzdspbtvlvpotgdikgm";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zvvtm";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string s = "vwqmytncvpxazwrjwroacwono";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zwwwoo";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string s = "oehulzriqbdtawyytjskhlemqmdshspq";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zyytsssq";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string s = "mlwlasmlxqriipmqglsvswhnxyirhaofgyhkiwpo";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "yywpo";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string s = "eszpgnfapcsbftxagmmdcqi";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zxqi";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string s = "rbjopthedsdewdudlupyicpmdtpmqrf";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "ytrf";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string s = "renwjvqjfdzywfxpajvemksbdb";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zyxvsdb";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string s = "hnrthrdkyalotlymzcumobmvzvstciqmnbxdlgftjgpfbm";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zzxtpm";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string s = "uzkbkzmdozxqmvvmbbioyljyemntpldykxwjgnllqrdugrahe";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zzzyyyxwurhe";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string s = "tfhsnjkvbndnnqjkwfd";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "wfd";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string s = "iy";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "y";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string s = "zyeqfuqghbnhhrboymupudbomtlql";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zyyuutql";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string s = "yougpkmhhdmkorkkincpcnhxunainwqhbmmxkhwfarlahdmoak";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "yxxwrok";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string s = "ljmlijlnlfaaynvqyhtxck";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "yyxk";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string s = "ezhidvylyuyqluoxozyv";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zzyv";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string s = "kjqhcdshyfeqiwrencjowhqksyqeyeutemfgmyxs";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "yyyyxs";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string s = "ydikqgggygevjdeyxpnzvmdvfkxralhnuvywensvwe";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zywwe";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string s = "rdpwejzcdxxcimwm";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zxxwm";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string s = "jtlgzwjtyaewnvgezxcyntlj";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zzytlj";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string s = "hjypqtcafblpnlxeaavswvaijkflyrekr";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "yyrr";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string s = "drmtfhglfcmsobeqibtjcskngttvmzzpgkvxwctv";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zzxwv";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string s = "wvttsspponkjjihfebaa";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "wvttsspponkjjihfebaa";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string s = "xwssrplkihgfc";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "xwssrplkihgfc";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string s = "zzzyyyxwwvtronnlllljiiigeddccbbaa";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zzzyyyxwwvtronnlllljiiigeddccbbaa";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string s = "l";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "l";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string s = "zxrrmfda";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zxrrmfda";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string s = "xwwvvutttssqqpppoonnnmllkkkkjjjihhffccccbbbba";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "xwwvvutttssqqpppoonnnmllkkkkjjjihhffccccbbbba";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string s = "zyxuuuttttssqpoommmlkkjihgeeddccaaa";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zyxuuuttttssqpoommmlkkjihgeeddccaaa";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string s = "yxwsssrllkc";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "yxwsssrllkc";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string s = "yvqqoollkca";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "yvqqoollkca";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string s = "zyutttsqqppponnnnnmlllkkkjihhhggeeeddccbbb";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zyutttsqqppponnnnnmlllkkkjihhhggeeeddccbbb";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string s = "zxxvsrponmmljiiihgba";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zxxvsrponmmljiiihgba";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string s = "xwvssqoljjjiiigfccbaa";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "xwvssqoljjjiiigfccbaa";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string s = "zzywwutsssrrronmllljjiihhgggggfeeea";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zzywwutsssrrronmllljjiihhgggggfeeea";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string s = "wvsqonkifecb";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "wvsqonkifecb";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string s = "zzyyyxxwvvutssrrrqqppponmllkjjiihgffdcbbbaa";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zzyyyxxwvvutssrrrqqppponmllkjjiihgffdcbbbaa";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string s = "zzywuuusssrrrqponmlkkkiigfedccb";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zzywuuusssrrrqponmlkkkiigfedccb";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string s = "yyyyyyxxwwwvutttssrqqppppoonnmkjihgggddddaa";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "yyyyyyxxwwwvutttssrqqppppoonnmkjihgggddddaa";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string s = "zxooc";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zxooc";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string s = "utqp";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "utqp";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string s = "yxuttssrrnmjida";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "yxuttssrrnmjida";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string s = "ffffeeeeeddddccccccccccbbbbbbbbaaa";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "ffffeeeeeddddccccccccccbbbbbbbbaaa";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string s = "ffeeedcccca";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "ffeeedcccca";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string s = "fdda";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "fdda";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string s = "ffffeeeeeeddddcccccccbbbbbbbaaaaaaaaa";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "ffffeeeeeeddddcccccccbbbbbbbaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string s = "fffeeeeeddddddddcccccccbbbbbbbbbaaaa";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "fffeeeeeddddddddcccccccbbbbbbbbbaaaa";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    string s = "ffffeeeeeedddccccccbbbaaaa";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "ffffeeeeeedddccccccbbbaaaa";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    string s = "ffffffeeeeedddddddcccccccbbbbbbbbaaaaaaaa";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "ffffffeeeeedddddddcccccccbbbbbbbbaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    string s = "ddba";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "ddba";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    string s = "fffbbaaa";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "fffbbaaa";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    string s = "fedddccccbbbaa";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "fedddccccbbbaa";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    string s = "ffffeeeeeddbaaa";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "ffffeeeeeddbaaa";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    string s = "fffffeeeeeeeeeeedddddcccccccccccbbbbbbbbbbbaaaaa";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "fffffeeeeeeeeeeedddddcccccccccccbbbbbbbbbbbaaaaa";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    string s = "ffebbb";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "ffebbb";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    string s = "ffeedddcbbbbaa";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "ffeedddcbbbbaa";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    string s = "fffeeeeddccccbbbbbbbbaaaaaa";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "fffeeeeddccccbbbbbbbbaaaaaa";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    string s = "bbbb";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "bbbb";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    string s = "fffedaaaa";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "fffedaaaa";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    string s = "bbaaaabaabbaabbbaaabbaaabaaabababaaababaaaabbbbba";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "bbbbbbbbbbbbbbbbbbbbba";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    string s = "bbabbabbabaababaababaaaaaabaabab";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "bbbbbbbbbbbbbb";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    string s = "abbbbabbbbbbabbbbabbababbabbabbba";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "bbbbbbbbbbbbbbbbbbbbbbbba";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    string s = "bbbbbaabbaaabaabbababaabbababaabba";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "bbbbbbbbbbbbbbbbbba";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    string s = "bbbabababbaa";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "bbbbbbbaa";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    string s = "abbbbabbabbbabaaaaabaabaabaaababbbbabbb";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "bbbbbbbbbbbbbbbbbbbbb";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    string s = "babbaaaa";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "bbbaaaa";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    string s = "abbaabbaaaaabbbbbabbaaaaa";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "bbbbbbbbbbbaaaaa";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    string s = "baaababbaaabbbabbaaaaababaaabaaaaa";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "bbbbbbbbbbbbaaaaa";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    string s = "baabbaba";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "bbbba";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    string s = "aedcbacdeacdedbebbc";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "eeeec";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    string s = "caefdadbeedbebdcbcdca";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "feeeddca";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    string s = "fbbabcccbbbbfcabf";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "fff";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    string s = "ceaeedacaffddcfcdaebacdeeeb";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "fffeeeeb";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    string s = "dcbecaded";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "eed";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    string s = "ccddabecdfcbdefeedbbdaacda";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "ffeeddda";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    string s = "dcffbbbbcfefedbbbfcdafddebfcdfdeeccfe";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "fffffffffe";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    string s = "ffebcdbfccedbfaeaedaaaeefebdcdfa";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "ffffffa";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    string s = "addcfafeaeefcbefcbbcedfbcfcdffcaaeeafdadcfca";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "ffffffffffca";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    string s = "fcb";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "fcb";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    string s = "fgfdsdgaasfdghfgffggffgfgf";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "sshgggggf";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    string s = "asxcsa";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "xsa";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    string s = "fhjtgui";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "ui";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    string s = "naa";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "naa";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    string s = "ttt";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "ttt";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    string s = "maxbm";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "xm";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    string s = "baaaf";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "f";
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    string s = "zba";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zba";
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    string s = "zzzzzzzzzzddddddddddccccccccccbbbbbbbbbbaaaaaaaaaa";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zzzzzzzzzzddddddddddccccccccccbbbbbbbbbbaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    string s = "hhhhhhh";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "hhhhhhh";
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    string s = "tatttatttt";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "tttttttt";
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    string s = "aaaaaaaaa";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    string s = "abcdefghgiabcdefghgiabcdefghgiabcdefghgiabcdefghgi";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "iiiii";
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    string s = "zzzzz";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zzzzz";
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    string s = "aa";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "aa";
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    string s = "bza";
    LargestSubsequence* pObj = new LargestSubsequence();
    clock_t start = clock();
    string result = pObj->getLargest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "za";
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=13336196&rd=14543&pm=11471
********************************************************************************
#define KASE 0 
 
#include <cstdio> 
#include <cstring> 
#include <cstdlib> 
#include <cmath> 
#include <ctime> 
#include <cassert> 
#include <utility> 
#include <iomanip> 
#include <iterator> 
#include <sstream> 
#include <iostream> 
#include <fstream> 
#include <algorithm> 
#include <numeric> 
#include <functional> 
#include <memory> 
#include <complex> 
#include <limits> 
#include <string> 
#include <vector> 
#include <queue> 
#include <bitset> 
#include <stack> 
#include <list> 
#include <map> 
#include <set> 
 
using namespace std; 
 
#define REP(t, n) for(int t=0; t<(int)(n); ++t) 
#define FOR(t, x, y) for(int t=x; t<(int)(y); ++t) 
#define FOREACH(it, x) for(__typeof((x).begin()) it = (x).begin(); it != (x).end(); ++ it) 
#define MSET(x, with) memset(x, with, sizeof(x)) 
 
#define all(v) (v).begin(), (v).end() 
#define uniquify(v) {sort(all(v));(v).erase(unique(all(v)), (v).end());} 
  
class LargestSubsequence 
{ 
public: 
  string getLargest(string s) 
  { 
    ostringstream ss; 
 
    while(!s.empty()) 
    { 
      string::iterator it = max_element(s.begin(), s.end()); 
      ss << *it; 
      s.erase(s.begin(), it+1); 
    } 
    return ss.str(); 
 
  } 
}; 
 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester (Modified 2009)
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/