/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3488
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

class WordNumber {
public:
    string theWord(int alpha, int n);
};

string WordNumber::theWord(int alpha, int n) {
    string ret;
    return ret;
}


int test0() {
    int alpha = 3;
    int n = 5;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "ab";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int alpha = 3;
    int n = 13;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "aaa";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int alpha = 26;
    int n = 2000000000;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "flhomvx";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int alpha = 15;
    int n = 1;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
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
    int alpha = 26;
    int n = 456;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "qn";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int alpha = 2;
    int n = 13;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "bba";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int alpha = 2;
    int n = 14;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "bbb";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int alpha = 2;
    int n = 15;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaa";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int alpha = 2;
    int n = 9;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "aba";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int alpha = 25;
    int n = 15625;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "xxy";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int alpha = 25;
    int n = 15626;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "xya";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int alpha = 17;
    int n = 1999999999;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "dnnjadcm";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int alpha = 4;
    int n = 13652;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "bdddddd";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int alpha = 4;
    int n = 13651;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "bdddddc";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int alpha = 20;
    int n = 20;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "t";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int alpha = 20;
    int n = 21;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "aa";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int alpha = 20;
    int n = 22;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "ab";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int alpha = 20;
    int n = 40;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "at";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int alpha = 20;
    int n = 41;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "ba";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int alpha = 26;
    int n = 1987654321;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "fkgocac";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int alpha = 2;
    int n = 7;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "aaa";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int alpha = 18;
    int n = 1700430165;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "bmqpdqdi";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int alpha = 6;
    int n = 1879066806;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "dffbdbecaaff";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int alpha = 19;
    int n = 1833149783;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "asrfgrdj";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int alpha = 17;
    int n = 1674669406;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "dafgnona";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int alpha = 17;
    int n = 462567884;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "abbmemoi";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int alpha = 5;
    int n = 816519128;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "cacbeaaeebdec";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int alpha = 24;
    int n = 1660558457;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "hpmaiwq";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int alpha = 15;
    int n = 14662179;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "addieci";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int alpha = 22;
    int n = 40352794;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "greokt";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int alpha = 20;
    int n = 1999886706;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "akdsepof";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int alpha = 7;
    int n = 1681133903;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "efddbbedgaa";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int alpha = 2;
    int n = 586596412;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "aaababbbbabbabbaaaaaaaabbbbab";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int alpha = 10;
    int n = 1999927401;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "aiiiibgcja";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int alpha = 20;
    int n = 1304372648;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "tglfklh";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int alpha = 14;
    int n = 1558323530;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "njmffbch";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int alpha = 2;
    int n = 2000000000;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "bbabbbaabbababbaababaaaaaaaaab";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int alpha = 25;
    int n = 2000000000;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "hdsxxxy";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int alpha = 26;
    int n = 1;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int alpha = 2;
    int n = 1999999999;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "bbabbbaabbababbaababaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int alpha = 22;
    int n = 1999999973;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "qnanogo";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int alpha = 26;
    int n = 2000000000;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "flhomvx";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int alpha = 26;
    int n = 1234000000;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "cyviitl";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int alpha = 3;
    int n = 82;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "bbca";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int alpha = 2;
    int n = 5;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "ba";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int alpha = 2;
    int n = 25;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "baba";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int alpha = 3;
    int n = 6;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "ac";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int alpha = 3;
    int n = 3;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "c";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int alpha = 3;
    int n = 565645454;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "ccbccacbcacbabcabb";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int alpha = 2;
    int n = 26;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "babb";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int alpha = 26;
    int n = 26;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "z";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int alpha = 2;
    int n = 2000000000;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "bbabbbaabbababbaababaaaaaaaaab";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int alpha = 2;
    int n = 20000000;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "aabbaaabaababbabaaaaaaab";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int alpha = 2;
    int n = 8;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "aab";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int alpha = 2;
    int n = 2000000;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "bbbabaaaabaabaaaaaab";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int alpha = 2;
    int n = 1073741822;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "bbbbbbbbbbbbbbbbbbbbbbbbbbbbb";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int alpha = 2;
    int n = 16;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "aaab";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int alpha = 3;
    int n = 9;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "bc";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int alpha = 25;
    int n = 24;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "x";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int alpha = 22;
    int n = 113379904;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "uuuuuv";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int alpha = 23;
    int n = 2000000000;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "mkpuagq";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int alpha = 26;
    int n = 700;
    WordNumber* pObj = new WordNumber();
    clock_t start = clock();
    string result = pObj->theWord(alpha, n);
    clock_t end = clock();
    delete pObj;
    string expected = "zx";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=16056363&rd=8000&pm=3488
********************************************************************************
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
#include <set>
#include <limits>
#include <cmath>
using namespace std;
 
#define mset(A,B) memset(A,B,sizeof(A));
 
class WordNumber
{
public:
  //<return-type> <method-name> (<argument-type> arg1)
  string theWord(int alpha, int n)
  {
    n--;
    int len = 1;
    int base = 1;
    while (n/alpha >= base)
    {
      len++;
      base *= alpha;
      n -= base;
    }
    string res = "";
    for (int i = 0; i < len; i++)
    {
      res += (char)('a'+n/base);
      n %= base;
      base /= alpha;
    }
    return res;
  }
};

********************************************************************************
*******************************************************************************/