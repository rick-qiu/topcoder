/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10509
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

class TheEncryptionDivTwo {
public:
    string encrypt(string message);
};

string TheEncryptionDivTwo::encrypt(string message) {
    string ret;
    return ret;
}


int test0() {
    string message = "hello";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "abccd";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string message = "abcd";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "abcd";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string message = "topcoder";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdbefg";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string message = "encryption";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefghib";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string message = "adwuaaxcnleegluqvsczaguujoppchwecusmevz";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdaaefghiijhdklmfnajddopqqfrcifdmsiln";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string message = "ykquacpkggiianyoolwgykymwraiyigfuxagvwxfkcemiix";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefgbhhiiejakklmhabanmoeiaihpdqehrmqpbfsniiq";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string message = "amyulokgckc";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefghigi";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string message = "aaaabbbaaa";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaabbbaaa";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string message = "aaaaaabab";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaabab";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string message = "abaaabbaa";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "abaaabbaa";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string message = "aaaaaaa";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaa";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string message = "baaaaaa";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "abbbbbb";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string message = "abbaaaaba";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "abbaaaaba";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string message = "baaabaaaa";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "abbbabbbb";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string message = "bbbbbaa";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaabb";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string message = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string message = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string message = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string message = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string message = "iiiijllkiikiikkkijkjkiliikllkiiiiikkik";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaabccdaadaadddabdbdacaadccdaaaaaddad";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string message = "liiiiikkijlkikk";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "abbbbbccbdacbcc";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string message = "ikjiiijkiiiijlll";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "abcaaacbaaaacddd";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string message = "kiiiiikkiiliiiii";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "abbbbbaabbcbbbbb";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string message = "kliijiilkkijiikiiklljkiiikkjiikkkiiiiiilkik";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "abccdccbaacdccaccabbdacccaadccaaaccccccbaca";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string message = "ouswtvpoqsusuoqwwroruqpswsrrqoowoqooousvuouwuwuuxt";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefgahcbcbahddiaibhgcdciihaadahaaabcfbabdbdbbje";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string message = "oqwtwopsoutoqosovxxxtqwqosooowstououqqsvsoxssvoqst";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdcaefagdabafahiiidbcbafaaacfdagagbbfhfaiffhabfd";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string message = "ssquwtxpqosowqrsuqowouwowqtwswqxqwoovwxtoowxsuxsut";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "aabcdefgbhahdbiacbhdhcdhdbedadbfbdhhjdfehhdfacface";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string message = "qosvsrrstqouosuwttuowwqsqxowuwqotwwstwowuuwoxuosoo";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdceecfabgbcghffgbhhacaibhghabfhhcfhbhgghbigbcbb";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string message = "wtquputtsqooqotoqoootsuussqwooooqsuqtwtqoswvtoqopv";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdedbbfcggcgbgcgggbfddffcaggggcfdcbabcgfahbgcgeh";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string message = "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string message = "a";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string message = "ffffgggffffffffffgfgffgfffggfffffffffffgfffffff";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaabbbaaaaaaaaaababaabaaabbaaaaaaaaaaabaaaaaaa";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string message = "ghdytsrsrtstrggg";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefgfgefegaaa";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string message = "qwerewrewrere";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdcbdcbdcdc";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string message = "zabjhkaskbjbkzzxcjkayyasdhkas";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefbgfcdcfaahidfbjjbgkefbg";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string message = "zxcvbnmlkjhgfhjtuiknvdwrtuiknfdfdsaqwertyuiop";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefghijklmkjnopifdqrsnopifmqmqtuvrwsnxopyz";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string message = "asdasdlasdjsdgjskdgsdfsfsdfs";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "abcabcdabcebcfebgcfbchbhbchb";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string message = "bbbbbbbbaaaaaaccccc";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaabbbbbbccccc";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string message = "aa";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "aa";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string message = "aaaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbb";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbb";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string message = "aaz";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "aab";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string message = "ddffgggghhggddhtyn";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "aabbccccddccaadefg";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string message = "aaaabbbcdbzzadbdbejkghgjeghggeppozhfadzzsaabd";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaabbbcdbeeadbdbfghijigfijiifkklejmadeenaabd";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string message = "rjatydimofugclqurclqecdrhvqsuwbvntmryktdl";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefghijklmnokamnopmfaqroskturvdhaewdfn";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string message = "blahblahmammamia";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdabcdeceecefc";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string message = "ziang";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "abcde";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string message = "abaaba";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "abaaba";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string message = "pubaba";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdcd";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string message = "z";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string message = "bbd";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "aab";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string message = "aaabbbbbaaaaab";
    TheEncryptionDivTwo* pObj = new TheEncryptionDivTwo();
    clock_t start = clock();
    string result = pObj->encrypt(message);
    clock_t end = clock();
    delete pObj;
    string expected = "aaabbbbbaaaaab";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22755004&rd=13899&pm=10509
********************************************************************************
#include <climits> 
#include <queue> 
#include <cmath> 
#include <stack> 
#include <set> 
#include <cstring> 
#include <cstdio> 
#include <iostream> 
#include <vector> 
#include <string> 
#include <sstream> 
#include <map> 
#include <algorithm> 
#include <cstdlib> 
using namespace std; 
 
#define ll long long 
#define fe(i,a,n) for(int i = a, __n = (int)n; i < __n; i++) 
#define fi(i,a,n) for(int i = a, __n = (int)n; i <= __n; i++) 
#define all(v) v.begin(),v.end() 
#define DOUBLE_MAX numeric_limits<double>::max() 
#define DOUBLE_MIN numeric_limits<double>::min() 
#define ERRO 1e-10 
 
class TheEncryptionDivTwo { 
public: 
  string encrypt(string message)  { 
        string a; 
        char c = 'a'; 
        vector<bool> ok(260, false); 
        vector<char> alfa(260, ' '); 
        fe(i,0,message.size()) { 
            if(ok[message[i]]) 
                a.push_back(alfa[message[i]]); 
            else { 
                a.push_back(c); 
                ok[message[i]] = true; 
                alfa[message[i]] = c; 
                c++; 
            } 
        } 
        return a; 
  } 
  // end of encrypt 
   
 
}; 
// end of TheEncryptionDivTwo 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/