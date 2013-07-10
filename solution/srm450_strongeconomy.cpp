/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10389
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

class StrongEconomy {
public:
    long earn(long n, long k, long price, long target);
};

long StrongEconomy::earn(long n, long k, long price, long target) {
    long ret;
    return ret;
}


int test0() {
    long n = 2;
    long k = 1;
    long price = 2;
    long target = 10;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    long n = 2;
    long k = 1;
    long price = 2;
    long target = 9;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    long n = 1;
    long k = 1;
    long price = 500000;
    long target = 1000002;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1000001;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    long n = 5;
    long k = 4;
    long price = 15;
    long target = 100;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    long n = 4294967296;
    long k = 4294967296;
    long price = 10;
    long target = 10000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    long n = 4294967297;
    long k = 4294967297;
    long price = 1000000000000;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    long n = 999999999999;
    long k = 1844674408;
    long price = 1000000000000;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    long n = 1844674408;
    long k = 999999999999;
    long price = 1000000000000;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    long n = 1;
    long k = 1;
    long price = 1000000000000;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000000;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    long n = 1;
    long k = 1;
    long price = 499999999999;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999999;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    long n = 1000000000000;
    long k = 1000000000000;
    long price = 1000000000000;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    long n = 1;
    long k = 1;
    long price = 1;
    long target = 1;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    long n = 1;
    long k = 100;
    long price = 10000000000;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 617737754;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    long n = 1;
    long k = 1;
    long price = 1;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    long n = 1;
    long k = 1;
    long price = 2;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    long n = 1;
    long k = 1;
    long price = 3;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 14;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    long n = 1;
    long k = 1;
    long price = 4;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 17;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    long n = 3;
    long k = 2;
    long price = 1000000000000;
    long target = 222;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 37;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    long n = 3;
    long k = 2;
    long price = 1000000000000;
    long target = 221;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 37;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    long n = 3;
    long k = 2;
    long price = 1000000000000;
    long target = 223;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 38;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    long n = 3;
    long k = 13;
    long price = 10;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    long n = 3;
    long k = 13;
    long price = 13;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    long n = 3;
    long k = 13;
    long price = 15;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    long n = 3;
    long k = 13;
    long price = 20;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    long n = 3;
    long k = 13;
    long price = 28;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 14;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    long n = 3;
    long k = 13;
    long price = 103;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 36;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    long n = 3;
    long k = 13;
    long price = 104;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 37;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    long n = 3;
    long k = 13;
    long price = 1006;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 291;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    long n = 3;
    long k = 13;
    long price = 123124;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 34513;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    long n = 3;
    long k = 13;
    long price = 1000000002;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 279203910;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    long n = 3;
    long k = 13;
    long price = 1000000001;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 279203909;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    long n = 1;
    long k = 1000;
    long price = 382;
    long target = 943416963123;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    long n = 1000;
    long k = 1;
    long price = 383;
    long target = 943416963123;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    long n = 1000000;
    long k = 1000000;
    long price = 1;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    long n = 1000000;
    long k = 999999;
    long price = 1;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    long n = 1000000;
    long k = 499999;
    long price = 999997;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    long n = 499999;
    long k = 1000000;
    long price = 999996;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    long n = 12;
    long k = 12;
    long price = 1;
    long target = 143;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    long n = 1000;
    long k = 1998;
    long price = 1;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    long n = 1997;
    long k = 1000;
    long price = 1;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    long n = 987;
    long k = 123;
    long price = 368073595;
    long target = 45654654654;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 376065;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    long n = 123;
    long k = 987;
    long price = 368073594;
    long target = 45654654654;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 376064;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    long n = 84;
    long k = 87;
    long price = 92778;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2186;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    long n = 22;
    long k = 63;
    long price = 28;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    long n = 84;
    long k = 87;
    long price = 92778;
    long target = 145621303454;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2185;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    long n = 35;
    long k = 98;
    long price = 29522;
    long target = 502150818174;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 927;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    long n = 35;
    long k = 98;
    long price = 29522;
    long target = 502150818173;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 926;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    long n = 91;
    long k = 97;
    long price = 3127;
    long target = 771370491752;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 75;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    long n = 91;
    long k = 97;
    long price = 3127;
    long target = 771370491751;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 74;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    long n = 28;
    long k = 81;
    long price = 64143;
    long target = 93888052920;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2449;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    long n = 28;
    long k = 81;
    long price = 64143;
    long target = 93888052919;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2448;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    long n = 30;
    long k = 92;
    long price = 52529;
    long target = 86515142243;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1801;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    long n = 30;
    long k = 92;
    long price = 52529;
    long target = 86515142242;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1800;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    long n = 79;
    long k = 88;
    long price = 83632;
    long target = 211424343435;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2019;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    long n = 79;
    long k = 88;
    long price = 83632;
    long target = 211424343434;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2018;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    long n = 1;
    long k = 13;
    long price = 56753;
    long target = 105767073758;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 22463;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    long n = 1;
    long k = 13;
    long price = 56753;
    long target = 105767073757;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 22462;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    long n = 76;
    long k = 31;
    long price = 8664;
    long target = 45611934876;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 341;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    long n = 76;
    long k = 31;
    long price = 8664;
    long target = 45611934875;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 340;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    long n = 80;
    long k = 58;
    long price = 16566;
    long target = 342713655614;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 492;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    long n = 80;
    long k = 58;
    long price = 16566;
    long target = 342713655613;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 491;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    long n = 7;
    long k = 87;
    long price = 28292;
    long target = 93923261297;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1504;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    long n = 7;
    long k = 87;
    long price = 28292;
    long target = 93923261296;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1503;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    long n = 84;
    long k = 70;
    long price = 59708;
    long target = 227673130901;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1566;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    long n = 84;
    long k = 70;
    long price = 59708;
    long target = 227673130900;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1565;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    long n = 9480;
    long k = 3586;
    long price = 4341516;
    long target = 951594673810;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1346;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    long n = 9480;
    long k = 3586;
    long price = 4341516;
    long target = 951594673809;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1345;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    long n = 6964;
    long k = 3072;
    long price = 8267111;
    long target = 986932823619;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 3281;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    long n = 6964;
    long k = 3072;
    long price = 8267111;
    long target = 986932823618;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 3280;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    long n = 3597;
    long k = 7349;
    long price = 9603447;
    long target = 987954828389;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 3458;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    long n = 3597;
    long k = 7349;
    long price = 9603447;
    long target = 987954828388;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 3457;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    long n = 4961;
    long k = 6349;
    long price = 7557037;
    long target = 994257985210;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2621;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    long n = 4961;
    long k = 6349;
    long price = 7557037;
    long target = 994257985209;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2620;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    long n = 4910;
    long k = 2549;
    long price = 480376;
    long target = 818796097339;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 266;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    long n = 4910;
    long k = 2549;
    long price = 480376;
    long target = 818796097338;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 265;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    long n = 3628;
    long k = 2633;
    long price = 3784890;
    long target = 987247079590;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2412;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    long n = 3628;
    long k = 2633;
    long price = 3784890;
    long target = 987247079589;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2411;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    long n = 5288;
    long k = 777;
    long price = 8231010;
    long target = 992838524553;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 6036;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    long n = 5288;
    long k = 777;
    long price = 8231010;
    long target = 992838524552;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 6035;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    long n = 5294;
    long k = 7639;
    long price = 9554422;
    long target = 991960422948;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2872;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    long n = 5294;
    long k = 7639;
    long price = 9554422;
    long target = 991960422947;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2871;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    long n = 1225;
    long k = 2289;
    long price = 7090455;
    long target = 995869987239;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 8088;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    long n = 1225;
    long k = 2289;
    long price = 7090455;
    long target = 995869987238;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 8087;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    long n = 5361;
    long k = 3918;
    long price = 8447708;
    long target = 989936375521;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 3578;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    long n = 5361;
    long k = 3918;
    long price = 8447708;
    long target = 989936375520;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 3577;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    long n = 10;
    long k = 8;
    long price = 3642580;
    long target = 936880438446;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 833337;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    long n = 10;
    long k = 8;
    long price = 3642580;
    long target = 936880438445;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 833336;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    long n = 3;
    long k = 1;
    long price = 7696204;
    long target = 984177860500;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 9452948;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    long n = 3;
    long k = 1;
    long price = 7696204;
    long target = 984177860499;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 9452947;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    long n = 1;
    long k = 6;
    long price = 3558508;
    long target = 965326092682;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2592533;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    long n = 1;
    long k = 6;
    long price = 3558508;
    long target = 965326092681;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2592532;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    long n = 1;
    long k = 4;
    long price = 2884010;
    long target = 983805656183;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2861393;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    long n = 1;
    long k = 4;
    long price = 2884010;
    long target = 983805656182;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2861392;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    long n = 1;
    long k = 6;
    long price = 7880343;
    long target = 984495273963;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 5741134;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    long n = 1;
    long k = 6;
    long price = 7880343;
    long target = 984495273962;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 5741133;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    long n = 3;
    long k = 3;
    long price = 580672;
    long target = 438861324017;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 422897;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    long n = 3;
    long k = 3;
    long price = 580672;
    long target = 438861324016;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 422896;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    long n = 8;
    long k = 6;
    long price = 8984325;
    long target = 995480931503;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2666724;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    long n = 8;
    long k = 6;
    long price = 8984325;
    long target = 995480931502;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2666723;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    long n = 5;
    long k = 6;
    long price = 5414971;
    long target = 975522072980;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2064834;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    long n = 5;
    long k = 6;
    long price = 5414971;
    long target = 975522072979;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2064833;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    long n = 3;
    long k = 10;
    long price = 1932826;
    long target = 874055244560;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 653425;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    long n = 3;
    long k = 10;
    long price = 1932826;
    long target = 874055244559;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 653424;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    long n = 2;
    long k = 1;
    long price = 3512032;
    long target = 932346048017;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 5777060;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    long n = 2;
    long k = 1;
    long price = 3512032;
    long target = 932346048016;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 5777059;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    long n = 6;
    long k = 6;
    long price = 50;
    long target = 213602033266;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 25;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    long n = 6;
    long k = 6;
    long price = 50;
    long target = 213602033265;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 24;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    long n = 1;
    long k = 9;
    long price = 58;
    long target = 83533427519;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 39;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    long n = 1;
    long k = 9;
    long price = 58;
    long target = 83533427518;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 38;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    long n = 1;
    long k = 2;
    long price = 4;
    long target = 50527397092;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    long n = 1;
    long k = 2;
    long price = 4;
    long target = 50527397091;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    long n = 5;
    long k = 7;
    long price = 34;
    long target = 64976813964;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 19;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    long n = 5;
    long k = 7;
    long price = 34;
    long target = 64976813963;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 18;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    long n = 9;
    long k = 2;
    long price = 75;
    long target = 241740344;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 39;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    long n = 9;
    long k = 2;
    long price = 75;
    long target = 241740343;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 38;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    long n = 6;
    long k = 10;
    long price = 82;
    long target = 92738216440;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 29;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    long n = 6;
    long k = 10;
    long price = 82;
    long target = 92738216439;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 28;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    long n = 10;
    long k = 10;
    long price = 16;
    long target = 395711557;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    long n = 10;
    long k = 10;
    long price = 16;
    long target = 395711556;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    long n = 6;
    long k = 2;
    long price = 8;
    long target = 13880727677;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    long n = 6;
    long k = 2;
    long price = 8;
    long target = 13880727676;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    long n = 7;
    long k = 9;
    long price = 70;
    long target = 163852820;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 25;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    long n = 7;
    long k = 9;
    long price = 70;
    long target = 163852819;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 24;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    long n = 7;
    long k = 7;
    long price = 67;
    long target = 992061024;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 27;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    long n = 7;
    long k = 7;
    long price = 67;
    long target = 992061023;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 26;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    long n = 1;
    long k = 1;
    long price = 2;
    long target = 1;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    long n = 1;
    long k = 1;
    long price = 1;
    long target = 2;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    long n = 1000000;
    long k = 1;
    long price = 440000000001;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 940001;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    long n = 1000000;
    long k = 2;
    long price = 100010000012;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 282915;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    long n = 987654321;
    long k = 123;
    long price = 5761316872;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    long n = 123;
    long k = 987654321;
    long price = 5761316873;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    long n = 10000;
    long k = 10000;
    long price = 15788;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    long n = 10000;
    long k = 10000;
    long price = 15787;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    long n = 6;
    long k = 4;
    long price = 3;
    long target = 499;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    long n = 260;
    long k = 1;
    long price = 60;
    long target = 1000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    long n = 1;
    long k = 17;
    long price = 5;
    long target = 65;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    long n = 1;
    long k = 895;
    long price = 9;
    long target = 86775;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    long n = 1;
    long k = 3734482;
    long price = 9252;
    long target = 1000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    long n = 4674;
    long k = 78;
    long price = 2;
    long target = 7011943259;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    long n = 15;
    long k = 452;
    long price = 5;
    long target = 6472893737;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    long n = 3;
    long k = 27838588957;
    long price = 3828480610;
    long target = 650785854029;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    long n = 1;
    long k = 1;
    long price = 1000000000000;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000000;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    long n = 91;
    long k = 7;
    long price = 55;
    long target = 8713;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    long n = 1;
    long k = 74;
    long price = 28;
    long target = 10000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    long n = 1;
    long k = 2;
    long price = 2248;
    long target = 8327;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2986;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    long n = 3297;
    long k = 46;
    long price = 668;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    long n = 96334;
    long k = 78197;
    long price = 51308;
    long target = 88893925229;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    long n = 248572;
    long k = 2;
    long price = 1;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    long n = 4;
    long k = 4;
    long price = 3305161632;
    long target = 172543446096;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1700444920;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    long n = 55;
    long k = 2;
    long price = 8179801513;
    long target = 888975049803;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 754944416;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    long n = 1;
    long k = 1;
    long price = 100000000000;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 253976773118;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    long n = 1;
    long k = 1;
    long price = 10000000000;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 26348839006;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    long n = 3;
    long k = 2;
    long price = 764;
    long target = 7;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    long n = 1;
    long k = 4;
    long price = 27071;
    long target = 5;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    long n = 1;
    long k = 1;
    long price = 82425;
    long target = 7440;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 7440;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    long n = 1;
    long k = 1;
    long price = 6;
    long target = 7;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    long n = 45;
    long k = 51;
    long price = 3;
    long target = 1000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
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
    long n = 5;
    long k = 2;
    long price = 96;
    long target = 1000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 68;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    long n = 7;
    long k = 5;
    long price = 1000000;
    long target = 837694;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 23935;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    long n = 1;
    long k = 4;
    long price = 8;
    long target = 64994;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    long n = 5;
    long k = 8;
    long price = 17456;
    long target = 1000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 5313;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    long n = 7;
    long k = 2;
    long price = 428;
    long target = 294053;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 220;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    long n = 1;
    long k = 3;
    long price = 41370;
    long target = 64590;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 21530;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    long n = 3;
    long k = 1;
    long price = 923;
    long target = 7;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    long n = 2;
    long k = 2;
    long price = 2;
    long target = 9;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    long n = 92;
    long k = 1;
    long price = 4;
    long target = 93;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    long n = 3249;
    long k = 1;
    long price = 56231;
    long target = 54412;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 17;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    long n = 2;
    long k = 8;
    long price = 228;
    long target = 2179;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 80;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    long n = 12;
    long k = 740;
    long price = 1;
    long target = 9079;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    long n = 7;
    long k = 8;
    long price = 7335;
    long target = 1000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1974;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    long n = 2;
    long k = 6;
    long price = 22577;
    long target = 885642;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 12105;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    long n = 1;
    long k = 1;
    long price = 6;
    long target = 45;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    long n = 943;
    long k = 246;
    long price = 938;
    long target = 1000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    long n = 16;
    long k = 1;
    long price = 31558;
    long target = 230365;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 6891;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    long n = 4;
    long k = 4;
    long price = 167732;
    long target = 1000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 58870;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    long n = 6;
    long k = 1;
    long price = 274644;
    long target = 1000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 124217;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    long n = 1;
    long k = 1;
    long price = 49;
    long target = 756530;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 136;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    long n = 1;
    long k = 1;
    long price = 1;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    long n = 1;
    long k = 1;
    long price = 10;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 33;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    long n = 1;
    long k = 1;
    long price = 100;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 273;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    long n = 1;
    long k = 1;
    long price = 1000;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2655;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    long n = 1;
    long k = 1;
    long price = 10000;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 26461;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    long n = 1;
    long k = 1;
    long price = 100000;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 264506;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    long n = 1;
    long k = 1;
    long price = 1000000;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2644946;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    long n = 1;
    long k = 1;
    long price = 10000000;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 26449252;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    long n = 1;
    long k = 1;
    long price = 100000000;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 264483415;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    long n = 1;
    long k = 1;
    long price = 1000000000;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2643933573;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    long n = 41337;
    long k = 677;
    long price = 6636;
    long target = 383673609213;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    long n = 6;
    long k = 743;
    long price = 5450967460;
    long target = 84582505642;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 14692623;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    long n = 758116;
    long k = 106736;
    long price = 59705004113;
    long target = 668378083441;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    long n = 79938;
    long k = 1;
    long price = 1000000000000;
    long target = 92986026562;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1163227;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    long n = 542624;
    long k = 8;
    long price = 58516565619;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 193371;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    long n = 4;
    long k = 7393608740;
    long price = 905752031;
    long target = 973397687545;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    long n = 45;
    long k = 389;
    long price = 876475608;
    long target = 2380906;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 137;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    long n = 39;
    long k = 32089;
    long price = 790;
    long target = 2769032;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    long n = 7338;
    long k = 1;
    long price = 28946;
    long target = 38580850;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 38;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    long n = 6;
    long k = 85;
    long price = 73043613;
    long target = 4259253;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 8352;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    long n = 2012;
    long k = 55;
    long price = 967041998559;
    long target = 67242205251;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 607647;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    long n = 239740;
    long k = 1211;
    long price = 258355746906;
    long target = 26710515876;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 93;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    long n = 739;
    long k = 8179;
    long price = 9890869;
    long target = 2486284511;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 412;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    long n = 3;
    long k = 5;
    long price = 95;
    long target = 81733651;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 58;
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    long n = 3;
    long k = 4;
    long price = 8654788;
    long target = 721231;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 60103;
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    long n = 2;
    long k = 70075467;
    long price = 93740664790;
    long target = 3366257720;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 25;
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    long n = 81;
    long k = 38;
    long price = 815;
    long target = 6395792006;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 35;
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    long n = 145;
    long k = 64923;
    long price = 83;
    long target = 496943571;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    long n = 540;
    long k = 212982169;
    long price = 1;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    long n = 93923041462;
    long k = 4;
    long price = 378647893704;
    long target = 661454114213;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    long n = 9671769;
    long k = 31;
    long price = 850495;
    long target = 10126386417;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    long n = 53859;
    long k = 17;
    long price = 13;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    long n = 91;
    long k = 861;
    long price = 1000000000000;
    long target = 5608419;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 72;
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    long n = 73;
    long k = 664;
    long price = 290282596832;
    long target = 6698079356;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 138185;
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    long n = 83;
    long k = 27330378;
    long price = 95012370;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 23;
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    long n = 726;
    long k = 1170;
    long price = 774;
    long target = 73026150;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    long n = 879749;
    long k = 29;
    long price = 295016;
    long target = 227529435;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    long n = 5124;
    long k = 898401;
    long price = 12114610;
    long target = 44944683511;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    long n = 4717089;
    long k = 4240;
    long price = 289671;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    long n = 30888790;
    long k = 4;
    long price = 8;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    long n = 43848;
    long k = 32;
    long price = 505917548846;
    long target = 300193287281;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 213945;
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    long n = 1;
    long k = 8830402;
    long price = 63729;
    long target = 3336385497;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    long n = 588687;
    long k = 5;
    long price = 905752;
    long target = 5050572958;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    long n = 5;
    long k = 1882138;
    long price = 669047;
    long target = 1258441656;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test221() {
    long n = 7707617;
    long k = 92;
    long price = 537132342567;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1411;
    if(result == expected) {
        cout << "Test Case 221: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 221: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test222() {
    long n = 9;
    long k = 43;
    long price = 562667616;
    long target = 1496376;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 3867;
    if(result == expected) {
        cout << "Test Case 222: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 222: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test223() {
    long n = 7;
    long k = 63404;
    long price = 659;
    long target = 58430401920;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 223: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 223: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test224() {
    long n = 8476;
    long k = 9328;
    long price = 959;
    long target = 84917635796;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 224: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 224: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test225() {
    long n = 1604;
    long k = 719;
    long price = 3;
    long target = 15722577518;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 225: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 225: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test226() {
    long n = 2;
    long k = 14;
    long price = 997818496;
    long target = 701950;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 25070;
    if(result == expected) {
        cout << "Test Case 226: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 226: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test227() {
    long n = 3525;
    long k = 507;
    long price = 147;
    long target = 43488690;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 227: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 227: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test228() {
    long n = 1;
    long k = 42338;
    long price = 27818450511;
    long target = 80439574;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1900;
    if(result == expected) {
        cout << "Test Case 228: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 228: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test229() {
    long n = 14240;
    long k = 32208;
    long price = 78;
    long target = 74642634464;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 229: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 229: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test230() {
    long n = 3200;
    long k = 39;
    long price = 9448744;
    long target = 316770861;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2539;
    if(result == expected) {
        cout << "Test Case 230: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 230: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test231() {
    long n = 9;
    long k = 860808045;
    long price = 2999253;
    long target = 14375317480;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 231: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 231: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test232() {
    long n = 8495;
    long k = 5102047;
    long price = 3145;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 232: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 232: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test233() {
    long n = 707;
    long k = 8;
    long price = 7;
    long target = 42379447129;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 233: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 233: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test234() {
    long n = 9115;
    long k = 249268;
    long price = 97762378;
    long target = 186756434682;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 83;
    if(result == expected) {
        cout << "Test Case 234: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 234: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test235() {
    long n = 8;
    long k = 6339899;
    long price = 80920044046;
    long target = 84387318;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 235: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 235: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test236() {
    long n = 9045;
    long k = 4526;
    long price = 8;
    long target = 4332054332;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 236: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 236: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test237() {
    long n = 1;
    long k = 5;
    long price = 100;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 92;
    if(result == expected) {
        cout << "Test Case 237: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 237: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test238() {
    long n = 4000000000;
    long k = 4000000000;
    long price = 1000000000000;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 238: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 238: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test239() {
    long n = 102143934434;
    long k = 102143934434;
    long price = 102333934434;
    long target = 102143934434;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 239: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 239: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test240() {
    long n = 1;
    long k = 1;
    long price = 66;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 183;
    if(result == expected) {
        cout << "Test Case 240: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 240: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test241() {
    long n = 50;
    long k = 1;
    long price = 1000;
    long target = 999999999999;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 139;
    if(result == expected) {
        cout << "Test Case 241: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 241: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test242() {
    long n = 105043115;
    long k = 625352805;
    long price = 9856896;
    long target = 38371240;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 242: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 242: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test243() {
    long n = 4294967297;
    long k = 4294967297;
    long price = 4294967297;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 243: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 243: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test244() {
    long n = 2;
    long k = 1;
    long price = 100000000;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 164483415;
    if(result == expected) {
        cout << "Test Case 244: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 244: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test245() {
    long n = 3037000500;
    long k = 3037000500;
    long price = 3037000500;
    long target = 3037000500;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 245: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 245: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test246() {
    long n = 1000000000000;
    long k = 12345678;
    long price = 12213;
    long target = 999999999999;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 246: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 246: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test247() {
    long n = 1;
    long k = 2;
    long price = 1000000000;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1643933573;
    if(result == expected) {
        cout << "Test Case 247: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 247: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test248() {
    long n = 999999999999;
    long k = 999999999999;
    long price = 99999999;
    long target = 999999999999;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 248: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 248: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test249() {
    long n = 1;
    long k = 1;
    long price = 98978979781;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 251485720935;
    if(result == expected) {
        cout << "Test Case 249: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 249: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test250() {
    long n = 100000;
    long k = 100000;
    long price = 1;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 250: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 250: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test251() {
    long n = 11000000000;
    long k = 11000000000;
    long price = 1;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 251: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 251: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test252() {
    long n = 4294967296;
    long k = 4294967296;
    long price = 1000000000000;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 252: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 252: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test253() {
    long n = 4294967296;
    long k = 4294967296;
    long price = 4294967296;
    long target = 42949672960;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 253: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 253: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test254() {
    long n = 1;
    long k = 1;
    long price = 10000001;
    long target = 100000000002;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 26448352;
    if(result == expected) {
        cout << "Test Case 254: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 254: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test255() {
    long n = 20000000000;
    long k = 20000000000;
    long price = 1;
    long target = 10000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 255: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 255: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test256() {
    long n = 2;
    long k = 7;
    long price = 23425258;
    long target = 999999999999;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 11795137;
    if(result == expected) {
        cout << "Test Case 256: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 256: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test257() {
    long n = 1000000000000;
    long k = 18446745;
    long price = 1000000000000;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 257: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 257: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test258() {
    long n = 1;
    long k = 199;
    long price = 1000;
    long target = 900000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 49;
    if(result == expected) {
        cout << "Test Case 258: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 258: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test259() {
    long n = 1;
    long k = 1;
    long price = 220;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 591;
    if(result == expected) {
        cout << "Test Case 259: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 259: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test260() {
    long n = 1000000000000;
    long k = 1000000000000;
    long price = 1000;
    long target = 1000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 260: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 260: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test261() {
    long n = 90000000000;
    long k = 900000000000;
    long price = 123456789;
    long target = 12345678912;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 261: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 261: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test262() {
    long n = 4294967295;
    long k = 4294967295;
    long price = 100;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 262: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 262: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test263() {
    long n = 999998998117;
    long k = 999998998117;
    long price = 2323;
    long target = 232323;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 263: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 263: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test264() {
    long n = 1;
    long k = 2;
    long price = 1;
    long target = 979789987999;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 264: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 264: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test265() {
    long n = 10000000000;
    long k = 1000000000;
    long price = 5;
    long target = 5;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 265: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 265: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test266() {
    long n = 4294967296;
    long k = 4294967296;
    long price = 10000000000;
    long target = 10000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 266: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 266: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test267() {
    long n = 38;
    long k = 19;
    long price = 191023;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 13683;
    if(result == expected) {
        cout << "Test Case 267: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 267: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test268() {
    long n = 30000000000;
    long k = 30000000000;
    long price = 100000000000;
    long target = 100000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 268: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 268: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test269() {
    long n = 10000000000;
    long k = 950000000;
    long price = 2;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 269: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 269: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test270() {
    long n = 3;
    long k = 1;
    long price = 5;
    long target = 20000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 270: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 270: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test271() {
    long n = 999999994564;
    long k = 123131312123;
    long price = 999999999999;
    long target = 123132131;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 271: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 271: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test272() {
    long n = 9;
    long k = 11;
    long price = 100000;
    long target = 100;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 272: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 272: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test273() {
    long n = 1;
    long k = 1;
    long price = 400000000000;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 850000000000;
    if(result == expected) {
        cout << "Test Case 273: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 273: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test274() {
    long n = 4000000000;
    long k = 4000000000;
    long price = 4000000000;
    long target = 4000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 274: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 274: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test275() {
    long n = 123456789012;
    long k = 215987654321;
    long price = 50000000000;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 275: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 275: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test276() {
    long n = 20000000000;
    long k = 20000000000;
    long price = 1;
    long target = 20000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 276: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 276: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test277() {
    long n = 4294967296;
    long k = 4294967296;
    long price = 1000000000;
    long target = 10000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 277: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 277: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test278() {
    long n = 2;
    long k = 1;
    long price = 100000000000;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 153976773118;
    if(result == expected) {
        cout << "Test Case 278: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 278: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test279() {
    long n = 5;
    long k = 1;
    long price = 2;
    long target = 17;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 279: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 279: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test280() {
    long n = 4294967296;
    long k = 4294967296;
    long price = 1;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 280: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 280: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test281() {
    long n = 3800000000;
    long k = 1900000000;
    long price = 191023;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 281: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 281: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test282() {
    long n = 10;
    long k = 1;
    long price = 234567;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 114496;
    if(result == expected) {
        cout << "Test Case 282: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 282: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test283() {
    long n = 2;
    long k = 3;
    long price = 1000;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 905;
    if(result == expected) {
        cout << "Test Case 283: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 283: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test284() {
    long n = 1000;
    long k = 1000;
    long price = 1;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 284: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 284: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test285() {
    long n = 4294967296;
    long k = 4294967297;
    long price = 1000000000;
    long target = 10000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 285: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 285: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test286() {
    long n = 123858384657;
    long k = 638592345063;
    long price = 457893458243;
    long target = 673840653456;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 286: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 286: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test287() {
    long n = 18446744;
    long k = 1000000000000;
    long price = 1000000000000;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 287: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 287: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test288() {
    long n = 10000000000;
    long k = 5000000000;
    long price = 1123344554;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 288: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 288: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test289() {
    long n = 73014444049;
    long k = 252645135;
    long price = 10000000;
    long target = 10000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 289: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 289: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test290() {
    long n = 34359738368;
    long k = 34359738368;
    long price = 423;
    long target = 535367567657;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 290: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 290: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test291() {
    long n = 4294967295;
    long k = 4294967296;
    long price = 1;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 291: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 291: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test292() {
    long n = 10;
    long k = 10;
    long price = 101;
    long target = 101;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 292: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 292: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test293() {
    long n = 9999999999;
    long k = 1;
    long price = 1;
    long target = 99999999999;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 293: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 293: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test294() {
    long n = 4294967295;
    long k = 1;
    long price = 1;
    long target = 10000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 294: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 294: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test295() {
    long n = 1;
    long k = 1;
    long price = 200;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 538;
    if(result == expected) {
        cout << "Test Case 295: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 295: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test296() {
    long n = 4294967296;
    long k = 4294967296;
    long price = 4294967296;
    long target = 4294967296;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 296: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 296: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test297() {
    long n = 4294967296;
    long k = 4294967296;
    long price = 1000000000000;
    long target = 2;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 297: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 297: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test298() {
    long n = 1;
    long k = 1;
    long price = 1;
    long target = 1000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 298: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 298: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test299() {
    long n = 2000;
    long k = 2000;
    long price = 1;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 299: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 299: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test300() {
    long n = 10;
    long k = 1;
    long price = 1000000000000;
    long target = 12;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 300: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 300: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test301() {
    long n = 4294967296;
    long k = 4294967296;
    long price = 10000000;
    long target = 10000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 301: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 301: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test302() {
    long n = 174094882455;
    long k = 105957992;
    long price = 234567;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 302: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 302: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test303() {
    long n = 1;
    long k = 999;
    long price = 10000;
    long target = 25000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 24;
    if(result == expected) {
        cout << "Test Case 303: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 303: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test304() {
    long n = 4294967296;
    long k = 4294967296;
    long price = 400000000000;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 304: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 304: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test305() {
    long n = 7;
    long k = 1;
    long price = 423;
    long target = 9;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 305: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 305: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test306() {
    long n = 4294967296;
    long k = 4294967297;
    long price = 1000000000000;
    long target = 999999999999;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 306: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 306: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test307() {
    long n = 1;
    long k = 500;
    long price = 26897;
    long target = 99999999999;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 482;
    if(result == expected) {
        cout << "Test Case 307: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 307: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test308() {
    long n = 100;
    long k = 1;
    long price = 1;
    long target = 1;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 308: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 308: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test309() {
    long n = 10000000000;
    long k = 1000000000;
    long price = 100;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 309: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 309: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test310() {
    long n = 200000;
    long k = 200000;
    long price = 1;
    long target = 1000000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 310: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 310: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test311() {
    long n = 2;
    long k = 2;
    long price = 50;
    long target = 5;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 311: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 311: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test312() {
    long n = 1;
    long k = 1;
    long price = 66;
    long target = 100000000000;
    StrongEconomy* pObj = new StrongEconomy();
    clock_t start = clock();
    long result = pObj->earn(n, k, price, target);
    clock_t end = clock();
    delete pObj;
    long expected = 183;
    if(result == expected) {
        cout << "Test Case 312: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 312: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    test193() == 0 ? ++passed : ++failed;
    test194() == 0 ? ++passed : ++failed;
    test195() == 0 ? ++passed : ++failed;
    test196() == 0 ? ++passed : ++failed;
    test197() == 0 ? ++passed : ++failed;
    test198() == 0 ? ++passed : ++failed;
    test199() == 0 ? ++passed : ++failed;
    test200() == 0 ? ++passed : ++failed;
    test201() == 0 ? ++passed : ++failed;
    test202() == 0 ? ++passed : ++failed;
    test203() == 0 ? ++passed : ++failed;
    test204() == 0 ? ++passed : ++failed;
    test205() == 0 ? ++passed : ++failed;
    test206() == 0 ? ++passed : ++failed;
    test207() == 0 ? ++passed : ++failed;
    test208() == 0 ? ++passed : ++failed;
    test209() == 0 ? ++passed : ++failed;
    test210() == 0 ? ++passed : ++failed;
    test211() == 0 ? ++passed : ++failed;
    test212() == 0 ? ++passed : ++failed;
    test213() == 0 ? ++passed : ++failed;
    test214() == 0 ? ++passed : ++failed;
    test215() == 0 ? ++passed : ++failed;
    test216() == 0 ? ++passed : ++failed;
    test217() == 0 ? ++passed : ++failed;
    test218() == 0 ? ++passed : ++failed;
    test219() == 0 ? ++passed : ++failed;
    test220() == 0 ? ++passed : ++failed;
    test221() == 0 ? ++passed : ++failed;
    test222() == 0 ? ++passed : ++failed;
    test223() == 0 ? ++passed : ++failed;
    test224() == 0 ? ++passed : ++failed;
    test225() == 0 ? ++passed : ++failed;
    test226() == 0 ? ++passed : ++failed;
    test227() == 0 ? ++passed : ++failed;
    test228() == 0 ? ++passed : ++failed;
    test229() == 0 ? ++passed : ++failed;
    test230() == 0 ? ++passed : ++failed;
    test231() == 0 ? ++passed : ++failed;
    test232() == 0 ? ++passed : ++failed;
    test233() == 0 ? ++passed : ++failed;
    test234() == 0 ? ++passed : ++failed;
    test235() == 0 ? ++passed : ++failed;
    test236() == 0 ? ++passed : ++failed;
    test237() == 0 ? ++passed : ++failed;
    test238() == 0 ? ++passed : ++failed;
    test239() == 0 ? ++passed : ++failed;
    test240() == 0 ? ++passed : ++failed;
    test241() == 0 ? ++passed : ++failed;
    test242() == 0 ? ++passed : ++failed;
    test243() == 0 ? ++passed : ++failed;
    test244() == 0 ? ++passed : ++failed;
    test245() == 0 ? ++passed : ++failed;
    test246() == 0 ? ++passed : ++failed;
    test247() == 0 ? ++passed : ++failed;
    test248() == 0 ? ++passed : ++failed;
    test249() == 0 ? ++passed : ++failed;
    test250() == 0 ? ++passed : ++failed;
    test251() == 0 ? ++passed : ++failed;
    test252() == 0 ? ++passed : ++failed;
    test253() == 0 ? ++passed : ++failed;
    test254() == 0 ? ++passed : ++failed;
    test255() == 0 ? ++passed : ++failed;
    test256() == 0 ? ++passed : ++failed;
    test257() == 0 ? ++passed : ++failed;
    test258() == 0 ? ++passed : ++failed;
    test259() == 0 ? ++passed : ++failed;
    test260() == 0 ? ++passed : ++failed;
    test261() == 0 ? ++passed : ++failed;
    test262() == 0 ? ++passed : ++failed;
    test263() == 0 ? ++passed : ++failed;
    test264() == 0 ? ++passed : ++failed;
    test265() == 0 ? ++passed : ++failed;
    test266() == 0 ? ++passed : ++failed;
    test267() == 0 ? ++passed : ++failed;
    test268() == 0 ? ++passed : ++failed;
    test269() == 0 ? ++passed : ++failed;
    test270() == 0 ? ++passed : ++failed;
    test271() == 0 ? ++passed : ++failed;
    test272() == 0 ? ++passed : ++failed;
    test273() == 0 ? ++passed : ++failed;
    test274() == 0 ? ++passed : ++failed;
    test275() == 0 ? ++passed : ++failed;
    test276() == 0 ? ++passed : ++failed;
    test277() == 0 ? ++passed : ++failed;
    test278() == 0 ? ++passed : ++failed;
    test279() == 0 ? ++passed : ++failed;
    test280() == 0 ? ++passed : ++failed;
    test281() == 0 ? ++passed : ++failed;
    test282() == 0 ? ++passed : ++failed;
    test283() == 0 ? ++passed : ++failed;
    test284() == 0 ? ++passed : ++failed;
    test285() == 0 ? ++passed : ++failed;
    test286() == 0 ? ++passed : ++failed;
    test287() == 0 ? ++passed : ++failed;
    test288() == 0 ? ++passed : ++failed;
    test289() == 0 ? ++passed : ++failed;
    test290() == 0 ? ++passed : ++failed;
    test291() == 0 ? ++passed : ++failed;
    test292() == 0 ? ++passed : ++failed;
    test293() == 0 ? ++passed : ++failed;
    test294() == 0 ? ++passed : ++failed;
    test295() == 0 ? ++passed : ++failed;
    test296() == 0 ? ++passed : ++failed;
    test297() == 0 ? ++passed : ++failed;
    test298() == 0 ? ++passed : ++failed;
    test299() == 0 ? ++passed : ++failed;
    test300() == 0 ? ++passed : ++failed;
    test301() == 0 ? ++passed : ++failed;
    test302() == 0 ? ++passed : ++failed;
    test303() == 0 ? ++passed : ++failed;
    test304() == 0 ? ++passed : ++failed;
    test305() == 0 ? ++passed : ++failed;
    test306() == 0 ? ++passed : ++failed;
    test307() == 0 ? ++passed : ++failed;
    test308() == 0 ? ++passed : ++failed;
    test309() == 0 ? ++passed : ++failed;
    test310() == 0 ? ++passed : ++failed;
    test311() == 0 ? ++passed : ++failed;
    test312() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22672276&rd=13904&pm=10389
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
 
class StrongEconomy { 
public: 
  long long earn(long long, long long, long long, long long); 
}; 
 
long long number_of_days(long long n, long long k, long long price, long long have) { 
  long long rest = price - have; 
  if (rest <= 0) 
    return 0; 
  if (n > rest / k + 1) 
    return 1; 
  long long income = n * k; 
  return (rest - 1) / income + 1; 
} 
 
long long StrongEconomy::earn(long long n, long long k, long long price, long long target) { 
  long long result = target; 
  long long have = 0; 
  long long days_passed = 0; 
  while (true) { 
    result = min(result, days_passed + number_of_days(n, k, target, have)); 
    if (number_of_days(n, k, target, have) <= 1) break; 
    long long next_buying = number_of_days(n, k, price, have); 
    days_passed += next_buying; 
    have = have + n * k * next_buying - price; 
    if (n < k) ++n; else ++k; 
  } 
  return result; 
} 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/