/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12334
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

class FoxAndHandleEasy {
public:
    string isPossible(string S, string T);
};

string FoxAndHandleEasy::isPossible(string S, string T) {
    string ret;
    return ret;
}


int test0() {
    string S = "Ciel";
    string T = "CieCiell";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string S = "Ciel";
    string T = "FoxCiel";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string S = "FoxCiel";
    string T = "FoxFoxCielCiel";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string S = "FoxCiel";
    string T = "FoxCielCielFox";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string S = "Ha";
    string T = "HaHaHaHa";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string S = "TheHandleCanBeVeryLong";
    string T = "TheHandleCanBeVeryLong";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string S = "Long";
    string T = "LongLong";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string S = "hFVvzbvASpRyHNXXoGHe";
    string T = "NxjozJgpEPXrDJaBJmtjessBysMuMZzawDHEFqAQ";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string S = "UxuJUtGhPW";
    string T = "yCqiAekNxXkzlPBTpBOy";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string S = "LDybFtrIbfBFfKBfxM";
    string T = "LDybFtrIbfBFfKBfxMLDybFtrIbfBFfKBfxM";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string S = "wSoinsWghfObLqESjxBOJCW";
    string T = "xwzBtBWANgrWaqdFjkRthQHdbblnTmELOqiFOPjAWRJSWu";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string S = "JAls";
    string T = "JJAlsAls";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string S = "rTpAlQGrtefWMTrTZy";
    string T = "borGsyQhKqeFiXgGJEVoVebcfHAKjNRcDWey";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string S = "uYvlOGCRRczMSihxOT";
    string T = "uYuYvlOGCRRczMSihxOTvlOGCRRczMSihxOT";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string S = "XYvaBPTNvXqwPefLTPcxSUmFpsSRgoKO";
    string T = "aycvOfyvNAwwXXygofwyBnfzrjFIhYDJTrllTPYlnVzAtcLTBk";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string S = "pPytXgYywR";
    string T = "pPytXpPytXgYywRgYywR";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string S = "MQcziP";
    string T = "MmrcKkmXCnWk";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string S = "bNhQYQeGbDxVlDt";
    string T = "bNhQYQeGbDxVbNhQYQeGbDxVlDtlDt";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string S = "ycBdMJBjEKCgMNj";
    string T = "ycycBdMJBjEKCgMNjBdMJBjEKCgMNj";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string S = "UzIWynjLPXcJTbpiUATLQiu";
    string T = "UzUzIWynjLPXcJTbpiUATLQiuIWynjLPXcJTbpiUATLQiu";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string S = "bnfhlZNTL";
    string T = "StUVnEKRvksBNrzaQO";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string S = "RaPsuHyHGooAAUxkgy";
    string T = "RaPsuRaPsuHyHGooAAUxkgyHyHGooAAUxkgy";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string S = "eTpbJbUCvmNwYkRzmRNn";
    string T = "eTpbJeTpbJbUCvmNwYkRzmRNnbUCvmNwYkRzmRNn";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string S = "cuPkDxawiXvpHulqZxLdSkwTJf";
    string T = "XPZunVHFdCLjJxJJOOcdASCCCnjCwnRtWqCfrZlknXOLqqEHbw";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string S = "DvnjrjMtleRFjTZRrUMNLzfMqAwxeYADmOCqjrdVHPTkymVn";
    string T = "DvnjrjMtleRFjTZRrUMNLzfMqAwxeYADDvnjrjMtleRFjTZRrU";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string S = "hjDPyWn";
    string T = "hjDPyWhjDPyWnn";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string S = "Jg";
    string T = "JgJg";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string S = "arLuYFNkxThJH";
    string T = "arLuYFNkarLuYFNkxThJHxThJH";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string S = "WktNgcmAhtTHElFyfzSzkipDAONrQHtuDYxDMewB";
    string T = "WktNgcmAhtTHElFyfzSzkipDAOWktNgcmAhtTHElFyfzSzkipD";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string S = "nFLwEWBWmTXVcfFiav";
    string T = "nFLwEWBWmTXVcfFnFLwEWBWmTXVcfFiaviav";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string S = "fSKHxVXYBaCVCk";
    string T = "jQoxFvwcRdnENElwCXeGowzBVMcg";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string S = "FrorgDvkfBvfhhYfvDiWIQmLWwkAzVKRWpMRfrxMEtOJCjHOQ";
    string T = "FrorgDvkfBvfhhYfvDiWIQmLWwkAzVKRWpMFrorgDvkfBvfhhY";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string S = "PIV";
    string T = "PPIVIV";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string S = "cBeCFvCvorv";
    string T = "cBeCFvCvocBeCFvCvorvrv";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string S = "MoXhdxjsBPkJBrme";
    string T = "MMoXhdxjsBPkJBrmeoXhdxjsBPkJBrme";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string S = "c";
    string T = "cc";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string S = "EAjpjSfZHMamvnvf";
    string T = "EAjpjSfZHMamEAjpjSfZHMamvnvfvnvf";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string S = "jynQxSpTsRpBpYkbgrv";
    string T = "jynQxSpTsRjynQxSpTsRpBpYkbgrvpBpYkbgrv";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string S = "ZbwF";
    string T = "ZbwFZbwF";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string S = "qHoyzJthpvFILWqhKuTDQoRv";
    string T = "qHoyzJtqHoyzJthpvFILWqhKuTDQoRvhpvFILWqhKuTDQoRv";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string S = "to";
    string T = "ttoo";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string S = "kBWObooPnAuepHComaarpcttwmBKkKZsOEyvzotxTfZHT";
    string T = "kBWObooPnAuepHComaarpcttwhBKkKZsOEyvzokBWObooPnAue";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string S = "PPwmrvATBOo";
    string T = "PPPPwmrvATBOowmrvATBOo";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string S = "pgxddyEDzu";
    string T = "pgxddyEDzpgxddyEDxuu";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string S = "xgsxWYvwE";
    string T = "xgsxgsxWYvwExWYvwE";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string S = "ZSHhTmuzEeTX";
    string T = "ZSZSHhTmuzEeTXHhTmuzEeTX";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string S = "ypeBRbNEbKhUBLmpcEAHQyeH";
    string T = "hjLrTxeFuhVcyMxJBoYUqbeQkZznUGvjRWhzhqebQSHGNWXY";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string S = "iYYoPiUnV";
    string T = "iYYoPiUniYYoPiUnVV";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string S = "ngkROIWfqZCkRWLClftaqTulw";
    string T = "ngkROIWfqZCkngkROIWfqZCkRWLClftaqTulwRWLClftaqTulw";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string S = "JFslIQJ";
    string T = "JFslIQJFslIQJJ";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string S = "TcFyOKFXncWnALZNCHliQ";
    string T = "TcFyOKFXncWTcFyOKFXncWnALZNCHliQnALZNCHliQ";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string S = "GAHkNIPSqLnUoSkSsXkslELRgGWVCLjMwUioav";
    string T = "GAHkNIPGAHkNIPSqLnUoSkSsXzslELRgGWVCLjMwUioavSqLnU";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string S = "xzoSMRhvY";
    string T = "xzxzoSMRhvYoSMRhvY";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string S = "GrwD";
    string T = "GGrwDrwD";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string S = "RdmnQjaPCtnYoVTohK";
    string T = "RdmRdmnQjaPCtnYoVTohKnQjaPCtnYoVTohK";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string S = "RhogLmQpAncgjVvmFdvokUDv";
    string T = "RhogLmQpAncgjVvmFdRhogLmQpAncgjVvmFdvokUDvvokUDv";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string S = "URfAoWsHdAIOHMjGRRYZamJz";
    string T = "URfAoWsHdAIOHMjGURfAoWsHdAIOHMjGRRYZamJzRRYZamJz";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string S = "PmFxEgQciVoLImjzanGsr";
    string T = "PmFxEgQciVoLImPmFxEgQciVoLImjzanGsrjzanGsr";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string S = "tfIuAVHhapXWnZJXMRFnvmOOG";
    string T = "tfIuAVHhaptfIuAVHhspXWnZJXMRFnvmOOGXWnZJXMRFnvmOOG";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string S = "XUxkagZPoLDyTpwO";
    string T = "XUxkagXUxkagZPoLDyTpwOZPoLDyTpwO";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string S = "bOYBElRTEQKV";
    string T = "bOYBElRTEbOYBElRTEQKVQKVfasa";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string S = "omyajO";
    string T = "omyomyajOajO";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string S = "thGyEsrQnJaqniOEkJF";
    string T = "thGyEsrQnJaqniOEkJthGyEsrQnJaqniOEkJFfF";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string S = "KGkFbRLpWCKbfY";
    string T = "KGkFbRLKGkFbRLpWCKbfYpWCKbfY";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string S = "XsEebTMoFjEuPnvY";
    string T = "XsEebTMXsEebTMoFjEuPnvYoFjEuPnvY";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string S = "lSNpQOF";
    string T = "lSNplSNpQOFQqOF";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string S = "hwwJ";
    string T = "hwwhwwJJ";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string S = "ttlSRdnuAmFCbbvr";
    string T = "ttlSRdnuAmttlSsRdnuAmFCbvrFCbvr";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string S = "suOMmymXWfYWVbCVwEfWKKwiXSqHTAFMxCvAmNyQqELmSUgpz";
    string T = "suOMmsuOMmymXWfYwVbCVwEWKKwiXSqHTAFMxCvAmNyQqELmSU";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string S = "ALkgOiBSKGEFTJOHohrzPrTWw";
    string T = "ALkgOiBSKGEFTJOHOhrzPALkgOiBSKGEFTJOHOhrzPrTWwrTWw";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string S = "jfmmHevkm";
    string T = "jfmmHevkjfmmHevkmm";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string S = "qAHVK";
    string T = "qqAHVKAHVK";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string S = "cKDGFVkYnkVBgOYc";
    string T = "DvxAJhJxmsXJcwLlzXWzGXFrJjotvzSX";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string S = "KNPZgbQRPmmADdKoSsGiAYR";
    string T = "KNPZgbKNPZgbQRPmmaDdKoSsGiAYRQRPmmADdKoSsGiAYR";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string S = "dRAxu";
    string T = "ddRAxuRAxu";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string S = "B";
    string T = "BB";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string S = "IqHPemjgCMYKLE";
    string T = "IqHPIqHPemjgCMYCqSKLEemjgCMYCqSKLE";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string S = "oWJmSQfdbxP";
    string T = "oWJmSoWJmSQfdbxPQfdbxP";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string S = "IabWpRy";
    string T = "IabIabWpRyWpRy";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string S = "uPCrYCglqb";
    string T = "uPCuPCrYCgyqbrYCglqb";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string S = "QVLfcjQiVuZBZuZnOKN";
    string T = "ohBdVVQBmslPIJtMAzbPKtNwlJQhdmOJpwCZgQ";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string S = "iuTLiGk";
    string T = "iuTLiiuTLiGkGk";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string S = "xBdKqjWzZ";
    string T = "xBdKqxBdKqjWzZjWzZ";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string S = "fulYPoKmIjYrnuSpwvNdJYO";
    string T = "fulfulYPoKmIjYrnuSpwvNdJYOYPoKmIjYrnuSpwvNdJYO";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string S = "MzohGiOxUipmgbZ";
    string T = "MzohGiOxUipmgBZMzohGiOxUipmgBZ";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string S = "hnTRXASWIsKEdZ";
    string T = "hnTRXAShnTRXASWIsKEdZWIsKEdZ";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string S = "zhtbirWrNPTsxY";
    string T = "zhtbirWrNPTsxzhtbirWrNPTsxYY";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string S = "EjSiNBduCutXaZHiobZ";
    string T = "EjSiNEjSiNBduCutXaZHiobZBduCutXaZHiobZ";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string S = "ulS";
    string T = "uulSlS";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string S = "JYUcqyKhPIPc";
    string T = "ZMpqAkMcewPVBEhogFMzAzAM";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string S = "KVFsnTmKPZTesVqoNHIzWbQ";
    string T = "KVFsnTmKPKVFsnTmKPZTesVqoNHIzWbQZTesVqoNHIzWbQ";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string S = "bCvpJO";
    string T = "bCbCvpJOvpJO";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string S = "JECwIKmw";
    string T = "JLihdLPkhHrcGGAi";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string S = "ueGVe";
    string T = "uueGVeeGVe";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string S = "ctaqUhfk";
    string T = "ctaqUhfctaqUhfkk";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string S = "fJQTnS";
    string T = "fJQTfJQTnSnS";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string S = "NUvvcXZoDjIKUkyFVqSfvH";
    string T = "NUvvcXZoDjIKUkyFVqNUvvcXZoDjIKUkyFVqSfvHSfvH";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string S = "ffmpRiAJmSqEtuVoOwMCKNSxt";
    string T = "ffmpRiAJmSffmpRiAJmSqEtuVoOwMCKNSxtqEtuVoOwMCKNSxt";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string S = "QNVKqJliyXMqsaX";
    string T = "QNVKqJlQNVKqJliyXMqsaXiyXMqsaX";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string S = "SibGX";
    string T = "SibSibGXGX";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string S = "eidpQ";
    string T = "eeidpQidpQ";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string S = "tYYkCIisW";
    string T = "SwnGkHszqHclAJpIQe";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string S = "OseaqAuzBofqRf";
    string T = "OseaOseaqAuzBofqRfqAuzBofqRf";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string S = "tiqVddQwEuJYYxnSDZtyGPohhDu";
    string T = "tiqVddQwEutiqVddQwEuJYYxnSDZtyGPohhDuJYYxnSDZtyGPo";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string S = "tbeJm";
    string T = "BFrDoOEkCW";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string S = "abCvoNWbcpZwxeNk";
    string T = "abCvoNWbcabCvoNWbcpZwleNkpZwleNk";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string S = "VZrsLLsHmcyClpYWF";
    string T = "VZVZrsLLsHmcyClPYWFrsLLsHmcyClPYWf";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string S = "A";
    string T = "aa";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string S = "A";
    string T = "AA";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string S = "aa";
    string T = "aaaaaaaaaa";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string S = "aa";
    string T = "tttt";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    string S = "ABC";
    string T = "CBACBA";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    string S = "KanKan";
    string T = "KKanKananKan";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    string S = "FOX";
    string T = "FFOOXX";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    string S = "aba";
    string T = "ababaa";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    string S = "abaa";
    string T = "abaabaaa";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    string S = "fff";
    string T = "ffffff";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    string S = "Hoge";
    string T = "HoHogege";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    string S = "LOWCASE";
    string T = "LOWLOWCASECASE";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    string S = "hola";
    string T = "hola";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    string S = "Yes";
    string T = "YYeess";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    string S = "AAB";
    string T = "AABAA";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    string S = "ab";
    string T = "abba";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    string S = "FoxCiel";
    string T = "leiCxoFFoxCiel";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    string S = "abcab";
    string T = "abcabcabab";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    string S = "bab";
    string T = "bababb";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    string S = "az";
    string T = "Azaz";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    string S = "abbab";
    string T = "abbabbabab";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    string S = "aaa";
    string T = "bbbbbb";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    string S = "Fox";
    string T = "AbcFox";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    string S = "ciel";
    string T = "cicielle";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    string S = "BABB";
    string T = "BABBABBB";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    string S = "abcdabc";
    string T = "abcdabcdabcabc";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    string S = "AAA";
    string T = "AAAAAA";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    string S = "FAF";
    string T = "FAFAFF";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    string S = "TheHandleCanBeVeryLong";
    string T = "TheHandleCanTheHandleCanBeVeryLongBeVeryLong";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    string S = "abc";
    string T = "cdecde";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    string S = "abc";
    string T = "aabcbc";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    string S = "ciel";
    string T = "cielciels";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    string S = "LaL";
    string T = "LaLaLL";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    string S = "hai";
    string T = "hahiai";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    string S = "abc";
    string T = "aabbcc";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    string S = "rRoObBiInN";
    string T = "RROobBIiNN";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    string S = "fox";
    string T = "ffooxx";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    string S = "hola";
    string T = "holahola";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    string S = "abca";
    string T = "abcabcaa";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    string S = "cciel";
    string T = "cccielciel";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    string S = "CielCielCielCielCielCielCielCielCielCiel";
    string T = "Ciel";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    string S = "FAF";
    string T = "FAFAFB";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    string S = "abb";
    string T = "abbabb";
    FoxAndHandleEasy* pObj = new FoxAndHandleEasy();
    clock_t start = clock();
    string result = pObj->isPossible(S, T);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22881878&rd=15185&pm=12334
********************************************************************************
#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<queue>
#include<stack>
#include<set>
#include<algorithm>
#include<sstream>
#include<iomanip>
#include<cstring>
#include<bitset>
#include<fstream>
#include<cmath>
#include<cassert>
#include <stdio.h>
#include<ctype.h>
#include<ctime>
using namespace std ;
#define rep(i,n,m) for( int i = (int) n ; i < (int) m ; ++i )
 
class FoxAndHandleEasy {
public:
  string isPossible(string S, string T);
};
 
string FoxAndHandleEasy::isPossible(string S, string T) {
  string ret;
  rep(i, 0, S.size()) {
    string n = S.substr(0, i) + S + S.substr(i);
    if(n == T)
    return "Yes"; 
  }
  return "No";
}
 
 
 
//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
//With unused code cleaner (beta) by ahmed_aly

********************************************************************************
*******************************************************************************/