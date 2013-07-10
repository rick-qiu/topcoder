/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7503
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

class CssPropertyConverter {
public:
    string getCamelized(string cssPropertyName);
};

string CssPropertyConverter::getCamelized(string cssPropertyName) {
    string ret;
    return ret;
}


int test0() {
    string cssPropertyName = "z-index";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "zIndex";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string cssPropertyName = "border-collapse";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "borderCollapse";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string cssPropertyName = "top-border-width";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "topBorderWidth";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string cssPropertyName = "a";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string cssPropertyName = "ba";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "ba";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string cssPropertyName = "aaa";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "aaa";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string cssPropertyName = "cbdd";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "cbdd";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string cssPropertyName = "ab-aa";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "abAa";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string cssPropertyName = "bb-edc";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "bbEdc";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string cssPropertyName = "gc-gd-c";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "gcGdC";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string cssPropertyName = "gefhhhcf";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "gefhhhcf";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string cssPropertyName = "b-hec-bgb";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "bHecBgb";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string cssPropertyName = "h-ddd-ce-e";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "hDddCeE";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string cssPropertyName = "b-b-aib-dch";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "bBAibDch";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string cssPropertyName = "cf-k-j-k-j-b";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "cfKJKJB";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string cssPropertyName = "ea-embge-iald";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "eaEmbgeIald";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string cssPropertyName = "gfjfblfnigi-eb";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "gfjfblfnigiEb";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string cssPropertyName = "obekmimem-aajjg";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "obekmimemAajjg";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string cssPropertyName = "d-f-nei-lmbb-gmi";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "dFNeiLmbbGmi";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string cssPropertyName = "kdd-o-doihfbacnhl";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "kddODoihfbacnhl";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string cssPropertyName = "kd-b-rp-e-papcjc-n";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "kdBRpEPapcjcN";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string cssPropertyName = "ho-sqq-nj-p-eeml-oj";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "hoSqqNjPEemlOj";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string cssPropertyName = "t-rh-d-fffkong-rnpnf";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "tRhDFffkongRnpnf";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string cssPropertyName = "m-il-co-cn-acst-p-m-f";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "mIlCoCnAcstPMF";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string cssPropertyName = "rc-c-v-ir-eg-j-pt-o-oi";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "rcCVIrEgJPtOOi";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string cssPropertyName = "g-b-ajkv-eld-dhmsfc-e-i";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "gBAjkvEldDhmsfcEI";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string cssPropertyName = "g-e-q-g-s-ti-d-uv-t-vw-l";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "gEQGSTiDUvTVwL";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string cssPropertyName = "jjiyae-cb-vojwknppj-nogng";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "jjiyaeCbVojwknppjNogng";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string cssPropertyName = "qgcktdlfapdnrdegaulxhnbt-w";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "qgcktdlfapdnrdegaulxhnbtW";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string cssPropertyName = "tyuq-ei-oepvrb-vclclaiokoqg";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "tyuqEiOepvrbVclclaiokoqg";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string cssPropertyName = "q-r-t-afx-x-kqm-e-u-wc-yz-yp";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "qRTAfxXKqmEUWcYzYp";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string cssPropertyName = "kxju-hjfbhyaeg-dndseihovcnsyx";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "kxjuHjfbhyaegDndseihovcnsyx";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string cssPropertyName = "u-yj-y-em-b-jd-qi-ni-md-jefy-q";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "uYjYEmBJdQiNiMdJefyQ";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string cssPropertyName = "hmxg-ps-r-pv-uvcwwp-xqb-coszpsa";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "hmxgPsRPvUvcwwpXqbCoszpsa";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string cssPropertyName = "gj-cgigrv-r-zibtc-fqc-pwv-uoig-h";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "gjCgigrvRZibtcFqcPwvUoigH";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string cssPropertyName = "rw-oq-eo-b-r-b-dx-c-i-xmg-op-c-yn";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "rwOqEoBRBDxCIXmgOpCYn";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string cssPropertyName = "c-g-bi-xq-ja-b-me-nt-ifq-cf-e-o-my";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "cGBiXqJaBMeNtIfqCfEOMy";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string cssPropertyName = "i-c-jaz-zppv-myxtimvfnbj-b-yw-jurfq";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "iCJazZppvMyxtimvfnbjBYwJurfq";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string cssPropertyName = "cp-u-v-t-ob-zd-b-p-gxx-v-d-y-h-cy-xx";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "cpUVTObZdBPGxxVDYHCyXx";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string cssPropertyName = "kmiua-ssgovphydfqcydwfbooybmiwgfgoood";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "kmiuaSsgovphydfqcydwfbooybmiwgfgoood";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string cssPropertyName = "y-sx-wb-yu-j-tc-b-yi-y-pq-lm-cx-fv-m-f";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "ySxWbYuJTcBYiYPqLmCxFvMF";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string cssPropertyName = "aliysxkxdnmia-dh-z-nxjme-avzj-zponupd-r";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "aliysxkxdnmiaDhZNxjmeAvzjZponupdR";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string cssPropertyName = "aa-lor-hu-ou-a-xin-wo-s-x-oti-pzl-zfp-fz";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "aaLorHuOuAXinWoSXOtiPzlZfpFz";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string cssPropertyName = "l-qvvxtczz-ovuanil-bjgpec-ujgyav-qikkqetv";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "lQvvxtczzOvuanilBjgpecUjgyavQikkqetv";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string cssPropertyName = "d-g-iy-r-z-z-j-ggq-j-e-m-c-g-w-z-hh-cgzprj";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "dGIyRZZJGgqJEMCGWZHhCgzprj";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string cssPropertyName = "g-q-g-z-y-b-b-xa-gc-phm-uq-yu-jf-o-g-yz-kdg";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "gQGZYBBXaGcPhmUqYuJfOGYzKdg";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string cssPropertyName = "w-bf-fa-brj-xfo-yr-w-hv-j-l-z-ay-t-iax-c-b-d";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "wBfFaBrjXfoYrWHvJLZAyTIaxCBD";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string cssPropertyName = "tw-v-bc-vv-fao-k-i-evb-kn-xz-e-f-cz-s-c-vvyqq";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "twVBcVvFaoKIEvbKnXzEFCzSCVvyqq";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string cssPropertyName = "pk-nx-rg-k-d-meb-fz-fj-de-a-snz-y-k-b-cu-e-x-e";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "pkNxRgKDMebFzFjDeASnzYKBCuEXE";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string cssPropertyName = "wn-ed-lb-t-p-y-jdo-tk-k-h-ox-sl-q-r-e-q-v-em-ub";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "wnEdLbTPYJdoTkKHOxSlQREQVEmUb";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string cssPropertyName = "sa-m-l-b-om-fedpvwwyooyecz-k-tuefb-ll-foixiwfb-v";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "saMLBOmFedpvwwyooyeczKTuefbLlFoixiwfbV";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string cssPropertyName = "xjs-ctdabzsymyrtntsxgn-nbry-wrm-oe-nkfiwkjxdjhwbx";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "xjsCtdabzsymyrtntsxgnNbryWrmOeNkfiwkjxdjhwbx";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string cssPropertyName = "p-ah-v-qe-tq-e-ah-l-ak-o-hgc-qfp-k-ns-q-z-z-ypg-co";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "pAhVQeTqEAhLAkOHgcQfpKNsQZZYpgCo";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string cssPropertyName = "a-a";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "aA";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string cssPropertyName = "c-d-a-bc-ba-a";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "cDABcBaA";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string cssPropertyName = "bd-c-i-d-d-he-f-e-j-i-k";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "bdCIDDHeFEJIK";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string cssPropertyName = "b-p-ag-j-f-e-f-he-b-k-h-mm-c-p-dp";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "bPAgJFEFHeBKHMmCPDp";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string cssPropertyName = "t-ug-a-f-o-u-u-c-l-n-l-o-g-n-q-p-tf-i-kr-rs";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "tUgAFOUUCLNLOGNQPTfIKrRs";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string cssPropertyName = "f-l-e-e-v-s-g-w-b-g-a-p-f-l-v-m-r-t-j-n-l-d-d-j-v";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "fLEEVSGWBGAPFLVMRTJNLDDJV";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string cssPropertyName = "i-b-s-v-b-q-b-x-a-u-j-r-y-g-b-i-n-e-k-c-y-o-u-w-z";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "iBSVBQBXAUJRYGBINEKCYOUWZ";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string cssPropertyName = "yxmijzpmqpozwghoebrpnxczpbpmjfvfynywwbmmuhvtjdnpvp";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "yxmijzpmqpozwghoebrpnxczpbpmjfvfynywwbmmuhvtjdnpvp";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string cssPropertyName = "adnc-lpinlaemii-thglrao-hklutnu-jyi-op-ampl-dzyaaw";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "adncLpinlaemiiThglraoHklutnuJyiOpAmplDzyaaw";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string cssPropertyName = "tmh-c-qqtu-s-srec-l-c-gn-subi-z-sd-fs-e-zly-ec-b-z";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "tmhCQqtuSSrecLCGnSubiZSdFsEZlyEcBZ";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string cssPropertyName = "to-rk-p-x-v-cf-f-n-xn-w-k-ml-fb-j-rc-vrizd-p-si-dc";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "toRkPXVCfFNXnWKMlFbJRcVrizdPSiDc";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string cssPropertyName = "ev-pl-ia-x-wse-h-m-f-vg-b-w-yw-cc-v-i-ru-x-x-m-q-m";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "evPlIaXWseHMFVgBWYwCcVIRuXXMQM";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string cssPropertyName = "top-border-width";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "topBorderWidth";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string cssPropertyName = "teste";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "teste";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string cssPropertyName = "inswz";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "inswz";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string cssPropertyName = "a-a-a-a-aaa-aaa-a";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "aAAAAaaAaaA";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string cssPropertyName = "top-border-width-uyuwh-uwhuhwx-i";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "topBorderWidthUyuwhUwhuhwxI";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string cssPropertyName = "a-v-a-a-v-sadadsa-a-d";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "aVAAVSadadsaAD";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string cssPropertyName = "gdsfgjka-sdjafhk-ewyrui-bshdfj-zsdhfj";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "gdsfgjkaSdjafhkEwyruiBshdfjZsdhfj";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string cssPropertyName = "z-index";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "zIndex";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string cssPropertyName = "xxxxxxxxxx";
    CssPropertyConverter* pObj = new CssPropertyConverter();
    clock_t start = clock();
    string result = pObj->getCamelized(cssPropertyName);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxxxxxx";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20036294&rd=10664&pm=7503
********************************************************************************
#include <sstream> 
#include <iostream>
#include <string.h>
#include <algorithm>
#include <stdlib.h> 
#include <stdio.h> 
#include <numeric>
#include <math.h>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
using namespace std;
 
#define forn(i,n)     for(int i=0; i<n; ++i)
#define forv(i,v)     forn(i,int(v.size()))
#define ALL(a)        (a).begin(),(a).end()
#define pb            push_back
#define sz            size()
#define SORT(a)       sort(ALL(a))
#define iss           istringstream
 
typedef vector< int > vi; typedef vector< string > vs;
 
class CssPropertyConverter {
public:
    string getCamelized(string css) {
      string res;
      
      forv (i,css)
      {
        if (css[i]=='-')
        {
          css.erase(css.begin()+i);
          css[i] = toupper(css[i]);
        }
      }
      
         return css;
    }
 
};
 
 
 
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/