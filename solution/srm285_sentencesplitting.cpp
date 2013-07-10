/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6007
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

class SentenceSplitting {
public:
    int split(string sentence, int K);
};

int SentenceSplitting::split(string sentence, int K) {
    int ret;
    return ret;
}


int test0() {
    string sentence = "This is a test sentence";
    int K = 1;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string sentence = "This is another test sentence";
    int K = 2;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string sentence = "TheOnlyWord";
    int K = 37;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string sentence = "One veeeeeeeeeeeeeeeeeeery long word";
    int K = 2;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string sentence = "HUIUueVIk uDCCrzrNJOje Vw mIkGzM Dla eSYbaLpuIhaC";
    int K = 4;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string sentence = "a P m Zgfd rkv";
    int K = 1;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string sentence = "Ha K";
    int K = 4;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string sentence = "u cZ Mc iR";
    int K = 5;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
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
    string sentence = "VCAz ww M mJ d";
    int K = 5;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string sentence = "wg AIwP Q M eMKTN aU lK";
    int K = 1;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string sentence = "amD uD b xb kpiOLDK ZyiuGJ ChaCPSp";
    int K = 1;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string sentence = "NAusRW KcZXo b UVnhfZ KG C chLuZWX esC AaKWDU saay";
    int K = 5;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string sentence = "pt GPNmCGg q PxzhuOhmGf yXLTsrCCBejG A FmR Xp Fyv";
    int K = 3;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string sentence = "TbH SOEN SQb zJeIJKf LQ PH HS d";
    int K = 5;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string sentence = "PZl S Cn xGxARLXwY qTx eKK fA hS";
    int K = 5;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string sentence = "wQbzaJR uGkv DsrPaKF mz dWaRLb aW S";
    int K = 4;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string sentence = "raIbW OX vhcK TXcjNTv WEgCXiw YAY ABrOWDEPh";
    int K = 2;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string sentence = "Nf v OXipD uFQEol c Bw K BmAtILV";
    int K = 4;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string sentence = "JaPFu B sfV Q EV xSOqD";
    int K = 2;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string sentence = "U wzls qVLox H ZLYyl";
    int K = 5;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string sentence = "rZ Yky B Ttu VzuV NR OQ r";
    int K = 2;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string sentence = "ZmX dB qt JRRjwtT QDdQe ocuAc tUUOGW jtCLs ECN A";
    int K = 4;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string sentence = "Wdp EO yU Ctqll KX";
    int K = 3;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string sentence = "j QS Ihg Ja z crtRS jyWsdSf o AHtR";
    int K = 5;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string sentence = "uPqd Z tz j m K DITjLI m JSNM g mmSN H Jm fn";
    int K = 4;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string sentence = "Y kS dkHjB wZf I tzC wFg s E lzFkELzSby";
    int K = 8;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string sentence = "R Aj RHystOo O JAIO G r k ncMsT iYzFNqdbG D r";
    int K = 7;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string sentence = "R Cc G cvDhP cAWh rDM WPjl UI F fD pseqowhkOgJX";
    int K = 9;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string sentence = "j laYpx FK Bu Raw KbJ XIZ giQP r cuW Fl yGsOpuiLDU";
    int K = 6;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string sentence = "S ApXDo UBfoqD CEaL V WZ c q Va M p cQisMy s";
    int K = 5;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string sentence = "I n SGk BbI sY JnR nrGYyQYhOolS oA Wl V FF z y";
    int K = 5;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string sentence = "WHKUA KTh ipI u C OoWYUg u tjP r";
    int K = 7;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string sentence = "e DbWD Z t l r S VCl yqotsU o lz VVRTmwE A voUf";
    int K = 7;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string sentence = "lOnc eA Xcv X M l Pmr xNep S c Jg";
    int K = 10;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string sentence = "gX Zmy M Z BGPEwWmha fUdU p JNq A ZhU fby m";
    int K = 6;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string sentence = "Eu dacUK Ota Gt OPgQPkrbBQISM p omTSLxC o Ls gq";
    int K = 7;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string sentence = "aB CAdX fKYhI vtzz d i ORqce F nwo A IW";
    int K = 8;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string sentence = "xQ T zE v I L o qJ mlpKF p cWHU c UGg P nzXM";
    int K = 10;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string sentence = "ntpis ht VrEW KDzx Pifn k hRw E DJZJU e k dq Xj";
    int K = 2;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string sentence = "S UnqMxG Fw iD n KDf y OYKuHkE rAl J Pp xE";
    int K = 1;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string sentence = "O YoEyIr uQO R uq I R kgnY C y oL TwvomftUcRs";
    int K = 3;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string sentence = "xS lioz MI CFB kObZ A Es dy lMduCsi IAUN Ku";
    int K = 2;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string sentence = "lQv x P B IIfr Kn BoX c XNEpX tANIqmc bR";
    int K = 4;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string sentence = "ZcN v XgqgSiF MW PlBj oVmG x kA B xdJ g IG";
    int K = 10;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string sentence = "baVm Kam q EfE o d n Ac F nh I InW jqE aRd c dC";
    int K = 3;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string sentence = "G xJ lRmI w tMZN q F mH B eG GF xs be Hg";
    int K = 13;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string sentence = "WkW VfM rl ha U p W R l z M Dkv Q g s V";
    int K = 5;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string sentence = "N BM uX HB a L Zh Xl r u TQ Ak Z v";
    int K = 5;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string sentence = "z dd g J P Y a bx z y V CVK JK uU A B a W";
    int K = 4;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string sentence = "A o Xcw Ln YfJE r n Z e Ot p RC s lBi r B";
    int K = 7;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string sentence = "lr p w x w n kM Ww No iH x Sl w A HM hV";
    int K = 8;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string sentence = "HzH iD rWL rS eHs q E p Jk Dx b p zDdC sh lL Qm O";
    int K = 11;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string sentence = "e b E g rn cQ f Ru t L q G w R Vm";
    int K = 3;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string sentence = "q ti nf I l FO Pi Nsm M X DMLU u H d ayAr dL G S k";
    int K = 1;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string sentence = "iw F lM tP A w c c wK n WrS v oz";
    int K = 9;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string sentence = "z E j f arK KF WsO Z hl K C U QD S dY aH";
    int K = 11;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string sentence = "nSvL f wes aC oe t JV J sS MJ q zt df";
    int K = 13;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string sentence = "Z j J m Cg bt T p K I ZQ ww QP S I";
    int K = 13;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string sentence = "Q ph iM d buM rC N W k n KA Qm Ui BU zQ";
    int K = 8;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string sentence = "N Dqs q M im WcA HT q eVu Dec oc FvY Ks W La S xZ";
    int K = 9;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string sentence = "TZ B rj oY ds fWC CZ bH kn Uq h";
    int K = 11;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string sentence = "sjk YhS Zv mz C mVqIPhM C vFd x Y wB O X CH T a";
    int K = 13;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string sentence = "n x c gU GU i v I V v hEh qu jGG I BfgG DBW Qgkz";
    int K = 7;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string sentence = "lf d L Nve F OnP nGN e eaz e G zE v vrCu a PD x t";
    int K = 13;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string sentence = "A";
    int K = 1;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
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
    string sentence = "a";
    int K = 50;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string sentence = "Z";
    int K = 1;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string sentence = "z";
    int K = 50;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string sentence = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    int K = 1;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string sentence = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
    int K = 50;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string sentence = "A AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA AA";
    int K = 1;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string sentence = "A A A A A A A A A A A A A A A A A A A A A A A A A";
    int K = 1;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string sentence = "A A A A A A A A A A A A A A A A A A A A A A A A A";
    int K = 2;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string sentence = "A A A A ARA A A A A A A A A ARA A A A A A ARR A A";
    int K = 8;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string sentence = "Each tournament round is an elimination round";
    int K = 3;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string sentence = "One veeeeeeeeeeeeeeeeeeery long word";
    int K = 2;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string sentence = "a b c d ee t t f s w r t tt z w w r w t t w q ez e";
    int K = 20;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string sentence = "a a a a a a a a a a a a a a a a a a a a a a a a";
    int K = 1;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string sentence = "aaaa nnnn eeeee nnnnn ooo";
    int K = 2;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string sentence = "Each tournament round is an elimination round";
    int K = 3;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string sentence = "a a a a a a a a a a a a a a a a a a a a a a a a";
    int K = 22;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string sentence = "a b c d e f g h i j k l m n o p q r s t u v w x y";
    int K = 48;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string sentence = "a a a a a a a a a a a a a a a a a aaaa";
    int K = 6;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string sentence = "This is a test sentence";
    int K = 10;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string sentence = "a a a a a a a a a a a a a a a a a a a a a a a a a";
    int K = 50;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string sentence = "One veeeeeeeery long wordinu jebo ti pas mater";
    int K = 6;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string sentence = "a a a a a a a a a a a a a a a a a a a a a a a a aa";
    int K = 50;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string sentence = "a b c d e f g h i j k l m n o p q r s t u v w x y";
    int K = 50;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string sentence = "a A a A a A a A a A a A a A a A a A a A a A a A";
    int K = 39;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string sentence = "aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa aa";
    int K = 50;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string sentence = "I dont know you and you suck";
    int K = 12;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string sentence = "a b c d e f g h i j k l m n o p q r s t u v x y w";
    int K = 24;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string sentence = "a ab abc abcd";
    int K = 10;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string sentence = "a b c d e f g h i j k lm n o p q r s t u v w x y z";
    int K = 12;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string sentence = "ab cd ef gh ij kl mn po qr st uw xyz";
    int K = 3;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string sentence = "a a a a a a a a a a a a a a a a a a a a a a a a a";
    int K = 10;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string sentence = "a b c d e f g h i j k l m n o p q r s t u v w x yz";
    int K = 4;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string sentence = "Ta s d f g t h j u k i gt e e w d e r e r cc e c";
    int K = 12;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string sentence = "a a a a a a a a a a a a a a a a a a a a a a";
    int K = 4;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string sentence = "a a a a a a a a a a a a a a a a a a a a a a a a";
    int K = 24;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string sentence = "a a a a a a a a a a a a a a a a a a a a a";
    int K = 4;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string sentence = "a a a a a a a a a a a a a a a a a a a a a a a a a";
    int K = 30;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string sentence = "a a a a a b b b b b c c c c c d d d d d e e e e ef";
    int K = 50;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string sentence = "a b c d e a b c d e a b c d e a b c d e a b c d e";
    int K = 24;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string sentence = "a a a a a a a a a a a a a a a a a a a a a a a a a";
    int K = 4;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string sentence = "aaa a a aaa";
    int K = 1;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string sentence = "This is the f g h j k l ty op qw as fdsfds h";
    int K = 15;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string sentence = "aaaaaaa aa aaa aaaaaa";
    int K = 1;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string sentence = "x x x x x x x x x x x x x x x x x x x x x x x x x";
    int K = 50;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string sentence = "a a a a a a a a a a a a a a a a a a a a a a a a a";
    int K = 25;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string sentence = "AB CD";
    int K = 10;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    string sentence = "test sentence a a test sentence";
    int K = 1;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    string sentence = "This challege but think if u can i dont believe i";
    int K = 5;
    SentenceSplitting* pObj = new SentenceSplitting();
    clock_t start = clock();
    int result = pObj->split(sentence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=14886245&rd=8082&pm=6007
********************************************************************************
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <set>
#include <map>
using namespace std;
 
vector<int> tokenize(string s) {
  vector<int> w; int i,j=0;
  for(i=0;i<s.size();i++) if(s[i]==' ')  {
    if(s[i-1]!=' ' && i!=j) w.push_back(i-j);
    j=i+1; }
  if(s[i-1]!=' ' && i!=j) w.push_back(i-j);
  return w;
}
 
class SentenceSplitting 
{
  public:
  int split(string sentence, int k) 
  {
    vector<int> t=tokenize(sentence);
    int i,n=t.size(),a=0,b=50,s,x,w;
    while(a<b)
    {
      s=(a+b)/2;
      for(x=w=i=0;i<n;i++)
      if(x+t[i]+((bool)x)>s)
      {
        if(t[i]>s) break;
        w++;
        x=t[i];
      }
      else x+=t[i]+((bool)x);
      if(i==n && w<=k) b=s;
      else a=s+1;
    }
    return a;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/