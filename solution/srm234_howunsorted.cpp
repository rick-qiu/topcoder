/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3968
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

class HowUnsorted {
public:
    long howMany(int m, int c, int n);
};

long HowUnsorted::howMany(int m, int c, int n) {
    long ret;
    return ret;
}


int test0() {
    int m = 1234257123;
    int c = 123;
    int n = 100000;
    HowUnsorted* pObj = new HowUnsorted();
    clock_t start = clock();
    long result = pObj->howMany(m, c, n);
    clock_t end = clock();
    delete pObj;
    long expected = 2504702368;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int m = 1;
    int c = 1;
    int n = 10000;
    HowUnsorted* pObj = new HowUnsorted();
    clock_t start = clock();
    long result = pObj->howMany(m, c, n);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int m = 2;
    int c = 1;
    int n = 100000;
    HowUnsorted* pObj = new HowUnsorted();
    clock_t start = clock();
    long result = pObj->howMany(m, c, n);
    clock_t end = clock();
    delete pObj;
    long expected = 2418862875;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int m = 1;
    int c = 10000000;
    int n = 100000;
    HowUnsorted* pObj = new HowUnsorted();
    clock_t start = clock();
    long result = pObj->howMany(m, c, n);
    clock_t end = clock();
    delete pObj;
    long expected = 2496181732;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int m = 11;
    int c = 13;
    int n = 100000;
    HowUnsorted* pObj = new HowUnsorted();
    clock_t start = clock();
    long result = pObj->howMany(m, c, n);
    clock_t end = clock();
    delete pObj;
    long expected = 2503704581;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int m = 1;
    int c = 2147483646;
    int n = 100000;
    HowUnsorted* pObj = new HowUnsorted();
    clock_t start = clock();
    long result = pObj->howMany(m, c, n);
    clock_t end = clock();
    delete pObj;
    long expected = 4999750004;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int m = 1;
    int c = 2147483646;
    int n = 10000;
    HowUnsorted* pObj = new HowUnsorted();
    clock_t start = clock();
    long result = pObj->howMany(m, c, n);
    clock_t end = clock();
    delete pObj;
    long expected = 49975004;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int m = 1;
    int c = 2147433546;
    int n = 100000;
    HowUnsorted* pObj = new HowUnsorted();
    clock_t start = clock();
    long result = pObj->howMany(m, c, n);
    clock_t end = clock();
    delete pObj;
    long expected = 3061347243;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int m = 742938285;
    int c = 0;
    int n = 100000;
    HowUnsorted* pObj = new HowUnsorted();
    clock_t start = clock();
    long result = pObj->howMany(m, c, n);
    clock_t end = clock();
    delete pObj;
    long expected = 2491816869;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int m = 95070637;
    int c = 0;
    int n = 100000;
    HowUnsorted* pObj = new HowUnsorted();
    clock_t start = clock();
    long result = pObj->howMany(m, c, n);
    clock_t end = clock();
    delete pObj;
    long expected = 2500768557;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int m = 1226874159;
    int c = 0;
    int n = 100000;
    HowUnsorted* pObj = new HowUnsorted();
    clock_t start = clock();
    long result = pObj->howMany(m, c, n);
    clock_t end = clock();
    delete pObj;
    long expected = 2501133639;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int m = 62089911;
    int c = 0;
    int n = 100000;
    HowUnsorted* pObj = new HowUnsorted();
    clock_t start = clock();
    long result = pObj->howMany(m, c, n);
    clock_t end = clock();
    delete pObj;
    long expected = 2501281163;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int m = 1343714438;
    int c = 0;
    int n = 100000;
    HowUnsorted* pObj = new HowUnsorted();
    clock_t start = clock();
    long result = pObj->howMany(m, c, n);
    clock_t end = clock();
    delete pObj;
    long expected = 2493527808;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int m = 1078318381;
    int c = 0;
    int n = 12341;
    HowUnsorted* pObj = new HowUnsorted();
    clock_t start = clock();
    long result = pObj->howMany(m, c, n);
    clock_t end = clock();
    delete pObj;
    long expected = 37971016;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int m = 1203248318;
    int c = 0;
    int n = 12312;
    HowUnsorted* pObj = new HowUnsorted();
    clock_t start = clock();
    long result = pObj->howMany(m, c, n);
    clock_t end = clock();
    delete pObj;
    long expected = 37801774;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int m = 397204094;
    int c = 0;
    int n = 98988;
    HowUnsorted* pObj = new HowUnsorted();
    clock_t start = clock();
    long result = pObj->howMany(m, c, n);
    clock_t end = clock();
    delete pObj;
    long expected = 2452199341;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int m = 10;
    int c = 20;
    int n = 100000;
    HowUnsorted* pObj = new HowUnsorted();
    clock_t start = clock();
    long result = pObj->howMany(m, c, n);
    clock_t end = clock();
    delete pObj;
    long expected = 2499385852;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int m = 35;
    int c = 89;
    int n = 10932;
    HowUnsorted* pObj = new HowUnsorted();
    clock_t start = clock();
    long result = pObj->howMany(m, c, n);
    clock_t end = clock();
    delete pObj;
    long expected = 29627002;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int m = 2000000000;
    int c = 2147433546;
    int n = 100000;
    HowUnsorted* pObj = new HowUnsorted();
    clock_t start = clock();
    long result = pObj->howMany(m, c, n);
    clock_t end = clock();
    delete pObj;
    long expected = 2496920584;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int m = 2;
    int c = 10;
    int n = 5;
    HowUnsorted* pObj = new HowUnsorted();
    clock_t start = clock();
    long result = pObj->howMany(m, c, n);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int m = 1000;
    int c = 100;
    int n = 6;
    HowUnsorted* pObj = new HowUnsorted();
    clock_t start = clock();
    long result = pObj->howMany(m, c, n);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int m = 1234257123;
    int c = 123;
    int n = 1500;
    HowUnsorted* pObj = new HowUnsorted();
    clock_t start = clock();
    long result = pObj->howMany(m, c, n);
    clock_t end = clock();
    delete pObj;
    long expected = 558406;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int m = 1234257123;
    int c = 123;
    int n = 100000;
    HowUnsorted* pObj = new HowUnsorted();
    clock_t start = clock();
    long result = pObj->howMany(m, c, n);
    clock_t end = clock();
    delete pObj;
    long expected = 2504702368;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int m = 2;
    int c = 3;
    int n = 100000;
    HowUnsorted* pObj = new HowUnsorted();
    clock_t start = clock();
    long result = pObj->howMany(m, c, n);
    clock_t end = clock();
    delete pObj;
    long expected = 2418846750;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int m = 100000;
    int c = 100000;
    int n = 100000;
    HowUnsorted* pObj = new HowUnsorted();
    clock_t start = clock();
    long result = pObj->howMany(m, c, n);
    clock_t end = clock();
    delete pObj;
    long expected = 2489184225;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int m = 1234257123;
    int c = 123;
    int n = 99997;
    HowUnsorted* pObj = new HowUnsorted();
    clock_t start = clock();
    long result = pObj->howMany(m, c, n);
    clock_t end = clock();
    delete pObj;
    long expected = 2504601670;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int m = 1;
    int c = 1;
    int n = 100000;
    HowUnsorted* pObj = new HowUnsorted();
    clock_t start = clock();
    long result = pObj->howMany(m, c, n);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int m = 23342;
    int c = 243243;
    int n = 100000;
    HowUnsorted* pObj = new HowUnsorted();
    clock_t start = clock();
    long result = pObj->howMany(m, c, n);
    clock_t end = clock();
    delete pObj;
    long expected = 2485698323;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int m = 1987653241;
    int c = 1987653241;
    int n = 100000;
    HowUnsorted* pObj = new HowUnsorted();
    clock_t start = clock();
    long result = pObj->howMany(m, c, n);
    clock_t end = clock();
    delete pObj;
    long expected = 2502699622;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int m = 1234257123;
    int c = 123;
    int n = 99999;
    HowUnsorted* pObj = new HowUnsorted();
    clock_t start = clock();
    long result = pObj->howMany(m, c, n);
    clock_t end = clock();
    delete pObj;
    long expected = 2504658156;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int m = 2000000000;
    int c = 123456789;
    int n = 100000;
    HowUnsorted* pObj = new HowUnsorted();
    clock_t start = clock();
    long result = pObj->howMany(m, c, n);
    clock_t end = clock();
    delete pObj;
    long expected = 2502462773;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int m = 1;
    int c = 2;
    int n = 100000;
    HowUnsorted* pObj = new HowUnsorted();
    clock_t start = clock();
    long result = pObj->howMany(m, c, n);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int m = 1;
    int c = 0;
    int n = 100000;
    HowUnsorted* pObj = new HowUnsorted();
    clock_t start = clock();
    long result = pObj->howMany(m, c, n);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int m = 1;
    int c = 2147483646;
    int n = 100000;
    HowUnsorted* pObj = new HowUnsorted();
    clock_t start = clock();
    long result = pObj->howMany(m, c, n);
    clock_t end = clock();
    delete pObj;
    long expected = 4999750004;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int m = 2;
    int c = 15;
    int n = 100000;
    HowUnsorted* pObj = new HowUnsorted();
    clock_t start = clock();
    long result = pObj->howMany(m, c, n);
    clock_t end = clock();
    delete pObj;
    long expected = 2418846750;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int m = 1111111119;
    int c = 2133333997;
    int n = 99999;
    HowUnsorted* pObj = new HowUnsorted();
    clock_t start = clock();
    long result = pObj->howMany(m, c, n);
    clock_t end = clock();
    delete pObj;
    long expected = 2501210367;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int m = 2;
    int c = 2147483646;
    int n = 100000;
    HowUnsorted* pObj = new HowUnsorted();
    clock_t start = clock();
    long result = pObj->howMany(m, c, n);
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=307060&rd=6533&pm=3968
********************************************************************************
#include <string> 
#include <vector> 
#include <algorithm> 
#include <sstream> 
#include <cstdio> 
#include <cmath> 
#include <map> 
#include <set> 
#include <cstdlib> 
#include <queue> 
using namespace std; 
 
int a[200000]; 
 
long long merge(int n, int *s) { 
  if (n<=1) return 0; 
  int *s1 = new int[n/2]; 
  int *s2 = new int[(n+1)/2]; 
  long long res = 0; 
  for (int i=0; i<n/2; i++) 
    s1[i] = s[i]; 
  for (int i=n/2; i<n; i++) 
    s2[i-n/2] = s[i]; 
  int n1 = n/2; 
  int n2 = (n+1)/2; 
  res = merge(n/2,s1); 
  res += merge((n+1)/2,s2); 
  int i,j,l=0; 
  for (i=j=0; i<n1 && j<n2; ) { 
    if (s1[i]<=s2[j]) 
      s[l++] = s1[i++]; 
    else { 
      s[l++] = s2[j++]; 
      res += (n1-i); 
    } 
  } 
  while(i<n1) s[l++] = s1[i++]; 
  while(j<n2) s[l++] = s2[j++]; 
  delete [] s1; 
  delete [] s2; 
  return res; 
} 
 
#include <climits> 
#include <iostream> 
#include <cmath> 
 
class HowUnsorted { 
  public: 
  long long howMany(int m, int c, int n) { 
    a[0] = 1; 
    for (int i=1; i<n; i++) { 
      long long val = ((long long)m)*a[i-1]+c; 
      a[i] = val%INT_MAX; 
    } 
    return merge(n,a); 
  } 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/