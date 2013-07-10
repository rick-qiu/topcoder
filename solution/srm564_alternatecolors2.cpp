/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12345
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

class AlternateColors2 {
public:
    long countWays(int n, int k);
};

long AlternateColors2::countWays(int n, int k) {
    long ret;
    return ret;
}


int test0() {
    int n = 100000;
    int k = 100000;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1666700000;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 1;
    int k = 1;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
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
    int k = 2;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 3;
    int k = 3;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 4;
    int k = 4;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 1000;
    int k = 1000;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 167000;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 6;
    int k = 4;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 1000;
    int k = 500;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 124833;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 1000;
    int k = 501;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 125833;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 1000;
    int k = 502;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 249585;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 6;
    int k = 1;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 21;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 3;
    int k = 1;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 4;
    int k = 1;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 1000;
    int k = 503;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 125832;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 1000;
    int k = 504;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 125832;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 1000;
    int k = 505;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 249088;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 1000;
    int k = 506;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 125833;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 1000;
    int k = 2;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 100000;
    int k = 100000;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1666700000;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 56278;
    int k = 5627;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 100300340;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 56278;
    int k = 1;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1583634781;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 100000;
    int k = 1;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 5000050000;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 1000;
    int k = 1;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 500500;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 6;
    int k = 6;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 62;
    int k = 31;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1008;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 100000;
    int k = 50000;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1249983333;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 80000;
    int k = 40000;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1600020000;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 5;
    int k = 3;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 74534;
    int k = 544;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 2750738739;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 74534;
    int k = 545;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 13515684;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 74534;
    int k = 546;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 13515684;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 875;
    int k = 43;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 359331;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 875;
    int k = 44;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 11971;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 874;
    int k = 45;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 13617;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 100000;
    int k = 49999;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 2500108335;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 70863;
    int k = 69730;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 837378790;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 12400;
    int k = 3703;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 50850651;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 24179;
    int k = 16610;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 87889537;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 51792;
    int k = 47007;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 443272961;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 13866;
    int k = 504;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 2287320;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 54965;
    int k = 6086;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 105301873;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 87565;
    int k = 79838;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1268008577;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 10484;
    int k = 3755;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 10775964;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 78436;
    int k = 41970;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 803753480;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 40378;
    int k = 10792;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 563516141;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 530;
    int k = 283;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 67536;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 40317;
    int k = 27381;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 243042129;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 71796;
    int k = 20481;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 420297541;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 67027;
    int k = 38501;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 613170018;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 70844;
    int k = 44538;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 721159296;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 98911;
    int k = 71781;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1507942561;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 23657;
    int k = 22120;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 94070694;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 60495;
    int k = 38763;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 531262187;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 33703;
    int k = 22273;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 232884428;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 23671;
    int k = 10885;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 147898518;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 63145;
    int k = 9116;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 177993383;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 9052;
    int k = 7040;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 12982765;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 47920;
    int k = 19560;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 248679320;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 40827;
    int k = 19542;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 202305298;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 62887;
    int k = 11558;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 219987721;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 25736;
    int k = 730;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 318828039;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 90062;
    int k = 86396;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1349647069;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 27830;
    int k = 14022;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 97312680;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 47805;
    int k = 20634;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 257849342;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 13933;
    int k = 2890;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 73006835;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int n = 4101;
    int k = 93;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 129729;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int n = 93227;
    int k = 4641;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 140722489;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int n = 11814;
    int k = 4450;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 41340642;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int n = 73904;
    int k = 24008;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 495339805;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int n = 66302;
    int k = 22795;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1363670574;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int n = 22947;
    int k = 9639;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 58260179;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int n = 88732;
    int k = 18249;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 484328989;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int n = 51413;
    int k = 12604;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 942606258;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int n = 75021;
    int k = 17224;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 2051538184;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int n = 58238;
    int k = 6928;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1442860335;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int n = 32653;
    int k = 1561;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 499977351;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int n = 85534;
    int k = 12358;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 3004269500;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int n = 37917;
    int k = 2950;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 647186989;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int n = 78624;
    int k = 32165;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 670575324;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int n = 20582;
    int k = 2482;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 179810298;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int n = 18418;
    int k = 1906;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 147422556;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int n = 37379;
    int k = 6010;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 560876892;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int n = 99342;
    int k = 47773;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 2531335503;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int n = 63954;
    int k = 30887;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 499469256;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int n = 75697;
    int k = 24510;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 518329310;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int n = 63222;
    int k = 23517;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 403469921;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int n = 42782;
    int k = 14432;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 171082081;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int n = 55614;
    int k = 2632;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1451193315;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int n = 81409;
    int k = 22385;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 523959254;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int n = 62627;
    int k = 66;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1377090;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int n = 50980;
    int k = 11127;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 168493361;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int n = 52263;
    int k = 2427;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 41349691;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int n = 48078;
    int k = 5543;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 83727336;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int n = 71029;
    int k = 2480;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 57647367;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int n = 44684;
    int k = 16528;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 597040290;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int n = 4077;
    int k = 1875;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1965015;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int n = 31272;
    int k = 16275;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 125525085;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int n = 23483;
    int k = 12856;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 129558981;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int n = 86101;
    int k = 38775;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 862332239;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int n = 53908;
    int k = 25493;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 349794676;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int n = 21480;
    int k = 11177;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 59213592;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int n = 79474;
    int k = 42537;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 825346901;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int n = 34992;
    int k = 16173;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 145071761;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int n = 91207;
    int k = 46363;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 2056848693;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int n = 51637;
    int k = 26837;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 341907174;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int n = 87787;
    int k = 44402;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 970702401;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int n = 9435;
    int k = 4631;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 10993280;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int n = 27759;
    int k = 13290;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 93539450;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int n = 73958;
    int k = 33948;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 644842260;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int n = 99836;
    int k = 45561;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1170311341;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int n = 46109;
    int k = 22049;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 257874750;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int n = 33538;
    int k = 16970;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 141711081;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int n = 5916;
    int k = 2840;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 4255109;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int n = 8729;
    int k = 4670;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 9952177;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int n = 55418;
    int k = 26761;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 785642691;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int n = 91855;
    int k = 49113;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1101802857;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int n = 8864;
    int k = 4338;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 9682416;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int n = 95555;
    int k = 49306;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 2234807148;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int n = 40425;
    int k = 18468;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 192017952;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int n = 22296;
    int k = 12028;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 118001598;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int n = 63796;
    int k = 33989;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 530266660;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int n = 83821;
    int k = 44761;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1679615031;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int n = 9165;
    int k = 4287;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 10040031;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int n = 13246;
    int k = 6622;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 43871856;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int n = 22140;
    int k = 11751;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 63722353;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int n = 2116;
    int k = 2048;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 746109;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int n = 14416;
    int k = 13569;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 34522645;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int n = 19922;
    int k = 19920;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 66154320;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int n = 5452;
    int k = 4411;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 5317963;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int n = 26650;
    int k = 23121;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 116306013;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int n = 72962;
    int k = 59501;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 857066808;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int n = 55906;
    int k = 46266;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 505440628;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int n = 79161;
    int k = 75101;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1041689774;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int n = 60020;
    int k = 53374;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 615142071;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int n = 30228;
    int k = 27997;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 153959720;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int n = 37867;
    int k = 35597;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 238138754;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int n = 46355;
    int k = 39424;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 374158221;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int n = 31498;
    int k = 27455;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 162640192;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int n = 93441;
    int k = 87950;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1450203889;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int n = 29916;
    int k = 28127;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 148637728;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int n = 44058;
    int k = 37547;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 316467060;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int n = 9196;
    int k = 8836;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 14140608;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int n = 2818;
    int k = 2437;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1373165;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int n = 4720;
    int k = 4572;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 3710940;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int n = 78822;
    int k = 71736;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1027139960;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int n = 15877;
    int k = 13094;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 40724849;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int n = 27279;
    int k = 27185;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 124031594;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int n = 93339;
    int k = 89418;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1449495586;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int n = 9740;
    int k = 9290;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 15780313;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int n = 9157;
    int k = 8914;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 13997803;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int n = 1699;
    int k = 1574;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 478937;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    int n = 12597;
    int k = 11582;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 26278881;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    int n = 40027;
    int k = 38309;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 266548210;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    int n = 12043;
    int k = 10476;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 23766552;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    int n = 38946;
    int k = 33170;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 247245329;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    int n = 1;
    int k = 1;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    int n = 2;
    int k = 1;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    int n = 5;
    int k = 3;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    int n = 8;
    int k = 3;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    int n = 8;
    int k = 3;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    int n = 5;
    int k = 5;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    int n = 4;
    int k = 2;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    int n = 7;
    int k = 6;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    int n = 10;
    int k = 3;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 17;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    int n = 9;
    int k = 1;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 45;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    int n = 99997;
    int k = 4;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 4999450018;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    int n = 99998;
    int k = 49998;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1249950000;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    int n = 100000;
    int k = 8;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 199997;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    int n = 10000;
    int k = 1234;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 42282791;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    int n = 100000;
    int k = 33334;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 3148140741;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    int n = 100000;
    int k = 7;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 4999650011;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    int n = 24566;
    int k = 578;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 4661569;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    int n = 14;
    int k = 10;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 42;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    int n = 100000;
    int k = 4;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 4999750006;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    int n = 99999;
    int k = 55555;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 2325126749;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    int n = 1000;
    int k = 30;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 9860;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    int n = 999;
    int k = 888;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 164576;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    int n = 43;
    int k = 27;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 291;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    int n = 100000;
    int k = 98765;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1666445796;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    int n = 8;
    int k = 7;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 15;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    int n = 100000;
    int k = 99998;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1666699997;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    int n = 16;
    int k = 9;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 45;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    int n = 20000;
    int k = 10000;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 100005000;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    int n = 100000;
    int k = 99999;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1666700001;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    int n = 99999;
    int k = 4;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 4999650009;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    int n = 30;
    int k = 13;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 271;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    int n = 12312;
    int k = 12312;
    AlternateColors2* pObj = new AlternateColors2();
    clock_t start = clock();
    long result = pObj->countWays(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 25268328;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23049630&rd=15186&pm=12345
********************************************************************************
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
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <ctime>
 
#define fr(i,n) for(int i=0;i<n;i++)
#define fo(i,n) for(int i=1;i<=n;i++)
#define fe(i,n) for(__typeof(n.begin()) i=n.begin();i!=n.end();i++)
using namespace std;
 
 
class AlternateColors2 {
public:
  long long countWays(int n, int k) {  
    long long z = 0;
    int u2=(k+1)/2*2;
    int u3=(k+2)/3*3;
    for(int i=0;3*i<k;i++)
    {
      z+=(k-1-3*i)/2*2;
      z++;
    }
    if(k%3==1&&u3<=n)
    {
      int u=n-u3;
      z+=1LL*(u+2)*(u+1)/2;
    }
    for(int i=0;i*3<k;i++)
    {
      if((k-3*i)%2==1)
      {
        z+=1LL*2*(n-3*i-(k-3*i+1)/2*2+1);
      }
    }
    return z;
  }
};
 
 
 
 
 
//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/