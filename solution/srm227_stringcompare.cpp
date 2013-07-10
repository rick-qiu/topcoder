/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3532
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

class StringCompare {
public:
    int simpleDifference(string a, string b);
};

int StringCompare::simpleDifference(string a, string b) {
    int ret;
    return ret;
}


int test0() {
    string a = "TICK";
    string b = "TOCK";
    StringCompare* pObj = new StringCompare();
    clock_t start = clock();
    int result = pObj->simpleDifference(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string a = "CAT";
    string b = "DOG";
    StringCompare* pObj = new StringCompare();
    clock_t start = clock();
    int result = pObj->simpleDifference(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string a = "APPLE";
    string b = "APPLES";
    StringCompare* pObj = new StringCompare();
    clock_t start = clock();
    int result = pObj->simpleDifference(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string a = "FANTASTIC";
    string b = "ANTASTIC";
    StringCompare* pObj = new StringCompare();
    clock_t start = clock();
    int result = pObj->simpleDifference(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string a = "ANTIDISESTABLISHMENTARIANISM";
    string b = "FLOCCIPAUCINIHILIPIFICATION";
    StringCompare* pObj = new StringCompare();
    clock_t start = clock();
    int result = pObj->simpleDifference(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string a = "OIL";
    string b = "PFJMFWXRQYXBNJNTWIZVSRJIKPGIWEWN";
    StringCompare* pObj = new StringCompare();
    clock_t start = clock();
    int result = pObj->simpleDifference(a, b);
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
    string a = "UCWHELOLFDGGPYKMZ";
    string b = "CGHEAXJAMRSMDDNOJEFAOFVPAIVNSGJG";
    StringCompare* pObj = new StringCompare();
    clock_t start = clock();
    int result = pObj->simpleDifference(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string a = "ZLOGAPUZTOHKFQGKSRSNFYVVQTIQMRJBSVOY";
    string b = "J";
    StringCompare* pObj = new StringCompare();
    clock_t start = clock();
    int result = pObj->simpleDifference(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string a = "FYLI";
    string b = "WFSKQDNKTRH";
    StringCompare* pObj = new StringCompare();
    clock_t start = clock();
    int result = pObj->simpleDifference(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string a = "XZJC";
    string b = "COOGCEZEXKOZZQMKLLTTIL";
    StringCompare* pObj = new StringCompare();
    clock_t start = clock();
    int result = pObj->simpleDifference(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string a = "DHODY";
    string b = "RYJSGPJWLIUIH";
    StringCompare* pObj = new StringCompare();
    clock_t start = clock();
    int result = pObj->simpleDifference(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string a = "SWGDCMBWUWONPVFLMDICPSC";
    string b = "WVKUDUGHVREBFMZEQLXOKMRKJIHNKGNA";
    StringCompare* pObj = new StringCompare();
    clock_t start = clock();
    int result = pObj->simpleDifference(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string a = "QCJNMXMDDLEAQVAZRLDXLOK";
    string b = "MQBCMDFZYOXENRKLX";
    StringCompare* pObj = new StringCompare();
    clock_t start = clock();
    int result = pObj->simpleDifference(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string a = "JVABWPF";
    string b = "DHWKWEGKQWPLOFK";
    StringCompare* pObj = new StringCompare();
    clock_t start = clock();
    int result = pObj->simpleDifference(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string a = "JKBEMNPFOYWHCJTLMYWRESHPDBSYNXRVPNHWDEXT";
    string b = "OHZCYXXCCPYUQGGNZZFLWKTOTIJUDLUN";
    StringCompare* pObj = new StringCompare();
    clock_t start = clock();
    int result = pObj->simpleDifference(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string a = "VLIXLURSQUYXQYRVZMKIHZMNWZYINMSXUGRZIVTVIZP";
    string b = "PUIUPSRDXKOOYTTHYTVWIUZYFZRZVEYNOWZLIWZUWHPVNWYUK";
    StringCompare* pObj = new StringCompare();
    clock_t start = clock();
    int result = pObj->simpleDifference(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string a = "YFYSVROUTXXSRSRQTWGVVXJZYXVKWTOU";
    string b = "FVRUTIWQTQCKVKVRXZZUTMYRHYRNYVVNLQAYIX";
    StringCompare* pObj = new StringCompare();
    clock_t start = clock();
    int result = pObj->simpleDifference(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string a = "TVLMCVVXKUVNYVPCTZVNRSRUTYWYPFUGTUYXE";
    string b = "OYLWYLQKWTXWXNPNZUZRTWLMYUYVQQNVN";
    StringCompare* pObj = new StringCompare();
    clock_t start = clock();
    int result = pObj->simpleDifference(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string a = "HRQQNXVUVYFIZJRXZQSNQUYNJOQ";
    string b = "WSYUPMFUSUSQVYMRNZOQLJSFZIYLXYVMRXSTUSTQL";
    StringCompare* pObj = new StringCompare();
    clock_t start = clock();
    int result = pObj->simpleDifference(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string a = "REPBIZQVVSHBMWZTITQZHXSRNGOUWRNOXVNWR";
    string b = "QMZNLRSIQZYSSWPBYPTPZZORXZYRZRH";
    StringCompare* pObj = new StringCompare();
    clock_t start = clock();
    int result = pObj->simpleDifference(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string a = "LRPYHYJVPITLUWNSUQVTLDKGY";
    string b = "YUYTWYYNKRMUYKWZOXOOUZWSXXRKZYSRLM";
    StringCompare* pObj = new StringCompare();
    clock_t start = clock();
    int result = pObj->simpleDifference(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string a = "SMTRUVKMMSMWRRRGZLDPTNNOWUUUHERXVOVDQLKTZ";
    string b = "SOSNOQZWPPSPJNOWYPLVSWRXYSSZUXPTVSZFTYXHTYMP";
    StringCompare* pObj = new StringCompare();
    clock_t start = clock();
    int result = pObj->simpleDifference(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string a = "YIOPWVQRKMRXFXNWRWSQOWHOIZZQYVTTVUZVW";
    string b = "TTSRELUOQTFSTOWWUWRVLRSVMSLNSTRSPYOTP";
    StringCompare* pObj = new StringCompare();
    clock_t start = clock();
    int result = pObj->simpleDifference(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string a = "MXVPIIPGZZZGTRTQVKUQZQWUXTHVIYLWZOOMLYWO";
    string b = "KQPZVXYRHHSSSSSCVFZRXONXUUOXPSWTPMWJWWTYOXYOZS";
    StringCompare* pObj = new StringCompare();
    clock_t start = clock();
    int result = pObj->simpleDifference(a, b);
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
    string a = "ZVSGYYSXXWYXSYQZZQVSVGKJZWLWZHSQVSWAYPTDDSQXWW";
    string b = "VNNGVDHXLXPQNEQOWNHIZZWMTRYQTL";
    StringCompare* pObj = new StringCompare();
    clock_t start = clock();
    int result = pObj->simpleDifference(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string a = "A";
    string b = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    StringCompare* pObj = new StringCompare();
    clock_t start = clock();
    int result = pObj->simpleDifference(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string a = "DLKSDJSDSDGDDSFDSFSDFSDFSDFSGDS";
    string b = "A";
    StringCompare* pObj = new StringCompare();
    clock_t start = clock();
    int result = pObj->simpleDifference(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string a = "TICKKKK";
    string b = "TOCK";
    StringCompare* pObj = new StringCompare();
    clock_t start = clock();
    int result = pObj->simpleDifference(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string a = "AAA";
    string b = "AAB";
    StringCompare* pObj = new StringCompare();
    clock_t start = clock();
    int result = pObj->simpleDifference(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string a = "FAAAAAAAAAAAAAAAAAAAA";
    string b = "A";
    StringCompare* pObj = new StringCompare();
    clock_t start = clock();
    int result = pObj->simpleDifference(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string a = "A";
    string b = "BBB";
    StringCompare* pObj = new StringCompare();
    clock_t start = clock();
    int result = pObj->simpleDifference(a, b);
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
    string a = "ASA";
    string b = "DSA";
    StringCompare* pObj = new StringCompare();
    clock_t start = clock();
    int result = pObj->simpleDifference(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string a = "ASAW";
    string b = "DSAI";
    StringCompare* pObj = new StringCompare();
    clock_t start = clock();
    int result = pObj->simpleDifference(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string a = "CDE";
    string b = "ABCDEFGH";
    StringCompare* pObj = new StringCompare();
    clock_t start = clock();
    int result = pObj->simpleDifference(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string a = "AAAAAAAAAAAAAAAAAAAAA";
    string b = "A";
    StringCompare* pObj = new StringCompare();
    clock_t start = clock();
    int result = pObj->simpleDifference(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string a = "TIKOOOOOHFMKHFHJGFVGVBDFDGFDFDGJDFGDJKGHJGHKDGMBNM";
    string b = "TOCK";
    StringCompare* pObj = new StringCompare();
    clock_t start = clock();
    int result = pObj->simpleDifference(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string a = "ABCCDEFGHIJKLMNOPQ";
    string b = "A";
    StringCompare* pObj = new StringCompare();
    clock_t start = clock();
    int result = pObj->simpleDifference(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string a = "AAAAAAAAAAAA";
    string b = "A";
    StringCompare* pObj = new StringCompare();
    clock_t start = clock();
    int result = pObj->simpleDifference(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string a = "TICK";
    string b = "I";
    StringCompare* pObj = new StringCompare();
    clock_t start = clock();
    int result = pObj->simpleDifference(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string a = "Z";
    string b = "ABCDEFGH";
    StringCompare* pObj = new StringCompare();
    clock_t start = clock();
    int result = pObj->simpleDifference(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=11993089&rd=6516&pm=3532
********************************************************************************
#include <string> 
#include <vector> 
 
using namespace std; 
 
#define min(a,b) ((a)<(b)?(a):(b)) 
#define fo(i,a,b) for(i=(a);i<=(b);i++) 
#define sz size() 
 
class StringCompare  
{ 
  public: 
       
 
  int simpleDifference(string a, string b)  
  { 
    int ret=0,i;     
    fo(i,0,min(a.sz-1,b.sz-1)) 
      if(a[i]==b[i]) ret++; 
    return ret; 
  } 
 
   
  
};

********************************************************************************
*******************************************************************************/