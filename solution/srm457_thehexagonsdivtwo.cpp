/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10694
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

class TheHexagonsDivTwo {
public:
    long count(int n, int k);
};

long TheHexagonsDivTwo::count(int n, int k) {
    long ret;
    return ret;
}


int test0() {
    int n = 7;
    int k = 3;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 8;
    int k = 3;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 24;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 8;
    int k = 4;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 256;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 20;
    int k = 5;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 4692480;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 8;
    int k = 4;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 256;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 160;
    int k = 8;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 74141923072000;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 9;
    int k = 3;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 108;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 38;
    int k = 7;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1801108000;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 64;
    int k = 5;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 27633171072;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 173;
    int k = 3;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1907993842944;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 186;
    int k = 5;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 55929426172416;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 50;
    int k = 5;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 4616640000;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 117;
    int k = 7;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 5994639486720;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 46;
    int k = 7;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 7316362080;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 264;
    int k = 5;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 663258338775552;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 118;
    int k = 8;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 8562415251600;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 80;
    int k = 8;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 538125504000;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 97;
    int k = 3;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 30525665280;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 252;
    int k = 6;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 899808018036480;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 205;
    int k = 6;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 209689196945280;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 82;
    int k = 3;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 9084020400;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 215;
    int k = 7;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 444914804935800;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 223;
    int k = 9;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 962487983541000;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 40;
    int k = 9;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 4445530880;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 142;
    int k = 6;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 15603607264128;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 57;
    int k = 6;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 22753689264;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 267;
    int k = 6;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1352198336735664;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 230;
    int k = 8;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 961002687608096;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 38;
    int k = 6;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1175336736;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 110;
    int k = 8;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 5199317841536;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 162;
    int k = 4;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 7144096627200;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 164;
    int k = 4;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 7796343520000;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 242;
    int k = 9;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1713009478364352;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 261;
    int k = 4;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 208847732870400;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 110;
    int k = 8;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 5199317841536;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 168;
    int k = 9;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 130335990502392;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 17;
    int k = 6;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 2484240;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 136;
    int k = 8;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 23465149879360;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 26;
    int k = 6;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 68405760;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 119;
    int k = 7;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 6769429520840;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 222;
    int k = 8;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 748699263516960;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 84;
    int k = 7;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 566290448640;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 85;
    int k = 9;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1032282686880;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 176;
    int k = 3;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 2155943565240;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 197;
    int k = 6;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 158296535168640;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 23;
    int k = 5;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 13613200;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 271;
    int k = 6;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1501728292287000;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 22;
    int k = 8;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 40012560;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 28;
    int k = 4;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 19904976;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 144;
    int k = 6;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 17242028236800;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 261;
    int k = 4;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 208847732870400;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 139;
    int k = 4;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 2406813472700;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 84;
    int k = 5;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 195614065920;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 191;
    int k = 8;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 259083702501120;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 212;
    int k = 9;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 673582715642896;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 95;
    int k = 4;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 158915324160;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 195;
    int k = 5;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 78136749760680;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 235;
    int k = 7;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 833169954320352;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 39;
    int k = 5;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 741683712;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 190;
    int k = 7;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 185925983724720;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 224;
    int k = 5;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 208063705449600;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 141;
    int k = 9;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 37730049745500;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 127;
    int k = 4;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1265494495232;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 189;
    int k = 7;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 179169660115740;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 148;
    int k = 9;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 53166201518336;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int n = 23;
    int k = 7;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 41462280;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int n = 86;
    int k = 5;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 231558378496;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int n = 115;
    int k = 7;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 5302089263360;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int n = 156;
    int k = 5;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 16097292542160;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int n = 43;
    int k = 6;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 2928516360;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int n = 22;
    int k = 9;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 49752896;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int n = 44;
    int k = 7;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 5297010120;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int n = 120;
    int k = 5;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 2499242618880;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int n = 42;
    int k = 8;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 5098564800;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int n = 163;
    int k = 8;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 84484026268400;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int n = 265;
    int k = 7;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1943389640301760;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int n = 264;
    int k = 6;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1248975338265600;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int n = 153;
    int k = 6;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 26475704070000;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int n = 74;
    int k = 5;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 78716786400;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int n = 56;
    int k = 4;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 3487294720;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int n = 149;
    int k = 8;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 44749365605568;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int n = 252;
    int k = 5;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 477715248825000;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int n = 116;
    int k = 9;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 9461816844480;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int n = 230;
    int k = 6;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 472346443546912;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int n = 39;
    int k = 4;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 241639200;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int n = 177;
    int k = 9;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 188464054951404;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int n = 238;
    int k = 9;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1522775541512576;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int n = 48;
    int k = 8;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 13607032320;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int n = 29;
    int k = 7;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 243528000;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int n = 26;
    int k = 6;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 68405760;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int n = 98;
    int k = 9;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 2853209078720;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int n = 26;
    int k = 5;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 35315200;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int n = 88;
    int k = 3;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 15131944800;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int n = 266;
    int k = 3;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 40237960139520;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int n = 74;
    int k = 6;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 149540720640;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int n = 10;
    int k = 3;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 336;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int n = 92;
    int k = 5;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 375103450152;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int n = 131;
    int k = 6;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 8808833880000;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int n = 216;
    int k = 9;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 768927624192000;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int n = 126;
    int k = 9;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 17024821793280;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int n = 20;
    int k = 4;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1432000;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int n = 124;
    int k = 4;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1067649858000;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int n = 11;
    int k = 4;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 7740;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int n = 49;
    int k = 3;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 210201600;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int n = 275;
    int k = 8;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 3384739143529180;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int n = 8;
    int k = 9;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 6720;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int n = 7;
    int k = 8;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 840;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int n = 7;
    int k = 4;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 32;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int n = 300;
    int k = 9;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 7775708550920640;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int n = 299;
    int k = 9;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 7595552680374120;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int n = 300;
    int k = 5;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1633117602240000;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int n = 257;
    int k = 8;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 2101432964771840;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int n = 300;
    int k = 7;
    TheHexagonsDivTwo* pObj = new TheHexagonsDivTwo();
    clock_t start = clock();
    long result = pObj->count(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 4655560757609160;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22655195&rd=14144&pm=10694
********************************************************************************
#include <iostream> 
#include <cassert> 
#include <algorithm> 
 
typedef long long int64; 
using namespace std; 
#define Eo(x) { cerr << #x << " = " << (x) << endl; } 
 
const int maxn = 10; 
int x[maxn]; 
int64 out; 
 
int who[maxn]; 
int many[maxn]; 
int n,k; 
 
void go(int pos, int cen, int64 cur){ 
  if (pos == 6) {  
    out += cur; return;  
  } 
  for (int i = 0; i < k; i++) if (i != cen && many[i] < x[i]){ 
    if (pos && who[pos-1] == i) continue; 
    if (pos == 5 && i == who[0]) continue; 
    who[pos] = i; 
    many[i]++; 
    go(pos+1,cen,cur*(x[i]-many[i]+1)); 
    many[i]--; 
    who[pos] = -1; 
  } 
} 
 
class TheHexagonsDivTwo{ 
public: 
int64 count(int n, int k){ 
::n = n; 
::k = k; 
int r = n%k; 
int d = n/k; 
for (int z = 0; z < k; z++) x[z] = d; 
for (int z = 1; z < k && r; z++, r--) x[z]++; 
if (r) { x[0]++; r--; assert(!r); } 
for (int cen = 0; cen < k; cen++){ 
  go(0,cen,x[cen]); 
} 
return out/6; 
} 
};

********************************************************************************
*******************************************************************************/