/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6771
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

class LexStringWriter {
public:
    int minMoves(string s);
};

int LexStringWriter::minMoves(string s) {
    int ret;
    return ret;
}


int test0() {
    string s = "aaa";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string s = "ba";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string s = "abba";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string s = "acbbc";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string s = "a";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
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
    string s = "bb";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string s = "bba";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string s = "abbc";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string s = "abbcc";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string s = "cdaccb";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string s = "cdaccbc";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string s = "adecadbb";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string s = "adecadbbe";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string s = "aebffffddc";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string s = "aebffffddcf";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string s = "fceceacbgcbc";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string s = "fceceacbgcbca";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string s = "fgbefceaegccde";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string s = "fgbefceaegccdeh";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string s = "ghecicidgcficbif";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string s = "ghecicidgcficbife";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 93;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string s = "aijhfdbbjehhdcfeef";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 88;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string s = "aijhfdbbjehhdcfeefb";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string s = "agifgccgcacccfcbgfjk";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 95;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string s = "agifgccgcacccfcbgfjkk";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 97;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string s = "aebllfljdcfffkliedfiha";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 145;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string s = "aebllfljdcfffkliedfihai";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 150;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string s = "ffkiajhcdddkiceafgilbcji";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 169;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string s = "ffkiajhcdddkiceafgilbcjim";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 175;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string s = "mcljlhjbncbjhclakhnabkklcc";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 172;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string s = "mcljlhjbncbjhclakhnabkklccn";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 181;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string s = "anecfilgjoccihfoealfndocckdh";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 255;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string s = "anecfilgjoccihfoealfndocckdhm";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 287;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string s = "lndjkeibjmfegjppoapcefcfclaaia";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 284;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string s = "lndjkeibjmfegjppoapcefcfclaaiap";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 297;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string s = "bldcnqcdbajqlmiqdgdgnnbqdpdjcekm";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 297;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string s = "bldcnqcdbajqlmiqdgdgnnbqdpdjcekmk";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 302;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string s = "gqnlrlrdpcfrlkroepfcnacfikpqarllfl";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 329;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string s = "gqnlrlrdpcfrlkroepfcnacfikpqarllflo";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 355;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string s = "gfhlkoffgcsrphrhikssasdpkrdmcgkjerob";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 387;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string s = "gfhlkoffgcsrphrhikssasdpkrdmcgkjerobm";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 392;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string s = "aijhpnlbtorrncpeepbadiehmadcmdffrhccfn";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 350;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string s = "aijhpnlbtorrncpeepbadiehmadcmdffrhccfns";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 377;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string s = "mqeclocpgcicoqlokauobdrlcqgtjuorcolrdokp";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 412;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string s = "mqeclocpgcicoqlokauobdrlcqgtjuorcolrdokpo";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 415;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string s = "agtfrnnrnannnqnmgfjkvssjkebgopblbvmqpdcnil";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 391;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string s = "agtfrnnrnannnqnmgfjkvssjkebgopblbvmqpdcnilb";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 400;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string s = "ijwnkwmffprrreuimahbpjhwidmdubjemdcqpbobklwe";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 510;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string s = "ijwnkwmffprrreuimahbpjhwidmdubjemdcqpbobklweg";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 557;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string s = "aenxlfljpoffrwxuedrihauluepkmxrfflcovfkdihlcwd";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 575;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string s = "aenxlfljpoffrwxuedrihauluepkmxrfflcovfkdihlcwdk";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 584;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string s = "kxewpdqlteccxmutjaqusnywckdhrxuummcmadnkkaffxqyl";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 618;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string s = "kxewpdqlteccxmutjaqusnywckdhrxuummcmadnkkaffxqylm";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 639;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string s = "ssxvnjhpdqdxvcrastvybcwvmgnykrxvzxkgxtspsjdgyluegq";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 642;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string s = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string s = "bbabbababbaaabbbbabaaaaaabaababbaabaaabbbbabbbbbba";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 148;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string s = "abbccccaaccccbccbaccbacccbabacccccccacbacbccbabbba";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 189;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string s = "cdaccbcacdbbbcdddadabbabacaacadcabcbbadddcbdcdccda";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 243;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string s = "adecadbbeeccdcaeeabaddeccadccdaaccccaddaaaaadbebcc";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 280;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string s = "aebffffddcfffefcedfcbacfcedeafffffccdfedcbfcedeeea";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 325;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string s = "fceceacbgcbcaceadagabddeccgfcgadcaeddadbafdagbfaga";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 350;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string s = "fgbefceaegccdehhhahbccbcbfaaeaheacfcdaghhfdgfhfega";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 398;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string s = "ghecicidgcficbifegfceacfibghaiccfcfcgcegchicbdbhbg";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 440;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string s = "aijhfdbbjehhdcfeefbadiehcadccdffhhccfdifaffaibegcc";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 474;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string s = "agifgccgcacccfcbgfjkkhhjkebgdebabkbfedcciabcfbgcif";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 451;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string s = "aebllfljdcfffkliedfihailiedkalffflccjfkdihlckdkeeg";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 489;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string s = "ffkiajhcdddkiceafgilbcjimgalkekimkkgkgfcfjdgllhegd";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 516;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string s = "mcljlhjbncbjhclakhnabkklccnmcnhdjhekdhkbafdagbmaga";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 426;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string s = "anecfilgjoccihfoealfndocckdhmiffccccainafkffngebhm";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 576;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string s = "lndjkeibjmfegjppoapcefcfclaaiapjbekegampplhnlpljna";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 603;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string s = "bldcnqcdbajqlmiqdgdgnnbqdpdjcekmkfedplbjmiepfehehg";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 519;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string s = "gqnlrlrdpcfrlkroepfcnacfikpqarllflocplepchrckdkqkg";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 580;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string s = "gfhlkoffgcsrphrhikssasdpkrdmcgkjerobmmhmmoifleacgs";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 609;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string s = "aijhpnlbtorrncpeepbadiehmadcmdffrhccfnspappksloqmc";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 688;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string s = "mqeclocpgcicoqlokauobdrlcqgtjuorcolrdokpotronpthna";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 636;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string s = "agtfrnnrnannnqnmgfjkvssjkebgopblbvmqpdcnilbcqbgciq";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 459;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string s = "ijwnkwmffprrreuimahbpjhwidmdubjemdcqpbobklwegqkjtt";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 676;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string s = "aenxlfljpoffrwxuedrihauluepkmxrfflcovfkdihlcwdkqqg";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 651;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string s = "kxewpdqlteccxmutjaqusnywckdhrxuummcmadnkkaffxqylmm";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 642;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string s = "ssxvnjhpdqdxvcrastvybcwvmgnykrxvzxkgxtspsjdgyluegq";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 642;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string s = "azzbcdzzzzzzzzzzzzzzzzzzzazzzbdzzzzzzzzzzzzzzzzzza";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 237;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string s = "sdfhfdhuifwheifhsidhfkjshdfkjhsdfuiwhifuhdkvnbn";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 429;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string s = "cbab";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string s = "aabbbbabbzbzzzzeoirutotriyuoriuytbazbabzabzzzzaaab";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 285;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string s = "dcabcd";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string s = "dabdcdee";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string s = "abcasdadasdadasdasd";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string s = "abdghihihihihiijkjkjihihbegfegdegddhehdebgbcabacah";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 428;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string s = "acbbcd";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string s = "abbcadadb";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string s = "dfafasfasfsadfdsfsdafdsahdsgfd";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 143;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string s = "bbabc";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string s = "ffffffggggaaakkkgggaaaggggfff";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 122;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string s = "acbabbbb";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string s = "acbbc";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string s = "bdabccc";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string s = "pzzapaxxdsaspdfsdzzadpasdddazzpaazpzdd";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 225;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string s = "zxyzxyzxyfedcba";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string s = "abcdzefghmijklamnopqrstouvwxyz";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 128;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string s = "dhhhffjemffhcfmkledcfhlevlgmefgt";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 248;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string s = "adcbcef";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string s = "accb";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string s = "acbadb";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string s = "bcdebahb";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string s = "zxcvbnmasadfghjklpoiuytrewqwertyyuuioighcbvxzsfgfg";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 698;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string s = "ababc";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string s = "asdffdsedfsxcsdsaasdfxz";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 135;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string s = "baabc";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string s = "uabcdefabcdefeasddaqedzasqszadueqezcgsadsfudasdfu";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 465;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string s = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    LexStringWriter* pObj = new LexStringWriter();
    clock_t start = clock();
    int result = pObj->minMoves(s);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20336263&rd=10001&pm=6771
********************************************************************************
#include <iostream> 
#include <string> 
#include <cmath> 
using namespace std; 
 
typedef unsigned long long ull; 
 
class LexStringWriter { 
private: 
    int cache[26][50]; 
    int alphacount[26]; 
    int alphafirst[26], alphalast[26]; 
    int N; 
public: 
    int solve(int alpha, int cursor) { 
        if(alpha == 26) return 0; 
        if(cache[alpha][cursor] != -1) return cache[alpha][cursor]; 
        int first = alphafirst[alpha]; 
        int last = alphalast[alpha]; 
        if(first == string::npos) { 
            return solve(alpha + 1, cursor); 
        } 
        int minima = min( 
            solve(alpha + 1, last) + abs(cursor - first) + abs(first - last) + alphacount[alpha], 
            solve(alpha + 1, first) + abs(cursor - last) + abs(first - last) + alphacount[alpha]); 
        cache[alpha][cursor] = minima; 
        return minima; 
    } 
    int minMoves(string s) { 
        N = s.size(); 
        for(int x = 0; x < 26; x++) {  
            alphacount[x] = 0; 
            for(int y = 0; y < N; y++) cache[x][y] = -1; 
        } 
        for(int y = 0; y < N; y++) { 
            s[y] -= 'a'; 
            alphacount[(int)s[y]]++; 
        } 
        for(int x = 0; x < 26; x++) {  
            alphafirst[x] = s.find_first_of(x); 
            alphalast[x] = s.find_last_of(x); 
        } 
        return solve(0, 0); 
    } 
};

********************************************************************************
*******************************************************************************/