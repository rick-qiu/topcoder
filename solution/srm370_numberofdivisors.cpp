/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7863
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

class NumberOfDivisors {
public:
    long smallestNumber(int k);
};

long NumberOfDivisors::smallestNumber(int k) {
    long ret;
    return ret;
}


int test0() {
    int k = 1;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int k = 2;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int k = 3;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int k = 4;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int k = 6;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int k = 10;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 48;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int k = 11;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 1024;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int k = 5000;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 4727833110000;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int k = 4000;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 261891630000;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int k = 4997;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int k = 123;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 9895604649984;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int k = 1001;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 3779136000000;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int k = 999;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 757632231014400;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int k = 997;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int k = 4999;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int k = 10000;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 89828829090000;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int k = 9999;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int k = 8000;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 6023507490000;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int k = 9000;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 20165655510000;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int k = 123;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 9895604649984;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int k = 5040;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 293318625600;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int k = 5042;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int k = 49;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 46656;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int k = 169;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 2176782336;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int k = 289;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 2821109907456;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int k = 529;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 131621703842267136;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int k = 125;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 810000;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int k = 1331;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 590490000000000;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int k = 2197;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 531441000000000000;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int k = 625;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 1944810000;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int k = 15625;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 813244863240810000;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int k = 6561;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 16679709446400;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int k = 19683;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 6021375110150400;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int k = 10125;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 234558414090000;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int k = 40320;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 6064949221531200;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int k = 43200;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 16678610359210800;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int k = 50000;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int k = 49999;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int k = 19683;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 6021375110150400;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int k = 39366;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 138491627533459200;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int k = 13122;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 316914479481600;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int k = 17160;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 18006676047360000;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int k = 6840;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 63233320550400;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int k = 12345;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int k = 11111;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int k = 11100;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int k = 909;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int k = 323;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 11284439629824;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int k = 7429;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int k = 1500;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 5675670000;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int k = 49920;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 55450964311142400;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int k = 49896;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 138920394182169600;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int k = 49500;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 822113443831680000;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int k = 49392;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 417429069057000000;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int k = 49280;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 100616669112960000;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int k = 1410;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 997476948718387200;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int k = 2387;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 990677827584000000;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int k = 3096;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 990550025463398400;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int k = 2583;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 981891371394662400;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int k = 29988;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 978140427264000000;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int k = 47880;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int k = 49140;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 604001713835520000;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int k = 47520;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 34433260096435200;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int k = 48960;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 200338967833804800;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int k = 32768;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 2888071057872000;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int k = 49248;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 911887715657318400;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int k = 49152;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 20216497405104000;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int k = 48640;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 572397050953728000;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int k = 48600;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 96472495959840000;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int k = 48384;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 18194847664593600;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int k = 256;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 1081080;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int k = 33;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 9216;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int k = 45000;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 295447018877010000;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int k = 30720;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 1732842634723200;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int k = 24;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 360;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int k = 22032;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 8443404774604800;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int k = 512;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 17297280;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int k = 32;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 840;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int k = 16384;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 93163582512000;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int k = 29376;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 20724720810393600;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int k = 128;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 83160;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int k = 48000;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 37905932634570000;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int k = 243;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 2822400;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int k = 8;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 24;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int k = 16;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 120;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int k = 64;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 7560;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int k = 46800;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 118735379642880000;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int k = 48;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 2520;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int k = 10800;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 18552403069200;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int k = 720;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 61261200;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int k = 9;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 36;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int k = 4096;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 128501493120;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int k = 61;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int k = 2142;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 643778150400;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int k = 101;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int k = 39168;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 66779655944601600;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int k = 96;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 27720;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int k = 3072;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 27935107200;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int k = 41580;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 151000428458880000;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int k = 17250;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 801947288862720000;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int k = 37;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 68719476736;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int k = 10904;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int k = 27720;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 11615417573760000;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int k = 118;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 864691128455135232;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int k = 3888;
    NumberOfDivisors* pObj = new NumberOfDivisors();
    clock_t start = clock();
    long result = pObj->smallestNumber(k);
    clock_t end = clock();
    delete pObj;
    long expected = 130363833600;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20527917&rd=10786&pm=7863
********************************************************************************
#include <vector>
#include <algorithm>
#include <sstream>
#include <iostream>
#include <cmath>
#include <string>
 
using namespace std;
 
#define pb push_back
#define sz size()
#define rep(i,n) for(i=0;i<n;++i)
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<double> vd;
typedef long long ll;
 
class NumberOfDivisors {
public:
  long long smallestNumber(int);
};
 
long long n;
vi sk;
 
const int p[20]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71};
 
void skaiciuoti(int l){
    if (l==1){
        int i, j;
        double fn=1;
        for (i=0; i<sk.sz; ++i) 
            for (j=1; j<sk[i]; ++j) fn*=p[i];
        if (fn<2E18){
            long long in=1;
            for (i=0; i<sk.sz; ++i)
                for (j=1; j<sk[i]; ++j) in*=(long long)p[i];
            if (in<=1000000000000000000LL&&(n==-1||n>in))
                n=in;
        }
    } else {
        int d=1;
        while (d*d<l){
            if (!(l%d)){
                if (d>1&&(sk.sz==0||d<=sk[sk.sz-1])) {
                    sk.pb(d);
                    skaiciuoti(l/d);
                    sk.pop_back();
                }
                if (l/d>1&&(sk.sz==0||l/d<=sk[sk.sz-1])) {
                    sk.pb(l/d);
                    skaiciuoti(d);
                    sk.pop_back();
                }
            }
            ++d;
        }
        if (d*d==l&&d>1&&(sk.sz==0||d<=sk[sk.sz-1])){
            sk.pb(d);
            skaiciuoti(d);
            sk.pop_back();
        }
    }
}
 
long long NumberOfDivisors::smallestNumber(int k) {
  n=-1;
  skaiciuoti(k);
  return n;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/