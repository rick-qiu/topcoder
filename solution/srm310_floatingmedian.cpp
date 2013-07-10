/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6551
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

class FloatingMedian {
public:
    long sumOfMedians(int seed, int mul, int add, int N, int K);
};

long FloatingMedian::sumOfMedians(int seed, int mul, int add, int N, int K) {
    long ret;
    return ret;
}


int test0() {
    int seed = 3;
    int mul = 1;
    int add = 1;
    int N = 10;
    int K = 3;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 60;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int seed = 10;
    int mul = 0;
    int add = 13;
    int N = 5;
    int K = 2;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 49;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int seed = 10;
    int mul = 0;
    int add = 7;
    int N = 5;
    int K = 2;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 28;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int seed = 4123;
    int mul = 2341;
    int add = 1231;
    int N = 7;
    int K = 3;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 102186;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int seed = 47;
    int mul = 5621;
    int add = 1;
    int N = 125000;
    int K = 1700;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 4040137193;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int seed = 47474;
    int mul = 5621;
    int add = 1;
    int N = 250000;
    int K = 5000;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 8024139123;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int seed = 1;
    int mul = 2;
    int add = 0;
    int N = 250000;
    int K = 23;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 80;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int seed = 32321;
    int mul = 46543;
    int add = 32552;
    int N = 17;
    int K = 17;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 25569;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int seed = 453;
    int mul = 2;
    int add = 64;
    int N = 351;
    int K = 349;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 196416;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int seed = 62000;
    int mul = 1;
    int add = 1;
    int N = 250000;
    int K = 4789;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 7643623468;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int seed = 59003;
    int mul = 1;
    int add = 2;
    int N = 250000;
    int K = 4948;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 7791440981;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int seed = 32000;
    int mul = 1;
    int add = 65534;
    int N = 250000;
    int K = 4877;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 7838388810;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int seed = 32312;
    int mul = 5621;
    int add = 1;
    int N = 250000;
    int K = 1;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 8188512824;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int seed = 2312;
    int mul = 5621;
    int add = 1;
    int N = 250000;
    int K = 2;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 5459597502;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int seed = 12;
    int mul = 5621;
    int add = 1;
    int N = 250000;
    int K = 3;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 8189672636;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int seed = 1342;
    int mul = 5621;
    int add = 1;
    int N = 250000;
    int K = 4;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 6558391466;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int seed = 5342;
    int mul = 5621;
    int add = 1;
    int N = 250000;
    int K = 5;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 8189773423;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int seed = 5342;
    int mul = 5621;
    int add = 1;
    int N = 250000;
    int K = 10;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 7445288217;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int seed = 5342;
    int mul = 5621;
    int add = 1;
    int N = 250000;
    int K = 470;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 8159311713;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int seed = 5342;
    int mul = 5621;
    int add = 1;
    int N = 250000;
    int K = 4700;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 8029389174;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int seed = 5342;
    int mul = 5621;
    int add = 1;
    int N = 250000;
    int K = 4999;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 8021974075;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int seed = 5342;
    int mul = 5621;
    int add = 1;
    int N = 250000;
    int K = 5000;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 8020332398;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int seed = 32312;
    int mul = 4749;
    int add = 32174;
    int N = 250000;
    int K = 1;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 8195130512;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int seed = 2312;
    int mul = 4749;
    int add = 32174;
    int N = 250000;
    int K = 2;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 5466685796;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int seed = 12;
    int mul = 4749;
    int add = 32174;
    int N = 250000;
    int K = 3;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 8200474426;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int seed = 1342;
    int mul = 4749;
    int add = 32174;
    int N = 250000;
    int K = 4;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 6553562754;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int seed = 5342;
    int mul = 4749;
    int add = 32174;
    int N = 250000;
    int K = 5;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 8188528886;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int seed = 5342;
    int mul = 4749;
    int add = 32174;
    int N = 250000;
    int K = 10;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 7441233970;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int seed = 5342;
    int mul = 4749;
    int add = 32174;
    int N = 250000;
    int K = 470;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 8156352552;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int seed = 5342;
    int mul = 4749;
    int add = 32174;
    int N = 250000;
    int K = 4700;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 8037125160;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int seed = 5342;
    int mul = 4749;
    int add = 32174;
    int N = 250000;
    int K = 4999;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 8029664338;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int seed = 5342;
    int mul = 4749;
    int add = 32174;
    int N = 250000;
    int K = 5000;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 8027928740;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int seed = 65535;
    int mul = 1;
    int add = 0;
    int N = 250000;
    int K = 1;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 16383750000;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int seed = 32321;
    int mul = 46543;
    int add = 32552;
    int N = 17;
    int K = 17;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 25569;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int seed = 32321;
    int mul = 46543;
    int add = 32552;
    int N = 250000;
    int K = 5000;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 8028017305;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int seed = 47;
    int mul = 5621;
    int add = 1;
    int N = 125000;
    int K = 1700;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 4040137193;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int seed = 65535;
    int mul = 65535;
    int add = 65535;
    int N = 250000;
    int K = 5000;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int seed = 2423;
    int mul = 2342;
    int add = 34343;
    int N = 250000;
    int K = 5000;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 11141910477;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int seed = 12;
    int mul = 347;
    int add = 6;
    int N = 250000;
    int K = 5000;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 8022041130;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int seed = 32;
    int mul = 51;
    int add = 6342;
    int N = 250000;
    int K = 1000;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 8159464550;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int seed = 123;
    int mul = 13743;
    int add = 12345;
    int N = 250000;
    int K = 5000;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 8021019601;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int seed = 65530;
    int mul = 65535;
    int add = 65535;
    int N = 250000;
    int K = 4999;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 8028103035;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int seed = 65535;
    int mul = 65535;
    int add = 0;
    int N = 2;
    int K = 1;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 65536;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int seed = 1532;
    int mul = 2354;
    int add = 4234;
    int N = 250000;
    int K = 5000;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 2592600582;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int seed = 65535;
    int mul = 65535;
    int add = 65535;
    int N = 250000;
    int K = 2500;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int seed = 32321;
    int mul = 46543;
    int add = 32551;
    int N = 240000;
    int K = 4999;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 7696717437;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int seed = 0;
    int mul = 1;
    int add = 1;
    int N = 250000;
    int K = 5000;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 7734014667;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int seed = 1337;
    int mul = 65534;
    int add = 2;
    int N = 250000;
    int K = 3;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 5461574920;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int seed = 57;
    int mul = 65501;
    int add = 50000;
    int N = 250000;
    int K = 5000;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 8035343957;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int seed = 65535;
    int mul = 65535;
    int add = 13;
    int N = 250000;
    int K = 5000;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 3430014;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int seed = 10;
    int mul = 2;
    int add = 3;
    int N = 250000;
    int K = 5000;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 16055650533;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int seed = 47;
    int mul = 5621;
    int add = 1;
    int N = 250000;
    int K = 5000;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 8023179659;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int seed = 65534;
    int mul = 65533;
    int add = 65530;
    int N = 250000;
    int K = 5000;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 8028296292;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int seed = 47;
    int mul = 5623;
    int add = 1;
    int N = 125000;
    int K = 1700;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 4034637764;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int seed = 34;
    int mul = 157;
    int add = 31;
    int N = 150000;
    int K = 5000;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 4751093065;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int seed = 1;
    int mul = 1;
    int add = 2;
    int N = 250000;
    int K = 50;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 7940052591;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int seed = 40000;
    int mul = 40000;
    int add = 40000;
    int N = 200000;
    int K = 4000;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 8642860096;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int seed = 3;
    int mul = 1;
    int add = 1;
    int N = 250000;
    int K = 5000;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 7734159846;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int seed = 47;
    int mul = 5621;
    int add = 1;
    int N = 25000;
    int K = 5000;
    FloatingMedian* pObj = new FloatingMedian();
    clock_t start = clock();
    long result = pObj->sumOfMedians(seed, mul, add, N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 650821320;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15485957&rd=9990&pm=6551
********************************************************************************
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
#define FOR(I, L, R) for (typeof((L)) I = (L), TMP_##I = (R); I < TMP_##I; ++I)
 
class FloatingMedian {
public:
  long long sumOfMedians(int seed, int mul, int add, int N, int K);
};
 
long long _seed, _mul, _add;
 
long long next()
{
  long long res = _seed;
  _seed *= _mul;
  _seed += _add;
  _seed %= 65536;
  return res;
}
 
int size[2*65536];
int off;
 
void update(int x, int d)
{
  while (x > 0) {
    size[x] += d;
    x /= 2;
  }
}
 
int get(int x, int i)
{
  if (x >= off) return x-off;
  if (i > size[2*x]) return get(2*x+1, i-size[2*x]);
  else return get(2*x, i);
}
 
long long FloatingMedian::sumOfMedians(int seed, int mul, int add, int N, int K)
{
  _seed = seed;
  _mul = mul;
  _add = add;
 
  int tab[255000];
 
  FOR(i, 0, N) tab[i] = next();
 
  long long sum = 0;
 
  off = 65536;
 
  FOR(i, 0, N) {
    update(off+tab[i], 1);
    if (i >= K-1) {
      sum += get(1, (K+1)/2);
      update(off+tab[i-K+1], -1);     
    }
  }
 
  return sum;
}
 
// Powered by MBMagic 0.12
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/