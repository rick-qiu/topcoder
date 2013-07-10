/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11766
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

class DengklekCountingFormations {
public:
    int numFormations(int N, int M, int K);
};

int DengklekCountingFormations::numFormations(int N, int M, int K) {
    int ret;
    return ret;
}


int test0() {
    int N = 2;
    int M = 2;
    int K = 2;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 1;
    int M = 1;
    int K = 58;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 5;
    int M = 3;
    int K = 2;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 3;
    int M = 5;
    int K = 7;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 894953467;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 7;
    int M = 47;
    int K = 74;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 778075142;
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
    int M = 1;
    int K = 1;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 10;
    int M = 50;
    int K = 100;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 882217320;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 2;
    int M = 2;
    int K = 2;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 3;
    int M = 9;
    int K = 74;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 322572571;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 8;
    int M = 2;
    int K = 31;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 448167988;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 2;
    int M = 35;
    int K = 11;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 827591288;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 10;
    int M = 41;
    int K = 100;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 499576513;
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
    int M = 18;
    int K = 13;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 940249024;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 7;
    int M = 3;
    int K = 10;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 201256387;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 10;
    int M = 39;
    int K = 81;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 309707622;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 6;
    int M = 35;
    int K = 28;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 209574503;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 6;
    int M = 23;
    int K = 2;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 312684759;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 7;
    int M = 34;
    int K = 53;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 178470265;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 8;
    int M = 8;
    int K = 13;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 222147990;
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
    int M = 36;
    int K = 16;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 582314457;
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
    int M = 9;
    int K = 3;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 938598903;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 6;
    int M = 28;
    int K = 93;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 638399990;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 6;
    int M = 22;
    int K = 62;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 780094411;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 8;
    int M = 50;
    int K = 14;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 951067372;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 7;
    int M = 19;
    int K = 54;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 576972993;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 10;
    int M = 46;
    int K = 88;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 899882197;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 7;
    int M = 22;
    int K = 11;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 626867463;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 1;
    int M = 40;
    int K = 46;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 498142982;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 5;
    int M = 10;
    int K = 4;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 694451690;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 8;
    int M = 3;
    int K = 91;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 855332855;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 5;
    int M = 28;
    int K = 99;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 906532409;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 9;
    int M = 14;
    int K = 28;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 82041125;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 1;
    int M = 49;
    int K = 52;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 141753950;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 2;
    int M = 48;
    int K = 51;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 34133860;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 8;
    int M = 6;
    int K = 72;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 979683844;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 1;
    int M = 45;
    int K = 69;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 475746964;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 9;
    int M = 14;
    int K = 90;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 457723292;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 9;
    int M = 34;
    int K = 82;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 366327521;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 6;
    int M = 8;
    int K = 41;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 321494072;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 9;
    int M = 47;
    int K = 93;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 192075956;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 1;
    int M = 4;
    int K = 20;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 160000;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 1;
    int M = 12;
    int K = 85;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 826157272;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 9;
    int M = 13;
    int K = 83;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 912915695;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 2;
    int M = 26;
    int K = 82;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 814639292;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 2;
    int M = 3;
    int K = 40;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 95630212;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 5;
    int M = 36;
    int K = 36;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 115379814;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 4;
    int M = 4;
    int K = 99;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 175968595;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 5;
    int M = 34;
    int K = 82;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 237392719;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 6;
    int M = 11;
    int K = 42;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 297426881;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 6;
    int M = 40;
    int K = 38;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 263330620;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 10;
    int M = 12;
    int K = 91;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 388184928;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 2;
    int M = 33;
    int K = 3;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 742311074;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 6;
    int M = 33;
    int K = 17;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 50118480;
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
    int M = 34;
    int K = 94;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 862227104;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 4;
    int M = 37;
    int K = 97;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 774321359;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 3;
    int M = 12;
    int K = 34;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 879192519;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 1;
    int M = 7;
    int K = 89;
    DengklekCountingFormations* pObj = new DengklekCountingFormations();
    clock_t start = clock();
    int result = pObj->numFormations(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 334585912;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22752635&rd=14725&pm=11766
********************************************************************************
// Authored by dolphinigle
// TopCoder
 
#include <vector>
#include <list>
#include <map>
#include <set>
 
#include <queue>
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
#include <cstring>
#include <assert.h>
 
#define FORN(X,Y) for (int (X) = 0;(X) < (Y);++(X))
#define DEBUG(x) cout << '>' << #x << ':' << x << '\n';
 
#define REP(X,Y,Z) for (int (X) = (Y);(X) < (Z);++(X))
#define RESET(Z,Y) memset(Z,Y,sizeof(Z))
 
#define SZ(Z) ((int)(Z).size())
#define ALL(W) (W).begin(), (W).end()
#define PB push_back
 
#define MP make_pair
#define A first
#define B second
 
#define INF 1023123123
#define EPS 1e-11
 
#define MX(Z,Y) Z = max((Z),(Y))
#define MN(X,Y) X = min((X),(Y))
 
#define FORIT(X,Y) for(typeof((Y).begin()) X = (Y).begin();X!=(Y).end();X++)
 
using namespace std;
 
typedef long long ll;
typedef double db;
typedef vector<int> vint;
typedef vector<ll> vll;
 
class DengklekCountingFormations {
public:
int numFormations(int, int, int);
};
 
//(number**exponent) % ivalue;
ll Power(ll number,ll exponent,ll ivalue) {
  ll ret = 1;
  ll multiplier = number;
  while (exponent > 0LL) {
    if (exponent % 2LL) {
      ret = (ret * multiplier) % ivalue;
    }
    exponent /= 2LL;
    multiplier = (multiplier * multiplier) % ivalue;
  }
  return ret;
}
 
//works if modulo >= 2
ll MultiplicativeInverse(ll number, ll ivalue) {
  return Power(number, ivalue - 2LL, ivalue);
}
 
ll FastCombination(ll from, ll pick, ll ivalue, bool reset = false) {
  static vector<ll> fact, rfact;
  if (reset) fact = rfact = vector<ll>(0);
  if (SZ(fact) == 0LL) {
    fact.PB(1LL);
    rfact.PB(1LL);
  }
  if (pick > from) return 0LL;
  ll table_size = max(from, max(pick, from-pick));
  while (SZ(fact) <= table_size) {
    fact.PB((fact.back() * (ll)SZ(fact)) % ivalue);
    rfact.PB(MultiplicativeInverse(fact.back(), ivalue));
  }
  ll jahja = (fact[from] * rfact[pick]) % ivalue;
  return (jahja * rfact[from-pick]) % ivalue;
}
// O(max(from, pick)).
// Assumes that ivalue will always be the same. To reset, use the
// reset flag.
 
ll modu = 1000000007LL;
 
int combi[102][102][102];
 
int n, m, k;
 
int dp[12][52][102][52];
 
int Solve(int row, int col, int types, int toput) {
 
  int& alias = dp[row][col][types][toput];
  if (alias != -1) return alias;
  
  if (row == 0) return alias = 1;
  if (col == 0) return alias = (row == 1);
  
  if (types == k) {
    // not allowed to put anymore
    return alias = 0;
  }
  
  if (toput > col) {
    return alias = 0;
  }
  
  alias = 0;
  FORN(i, row+1) {
    ll val = (ll)Solve(i, col - toput, types+1, 0) *
             (ll)Solve(row - i, col, types, toput+1);
    val %= modu;
    val *= combi[row][i][1];
    val %= modu;
    val *= combi[col][toput][i];
    val %= modu;
    alias += val;
    alias %= modu;
  }
    //cout << row << " " << col << " " << types << " " << toput << " " << alias << endl;
  return alias;
}
 
int DengklekCountingFormations::numFormations(int N, int M, int K) {
  n = N;
  m = M;
  k = K;
  FORN(i, 12) FORN(j, 52) FORN(k, 102) FORN(l, 52) dp[i][j][k][l] = -1;
  
  FORN(i, 102) FORN(j, 102) combi[i][j][0] = 1;
  
  FORN(i, 102) FORN(j, 102) {
    ll mult = FastCombination(i, j, modu);
    REP(k, 1, 102) combi[i][j][k] = (((ll)combi[i][j][k-1] * mult) % (ll)modu);
  }
  return Solve(n, m, 0, 0);
}
 
 
//Powered by [KawigiEdit] 2.0!
 
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/