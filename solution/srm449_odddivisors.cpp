/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10547
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

class OddDivisors {
public:
    long findSum(int N);
};

long OddDivisors::findSum(int N) {
    long ret;
    return ret;
}


int test0() {
    int N = 7;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 21;
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
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
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
    int N = 777;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 201537;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 1000000000;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 333333333334181226;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 999999999;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 333333333332228101;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 328;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 35878;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 682;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 155194;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 790;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 208250;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 675;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 152223;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 394;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 51830;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 12571;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 52683771;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 95176;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 3019495236;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 32088;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 343215484;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 11859;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 46884881;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 77610;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 2007787872;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 42066;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 589857576;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 85768;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 2452053728;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 14176;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 66986582;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 45224;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 681739206;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 50542;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 851513538;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 939977424;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 294519185904320510;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 704387306;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 165387159111074046;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 914360241;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 278684883778351235;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 907119090;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 274288348002106490;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 368375588;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 45233524646880100;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 458647306;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 70119117196979106;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 266122812;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 23607117064139852;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 259408181;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 22430868239780363;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 227989863;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 17326459347169793;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 666671192;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 148150159459544002;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 535722582;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 95666228436645486;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 739788206;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 182428863472190212;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 206200429;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 14172872404581673;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 889914681;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 263982713516094237;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 567173363;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 107228541538022371;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 2;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 3;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 4;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 5;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 6;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 14;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 8;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 22;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 9;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 31;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 536870912;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 96076792050570582;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 536870911;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 96076792050570581;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 536870913;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 96076792587441495;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 999898469;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 333265649870347453;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 11000000;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 40333333422394;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 999586148;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 333057489191684940;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 999999989;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 333333326457228137;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 110000000;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 4033333333886606;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 99999999;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 3333333333080737;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 100000000;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 3333333333471362;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 999999997;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 333333331832228103;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 900000000;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 270000000001383796;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 987654321;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 325153686292870545;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 999688885;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 333125956048712835;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 999999998;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 333333332332228102;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 999999996;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 333333330832228106;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 2356725;
    OddDivisors* pObj = new OddDivisors();
    clock_t start = clock();
    long result = pObj->findSum(N);
    clock_t end = clock();
    delete pObj;
    long expected = 1851385320119;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=22827591&rd=13903&pm=10547
********************************************************************************
#include<iostream> 
#include<algorithm> 
#include<iterator> 
#include<map> 
#include<vector> 
#include<list> 
#include<set> 
#include<queue> 
#include<deque> 
#include<stack> 
#include<bitset> 
#include<functional> 
#include<utility> 
#include<fstream> 
#include<iosfwd> 
#include<sstream> 
#include<iomanip> 
#include<string> 
#include<cmath> 
#include<cstring> 
#include<ctime> 
#include<cstdio> 
#include<cstring> 
#include<cstdlib> 
#include<cctype> 
#include<cassert> 
#include<complex> 
#include<numeric> 
 
using namespace std; 
 
#define DEBUG                  0 
#define VAR(x,a)               __typeof(a) x(a) 
#define FORD(i,a,b)            for(int i = (int)a,_b = (int)b;i>=(_b);--i) 
#define FOREACH(it,v)           for(VAR(it,(v).begin());it!=(v).end();++it) 
#define FOR(i,a,b)             for(int i=(int)(a),_b = (int)b;i<(int)(_b);++i) 
#define  REP(i,n)               FOR(i,0,n) 
#define REPD(i,n)              FORD(i,n,0) 
#define Size()                 size() 
#define PB                     push_back 
#define PF                     push_front 
#define MP                     make_pair 
#define SZ                     size() 
#define ALL(V)                 V.begin(),V.end() 
#define Clear(A)               memset(A,0,sizeof(A)) 
#define PushBack               push_back 
#define PushFront              push_front 
#define MakePair               make_pair 
#define PopBack                pop_back 
#define PopFront               pop_front 
#define BitCount               __builtin_popcount 
#define INF                    100000000 
#define INFLL                  10000000000000000LL 
#define First                  first 
#define Second                 second 
 
typedef vector<int>            VI; 
typedef vector< vector<int> >  VII; 
typedef vector<string>         VS; 
typedef unsigned long long     ULL; 
typedef long long              LL; 
typedef pair<int,int>          PI; 
typedef unsigned long          UL; 
 
class OddDivisors 
{ 
  public : long long findSum(int N) 
  { 
    long long Sum=0LL; 
    while(N) { 
      Sum=Sum+Odd(N); 
      N/=2; 
    } 
    return Sum; 
  } 
  public : long long Odd(int N) 
  { 
    if(N%2==1) { 
      return (long long)((N+1)/2)*((N+1)/2); 
    } 
    else { 
      return (long long)(N/2)*(N/2); 
    } 
  } 
};

********************************************************************************
*******************************************************************************/