/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12384
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

class DistinctRemainders {
public:
    int howMany(long N, int M);
};

int DistinctRemainders::howMany(long N, int M) {
    int ret;
    return ret;
}


int test0() {
    long N = 3;
    int M = 2;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    long N = 3;
    int M = 3;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    long N = 58;
    int M = 1;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    long N = 572;
    int M = 7;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 922572833;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    long N = 1000000000000000000;
    int M = 20;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 240297629;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    long N = 1;
    int M = 1;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
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
    long N = 1000000000000000000;
    int M = 50;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 46857165;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    long N = 14;
    int M = 7;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 643;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    long N = 7;
    int M = 14;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    long N = 15;
    int M = 15;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 2121;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    long N = 97;
    int M = 23;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 768934218;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    long N = 1;
    int M = 20;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    long N = 1;
    int M = 50;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    long N = 2;
    int M = 7;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    long N = 93;
    int M = 14;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 718116655;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    long N = 6;
    int M = 2;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    long N = 8473;
    int M = 3;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 5651;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    long N = 40059;
    int M = 37;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 914138702;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    long N = 858756;
    int M = 14;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 698140627;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    long N = 3325264;
    int M = 2;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    long N = 99726960;
    int M = 20;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 602857538;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    long N = 405046580;
    int M = 2;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    long N = 6709199525;
    int M = 13;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 312260183;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    long N = 92774141998;
    int M = 29;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 555712049;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    long N = 912490109202;
    int M = 3;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 326883271;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    long N = 5073951506241;
    int M = 6;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 598861277;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    long N = 64433690240928;
    int M = 2;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    long N = 173767058179049;
    int M = 35;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 487236212;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    long N = 7737496696886829;
    int M = 26;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 843624497;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    long N = 95549062400722057;
    int M = 33;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 293405701;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    long N = 319690881584892264;
    int M = 30;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 626187333;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    long N = 4;
    int M = 1;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    long N = 10;
    int M = 12;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 299;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    long N = 991;
    int M = 23;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 695583054;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    long N = 3130;
    int M = 4;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 922030094;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    long N = 6998;
    int M = 14;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 493245411;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    long N = 884994;
    int M = 21;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 24078637;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    long N = 5615879;
    int M = 13;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 798441238;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    long N = 93750616;
    int M = 13;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 313501897;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    long N = 667860488;
    int M = 3;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 445240327;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    long N = 5707439769;
    int M = 1;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    long N = 64272166814;
    int M = 14;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 243544564;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    long N = 477986576516;
    int M = 11;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 98094246;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    long N = 4606736991870;
    int M = 9;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 111082852;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    long N = 60881169868247;
    int M = 4;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 723892939;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    long N = 392598014505174;
    int M = 12;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 192249185;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    long N = 1429671065610848;
    int M = 13;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 717138391;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    long N = 34533278621946847;
    int M = 31;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 586731273;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    long N = 245299575173742828;
    int M = 14;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 357350463;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    long N = 427783988761240522;
    int M = 47;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 371449307;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    long N = 482273829627639113;
    int M = 4;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 248716576;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    long N = 227091392807824344;
    int M = 19;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 433082854;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    long N = 927736909704583337;
    int M = 10;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 396475076;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    long N = 476282457179118177;
    int M = 35;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 161075241;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    long N = 127572008851308845;
    int M = 5;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 71426118;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    long N = 124918559510750750;
    int M = 16;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 622052085;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    long N = 732591068249655412;
    int M = 22;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 449342301;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    long N = 668126003465555919;
    int M = 8;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 371382139;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    long N = 423953064949530647;
    int M = 15;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 798649911;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    long N = 721181777663307639;
    int M = 46;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 5816363;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    long N = 955361208302576247;
    int M = 37;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 37396509;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    long N = 776066125740417664;
    int M = 16;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 616443748;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    long N = 282399450093718453;
    int M = 30;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 706241491;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    long N = 793663430571841969;
    int M = 6;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 611994722;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    long N = 116764009883140394;
    int M = 42;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 398644261;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    long N = 90403892428491992;
    int M = 37;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 869771677;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    long N = 490189236877093361;
    int M = 48;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 527504284;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    long N = 655845410602572598;
    int M = 43;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 221794262;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    long N = 781804787448477614;
    int M = 49;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 589605840;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    long N = 720343730613591728;
    int M = 7;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 208289671;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    long N = 993293851500934210;
    int M = 9;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 957411041;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    long N = 140402649375493885;
    int M = 50;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 784795354;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    long N = 196693153802145406;
    int M = 11;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 250848519;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    long N = 756378842767465288;
    int M = 21;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 806609037;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    long N = 571702284006185944;
    int M = 44;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 185789492;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    long N = 829124358688175621;
    int M = 43;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 959786252;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    long N = 410293588970904228;
    int M = 29;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 455746555;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    long N = 850011684922242067;
    int M = 37;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 861781979;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    long N = 782811923016652338;
    int M = 46;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 906670156;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    long N = 783877770011034090;
    int M = 23;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 866276678;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    long N = 727737286228695814;
    int M = 16;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 212815630;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    long N = 649920229735208654;
    int M = 28;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 79599807;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    long N = 777517989043429657;
    int M = 29;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 722198808;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    long N = 814895441298133647;
    int M = 30;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 109189308;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    long N = 14963006823662992;
    int M = 16;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 22445463;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    long N = 505292692323842888;
    int M = 42;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 36508528;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    long N = 410803061604391380;
    int M = 25;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 473478163;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    long N = 17341098467994024;
    int M = 36;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 752034595;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    long N = 216404853972400785;
    int M = 37;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 624762120;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    long N = 208575354064882855;
    int M = 38;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 669159206;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    long N = 715034367818813278;
    int M = 38;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 115471281;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    long N = 467771077419410734;
    int M = 21;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 131733081;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    long N = 19479558867415190;
    int M = 6;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 871083309;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    long N = 875931307701255497;
    int M = 18;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 299370617;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    long N = 830789743755355385;
    int M = 20;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 324571030;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    long N = 554074811793238223;
    int M = 45;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 928845747;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    long N = 912818363093652897;
    int M = 37;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 245478616;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    long N = 173837593383949663;
    int M = 40;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 202744994;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    long N = 216349954416444224;
    int M = 50;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 589161980;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    long N = 99999999999999999;
    int M = 50;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 577168021;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    long N = 1000000000000;
    int M = 23;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 558640185;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    long N = 1000000000000;
    int M = 30;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 859815476;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    long N = 1000000000000000000;
    int M = 31;
    DistinctRemainders* pObj = new DistinctRemainders();
    clock_t start = clock();
    int result = pObj->howMany(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 293376536;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23052418&rd=15492&pm=12384
********************************************************************************
//#line 7 "DistinctRemainders.cpp" 
#include <cstdlib> 
#include <cctype> 
#include <cstring> 
#include <cstdio> 
#include <cmath> 
#include <algorithm> 
#include <vector> 
#include <string> 
#include <iostream> 
#include <sstream> 
#include <map> 
#include <set> 
#include <queue> 
#include <stack> 
#include <fstream> 
#include <numeric> 
#include <iomanip> 
#include <bitset> 
#include <list> 
#include <stdexcept> 
#include <functional> 
#include <utility> 
#include <ctime> 
using namespace std; 
 
typedef long long ll; 
 
class DistinctRemainders 
{ 
public: 
  ll mod; 
  ll f[51][1300], fac[51]; 
 
  inline void add(ll &x, ll y) 
  { 
    if (y >= mod) y %= mod; 
    x += y; 
    if (x >= mod) x -= mod; 
  } 
 
  ll pow(ll a, ll b) 
  { 
    ll r = 1LL; 
    while (b) 
    { 
      if (b & 1LL) r *= a; 
      if (r >= mod) r %= mod; 
      a *= a; 
      if (a >= mod) a %= mod; 
      b >>= 1LL; 
    } 
    return r; 
  } 
 
  ll C(ll n, ll m) 
  { 
    ll ret = 1LL; 
    for (int i = 1; i <= m; ++i) 
      ret = (ret * ((n - i + 1) % mod)) % mod; 
    for (int i = 1; i <= m; ++i) 
      ret = (ret * pow(i, mod - 2)) % mod; 
    return ret; 
  } 
 
  int howMany(long long N, int M) 
  { 
    mod = 1000000007LL; 
    memset(f, 0, sizeof f); 
    f[0][0] = 1LL, fac[1] = 1LL; 
    for (int i = 2; i <= M; ++i) fac[i] = (fac[i - 1] * i) % mod; 
    for (int i = 0; i < M; ++i) 
      for (int j = M - 1; j >= 0; --j) 
        for (int k = 1299; k >= i; --k) 
          add(f[j + 1][k], f[j][k - i]); 
    ll div, rem = N % M; 
    ll ans = 0LL; 
    for (int i = 1, j; i <= M; ++i) 
    { 
      for (j = rem; j <= N && j < 1300; j += M) 
      { 
        div = (N - j) / M; 
        add(ans, (((f[i][j] * fac[i]) % mod) * C(div + i - 1, i - 1)) % mod); 
      } 
    } 
    return ans; 
  } 
   
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/