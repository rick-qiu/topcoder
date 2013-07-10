/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3442
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

class TextCompressor {
public:
    string longestRepeat(string sourceText);
};

string TextCompressor::longestRepeat(string sourceText) {
    string ret;
    return ret;
}


int test0() {
    string sourceText = "ABCDABCFG";
    TextCompressor* pObj = new TextCompressor();
    clock_t start = clock();
    string result = pObj->longestRepeat(sourceText);
    clock_t end = clock();
    delete pObj;
    string expected = "ABC";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string sourceText = "ABABA";
    TextCompressor* pObj = new TextCompressor();
    clock_t start = clock();
    string result = pObj->longestRepeat(sourceText);
    clock_t end = clock();
    delete pObj;
    string expected = "AB";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string sourceText = "This is a test.";
    TextCompressor* pObj = new TextCompressor();
    clock_t start = clock();
    string result = pObj->longestRepeat(sourceText);
    clock_t end = clock();
    delete pObj;
    string expected = "is ";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string sourceText = "Testing testing 1 2 3.";
    TextCompressor* pObj = new TextCompressor();
    clock_t start = clock();
    string result = pObj->longestRepeat(sourceText);
    clock_t end = clock();
    delete pObj;
    string expected = "esting ";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string sourceText = "The quick brown fox jumps over the lazy dog.";
    TextCompressor* pObj = new TextCompressor();
    clock_t start = clock();
    string result = pObj->longestRepeat(sourceText);
    clock_t end = clock();
    delete pObj;
    string expected = "he ";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string sourceText = "x2qCxYuG7CmJBUbDesQ7b eAML .RkRwOBOOIib eAMLKKQ";
    TextCompressor* pObj = new TextCompressor();
    clock_t start = clock();
    string result = pObj->longestRepeat(sourceText);
    clock_t end = clock();
    delete pObj;
    string expected = "b eAML";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string sourceText = "0U VZacAqiRxKdk4 yZSZ4bdXjqiRxKdk4 yZSZ4bdXx";
    TextCompressor* pObj = new TextCompressor();
    clock_t start = clock();
    string result = pObj->longestRepeat(sourceText);
    clock_t end = clock();
    delete pObj;
    string expected = "qiRxKdk4 yZSZ4bdX";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string sourceText = "l6D6a56HtdHNu9VqMKFkVs5b74ktZ49qYkPC2siS8Gs5b74f";
    TextCompressor* pObj = new TextCompressor();
    clock_t start = clock();
    string result = pObj->longestRepeat(sourceText);
    clock_t end = clock();
    delete pObj;
    string expected = "s5b74";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string sourceText = "rw4T4AwB9cwdoqkyezZ0Mhzj7ZW0J5DQj7ZW0J5SCMq0VsF ";
    TextCompressor* pObj = new TextCompressor();
    clock_t start = clock();
    string result = pObj->longestRepeat(sourceText);
    clock_t end = clock();
    delete pObj;
    string expected = "j7ZW0J5";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string sourceText = "64iYJ6jLNBRMWRz9J5IoXrsepy1LNBRMWRz9J5IoXrsepy1Tu";
    TextCompressor* pObj = new TextCompressor();
    clock_t start = clock();
    string result = pObj->longestRepeat(sourceText);
    clock_t end = clock();
    delete pObj;
    string expected = "LNBRMWRz9J5IoXrsepy1";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string sourceText = "wTrIBzh6C8zGhmyjNnvAPpfezOOE.Jb06.NwTrIBzh6C9R4";
    TextCompressor* pObj = new TextCompressor();
    clock_t start = clock();
    string result = pObj->longestRepeat(sourceText);
    clock_t end = clock();
    delete pObj;
    string expected = "wTrIBzh6C";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string sourceText = "3 XLDn3.C5irEoOPpRSPXNgLZF2XLDn3.C5irEoOPpRSPXNgL";
    TextCompressor* pObj = new TextCompressor();
    clock_t start = clock();
    string result = pObj->longestRepeat(sourceText);
    clock_t end = clock();
    delete pObj;
    string expected = "XLDn3.C5irEoOPpRSPXNgL";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string sourceText = "1UTwY8nazvXHJmVv2BpUGmPDw7UTwY8nazvXHJmVv2BpUkW";
    TextCompressor* pObj = new TextCompressor();
    clock_t start = clock();
    string result = pObj->longestRepeat(sourceText);
    clock_t end = clock();
    delete pObj;
    string expected = "UTwY8nazvXHJmVv2BpU";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string sourceText = "5dM3orWH9N2ajEandsntP6.y14NBkkmplOyN2ajEandxQP";
    TextCompressor* pObj = new TextCompressor();
    clock_t start = clock();
    string result = pObj->longestRepeat(sourceText);
    clock_t end = clock();
    delete pObj;
    string expected = "N2ajEand";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string sourceText = "EbYLxNpxCd.vchJWh4j.ZN83sEbYLxNpxCd.vchJWh4j.ZN83";
    TextCompressor* pObj = new TextCompressor();
    clock_t start = clock();
    string result = pObj->longestRepeat(sourceText);
    clock_t end = clock();
    delete pObj;
    string expected = "EbYLxNpxCd.vchJWh4j.ZN83";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string sourceText = "vTlRYbXuKfhf2tRTlTWwU.8bPuKfhf2tRTlTWwU.8bP2J4C";
    TextCompressor* pObj = new TextCompressor();
    clock_t start = clock();
    string result = pObj->longestRepeat(sourceText);
    clock_t end = clock();
    delete pObj;
    string expected = "uKfhf2tRTlTWwU.8bP";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string sourceText = "0VQWuFOIiUsWQUhwooeWxxt9PVQWuFOIiUsWQUhwooeWxxt9P";
    TextCompressor* pObj = new TextCompressor();
    clock_t start = clock();
    string result = pObj->longestRepeat(sourceText);
    clock_t end = clock();
    delete pObj;
    string expected = "VQWuFOIiUsWQUhwooeWxxt9P";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string sourceText = "W0nGW7lDTxGmpFZ.RLT47bGGW7lDTxGmpFZF3R YTP";
    TextCompressor* pObj = new TextCompressor();
    clock_t start = clock();
    string result = pObj->longestRepeat(sourceText);
    clock_t end = clock();
    delete pObj;
    string expected = "GW7lDTxGmpFZ";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string sourceText = "qhfWKdneycSMT9vGGUjUOPycSMT9vGGUuqyD.AyS2.VbYy9q";
    TextCompressor* pObj = new TextCompressor();
    clock_t start = clock();
    string result = pObj->longestRepeat(sourceText);
    clock_t end = clock();
    delete pObj;
    string expected = "ycSMT9vGGU";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string sourceText = "yZ8KKi 2wFu3aR.5DQieF5t.t00QPZI57zDQieF5t.t00QPZZ";
    TextCompressor* pObj = new TextCompressor();
    clock_t start = clock();
    string result = pObj->longestRepeat(sourceText);
    clock_t end = clock();
    delete pObj;
    string expected = "DQieF5t.t00QPZ";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string sourceText = "liMEizM7uOSy40ems8wDpX30UtBDxE61riMSxJ7A61riMSxJ7";
    TextCompressor* pObj = new TextCompressor();
    clock_t start = clock();
    string result = pObj->longestRepeat(sourceText);
    clock_t end = clock();
    delete pObj;
    string expected = "61riMSxJ7";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string sourceText = "gynSQMy5RvcPk7YHyG9PNkr74niisi 1HaEuWV2Bsz7YHyGk";
    TextCompressor* pObj = new TextCompressor();
    clock_t start = clock();
    string result = pObj->longestRepeat(sourceText);
    clock_t end = clock();
    delete pObj;
    string expected = "7YHyG";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string sourceText = ".qoxtk7K.vsL9N1Cn X6tug4K9N1Cn X6tug4nBouWs";
    TextCompressor* pObj = new TextCompressor();
    clock_t start = clock();
    string result = pObj->longestRepeat(sourceText);
    clock_t end = clock();
    delete pObj;
    string expected = "9N1Cn X6tug4";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string sourceText = "NNkHm.svYlAkpk AO6d7aqj2Rku HcAjdpACyeUYlAkpk 9";
    TextCompressor* pObj = new TextCompressor();
    clock_t start = clock();
    string result = pObj->longestRepeat(sourceText);
    clock_t end = clock();
    delete pObj;
    string expected = "YlAkpk ";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string sourceText = "II0jFu2WXPh2mgByunh8ZII0jFu2WXPh2mgByuUZl.eoCb";
    TextCompressor* pObj = new TextCompressor();
    clock_t start = clock();
    string result = pObj->longestRepeat(sourceText);
    clock_t end = clock();
    delete pObj;
    string expected = "II0jFu2WXPh2mgByu";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string sourceText = "AAAA";
    TextCompressor* pObj = new TextCompressor();
    clock_t start = clock();
    string result = pObj->longestRepeat(sourceText);
    clock_t end = clock();
    delete pObj;
    string expected = "AA";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string sourceText = "www www www ertsfdz eradf fgsdfz t e ";
    TextCompressor* pObj = new TextCompressor();
    clock_t start = clock();
    string result = pObj->longestRepeat(sourceText);
    clock_t end = clock();
    delete pObj;
    string expected = " ";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string sourceText = "ABCABC";
    TextCompressor* pObj = new TextCompressor();
    clock_t start = clock();
    string result = pObj->longestRepeat(sourceText);
    clock_t end = clock();
    delete pObj;
    string expected = "ABC";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string sourceText = "aa";
    TextCompressor* pObj = new TextCompressor();
    clock_t start = clock();
    string result = pObj->longestRepeat(sourceText);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string sourceText = "ABABA";
    TextCompressor* pObj = new TextCompressor();
    clock_t start = clock();
    string result = pObj->longestRepeat(sourceText);
    clock_t end = clock();
    delete pObj;
    string expected = "AB";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string sourceText = "a";
    TextCompressor* pObj = new TextCompressor();
    clock_t start = clock();
    string result = pObj->longestRepeat(sourceText);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string sourceText = "dsfg sdfoip8sy dffd dffd dsfg sedr dfg";
    TextCompressor* pObj = new TextCompressor();
    clock_t start = clock();
    string result = pObj->longestRepeat(sourceText);
    clock_t end = clock();
    delete pObj;
    string expected = "dsfg s";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string sourceText = "CBCBCFG";
    TextCompressor* pObj = new TextCompressor();
    clock_t start = clock();
    string result = pObj->longestRepeat(sourceText);
    clock_t end = clock();
    delete pObj;
    string expected = "CB";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string sourceText = "AA";
    TextCompressor* pObj = new TextCompressor();
    clock_t start = clock();
    string result = pObj->longestRepeat(sourceText);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string sourceText = "eeeeeeeeeeeeeeeeeeeeeeeeeeee";
    TextCompressor* pObj = new TextCompressor();
    clock_t start = clock();
    string result = pObj->longestRepeat(sourceText);
    clock_t end = clock();
    delete pObj;
    string expected = "eeeeeeeeeeeeee";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string sourceText = "aefg2345l0p. q";
    TextCompressor* pObj = new TextCompressor();
    clock_t start = clock();
    string result = pObj->longestRepeat(sourceText);
    clock_t end = clock();
    delete pObj;
    string expected = " ";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string sourceText = "The quick brown fox jumps over the lazy dog.";
    TextCompressor* pObj = new TextCompressor();
    clock_t start = clock();
    string result = pObj->longestRepeat(sourceText);
    clock_t end = clock();
    delete pObj;
    string expected = "he ";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string sourceText = "Testing testing 1 2 3.";
    TextCompressor* pObj = new TextCompressor();
    clock_t start = clock();
    string result = pObj->longestRepeat(sourceText);
    clock_t end = clock();
    delete pObj;
    string expected = "esting ";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string sourceText = "ABABABABCCCUCCC";
    TextCompressor* pObj = new TextCompressor();
    clock_t start = clock();
    string result = pObj->longestRepeat(sourceText);
    clock_t end = clock();
    delete pObj;
    string expected = "ABAB";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=10600282&rd=5868&pm=3442
********************************************************************************
#include <string> 
#include <vector> 
#include <algorithm> 
 
using namespace std; 
 
 
 
class TextCompressor 
{ 
public: 
  string longestRepeat(string s) 
  { 
    string res=""; 
      for(int i=0;i<s.size();i++) 
      { 
        for(int j=1;j<s.size()-i;j++) 
         { 
           string a=s.substr(i,j); 
            if(s.find(a,i+a.size())!=string::npos && res.size()<a.size()) 
              res=a; 
         } 
      } 
 
    return res; 
  } 
   
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/