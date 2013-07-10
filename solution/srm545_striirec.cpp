/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12025
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

class StrIIRec {
public:
    string recovstr(int n, int minInv, string minStr);
};

string StrIIRec::recovstr(int n, int minInv, string minStr) {
    string ret;
    return ret;
}


int test0() {
    int n = 1;
    int minInv = 0;
    string minStr = "a";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 2;
    int minInv = 0;
    string minStr = "a";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "ab";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 2;
    int minInv = 0;
    string minStr = "b";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "ba";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 2;
    int minInv = 1;
    string minStr = "a";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "ba";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 2;
    int minInv = 1;
    string minStr = "b";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
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
    int n = 2;
    int minInv = 0;
    string minStr = "ab";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "ab";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 2;
    int minInv = 1;
    string minStr = "ab";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "ba";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 2;
    int minInv = 0;
    string minStr = "ba";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "ba";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 2;
    int minInv = 1;
    string minStr = "ba";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "ba";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 16;
    int minInv = 64;
    string minStr = "k";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "kabcdopnmljihgfe";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 9;
    int minInv = 1;
    string minStr = "efcdgab";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "efcdgabhi";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 13;
    int minInv = 77;
    string minStr = "ljhefmciabdgk";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "lmkjihgfedcba";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 3;
    int minInv = 0;
    string minStr = "bca";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "bca";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 8;
    int minInv = 1;
    string minStr = "gdbcah";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "gdbcahef";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 15;
    int minInv = 3;
    string minStr = "enjkmlbhaio";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "enjkmlbhaiocdfg";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 11;
    int minInv = 12;
    string minStr = "acgedif";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "acgedifbhjk";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 8;
    int minInv = 16;
    string minStr = "af";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "afdhgecb";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 13;
    int minInv = 33;
    string minStr = "dkmlabfghj";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "dkmlabfghjcei";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 10;
    int minInv = 12;
    string minStr = "hdfjig";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "hdfjigabce";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 11;
    int minInv = 16;
    string minStr = "dhiajge";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "dhiajgebcfk";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 4;
    int minInv = 1;
    string minStr = "ca";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "cabd";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 3;
    int minInv = 0;
    string minStr = "acb";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "acb";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 3;
    int minInv = 1;
    string minStr = "c";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "cab";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 13;
    int minInv = 32;
    string minStr = "fcdbh";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "fcdbhakmljige";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 18;
    int minInv = 84;
    string minStr = "ifebqhljk";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "ifebqhljkrponmgdca";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 20;
    int minInv = 124;
    string minStr = "rosqkcip";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "rosqkcipabdjtnmlhgfe";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 15;
    int minInv = 105;
    string minStr = "jkblogm";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "onmlkjihgfedcba";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 11;
    int minInv = 0;
    string minStr = "egifh";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "egifhabcdjk";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 3;
    int minInv = 0;
    string minStr = "bac";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "bac";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 11;
    int minInv = 55;
    string minStr = "debgikjfc";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "kjihgfedcba";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 4;
    int minInv = 4;
    string minStr = "cbd";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "cbda";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 11;
    int minInv = 2;
    string minStr = "fhgkicb";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "fhgkicbadej";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 18;
    int minInv = 51;
    string minStr = "hqkrebo";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "hqkreboacdfgijlmnp";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 13;
    int minInv = 65;
    string minStr = "fcedmjigl";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "fgmlkjihedcba";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 18;
    int minInv = 136;
    string minStr = "o";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "ocrqpnmlkjihgfedba";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 11;
    int minInv = 4;
    string minStr = "biaf";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "biafcdeghjk";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 4;
    int minInv = 4;
    string minStr = "ad";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "bdca";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 9;
    int minInv = 10;
    string minStr = "b";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "bacdhigfe";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 4;
    int minInv = 5;
    string minStr = "ad";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "cdba";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 5;
    int minInv = 1;
    string minStr = "e";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "eabcd";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 20;
    int minInv = 99;
    string minStr = "asjilotdqgcepbmnkrh";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "asjilotdqgcepbmnrkhf";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 12;
    int minInv = 39;
    string minStr = "labdefcgkhij";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "labdjkihgfec";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 8;
    int minInv = 14;
    string minStr = "h";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "habdgfec";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 19;
    int minInv = 122;
    string minStr = "afqinebcsrmlgh";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "afqinosrpmlkjhgedcb";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 6;
    int minInv = 12;
    string minStr = "bfead";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "cfedba";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 6;
    int minInv = 7;
    string minStr = "bcd";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "bcefda";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 17;
    int minInv = 16;
    string minStr = "e";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "eabcdfghijknqpoml";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 4;
    int minInv = 1;
    string minStr = "cbd";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "cbda";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 10;
    int minInv = 27;
    string minStr = "aihecjgf";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "aihecjgfdb";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 8;
    int minInv = 22;
    string minStr = "fahb";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "fchgedba";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 15;
    int minInv = 24;
    string minStr = "adilgme";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "adilgmebcfhjkno";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 14;
    int minInv = 72;
    string minStr = "fcengdika";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "fcmnlkjihgedba";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 12;
    int minInv = 50;
    string minStr = "gjeh";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "gjehklifdcba";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 19;
    int minInv = 116;
    string minStr = "enhmdirfbjlosk";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "enhmdirqspolkjgfcba";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 7;
    int minInv = 6;
    string minStr = "bfd";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "bfdaceg";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 9;
    int minInv = 20;
    string minStr = "feh";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "fehabigdc";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 6;
    int minInv = 12;
    string minStr = "dcbfe";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "defcba";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 20;
    int minInv = 39;
    string minStr = "mahkidsbtpref";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "mahkidsbtprefcgjlnoq";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 8;
    int minInv = 18;
    string minStr = "defhac";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "defhcgba";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 16;
    int minInv = 15;
    string minStr = "ahjpk";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "ahjpkbcdefgilmno";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 18;
    int minInv = 124;
    string minStr = "bqkdrflcinej";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "bqkjrponmlihgfedca";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 9;
    int minInv = 17;
    string minStr = "hcedfbai";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "hcedfbaig";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 8;
    int minInv = 28;
    string minStr = "gabhdcf";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "hgfedcba";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 20;
    int minInv = 24;
    string minStr = "lfd";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "lfdabceghijkmnopstrq";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 17;
    int minInv = 69;
    string minStr = "apqemchbldkgi";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "apqemchbldkjonigf";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int n = 5;
    int minInv = 4;
    string minStr = "a";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "acedb";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int n = 6;
    int minInv = 11;
    string minStr = "f";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "faedcb";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int n = 19;
    int minInv = 24;
    string minStr = "enbosmr";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "enbosmracdfghijklpq";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int n = 5;
    int minInv = 1;
    string minStr = "ebac";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "ebacd";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int n = 17;
    int minInv = 88;
    string minStr = "lipbn";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "lipbnacqomkjhgfed";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int n = 13;
    int minInv = 48;
    string minStr = "jlhaci";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "jlhacidmkgfeb";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int n = 6;
    int minInv = 11;
    string minStr = "abc";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "bfedca";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int n = 8;
    int minInv = 13;
    string minStr = "gcbhde";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "gcbhdeaf";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int n = 19;
    int minInv = 19;
    string minStr = "ebjcha";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "ebjchadfgiklmnoprsq";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int n = 19;
    int minInv = 48;
    string minStr = "caro";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "carobdefghijpsqnmlk";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int n = 11;
    int minInv = 6;
    string minStr = "cakib";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "cakibdefghj";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int n = 18;
    int minInv = 42;
    string minStr = "fpbkojqgenrilhdac";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "fpbkojqgenrilhdacm";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int n = 11;
    int minInv = 2;
    string minStr = "edbjaki";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "edbjakicfgh";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int n = 8;
    int minInv = 10;
    string minStr = "e";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "eabchgfd";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int n = 9;
    int minInv = 21;
    string minStr = "h";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "habgifedc";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int n = 8;
    int minInv = 16;
    string minStr = "cfh";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "cfhaegdb";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int n = 14;
    int minInv = 56;
    string minStr = "kiamjhbecld";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "kiamjhbelngfdc";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int n = 19;
    int minInv = 18;
    string minStr = "irfebmslhgadn";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "irfebmslhgadncjkopq";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int n = 10;
    int minInv = 18;
    string minStr = "aie";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "aiebcgjhfd";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int n = 11;
    int minInv = 43;
    string minStr = "hejgb";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "hejgikfdcba";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int n = 15;
    int minInv = 22;
    string minStr = "glmc";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "glmcabdefhijkno";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int n = 4;
    int minInv = 3;
    string minStr = "adcb";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "adcb";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int n = 20;
    int minInv = 41;
    string minStr = "cardgepnlbhsfk";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "cardgepnlbhsfkijmoqt";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int n = 15;
    int minInv = 70;
    string minStr = "onfmcj";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "onfmcjabhlkiged";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int n = 9;
    int minInv = 29;
    string minStr = "fadg";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "fdihgecba";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int n = 9;
    int minInv = 5;
    string minStr = "igehacbd";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "igehacbdf";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int n = 10;
    int minInv = 37;
    string minStr = "cjfbegad";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "cjhigfedba";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int n = 13;
    int minInv = 40;
    string minStr = "cbfmkjadielh";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "cbfmkjaglihed";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int n = 13;
    int minInv = 29;
    string minStr = "fmcbkaigjeld";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "fmcbkaigjeldh";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int n = 19;
    int minInv = 134;
    string minStr = "fshkpinjemqdoblagr";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "fshkplrqonmjigedcba";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int n = 15;
    int minInv = 0;
    string minStr = "e";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "eabcdfghijklmno";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int n = 7;
    int minInv = 20;
    string minStr = "d";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "fgedcba";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int n = 18;
    int minInv = 48;
    string minStr = "nbchflikdr";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "nbchflikdraegjmopq";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int n = 9;
    int minInv = 20;
    string minStr = "fcdebiha";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "fcdehigba";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int n = 6;
    int minInv = 2;
    string minStr = "bfad";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "bfadce";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int n = 9;
    int minInv = 19;
    string minStr = "ecah";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "ecahgifdb";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int n = 12;
    int minInv = 41;
    string minStr = "hbgdj";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "hbgdjlkifeca";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int n = 12;
    int minInv = 38;
    string minStr = "a";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "abelkjihgfdc";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int n = 20;
    int minInv = 148;
    string minStr = "ogrhsf";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "ogrhsfntqpmlkjiedcba";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int n = 12;
    int minInv = 29;
    string minStr = "gkc";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "gkcabdhljife";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int n = 18;
    int minInv = 19;
    string minStr = "eqncbkoflrhjma";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "eqncbkoflrhjmadgip";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int n = 15;
    int minInv = 82;
    string minStr = "ne";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "neamolkjihgfdcb";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int n = 9;
    int minInv = 1;
    string minStr = "cahfgbei";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "cahfgbeid";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int n = 15;
    int minInv = 61;
    string minStr = "jmkhnd";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "jmkhndabciolgfe";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int n = 20;
    int minInv = 17;
    string minStr = "cijnsqbephkatfdroglm";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "cijnsqbephkatfdroglm";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int n = 20;
    int minInv = 79;
    string minStr = "phjn";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "phjnabcdefktsrqomlig";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int n = 20;
    int minInv = 5;
    string minStr = "bedo";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "bedoacfghijklmnpqrst";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int n = 20;
    int minInv = 189;
    string minStr = "mikjardhcnltfqo";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "strqponmlkjihgfedcba";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int n = 20;
    int minInv = 0;
    string minStr = "eljtohsbkfid";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "eljtohsbkfidacgmnpqr";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int n = 20;
    int minInv = 190;
    string minStr = "mj";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "tsrqponmlkjihgfedcba";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int n = 20;
    int minInv = 156;
    string minStr = "pfjmqkdarlegthscobin";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "pfjmrtsqonlkihgedcba";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int n = 20;
    int minInv = 30;
    string minStr = "mnglorcifpbethjkdqas";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "mnglorcifpbethjkdqas";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int n = 20;
    int minInv = 93;
    string minStr = "r";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "rabcdefqtsponmlkjihg";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int n = 20;
    int minInv = 0;
    string minStr = "q";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "qabcdefghijklmnoprst";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int n = 20;
    int minInv = 0;
    string minStr = "mq";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "mqabcdefghijklnoprst";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int n = 20;
    int minInv = 184;
    string minStr = "filhtmkeajpobqdscgrn";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "ntsrqpomlkjihgfedcba";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int n = 20;
    int minInv = 187;
    string minStr = "c";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "qtsrponmlkjihgfedcba";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int n = 20;
    int minInv = 1;
    string minStr = "jicndftlobmhqapgsrke";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "jicndftlobmhqapgsrke";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int n = 20;
    int minInv = 187;
    string minStr = "jasghodbcmreqflin";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "qtsrponmlkjihgfedcba";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int n = 20;
    int minInv = 188;
    string minStr = "gnha";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "rtsqponmlkjihgfedcba";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int n = 20;
    int minInv = 188;
    string minStr = "ckamtdrfblhqnipeojgs";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "rtsqponmlkjihgfedcba";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int n = 20;
    int minInv = 84;
    string minStr = "k";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "kabcdefptsrqonmljihg";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int n = 20;
    int minInv = 0;
    string minStr = "itfhaqsbodlkjn";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "itfhaqsbodlkjncegmpr";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int n = 20;
    int minInv = 185;
    string minStr = "kcplegqo";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "otsrqpnmlkjihgfedcba";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int n = 20;
    int minInv = 0;
    string minStr = "rnsdjfibgclphemqaok";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "rnsdjfibgclphemqaokt";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int n = 20;
    int minInv = 6;
    string minStr = "c";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "cabdefghijklmnoprtsq";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int n = 20;
    int minInv = 173;
    string minStr = "oncijgrmhakbedts";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "onktsrqpmljihgfedcba";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int n = 20;
    int minInv = 3;
    string minStr = "qrslchogjbdnetfkaim";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "qrslchogjbdnetfkaimp";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int n = 20;
    int minInv = 62;
    string minStr = "agb";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "agbcdefhktsrqponmlji";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int n = 20;
    int minInv = 5;
    string minStr = "bkodjecamhqgrtfnpis";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "bkodjecamhqgrtfnpisl";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int n = 20;
    int minInv = 79;
    string minStr = "rhdictqojapmkl";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "rhdictqojapmklbefgns";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int n = 20;
    int minInv = 180;
    string minStr = "aomtgrknslecfibqjdhp";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "jtsrqponmlkihgfedcba";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int n = 20;
    int minInv = 42;
    string minStr = "ih";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "ihabcdefgjklstrqponm";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int n = 20;
    int minInv = 190;
    string minStr = "nbdqchgltakjipemfr";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "tsrqponmlkjihgfedcba";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int n = 20;
    int minInv = 189;
    string minStr = "scgkbqnejptfldrmhi";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "strqponmlkjihgfedcba";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int n = 20;
    int minInv = 175;
    string minStr = "sjcnitagrqfkbelphmd";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "sjntrqpomlkihgfedcba";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int n = 20;
    int minInv = 8;
    string minStr = "jcibomhegpd";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "jcibomhegpdafklnqrst";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int n = 20;
    int minInv = 185;
    string minStr = "trc";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "trnsqpomlkjihgfedcba";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int n = 20;
    int minInv = 190;
    string minStr = "dp";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "tsrqponmlkjihgfedcba";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int n = 20;
    int minInv = 141;
    string minStr = "jd";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "jdamtsrqponlkihgfecb";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int n = 20;
    int minInv = 1;
    string minStr = "ltgskpobhmfd";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "ltgskpobhmfdaceijnqr";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int n = 20;
    int minInv = 179;
    string minStr = "hkmldcgfpiobt";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "itsrqponmlkjhgfedcba";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int n = 20;
    int minInv = 1;
    string minStr = "stmopcl";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "stmopclabdefghijknqr";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int n = 20;
    int minInv = 2;
    string minStr = "idctqmfonbkjresp";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "idctqmfonbkjrespaghl";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int n = 20;
    int minInv = 0;
    string minStr = "fjpmldbcniqshkgoear";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "fjpmldbcniqshkgoeart";
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int n = 20;
    int minInv = 5;
    string minStr = "lcoerk";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "lcoerkabdfghijmnpqst";
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    int n = 20;
    int minInv = 187;
    string minStr = "tdjsingplohmea";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "tpsrqonmlkjihgfedcba";
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    int n = 20;
    int minInv = 188;
    string minStr = "fsheicnod";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "rtsqponmlkjihgfedcba";
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    int n = 20;
    int minInv = 0;
    string minStr = "tgm";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "tgmabcdefhijklnopqrs";
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    int n = 20;
    int minInv = 150;
    string minStr = "brsmfhjkg";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "brsmfotqpnlkjihgedca";
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    int n = 20;
    int minInv = 1;
    string minStr = "dnarhjlm";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "dnarhjlmbcefgikopqst";
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    int n = 20;
    int minInv = 190;
    string minStr = "dcaqkr";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "tsrqponmlkjihgfedcba";
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    int n = 20;
    int minInv = 7;
    string minStr = "p";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "pabcdefghijklmnoqrst";
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    int n = 20;
    int minInv = 187;
    string minStr = "klgrcpjobnmqdea";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "qtsrponmlkjihgfedcba";
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    int n = 20;
    int minInv = 185;
    string minStr = "ajsdflk";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "otsrqpnmlkjihgfedcba";
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    int n = 20;
    int minInv = 123;
    string minStr = "k";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "kabcmtsrqponljihgfed";
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    int n = 20;
    int minInv = 190;
    string minStr = "a";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "tsrqponmlkjihgfedcba";
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    int n = 20;
    int minInv = 70;
    string minStr = "abdej";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "abdejcfgqtsrponmlkih";
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    int n = 20;
    int minInv = 100;
    string minStr = "a";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdeotsrqpnmlkjihgf";
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    int n = 20;
    int minInv = 20;
    string minStr = "a";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefghijklmstrqpon";
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    int n = 11;
    int minInv = 55;
    string minStr = "kjihgfedcba";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "kjihgfedcba";
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    int n = 20;
    int minInv = 130;
    string minStr = "a";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "abcntsrqpomlkjihgfed";
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    int n = 20;
    int minInv = 31;
    string minStr = "abcdqefghijklmnop";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdqefghijklrtsponm";
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    int n = 12;
    int minInv = 56;
    string minStr = "debgikjfcl";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "djlkihgfecba";
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    int n = 20;
    int minInv = 34;
    string minStr = "abcdefghi";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefghijkrtsqponml";
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    int n = 20;
    int minInv = 180;
    string minStr = "abcdmnopqrstefghijkl";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "jtsrqponmlkihgfedcba";
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    int n = 20;
    int minInv = 176;
    string minStr = "tip";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "tiprsqonmlkjhgfedcba";
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    int n = 20;
    int minInv = 179;
    string minStr = "mbjcalhtepsfonkqgdir";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "mptsrqonlkjihgfedcba";
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    int n = 20;
    int minInv = 190;
    string minStr = "abcdefghijklmnopqrst";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "tsrqponmlkjihgfedcba";
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    int n = 20;
    int minInv = 150;
    string minStr = "abcdefghijklmnopqrst";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "abqtsrponmlkjihgfedc";
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    int n = 20;
    int minInv = 100;
    string minStr = "dcaefog";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "dcaefoltsrqpnmkjihgb";
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    int n = 20;
    int minInv = 100;
    string minStr = "abcdefg";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdeotsrqpnmlkjihgf";
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    int n = 20;
    int minInv = 130;
    string minStr = "tqcd";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "tqcdabsrponmlkjihgfe";
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    int n = 20;
    int minInv = 171;
    string minStr = "a";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "atsrqponmlkjihgfedcb";
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    int n = 20;
    int minInv = 190;
    string minStr = "abcdehjkmnpoqrstf";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "tsrqponmlkjihgfedcba";
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    int n = 15;
    int minInv = 0;
    string minStr = "abcdefghijklmno";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefghijklmno";
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    int n = 20;
    int minInv = 189;
    string minStr = "onm";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "strqponmlkjihgfedcba";
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    int n = 20;
    int minInv = 3;
    string minStr = "a";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefghijklmnopqtsr";
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    int n = 20;
    int minInv = 190;
    string minStr = "s";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "tsrqponmlkjihgfedcba";
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    int n = 20;
    int minInv = 190;
    string minStr = "tsrqponmlkjihgfedcba";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "tsrqponmlkjihgfedcba";
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    int n = 5;
    int minInv = 3;
    string minStr = "abdec";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "abedc";
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    int n = 19;
    int minInv = 20;
    string minStr = "fcdebihamnk";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "fcdebihamnkgjlopqrs";
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    int n = 20;
    int minInv = 90;
    string minStr = "a";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefstrqponmlkjihg";
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    int n = 20;
    int minInv = 95;
    string minStr = "a";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdejtsrqponmlkihgf";
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    int n = 20;
    int minInv = 190;
    string minStr = "bacdefghijklmnopqrst";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "tsrqponmlkjihgfedcba";
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    int n = 4;
    int minInv = 3;
    string minStr = "abcd";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "adcb";
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    int n = 3;
    int minInv = 0;
    string minStr = "abc";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "abc";
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    int n = 20;
    int minInv = 50;
    string minStr = "a";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefghiotsrqpnmlkj";
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    int n = 20;
    int minInv = 190;
    string minStr = "abcdefghijklmnop";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "tsrqponmlkjihgfedcba";
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    int n = 3;
    int minInv = 1;
    string minStr = "bac";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "bac";
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    int n = 15;
    int minInv = 88;
    string minStr = "nbcdefghklmo";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "nbjomlkihgfedca";
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    int n = 19;
    int minInv = 20;
    string minStr = "fcdebiha";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "fcdebihagjklmnopsrq";
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    int n = 4;
    int minInv = 3;
    string minStr = "a";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "adcb";
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    int n = 9;
    int minInv = 10;
    string minStr = "fcdebiha";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "fcdebihag";
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    int n = 16;
    int minInv = 50;
    string minStr = "ib";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "ibacdelponmkjhgf";
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    int n = 6;
    int minInv = 8;
    string minStr = "a";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "adfecb";
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    int n = 19;
    int minInv = 151;
    string minStr = "b";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "bpsrqonmlkjihgfedca";
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    int n = 20;
    int minInv = 66;
    string minStr = "abcdefghijklmnopqrst";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefghtsrqponmlkji";
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    int n = 20;
    int minInv = 171;
    string minStr = "bacdefghijklmnopqrst";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "bstrqponmlkjihgfedca";
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    int n = 20;
    int minInv = 180;
    string minStr = "a";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "jtsrqponmlkihgfedcba";
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    int n = 20;
    int minInv = 129;
    string minStr = "a";
    StrIIRec* pObj = new StrIIRec();
    clock_t start = clock();
    string result = pObj->recovstr(n, minInv, minStr);
    clock_t end = clock();
    delete pObj;
    string expected = "abcmtsrqponlkjihgfed";
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    test193() == 0 ? ++passed : ++failed;
    test194() == 0 ? ++passed : ++failed;
    test195() == 0 ? ++passed : ++failed;
    test196() == 0 ? ++passed : ++failed;
    test197() == 0 ? ++passed : ++failed;
    test198() == 0 ? ++passed : ++failed;
    test199() == 0 ? ++passed : ++failed;
    test200() == 0 ? ++passed : ++failed;
    test201() == 0 ? ++passed : ++failed;
    test202() == 0 ? ++passed : ++failed;
    test203() == 0 ? ++passed : ++failed;
    test204() == 0 ? ++passed : ++failed;
    test205() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22263204&rd=14737&pm=12025
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
 
class StrIIRec {
public:
  string recovstr(int, int, string);
};
 
string StrIIRec::recovstr(int n, int minInv, string minStr) {
  int i, was[255], c, j, x, y;
  memset(was,0,sizeof(was));
  string st = "", w;
  for (i=0;i<n;i++) {
    for (c=0;c<n;c++) {
      if (was[c]) continue;
      w = st+(char)(c+97);
      for (j=n-1;j>=0;j--)
        if (!was[j] && j != c) w += (char)(j+97);
      if (w < minStr) continue;
      j = 0;
      for (x=0;x<n;x++)
        for (y=x+1;y<n;y++)
          if (w[x] > w[y]) j++;
      if (j < minInv) continue;
      st += (char)(c+97);
      was[c] = 1;
      break;
    }
    if (st == "") break;
  }
  return st;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/