/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4720
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

class Airways {
public:
    double distance(int n, int east, int north);
};

double Airways::distance(int n, int east, int north) {
    double ret;
    return ret;
}


int test0() {
    int n = 3;
    int east = -219;
    int north = 0;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 437.99999999999994;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 3;
    int east = 171;
    int north = 0;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 171.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 4;
    int east = 233;
    int north = 3111;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 3344.0000000000005;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 40;
    int east = -2912;
    int north = -487;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 2954.3363333516754;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 40;
    int east = -66;
    int north = -66;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 93.3380951166242;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 37;
    int east = 2000;
    int north = 0;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 1999.9999999999989;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 7;
    int east = 4000;
    int north = 0;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 3999.999999999999;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 3;
    int east = -12;
    int north = 8;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 24.000000000000004;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 3;
    int east = 12;
    int north = -8;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 25.856406460551014;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 5;
    int east = 0;
    int north = -2;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 2.3511410091698925;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 17;
    int east = 0;
    int north = 0;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 6;
    int east = 6;
    int north = -6;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 9.464101615137753;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 35;
    int east = 4000;
    int north = -3933;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 5629.6661763113625;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 12;
    int east = -6;
    int north = 0;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 5.999999999999999;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 40;
    int east = -2345;
    int north = -675;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 2445.3211930888883;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 8;
    int east = -97;
    int north = 97;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 137.17871555019022;
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
    int east = 23;
    int north = 23;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 32.526911934581186;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 8;
    int east = 92;
    int north = 92;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 130.10764773832474;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 16;
    int east = 46;
    int north = 46;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 65.05382386916234;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 16;
    int east = 51;
    int north = 51;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 72.12489168102783;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 16;
    int east = 50;
    int north = 50;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 70.71067811865474;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 24;
    int east = -92;
    int north = 92;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 130.1076477383247;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 24;
    int east = 92;
    int north = -92;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 130.1076477383247;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 24;
    int east = -23;
    int north = 23;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 32.52691193458117;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 32;
    int east = 46;
    int north = 46;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 65.05382386916233;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 3;
    int east = 1792;
    int north = -1396;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 4209.942927366151;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 13;
    int east = 3862;
    int north = 1002;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 4108.970818758039;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 19;
    int east = -2085;
    int north = 1725;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 2742.275961303382;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 26;
    int east = 2803;
    int north = -4876;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 5661.380470110123;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 29;
    int east = 4215;
    int north = 3346;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 5392.725777341106;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 33;
    int east = -1497;
    int north = 397;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 1552.1080693262031;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 16;
    int east = 885;
    int north = -738;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 1168.310191589662;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 32;
    int east = 1946;
    int north = 4602;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 5000.016152813741;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 14;
    int east = -3840;
    int north = -1768;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 4243.534462721784;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 40;
    int east = -3508;
    int north = 4904;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 6032.869654793278;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 16;
    int east = -1448;
    int north = -963;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 1773.050807101238;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 38;
    int east = -1286;
    int north = 2460;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 2785.0862570014574;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 29;
    int east = -1028;
    int north = -3168;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 3347.166743168894;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 20;
    int east = -4196;
    int north = 4377;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 6137.590357156143;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 21;
    int east = -4031;
    int north = -2268;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 4660.229301859284;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 4;
    int east = 233;
    int north = 3111;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 3344.0000000000005;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 3;
    int east = 171;
    int north = 0;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 171.0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 14;
    int east = -3840;
    int north = -1768;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 4243.534462721784;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 39;
    int east = 13;
    int north = 15;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 19.90541142587058;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 3;
    int east = -5000;
    int north = -5000;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 9999.999999999996;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 4;
    int east = -5000;
    int north = 5000;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 9999.999999999998;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 40;
    int east = -5000;
    int north = 2100;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 5439.8019645376635;
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
    int east = 0;
    int north = 0;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 37;
    int east = 0;
    int north = -3700;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 3710.0316063266996;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 3;
    int east = -219;
    int north = 0;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 437.99999999999994;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 38;
    int east = -2005;
    int north = -3059;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 3657.9711331731023;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 40;
    int east = 0;
    int north = 1000;
    Airways* pObj = new Airways();
    clock_t start = clock();
    double result = pObj->distance(n, east, north);
    clock_t end = clock();
    delete pObj;
    double expected = 999.9999999999993;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7462740&rd=8000&pm=4720
********************************************************************************
#include <string>
#include <vector>
#include <cmath>
#include <cctype>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <utility>
#include <numeric>
#include <complex>
 
using namespace std;
 
class Airways {
  public:
  double distance(int n, int x, int y) {
 
    double d = sqrt(1.0*x*x + y*y);
    double phi = 2*M_PI / n;
    double t = 2*M_PI + atan2(1.0*y, x);
    while (t > phi) t -= phi;
    return d * (sin(t) + sin(phi-t)) / sin(phi);
    
  }
};
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/