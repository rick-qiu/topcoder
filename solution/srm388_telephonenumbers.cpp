/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8518
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

class TelephoneNumbers {
public:
    string kthNumber(int separation, int k);
};

string TelephoneNumbers::kthNumber(int separation, int k) {
    string ret;
    return ret;
}


int test0() {
    int separation = 1;
    int k = 5;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0000004";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int separation = 2;
    int k = 17;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0000101";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int separation = 3;
    int k = 33;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0002023";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int separation = 1;
    int k = 1;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0000000";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int separation = 1;
    int k = 2;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0000001";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int separation = 1;
    int k = 15;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "000000e";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int separation = 1;
    int k = 16;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "000000f";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int separation = 1;
    int k = 255;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "00000fe";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int separation = 1;
    int k = 256;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "00000ff";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int separation = 1;
    int k = 257;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0000100";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int separation = 1;
    int k = 4095;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0000ffe";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int separation = 1;
    int k = 4096;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0000fff";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int separation = 1;
    int k = 4097;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0001000";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int separation = 1;
    int k = 5012;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0001393";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int separation = 1;
    int k = 61440;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "000efff";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int separation = 1;
    int k = 65244;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "000fedb";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int separation = 1;
    int k = 65535;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "000fffe";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int separation = 1;
    int k = 65536;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "000ffff";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int separation = 1;
    int k = 65537;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0010000";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int separation = 1;
    int k = 300000;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "00493df";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int separation = 1;
    int k = 299999;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "00493de";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int separation = 2;
    int k = 1;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0000000";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int separation = 2;
    int k = 2;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0000011";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int separation = 2;
    int k = 3;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0000022";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int separation = 2;
    int k = 15;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "00000ee";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int separation = 2;
    int k = 16;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "00000ff";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int separation = 2;
    int k = 17;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0000101";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int separation = 2;
    int k = 18;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0000110";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int separation = 2;
    int k = 40;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0000275";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int separation = 2;
    int k = 41;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "000028a";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int separation = 2;
    int k = 49;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0000303";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int separation = 2;
    int k = 65535;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "00fffe1";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int separation = 2;
    int k = 65536;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "00ffff0";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int separation = 2;
    int k = 100000;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "01869f9";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int separation = 2;
    int k = 200000;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "030d3f2";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int separation = 2;
    int k = 127715;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "01f2e20";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int separation = 2;
    int k = 209716;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0333333";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int separation = 2;
    int k = 300000;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0493dfc";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int separation = 3;
    int k = 1;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0000000";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int separation = 3;
    int k = 2;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0000111";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int separation = 3;
    int k = 3;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0000222";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int separation = 3;
    int k = 15;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0000eee";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int separation = 3;
    int k = 16;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0000fff";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int separation = 3;
    int k = 17;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0001012";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int separation = 3;
    int k = 18;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0001103";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int separation = 3;
    int k = 40;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0002754";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int separation = 3;
    int k = 41;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "00028ab";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int separation = 3;
    int k = 49;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0003031";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int separation = 3;
    int k = 65535;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0fffe10";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int separation = 3;
    int k = 65536;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0ffff01";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int separation = 3;
    int k = 100000;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1869f92";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int separation = 3;
    int k = 200000;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "30d3f2a";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int separation = 3;
    int k = 127715;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1f2e200";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int separation = 3;
    int k = 209716;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "3333333";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int separation = 3;
    int k = 300000;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "493dfc6";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int separation = 3;
    int k = 299843;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "4934285";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int separation = 3;
    int k = 291457;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "4728095";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int separation = 3;
    int k = 276301;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "4374c84";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int separation = 3;
    int k = 42342;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "0a565c2";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int separation = 3;
    int k = 123456;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1e23f1f";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int separation = 3;
    int k = 298777;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "48f18a9";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int separation = 3;
    int k = 291777;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "473c0ce";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int separation = 3;
    int k = 299998;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "493dde4";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int separation = 3;
    int k = 123123;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1e0f227";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int separation = 3;
    int k = 298765;
    TelephoneNumbers* pObj = new TelephoneNumbers();
    clock_t start = clock();
    string result = pObj->kthNumber(separation, k);
    clock_t end = clock();
    delete pObj;
    string expected = "48f0cff";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22653720&rd=11122&pm=8518
********************************************************************************
#include <vector> 
#include <string> 
#include <queue> 
#include <algorithm> 
#include <map> 
#include <math.h> 
#include <string.h> 
using namespace std; 
 
bool pp[21][16][16][16][16][16]; 
 
class TelephoneNumbers 
{ 
  public: 
  string kthNumber(int separation, int k) 
  { 
    string res; 
    if (separation==1) 
    { 
      char temp[30] = ""; 
      sprintf(temp, "%07x", k-1); 
      res = temp; 
    } 
    else if (separation==2) 
    { 
      int cnt = 0; 
      for (int a2=0; a2<16; a2++) 
      for (int a3=0; a3<16; a3++) 
      for (int a4=0; a4<16; a4++) 
      for (int a5=0; a5<16; a5++) 
      for (int a6=0; a6<16; a6++) 
      for (int a7=0; a7<16; a7++) 
      if (!pp[0][a3][a4][a5][a6][a7] && 
          !pp[1][a2][a4][a5][a6][a7] && 
          !pp[2][a2][a3][a5][a6][a7] && 
        !pp[3][a2][a3][a4][a6][a7] && 
        !pp[4][a2][a3][a4][a5][a7] &&  
        !pp[5][a2][a3][a4][a5][a6]) 
      { 
        pp[0][a3][a4][a5][a6][a7] = 1; 
        pp[1][a2][a4][a5][a6][a7] = 1; 
        pp[2][a2][a3][a5][a6][a7] = 1; 
        pp[3][a2][a3][a4][a6][a7] = 1; 
        pp[4][a2][a3][a4][a5][a7] = 1; 
        pp[5][a2][a3][a4][a5][a6] = 1; 
        cnt ++; 
        if (cnt == k) 
        { 
          char temp[30] = ""; 
          sprintf(temp, "%x%x%x%x%x%x%x", 0, a2, a3, a4, a5, a6, a7); 
          return temp; 
        } 
      } 
    } 
    else if (separation==3) 
    { 
      int cnt = 0; 
      for (int a1=0; a1<16; a1++) 
      for (int a2=0; a2<16; a2++) 
      for (int a3=0; a3<16; a3++) 
      for (int a4=0; a4<16; a4++) 
      for (int a5=0; a5<16; a5++) 
      for (int a6=0; a6<16; a6++) 
      for (int a7=0; a7<16; a7++) 
      if (!pp[0][a3][a4][a5][a6][a7] && 
        !pp[1][a2][a4][a5][a6][a7] && 
        !pp[2][a2][a3][a5][a6][a7] && 
        !pp[3][a2][a3][a4][a6][a7] && 
        !pp[4][a2][a3][a4][a5][a7] && 
        !pp[5][a2][a3][a4][a5][a6] && 
        !pp[6][a1][a4][a5][a6][a7] && 
        !pp[7][a1][a3][a5][a6][a7] && 
        !pp[8][a1][a3][a4][a6][a7] && 
        !pp[9][a1][a3][a4][a5][a7] && 
        !pp[10][a1][a3][a4][a5][a6] && 
        !pp[11][a1][a2][a5][a6][a7] && 
        !pp[12][a1][a2][a4][a6][a7] && 
        !pp[13][a1][a2][a4][a5][a7] && 
        !pp[14][a1][a2][a4][a5][a6] && 
        !pp[15][a1][a2][a3][a6][a7] && 
        !pp[16][a1][a2][a3][a5][a7] && 
        !pp[17][a1][a2][a3][a5][a6] && 
        !pp[18][a1][a2][a3][a4][a7] && 
        !pp[19][a1][a2][a3][a4][a6] && 
        !pp[20][a1][a2][a3][a4][a5]) 
      { 
        pp[0][a3][a4][a5][a6][a7] = 1; 
        pp[1][a2][a4][a5][a6][a7] = 1; 
        pp[2][a2][a3][a5][a6][a7] = 1; 
        pp[3][a2][a3][a4][a6][a7] = 1; 
        pp[4][a2][a3][a4][a5][a7] = 1; 
        pp[5][a2][a3][a4][a5][a6] = 1; 
        pp[6][a1][a4][a5][a6][a7] = 1; 
        pp[7][a1][a3][a5][a6][a7] = 1; 
        pp[8][a1][a3][a4][a6][a7] = 1; 
        pp[9][a1][a3][a4][a5][a7] = 1; 
        pp[10][a1][a3][a4][a5][a6] = 1; 
        pp[11][a1][a2][a5][a6][a7] = 1; 
        pp[12][a1][a2][a4][a6][a7] = 1; 
        pp[13][a1][a2][a4][a5][a7] = 1; 
        pp[14][a1][a2][a4][a5][a6] = 1; 
        pp[15][a1][a2][a3][a6][a7] = 1; 
        pp[16][a1][a2][a3][a5][a7] = 1; 
        pp[17][a1][a2][a3][a5][a6] = 1; 
        pp[18][a1][a2][a3][a4][a7] = 1; 
        pp[19][a1][a2][a3][a4][a6] = 1; 
        pp[20][a1][a2][a3][a4][a5] = 1; 
        cnt ++; 
        if (cnt == k) 
        { 
          char temp[30] = ""; 
          sprintf(temp, "%x%x%x%x%x%x%x", a1, a2, a3, a4, a5, a6, a7); 
          return temp; 
        } 
      } 
    } 
     
    return res; 
  }; 
};

********************************************************************************
*******************************************************************************/