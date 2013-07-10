/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7606
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

class DistanceBetweenStrings {
public:
    int getDistance(string a, string b, string letterSet);
};

int DistanceBetweenStrings::getDistance(string a, string b, string letterSet) {
    int ret;
    return ret;
}


int test0() {
    string a = "topcoder";
    string b = "contest";
    string letterSet = "tcp";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string a = "abcdef";
    string b = "fedcba";
    string letterSet = "fed";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
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
    string a = "aaaaa";
    string b = "bbbbb";
    string letterSet = "a";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string a = "aaAaB";
    string b = "BbaAa";
    string letterSet = "ab";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string a = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string b = "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb";
    string letterSet = "ba";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 5000;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string a = "ToPcOdEr";
    string b = "tOpCoDeR";
    string letterSet = "wxyz";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
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
    string a = "hmalLDFrvcGbkNdxfFzSTjRpgRNVsMcsyqEIeFzIka";
    string b = "vsEZyxXLgpfdOeXBoj";
    string letterSet = "abcdefghijklmnopqrstuvwxyz";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string a = "pxjLoAwxhsCXosZvtDnYYFxSnkfUXRBngoktYNouzr";
    string b = "dItijayPSmSjF";
    string letterSet = "gbaolynrdpstwz";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string a = "liTDvHCLVyWbsMOXLCmXhmnefXtgGPynECk";
    string b = "pSKJggkDzEPvgIpSDJzjLhBQkmzbwbDuFkrrEmdyJehsQoIIFo";
    string letterSet = "edpznv";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string a = "ABZseuNPSabzxhcHErUKM";
    string b = "PWq";
    string letterSet = "goamwdyxtbh";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string a = "JXHoPwyhQHBFvnqRJX";
    string b = "ovIxZzsKUvjRMzOkIERadgNUhxQJjwxMSHLqZdTZtjNXgSS";
    string letterSet = "zncvafmohwbujr";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string a = "yCZIkAXGCCyJgxtVRhBpIBV";
    string b = "BgcQkoZkbjMSTsFOfsRJGzuZwiuPxqLUvowcdNfJAmcFkiUUI";
    string letterSet = "wbeukczodhf";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string a = "BKdQIfbcH";
    string b = "HDGjlLAAcrsiDTClfeJt";
    string letterSet = "hcabexgyrdpmofq";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string a = "XwmXYgdazgvoKGCmMRhyYgjkkZAxkozmuZzphtyZvu";
    string b = "prMIgkrzXHOmAYAXvhQIESgHJUXmsNrekgCvHJBTqJoGKF";
    string letterSet = "fcewrpsmtgnju";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string a = "yMmUKHedrcfzgpFdjjwqUqIvVzyIGULjUSABLmQMjJHS";
    string b = "qtdEm";
    string letterSet = "cbrteywgjlm";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string a = "rtJjAijWYNR";
    string b = "iOwiYtdAwhgwMGnLJGuNhEg";
    string letterSet = "fkstj";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
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
    string a = "QAuDCJcYFVIUegIDCgrdEAuNGpOyOCqKMu";
    string b = "jmChdMHQahrtFAlGZkDcLEjmnRyZiRNWcXeRuXR";
    string letterSet = "uejbx";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string a = "HsCnunDFMZatCkAyZxTbGnvPGjgMxbCYCqhDZrBM";
    string b = "r";
    string letterSet = "xothgnrcmjw";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string a = "ChbjlMqgMpEStLGfPuSUCY";
    string b = "VHpurwIxFPpFLpPeF";
    string letterSet = "mkqznutpdysv";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string a = "EwOISqCsmhsvOWfWGIAVoQOIsq";
    string b = "QeTDUTNXrXWLgyBoYNlaOS";
    string letterSet = "kfahm";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
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
    string a = "JrnDcDDRpYZyoUtWlRlZZBUXoFNrwa";
    string b = "NojiVoQ";
    string letterSet = "nkv";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string a = "btHYkIuHtudbMnFAQKLZtjAeFuKlJqdFpLVRtDkFJSwxIJ";
    string b = "ERxzAP";
    string letterSet = "mwroutqaygl";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string a = "HlEZOSKuGNnAJpIOGDHnoxJMSKHwOMlbscZlqWmVHMOpBy";
    string b = "WGOnixpAKNTuAZOdwm";
    string letterSet = "cgeq";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string a = "rJYakrYrUjNQNKpMklAEv";
    string b = "QZvZuAPgPPzzvNCF";
    string letterSet = "spaxfvtoreqn";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string a = "WYaaJQePYSTzvDYSxbfVTOIZPhzAMnni";
    string b = "MUCtSQMnpHwjzKc";
    string letterSet = "mpxzywtiqer";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string a = "YVdYtCyfpSYGGMITtNOTnYWtgGpPxaOzbdVhfmfsRQvMOP";
    string b = "FSZpJERkJUUclKyOGToRjPEwxPwgm";
    string letterSet = "edfqcsilgtkxh";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string a = "brLGGAZSuZfHxjjvaxANmJVUNcYEWOHsRvpVzizuWFL";
    string b = "tQXyidjEKeb";
    string letterSet = "lyranxumib";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string a = "dlsljPXEmFycAQeFnpfNEbCPYLbtLLERKxTuPTyTQBB";
    string b = "OoKnyrAmjZNSySx";
    string letterSet = "bowvrclqiykzmt";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 71;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string a = "vMHISpqJDy";
    string b = "WYtlysKA";
    string letterSet = "sbvr";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string a = "FdjgvxVqRAugiY";
    string b = "BXpZChBIIXqTqeaJqoPfuqvXmXsapLAOLluTQRWWMhKD";
    string letterSet = "cfbivzy";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string a = "TwtKOkmIYRXxZEBeKQirALyPobJeA";
    string b = "WKvOdFIWcTzVwOAuKEUKzHukNvCLKPMFCqRvVRFPkqcpYA";
    string letterSet = "t";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string a = "zItRS";
    string b = "CPGLxAgyUiuDahKXtIXGZmyOFcQIFZufFGoSGUx";
    string letterSet = "ulvphzsfxqwdmgkr";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 82;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string a = "VzSqNOujJwSxqyCzOljRTSidIlqgsShjRlwnXFWkTj";
    string b = "XuFjXoNQJhmOWeHEvTzoLDMxYypjzVGwKwZBStSofGwezU";
    string letterSet = "mabqhrxjcsfyku";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string a = "hYWBzSZyVqlnsprFbSpKwKRuyrmoAYmESCmYGMXkyCRkgUS";
    string b = "cbeJizgeWp";
    string letterSet = "rlivczxhm";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string a = "eKFLJesZHFWwxGPlAGMByBChSohmoPZxmmyGguJbXHOOMtQte";
    string b = "OXz";
    string letterSet = "htflkrusqpia";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string a = "cnUoTkXwAJWQnHDTSnTzJqFCfmhVsivjuIcaMwwTZ";
    string b = "PwBjhPtePBugrLHWjR";
    string letterSet = "vszaqeob";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string a = "BDDdEi";
    string b = "zouzQIWuOrQcLZpdipnOcvpGGFYtwqtiuvahSCxUyhGGFibU";
    string letterSet = "oufdxhswtnjcbe";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string a = "msYzmwEFrqYEmErmXLbYehlMEqKiXiguktzL";
    string b = "EXL";
    string letterSet = "zd";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string a = "hKxWZDPsokFcc";
    string b = "vJFJCdDWNOrGRrQVPzLJvcPz";
    string letterSet = "spnfoqmhwvbduir";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string a = "S";
    string b = "c";
    string letterSet = "is";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string a = "jRHmLBpcEwsNuqbGggMk";
    string b = "Wc";
    string letterSet = "dlnsmebhfgriy";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string a = "xiPTwzpkaCmNMHXEPYboqNH";
    string b = "cmYqinYQuzEvzWbSwKJNvcvXCHn";
    string letterSet = "uqwmfs";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string a = "cxIYDArkOmgdPkZjh";
    string b = "TipghOkWdChQazUkAvAKwZdViHBdyMP";
    string letterSet = "khxruwjs";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string a = "XKsgmBzBfzOQstrkaS";
    string b = "ENLjwMGKzKmTvxFxpYJOHUDTaztC";
    string letterSet = "temqcbgkihnpsyaf";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string a = "xdNFBHYZkWchQZHBRLKCF";
    string b = "CPrAoYWvaUcmnHoEamnaImewoQKMOzqpAiRds";
    string letterSet = "vzkp";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string a = "eRNSynQzZlIsmaHNNIToaMiguXRJZEUwvVlnar";
    string b = "dNDlKZAintZxlklCqTnqNTdBiAX";
    string letterSet = "modiwagurvpx";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string a = "YUmaJpVv";
    string b = "iWtBMuoIpwzADG";
    string letterSet = "avyrjoswmiczxqfg";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string a = "eUXIHUNWQwDdGqaBLUOmNPuhxHJELTIburMVOVxbthscLT";
    string b = "OUkaKou";
    string letterSet = "nfpdyoqwvth";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string a = "jMEiIBCzcadlJEthdLRLrxcs";
    string b = "UWzqIVwPLLkIoQHAlrylKFDXSCrxyfHbpeuMRIFKBzAOvHBH";
    string letterSet = "fbychtoqeiwrmdvnl";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string a = "kVGtEPIiXRvXuzKgOhHddvTHeKhFWpPecxwIVHfwfJYeDgtIkx";
    string b = "yFpSj";
    string letterSet = "cg";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string a = "JjIdpzWICuelmGgVQZaXGbzKaXbMqWQGLLGPOeqPBMLNe";
    string b = "fnujaCyDutrpJ";
    string letterSet = "anxlqkgfubypjcoz";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 89;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string a = "BRvEwtJnmzgKekuDyKTsYLcnOlUDRLnKZcEK";
    string b = "zGLaMYclJsCJkPuVxlIamOJdrdrFYhHTIAfZgmHQitofCKadkA";
    string letterSet = "quywzfhpmi";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string a = "MYAYNcSJHqVcEQwlXOftIpuMmkPHHQgXiyWHYVd";
    string b = "MDocuCYDcFIPMmIsEPwgsDPWFjoYiVmwGLEwVphxuF";
    string letterSet = "rhecqgzin";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string a = "ZHURlbPzNpGxGLLxTmlcTcztIfzmEknsIrXI";
    string b = "gsoPcHOYzwbal";
    string letterSet = "vbyomagzn";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string a = "iqTGEKpWpHTyVaEfxgejkmUlaosiipNDbTaEziPmtHuN";
    string b = "QBaNfleKRhDpwTVv";
    string letterSet = "jubirctzm";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string a = "NKRKMDracptMxtUmeRbbjlHilTvELlBYFBvFa";
    string b = "LnJ";
    string letterSet = "fexlaohwkvy";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string a = "TgUDugRtOCBYHjgmPQvgMBvlqUVCEVlOZXoNLyukduTvAZKtx";
    string b = "LBUkijxrALDvEPWhPkDgvQIQWqyPxiEqmF";
    string letterSet = "vngxsdw";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string a = "OFKUlfDOCuKrhQ";
    string b = "BAEBHzPaBzsDaxAjtUSUTHdESrUgsWYVNksBhHQDTLwQuTiKb";
    string letterSet = "vhqkbnt";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 53;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string a = "hwUlSxFTQiIYZXdWkACnhSjULobgSfXWluj";
    string b = "bfVYRKgqVHEomrMIdSqzENTbNEFd";
    string letterSet = "ms";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string a = "wqnRqjcAwzErpFYdjLMmYocuhEEEczvOYpsu";
    string b = "JwCYxEydXjIdhxoBcfDQlFCBJYSKSpS";
    string letterSet = "agvcmetjxhsk";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string a = "NHgArFMPnlxQI";
    string b = "bNJQOKklCUMbcJSAlnqBIZUQNJXKzKZQAphgSTkRoyhuK";
    string letterSet = "cygeofrxuijwlh";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string a = "a";
    string b = "A";
    string letterSet = "a";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string a = "AAAAAaBBB";
    string b = "aaaaaAbbb";
    string letterSet = "ab";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
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
    string a = "aA";
    string b = "bB";
    string letterSet = "ab";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string a = "aA";
    string b = "a";
    string letterSet = "a";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
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
    string a = "aa";
    string b = "AA";
    string letterSet = "a";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string a = "AAAA";
    string b = "BBBB";
    string letterSet = "a";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string a = "ricarDo";
    string b = "juan";
    string letterSet = "d";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
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
    string a = "aaAA";
    string b = "a";
    string letterSet = "ab";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string a = "A";
    string b = "a";
    string letterSet = "a";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string a = "A";
    string b = "B";
    string letterSet = "ab";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string a = "aAAaB";
    string b = "BbaAa";
    string letterSet = "ab";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string a = "Abc";
    string b = "abc";
    string letterSet = "ab";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string a = "aaAaBb";
    string b = "aAAb";
    string letterSet = "ab";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string a = "AA";
    string b = "A";
    string letterSet = "a";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string a = "AAAAA";
    string b = "aaaaa";
    string letterSet = "a";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string a = "A";
    string b = "b";
    string letterSet = "a";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string a = "aaAaB";
    string b = "BbaAA";
    string letterSet = "ab";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string a = "aaaa";
    string b = "AAAA";
    string letterSet = "abc";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string a = "Aa";
    string b = "ba";
    string letterSet = "a";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string a = "AAAA";
    string b = "AABB";
    string letterSet = "ab";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string a = "AAA";
    string b = "aaa";
    string letterSet = "a";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string a = "aAb";
    string b = "ab";
    string letterSet = "ab";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string a = "bbbBB";
    string b = "BBBBB";
    string letterSet = "b";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
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
    string a = "aaAaBBBbBB";
    string b = "BbaAaaaAaaaaa";
    string letterSet = "ab";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 65;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string a = "aAs";
    string b = "aVf";
    string letterSet = "va";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string a = "AAA";
    string b = "aaaaa";
    string letterSet = "a";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string a = "AaAaBb";
    string b = "bbaaaa";
    string letterSet = "ab";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string a = "AA";
    string b = "AAA";
    string letterSet = "a";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
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
    string a = "aaaa";
    string b = "acccccaaa";
    string letterSet = "a";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
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
    string a = "Topcoder";
    string b = "topcoder";
    string letterSet = "t";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string a = "TTT";
    string b = "tt";
    string letterSet = "t";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
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
    string a = "abcdABCD";
    string b = "aaBCddda";
    string letterSet = "abdec";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
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
    string a = "aAaAbBbB";
    string b = "aB";
    string letterSet = "dbca";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string a = "aaAaB";
    string b = "BbaAAAAa";
    string letterSet = "ab";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string a = "TOPCODER";
    string b = "topcoder";
    string letterSet = "tcp";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string a = "t";
    string b = "TTT";
    string letterSet = "t";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string a = "AaaaaAbbbbdddd";
    string b = "aabb";
    string letterSet = "ab";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string a = "Joe";
    string b = "jOE";
    string letterSet = "joe";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string a = "ToPcOdEr";
    string b = "tOpCoDeR";
    string letterSet = "t";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string a = "TttTtTTT";
    string b = "TAATT";
    string letterSet = "ta";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string a = "ajbdakjdbaa";
    string b = "dsdsbasd";
    string letterSet = "ahbkm";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string a = "aAZz";
    string b = "aVfzzF";
    string letterSet = "vazf";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string a = "aAaAa";
    string b = "bbbbb";
    string letterSet = "a";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string a = "AAAA";
    string b = "aaaa";
    string letterSet = "a";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string a = "aaaA";
    string b = "aAbbBB";
    string letterSet = "abcdef";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string a = "AAAA";
    string b = "aaa";
    string letterSet = "a";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string a = "Ab";
    string b = "ab";
    string letterSet = "ab";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string a = "aa";
    string b = "bbb";
    string letterSet = "ab";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string a = "aAaaaAAAa";
    string b = "bBb";
    string letterSet = "ab";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string a = "BBBbbbBB";
    string b = "ccccaaAAabbbccBCCC";
    string letterSet = "abc";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 122;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    string a = "AABBbb";
    string b = "AaaBbbbbbbbb";
    string letterSet = "ba";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    string a = "AAAAB";
    string b = "BBB";
    string letterSet = "ab";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    string a = "ToPcOdEr";
    string b = "tOpCoDeRr";
    string letterSet = "r";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    string a = "abC";
    string b = "abc";
    string letterSet = "c";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    string a = "IHOPETHISWORKS";
    string b = "IBETITWONT";
    string letterSet = "hpo";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    string a = "hhhCCCDce";
    string b = "abcehdddCD";
    string letterSet = "edca";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    string a = "AAaa";
    string b = "acccccaaa";
    string letterSet = "a";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    string a = "TTTTTaaAbb";
    string b = "ttttttaAabB";
    string letterSet = "tab";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    string a = "aaaa";
    string b = "bbbbbbbbbb";
    string letterSet = "ab";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 116;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    string a = "ABCD";
    string b = "abcd";
    string letterSet = "abcd";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    string a = "Top";
    string b = "top";
    string letterSet = "t";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    string a = "Aa";
    string b = "B";
    string letterSet = "a";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    string a = "AAAAAAAAAAAAAAAAAaaaaaaaaaaaa";
    string b = "AAAAAAAAaaaaaaaaaaaaaa";
    string letterSet = "ab";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    string a = "aAAAaaa";
    string b = "a";
    string letterSet = "a";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    string a = "AaA";
    string b = "A";
    string letterSet = "a";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    string a = "a";
    string b = "aaa";
    string letterSet = "a";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    string a = "ABCDEFFFFF";
    string b = "FF";
    string letterSet = "fa";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    string a = "AAAAA";
    string b = "BBBB";
    string letterSet = "ab";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    string a = "aaaaaaab";
    string b = "abbbbbbb";
    string letterSet = "ab";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    string a = "AoPcOdEr";
    string b = "tOpCaDeR";
    string letterSet = "axyz";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    string a = "aabc";
    string b = "aaabbb";
    string letterSet = "ab";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    string a = "abc";
    string b = "abcdefgh";
    string letterSet = "abcdefgh";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    string a = "abcccAAABBBCCC";
    string b = "abcccdefAABBCCC";
    string letterSet = "abcdef";
    DistanceBetweenStrings* pObj = new DistanceBetweenStrings();
    clock_t start = clock();
    int result = pObj->getDistance(a, b, letterSet);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=21467055&rd=10674&pm=7606
********************************************************************************
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
 
class DistanceBetweenStrings {
public:
  int getDistance(string, string, string);
};
 
int DistanceBetweenStrings::getDistance(string a, string b, string letterSet) 
{
      int sum=0;
        for(int i=0;i<letterSet.size();i++)
        {
                int acount=0,bcount=0;
                for(int j=0;j<a.size();j++)
                {
                        if(tolower(a[j])==(tolower(letterSet[i])))
                                acount++;
                }
                for(int j=0;j<b.size();j++)
                {
                        if(tolower(b[j])==tolower(letterSet[i]))
                                bcount++;
                }
                sum=sum+(int)pow((double)(acount-bcount)     ,2.0);
        }
        return sum;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/