/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4700
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

class EncodingTrees {
public:
    string getCode(int N, int index);
};

string EncodingTrees::getCode(int N, int index) {
    string ret;
    return ret;
}


int test0() {
    int N = 2;
    int index = 1;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
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
    int N = 2;
    int index = 2;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "ba";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 2;
    int index = 3;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 4;
    int index = 9;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "cbad";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 15;
    int index = 14023;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdeohgfniljkm";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 1;
    int index = 1;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 1;
    int index = 2;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 1;
    int index = 2000000000;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 1;
    int index = 1999999999;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 3;
    int index = 1;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "abc";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 3;
    int index = 2;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "acb";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 3;
    int index = 3;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "bac";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 3;
    int index = 4;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "cab";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 3;
    int index = 5;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "cba";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 3;
    int index = 6;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 4;
    int index = 1;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "abcd";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 4;
    int index = 2;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "abdc";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 4;
    int index = 3;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "acbd";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 4;
    int index = 4;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "adbc";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 4;
    int index = 5;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "adcb";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 4;
    int index = 6;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "bacd";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 4;
    int index = 7;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "badc";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 4;
    int index = 8;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "cabd";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 4;
    int index = 9;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "cbad";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 4;
    int index = 10;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "dabc";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 4;
    int index = 11;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "dacb";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 4;
    int index = 12;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "dbac";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 4;
    int index = 13;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "dcab";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 4;
    int index = 14;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "dcba";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 4;
    int index = 15;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 6;
    int index = 66;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "cbafed";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 11;
    int index = 111;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdekhfgji";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 12;
    int index = 121212;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "ihagfedbcjkl";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 12;
    int index = 200012;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "lkfeabcdhgij";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 15;
    int index = 8555555;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "okagdcbefhijnlm";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 16;
    int index = 29999999;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "pedcabjihfgkonml";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 19;
    int index = 883631595;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "jebadcihgfsrqponmlk";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 19;
    int index = 883631594;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "jebadcihgfsrqponmkl";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 19;
    int index = 883631596;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "jecabdfghiklmnopqrs";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 19;
    int index = 1767263190;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "srqponmlkjihgfedcba";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 19;
    int index = 1;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefghijklmnopqrs";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 19;
    int index = 2;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefghijklmnopqsr";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 19;
    int index = 1767263191;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
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
    int N = 19;
    int index = 1767263189;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "srqponmlkjihgfedcab";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 18;
    int index = 1000000000;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 18;
    int index = 100000000;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "arbnhcgfedilkjmqop";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 16;
    int index = 14567242;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "dcabhegfpomlikjn";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 19;
    int index = 2000000000;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 13;
    int index = 1987654321;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 19;
    int index = 1423434232;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "sbachdfegirlkjqmonp";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 19;
    int index = 100000;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefgmhljikrqnops";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 19;
    int index = 2000000000;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 19;
    int index = 1712345678;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "srmlabdcekfighjponq";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 1;
    int index = 300;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 1;
    int index = 4;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 19;
    int index = 1000000000;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "nmjgafbcdeihklosrpq";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 13;
    int index = 142347;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "alicbdehfgjkm";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 19;
    int index = 5000000;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdmfeglhikjsnroqp";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 19;
    int index = 1423434232;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "sbachdfegirlkjqmonp";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 19;
    int index = 100000;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefgmhljikrqnops";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 19;
    int index = 2000000000;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 19;
    int index = 1712345678;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "srmlabdcekfighjponq";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 1;
    int index = 300;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 1;
    int index = 4;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 19;
    int index = 1000000000;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "nmjgafbcdeihklosrpq";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 13;
    int index = 142347;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "alicbdehfgjkm";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 19;
    int index = 5000000;
    EncodingTrees* pObj = new EncodingTrees();
    clock_t start = clock();
    string result = pObj->getCode(N, index);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdmfeglhikjsnroqp";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=144400&rd=7995&pm=4700
********************************************************************************
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
using namespace std;
#define FOR(i,a,b) for(int i=(a),_b=(b);i<=_b;++i)
 
int ntrees[20];
 
string f(int n, int nr, char aa) {
  if(n==0) return "";
  int root = 0;
  while(ntrees[root]*ntrees[n-1-root] <= nr) {
    nr-=ntrees[root]*ntrees[n-1-root];
    ++root;
  }
  string s;
  s += char(aa + root);
  s += f(root, nr / ntrees[n-1-root], aa);
  s += f(n-1-root, nr % ntrees[n-1-root], aa + root + 1);
  return s;
}
 
struct EncodingTrees {
 
  // MAIN
  string getCode(int N, int nr) {
    --nr;
    ntrees[0] = 1;
    FOR(i,1,19) {
      ntrees[i] = 0;
      FOR(j,0,i-1) ntrees[i] += ntrees[j] * ntrees[i-1-j];
    }
    if (nr < 0 || nr >= ntrees[N]) return "";
    return f(N, nr, 'a');
  }
 
};
 
// Powered by FileEdit
 
// Powered by TomekAI
// Powered by TZTester 1.01 [25-Feb-2003]
 
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/