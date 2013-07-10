/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5955
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

class LogCutter {
public:
    string bestCut(int L, int A, int K, int C);
};

string LogCutter::bestCut(int L, int A, int K, int C) {
    string ret;
    return ret;
}


int test0() {
    int L = 9;
    int A = 3;
    int K = 2;
    int C = 1;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "5 4";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int L = 5;
    int A = 2;
    int K = 1;
    int C = 2;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "3 3";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int L = 6;
    int A = 3;
    int K = 5;
    int C = 3;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "2 1";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int L = 10000;
    int A = 999983;
    int K = 5000;
    int C = 1000;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "13 2";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int L = 5;
    int A = 7;
    int K = 100;
    int C = 100;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "1 1";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int L = 254972011;
    int A = 548485165;
    int K = 5332;
    int C = 7970;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "72465 47271";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int L = 261041520;
    int A = 609823152;
    int K = 9321;
    int C = 9397;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "62052 46770";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int L = 509814502;
    int A = 367392227;
    int K = 4843;
    int C = 6982;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "218447 214011";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int L = 11475485;
    int A = 81287286;
    int K = 6667;
    int C = 5351;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "2474 1867";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int L = 889122851;
    int A = 65518436;
    int K = 3044;
    int C = 8813;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "391470 147353";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int L = 56771247;
    int A = 279113036;
    int K = 1060;
    int C = 7634;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "110512 36571";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int L = 90313815;
    int A = 985328869;
    int K = 7319;
    int C = 8402;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "18113 4699";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int L = 723852485;
    int A = 323441038;
    int K = 6055;
    int C = 6048;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "146412 51851";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int L = 22797416;
    int A = 180798385;
    int K = 3655;
    int C = 2448;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "16615 7926";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int L = 48874477;
    int A = 602748809;
    int K = 105;
    int C = 956;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "12542808 12542808";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int L = 2;
    int A = 1;
    int K = 1;
    int C = 1;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "1 1";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int L = 1000000000;
    int A = 1000000000;
    int K = 10000;
    int C = 10000;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "999989999 2";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int L = 940076323;
    int A = 803471157;
    int K = 9462;
    int C = 8143;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "207654 53254";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int L = 10000;
    int A = 1;
    int K = 10000;
    int C = 10000;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "1 1";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int L = 10001;
    int A = 1;
    int K = 10000;
    int C = 10000;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "1 1";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int L = 10002;
    int A = 1;
    int K = 10000;
    int C = 10000;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "2 2";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int L = 1000000000;
    int A = 1;
    int K = 10000;
    int C = 10000;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "999989999 2";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int L = 10;
    int A = 3;
    int K = 1;
    int C = 5;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "6 4";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int L = 1000000;
    int A = 1;
    int K = 10000;
    int C = 10000;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "989999 2";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int L = 999999999;
    int A = 283738473;
    int K = 10000;
    int C = 10000;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "412657 410590";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int L = 999999997;
    int A = 999999997;
    int K = 9999;
    int C = 9997;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "999989997 2";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int L = 722232984;
    int A = 697848970;
    int K = 3256;
    int C = 4879;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "1037546 36558";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int L = 1000000000;
    int A = 9997;
    int K = 10000;
    int C = 10000;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "900029999 9998";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int L = 999999998;
    int A = 12323133;
    int K = 10000;
    int C = 5122;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "413887 398372";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int L = 1000000000;
    int A = 10000;
    int K = 10000;
    int C = 10000;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "899999999 10001";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int L = 123456;
    int A = 999999999;
    int K = 9999;
    int C = 50;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "2429 2240";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int L = 10000;
    int A = 999983;
    int K = 10000;
    int C = 10000;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "1 1";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int L = 14;
    int A = 3;
    int K = 5;
    int C = 4;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "4 3";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int L = 999999997;
    int A = 123456789;
    int K = 10000;
    int C = 10000;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "12339462 12339412";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int L = 1000000000;
    int A = 999999998;
    int K = 9996;
    int C = 9999;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "999990004 999990004";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int L = 100000001;
    int A = 60000001;
    int K = 9996;
    int C = 9999;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "19990012 6";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int L = 10;
    int A = 9;
    int K = 10;
    int C = 10;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "9 1";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int L = 999999997;
    int A = 537565721;
    int K = 9991;
    int C = 9997;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "256701 211728";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int L = 3563;
    int A = 256245245;
    int K = 2;
    int C = 30;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "1473 617";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int L = 179424674;
    int A = 999999999;
    int K = 10000;
    int C = 4879;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "369336 364646";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int L = 1000000000;
    int A = 1000000000;
    int K = 10000;
    int C = 1;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "999989999 10001";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int L = 116517483;
    int A = 416546046;
    int K = 4668;
    int C = 5905;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "39724 811";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int L = 1000000000;
    int A = 1000000000;
    int K = 10000;
    int C = 10000;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "999989999 2";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int L = 1000000000;
    int A = 100000;
    int K = 10000;
    int C = 9000;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "200000 2";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int L = 1000000000;
    int A = 1242357;
    int K = 10000;
    int C = 10000;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "171111 97387";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int L = 947957934;
    int A = 999999999;
    int K = 9999;
    int C = 4543;
    LogCutter* pObj = new LogCutter();
    clock_t start = clock();
    string result = pObj->bestCut(L, A, K, C);
    clock_t end = clock();
    delete pObj;
    string expected = "253033 109301";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=10009&pm=5955
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
 
typedef long long __int64;
 
const int maxsize=20000+5;
 
int A[maxsize],f[maxsize];
 
class LogCutter
{
public:
  int n,L,limit;
  bool check(int M,int &fC)
  {
    int i;
    A[n+1]=L;
    for (i=1;i<=n;i++)
      if (A[i+1]-A[i]>M)
        return false;
    f[n+1]=0;
    int k=n+1;
    for (i=n;i>0;i--)
    {
      for (;A[k]-A[i]>M;k--);
      f[i]=f[k]+1;
    }
    for (i=1;i<=n;i++)
      if (A[i]<=M && f[i]<=limit)
      {
        fC=A[i];
        return true;
      }
    return false;
  }
  string bestCut(int _L, int _A, int _n, int C)
  {
    int i;
    n=_n;
    L=_L;
    limit=C;
    for (i=1;i<=n;i++)
    {
      __int64 B=_A;
      B=B*i;
      B=B%(L-1)+1;
      A[i]=(int)(B);
    }
    sort(A+1,A+n+1);
    int size=n;
    n=0;
    for (i=1;i<=size;i++)
      if (i==1 || A[i]!=A[i-1])
        A[++n]=A[i];
    int H=0,T=L+1;
    for (;H+1<T;)
    {
      int M=(H+T)/2,fC;
      if (check(M,fC))
        T=M;
      else
        H=M;
    }
    int rT;
    check(T,rT);
    char s[100];
    sprintf(s,"%d %d",T,rT);
    return s;
  }
};

********************************************************************************
*******************************************************************************/