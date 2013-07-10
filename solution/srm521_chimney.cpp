/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11512
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

class Chimney {
public:
    int countWays(long n);
};

int Chimney::countWays(long n) {
    int ret;
    return ret;
}


int test0() {
    long n = 1;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
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
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 1088;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    long n = 5;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 110198784;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    long n = 6;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 138284509;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    long n = 100000;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 19900327;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    long n = 1000000000000000000;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 364019862;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    long n = 3;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 50688;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    long n = 4;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 2363392;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    long n = 7;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 584934263;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    long n = 8;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 226635915;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    long n = 9;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 442731277;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    long n = 10;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 746402694;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    long n = 11;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 492527535;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    long n = 12;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 871549439;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    long n = 13;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 312610762;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    long n = 14;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 226152767;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    long n = 15;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 848244118;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    long n = 16;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 241940394;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    long n = 17;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 325515661;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    long n = 18;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 140566512;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    long n = 19;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 914190377;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    long n = 20;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 884881090;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    long n = 1000000000000000000;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 364019862;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    long n = 999999999999999999;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 764053755;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    long n = 999999999999999998;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 723602507;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    long n = 999999999999999997;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 483888540;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    long n = 999999999999999996;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 804735119;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    long n = 999999999999999995;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 908490583;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    long n = 999999999999999994;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 809418952;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    long n = 999999999999999993;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 358494047;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    long n = 999999999999999992;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 381223365;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    long n = 999999999999999991;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 670941057;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    long n = 200;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 787171472;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    long n = 108;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 572366251;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    long n = 193;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 944617417;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    long n = 184;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 17073931;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    long n = 135;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 539481840;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    long n = 1274;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 49395495;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    long n = 1904;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 522479802;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    long n = 1412;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 651819626;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    long n = 1546;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 21767390;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    long n = 1768;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 405449637;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    long n = 8054473;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 212209620;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    long n = 2101872;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 648015706;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    long n = 2806429;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 625206793;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    long n = 10133628;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 687213396;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    long n = 15294943;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 326487321;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    long n = 1000002803;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 303972920;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    long n = 1000000276;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 24167289;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    long n = 1000004460;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 362967943;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    long n = 1000008951;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 392371903;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    long n = 1000005498;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 16978199;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    long n = 1000007365;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 635815387;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    long n = 1000002325;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 368755323;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    long n = 1000006901;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 721209271;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    long n = 1000001069;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 448591518;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    long n = 1000009153;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 285293220;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    long n = 361;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 897412922;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    long n = 6859;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 990317770;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    long n = 130321;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 908867540;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    long n = 2476099;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 991604202;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    long n = 47045881;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 965339545;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    long n = 893871739;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 391942709;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    long n = 16983563041;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 417250699;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    long n = 322687697779;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 878866403;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    long n = 6131066257801;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 532681067;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    long n = 116490258898219;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 283174963;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    long n = 2213314919066161;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 578195950;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    long n = 42052983462257059;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 786673968;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    long n = 799006685782884121;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 987474155;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    long n = 576460752303423487;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 946324257;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    long n = 288230376151711743;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 910557164;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    long n = 144115188075855871;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 558974186;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    long n = 450283905890997362;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 625809992;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    long n = 150094635296999120;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 899843099;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    long n = 50031545098999706;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 24613994;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    long n = 298023223876953124;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 824133018;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    long n = 59604644775390624;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 838840981;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    long n = 11920928955078124;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 93771289;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    long n = 558545864083284006;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 628140868;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    long n = 79792266297612000;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 321969494;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    long n = 11398895185373142;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 583306028;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    long n = 505447028499293770;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 93328307;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    long n = 45949729863572160;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 846195883;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    long n = 4177248169415650;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 52608353;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    long n = 665416609183179840;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 287865304;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    long n = 51185893014090756;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 825266957;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    long n = 3937376385699288;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 412854001;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    long n = 999999999999999987;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 727912045;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    long n = 590345035376309527;
    Chimney* pObj = new Chimney();
    clock_t start = clock();
    int result = pObj->countWays(n);
    clock_t end = clock();
    delete pObj;
    int expected = 86035942;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22263204&rd=14546&pm=11512
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
 
class Chimney {
public:
  int countWays(long long);
};
 
const int md = (int)(1e9+7);
 
int a[9][9], b[9][9], c[9][9];
 
int Chimney::countWays(long long n) {
  int m = 4, i, j, k;
  a[0][0] = 24; a[0][1] = 64; a[0][2] = 64; a[0][3] = 64;
  a[1][0] = 6; a[1][1] = 16; a[1][2] = 16; a[1][3] = 16;
  a[2][0] = 2; a[2][1] = 6; a[2][2] = 6; a[2][3] = 6;
  a[3][0] = 0; a[3][1] = 2; a[3][2] = 2; a[3][3] = 2;
  for (i=0;i<m;i++)
    for (j=0;j<m;j++) b[i][j] = (i == j);
  long long step = 1LL << 62;
  while (step > 0) {
    for (i=0;i<m;i++)
      for (j=0;j<m;j++) {
        c[i][j] = 0;
        for (k=0;k<m;k++) c[i][j] = (c[i][j]+(long long)b[i][k]*b[k][j]) % md;
      }
    for (i=0;i<m;i++)
      for (j=0;j<m;j++) b[i][j] = c[i][j];
    if (step & n) {
      for (i=0;i<m;i++)
        for (j=0;j<m;j++) {
          c[i][j] = 0;
          for (k=0;k<m;k++) c[i][j] = (c[i][j]+(long long)b[i][k]*a[k][j]) % md;
        }
      for (i=0;i<m;i++)
        for (j=0;j<m;j++) b[i][j] = c[i][j];
    }
    step >>= 1;
  }
  return b[0][0];
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/