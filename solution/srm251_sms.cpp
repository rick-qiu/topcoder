/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4624
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

class SMS {
public:
    string compress(string originalMessage);
};

string SMS::compress(string originalMessage) {
    string ret;
    return ret;
}


int test0() {
    string originalMessage = "Lets meet tomorrow";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "Lts mt tmrrw";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string originalMessage = "Please come to my party";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "Plse cme to my prty";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string originalMessage = " I like your style ";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = " I lke yr style ";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string originalMessage = "Where are you";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "Whre are you";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string originalMessage = "short message service";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "shrt mssge srvce";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string originalMessage = "This senTenCe DoesNt have very Much mEaning at all";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "Ths snTnCe DsNt hve vry Mch mnng at all";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string originalMessage = "TopCoder is the best";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "TpCdr is the bst";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string originalMessage = " ";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = " ";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string originalMessage = "kf tZhhkrL js REm V ITXt ex ittn pf uhNIm HrrZd";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "kf tZhhkrL js Rm V ITXt ex ittn pf uhNm HrrZd";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string originalMessage = "IUSfSr SCKHWo ltagUyOxW wQQ I d uqbvvrt jyFaSLZa ";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "IUSfSr SCKHWo ltgyxW wQQ I d uqbvvrt jyFSLZa ";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string originalMessage = "PXdZfNmYGokgVMR yOVsMmG lDOyr PTEFrx K P WzA uZ ";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "PXdZfNmYGkgVMR yVsMmG lDyr PTFrx K P WzA uZ ";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string originalMessage = "AZNaPxpzjzn Vivro CZ hEk bDHy Aly ozbrJ JyOgTDl v";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "AZNPxpzjzn Vvro CZ hk bDHy Aly ozbrJ JygTDl v";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string originalMessage = " Tri DEE uxhWui GK deb sOV ris SomIwXy UWNAn q";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = " Tri DEE uxhWui GK db sV rs SmwXy UWNn q";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string originalMessage = "KniufMzKRBkXpJPozgquhHHitV Qk zUtc zNRziluDyV ";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "KnfMzKRBkXpJPzgqhHHtV Qk ztc zNRzlDyV ";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string originalMessage = "lPNENRASc T KP S qJ i IhYhMCnttYFa dIIeBT jLAPOjL";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "lPNNRSc T KP S qJ i IhYhMCnttYFa dBT jLPjL";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string originalMessage = "UHrnmdv tvR Lkbp Jo lmF A JXVbwxQPVPy yst zbUg k ";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "UHrnmdv tvR Lkbp Jo lmF A JXVbwxQPVPy yst zbg k ";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string originalMessage = " B ePLdpE QLdp Jha XcbMiF vQY AEUogIy PFUN TsLUy";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = " B ePLdpE QLdp Jha XcbMF vQY AEUogy PFN TsLy";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string originalMessage = "VrFvA Gf weAkxVOFGjy J mVVULJCus z I O RizIxdEA xk";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "VrFvA Gf wkxVFGjy J mVVLJCs z I O RzxdEA xk";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string originalMessage = "ZaaaaaaaAaAAaaAAAaaaAAAaaaaaaaaAaAaAAaaAaaaAAaaAaZ";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "ZZ";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string originalMessage = "aaaaaaaaAaAAaaAAAaaaAAAaaaaaaaaAaAaAAaaAaaaAAaaAaa";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaAaAAaaAAAaaaAAAaaaaaaaaAaAaAAaaAaaaAAaaAaa";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string originalMessage = "FT fA AcXM aAv OpeCTyoQITCFu b OQaCrOfW d ueuh ";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "FT fA AcXM aAv OpCTyQTCFu b OQCrfW d ueuh ";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string originalMessage = " JUSovqbdyQIIFmygkHMeuOZlVlgYjRUpx WlpKKTuVmyjW Yt";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = " JSvqbdyQFmygkHMZlVlgYjRpx WlpKKTVmyjW Yt";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string originalMessage = "hlwz xRVKRVO R uJW SyoWRgjikMTB ddCS EKnXMfXUJFido";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "hlwz xRVKRVO R uJW SyWRgjkMTB ddCS EKnXMfXJFdo";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string originalMessage = "";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string originalMessage = " ";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = " ";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string originalMessage = "a";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string originalMessage = "eeenon";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "eeenn";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string originalMessage = "PleDEase AE ao come to my party";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "PlDse AE ao cme to my prty";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string originalMessage = "Leee prithvi aaaa iota aeeet";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "Leee prthvi aaaa iota aeeet";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string originalMessage = " I a like and aa ay Aa AY aiaia huh hUh uhu I me";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = " I a lke and aa ay Aa AY aiaia hh hh uhu I me";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string originalMessage = "AEIOUaeiouqaeiouAEIOUqaeiouAEIOU";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "AEIOUaeiouqqaeiouAEIOU";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string originalMessage = " AA AaAaA ARE ARENOT AEBAEABUuUCYaa";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = " AA AaAaA ARE ARNT AEBBCYaa";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string originalMessage = "hIb";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "hb";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string originalMessage = "Vv A ug nMI pQbg UUS ";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "Vv A ug nMI pQbg UUS ";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string originalMessage = "lete";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "lte";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string originalMessage = "pee on me";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "pee on me";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string originalMessage = " AAABBBEEEFFiiigggooo aaa AAA bbb b a ba ab bab ";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = " AAABBBFFgggooo aaa AAA bbb b a ba ab bb ";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string originalMessage = "aaron sux bee pussy";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "aarn sx bee pssy";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string originalMessage = " I aike your style ";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = " I aike yr style ";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string originalMessage = "aaabaaa bbaaaabb abab";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "aaabaaa bbbb abb";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string originalMessage = " a a a aaaa aaa aaa aaa";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = " a a a aaaa aaa aaa aaa";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string originalMessage = "aaaaaaaaaaaaaaaaa";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string originalMessage = "";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string originalMessage = " CHECK Check ";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = " CHCK Chck ";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string originalMessage = " OnkO RUttkaaAyY je dooObry aAaaAa ";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = " OnkO RttkyY je dbry aAaaAa ";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string originalMessage = " I IXI LikEKee Youuu ";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = " I IXI LkKee Youuu ";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string originalMessage = " I like your style ";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = " I lke yr style ";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string originalMessage = "bad";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "bd";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string originalMessage = "geee";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "geee";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string originalMessage = "EeE";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "EeE";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string originalMessage = " I like your style aeiou";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = " I lke yr style aeiou";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string originalMessage = " aeiou aAEOIu";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = " aeiou aAEOIu";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string originalMessage = "lets aba";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "lts aba";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string originalMessage = " aAeEiIoOuUYaAeTEiIoOuUyaAeEiIoOuU k ooott ee ";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = " aAeEiIoOuUYTyaAeEiIoOuU k ooott ee ";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string originalMessage = "Employee got an ouchy";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "Emplyee gt an ouchy";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string originalMessage = " I like yYUvg yUUInnm Unb nUn";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = " I lke yYvg ynnm Unb nn";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string originalMessage = "teest AaaA end";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "tst AaaA end";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string originalMessage = "Leee prithvi aaaa iota aeeet aeiouz";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "Leee prthvi aaaa iota aeeet aeiouz";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string originalMessage = " In your life ";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = " In yr lfe ";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string originalMessage = "bbaa cd";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "bbaa cd";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string originalMessage = "sAd";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "sd";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string originalMessage = "oott";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "oott";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string originalMessage = "exe";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "exe";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string originalMessage = " In your life ";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = " In yr lfe ";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string originalMessage = " aeittee asfse ere er aa";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = " aeittee asfse ere er aa";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string originalMessage = "Free Food OOOH";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "Free Fd OOOH";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string originalMessage = " a b de ";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = " a b de ";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string originalMessage = "bEb";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "bb";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string originalMessage = "Allo toi";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "Allo toi";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string originalMessage = " Like eee you ache ";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = " Lke eee you ache ";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string originalMessage = "akEEEwl";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "akwl";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string originalMessage = "eerie neem tree";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "eerie nm tree";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string originalMessage = "AAAAAAA";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAA";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string originalMessage = "baaaaaaaaaaaaaaaa";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "baaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string originalMessage = "aaaa";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaa";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string originalMessage = "wee";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "wee";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string originalMessage = "GEEED";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "GD";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string originalMessage = " BAAAB ";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = " BB ";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string originalMessage = " youiptrtuoiuuoi oioiuttiouoiu ";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = " yptrtuoiuuoi oioiuttiouoiu ";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string originalMessage = "HELLO";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "HLLO";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string originalMessage = " Lets meet ";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = " Lts mt ";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string originalMessage = "blah too blah";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "blh too blh";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string originalMessage = "ba";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "ba";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string originalMessage = "Een aep polish sausage";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "Een aep plsh ssge";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string originalMessage = "ca";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "ca";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string originalMessage = "hAj";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "hj";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string originalMessage = "baa";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "baa";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string originalMessage = " aeiou ";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = " aeiou ";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string originalMessage = "Lets meet tomorrow and eat";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "Lts mt tmrrw and eat";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string originalMessage = "LEts mEEt tOOmorrow";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "Lts mt tmrrw";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string originalMessage = "zaa";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "zaa";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string originalMessage = "sm And I there";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "sm And I thre";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string originalMessage = "Aeon Flux";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "Aeon Flx";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string originalMessage = "beae";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "beae";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string originalMessage = "eyeyeyeyeyeeeyeeee";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "eyyyyyyeeee";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string originalMessage = " I elike your style";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = " I elke yr style";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string originalMessage = "aaa AAA abcdefgh AbCDEf g aaa aaaaaa abcdefgh";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "aaa AAA abcdfgh AbCDf g aaa aaaaaa abcdfgh";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string originalMessage = " aaasaaa aaadaaasa ";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = " aaasaaa aaadsa ";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string originalMessage = " I like your eeestyle ";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = " I lke yr eeestyle ";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string originalMessage = "aaa aaa bb c daasa";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "aaa aaa bb c dsa";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string originalMessage = "In our life ";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "In our lfe ";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string originalMessage = "ci";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "ci";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string originalMessage = "abbbbaaa aadsfg bbbb b f";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "abbbbaaa aadsfg bbbb b f";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string originalMessage = "fEy";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "fy";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string originalMessage = "Plea wee ree noo hee";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "Plea wee ree noo hee";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string originalMessage = "Please come to my party";
    SMS* pObj = new SMS();
    clock_t start = clock();
    string result = pObj->compress(originalMessage);
    clock_t end = clock();
    delete pObj;
    string expected = "Plse cme to my prty";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=310333&rd=7226&pm=4624
********************************************************************************
#include <algorithm> 
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
 
using namespace std; 
 
class SMS {  
   public:  
   int vowel( char c ) { 
      if( c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ) return 1; 
      if( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ) return 1; 
      return 0; 
   } 
   int consonant( char c ) { 
      return c != ' ' && !vowel( c ); 
   } 
   string compress(string a) {  
      int n = a.size(); 
      vector<int> dead( n, 0 ); 
      for( int i = 0; i < n; ++i ) { 
         if( consonant( a[i] ) ) {             
            for( int j = i+1; j < n; ++j ) { 
               if( a[j] == ' ' ) break; 
               if( consonant( a[j] ) ) { 
                  for( int k = i+1; k < j; ++k )  
                     dead[k] = 1; 
                  break; 
               } 
            } 
         } 
      } 
      string ret; 
      for( int i = 0; i < n; ++i )  
         if( !dead[i] ) ret += a[i]; 
      return ret; 
   }  
 
 
 
 
 
    
 
};  
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/