/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11746
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

class MinskyMysteryDiv2 {
public:
    long computeAnswer(long N);
};

long MinskyMysteryDiv2::computeAnswer(long N) {
    long ret;
    return ret;
}


int test0() {
    long N = 2;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
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
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    long N = 4;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
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
    long N = 15;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    long N = 0;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
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
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    long N = 5;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    long N = 6;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
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
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    long N = 8;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    long N = 9;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    long N = 10;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    long N = 11;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    long N = 12;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
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
    long N = 13;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 14;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    long N = 14;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    long N = 15;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    long N = 16;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    long N = 17;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 18;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    long N = 18;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    long N = 19;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 20;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    long N = 20;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    long N = 21;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    long N = 22;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    long N = 23;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 24;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    long N = 24;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 14;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    long N = 25;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    long N = 26;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 15;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    long N = 27;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    long N = 28;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    long N = 29;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 30;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    long N = 30;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 17;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    long N = 999999974243;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 10972236;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    long N = 999966000289;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 1999966;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    long N = 999932000987;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 1999932;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    long N = 549697684831;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 1482832;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    long N = 999992456923;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 2090164;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    long N = 999985999949;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 1999986;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    long N = 999663912463;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 999663912464;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    long N = 549755813888;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 274877906946;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    long N = 998295347921;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 100170030;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    long N = 990728680597;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 99410858;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    long N = 991325085943;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 99470696;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    long N = 990132634063;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 99351056;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    long N = 23899065817;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 2172642358;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    long N = 501286585121;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 71612369310;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    long N = 79418294653;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 79418294654;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    long N = 857742881383;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 5680416584;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    long N = 847288609443;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 282429536484;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    long N = 961346991611;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 961346991612;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    long N = 289721913119;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 289721913120;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    long N = 1000000000000;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 500000000002;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    long N = 56604;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 28304;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    long N = 639;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 216;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    long N = 940489420;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 470244712;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    long N = 181681;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 1970;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    long N = 2509315;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 501868;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    long N = 61008809;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 859350;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    long N = 307882;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 153943;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    long N = 9657166375;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 1931433280;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    long N = 632511669;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 210837226;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    long N = 1140;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 572;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    long N = 473785794118;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 236892897061;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    long N = 85426;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 42715;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    long N = 823;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 824;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    long N = 9691;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 892;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    long N = 32677176439;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 32677176440;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    long N = 66634240;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 33317122;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    long N = 8742164973;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 2914054994;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    long N = 7740;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 3872;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    long N = 35679235033;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 2744556554;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    long N = 912;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 458;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    long N = 62058;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 31031;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    long N = 68313523682;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 34156761843;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    long N = 167483122;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 83741563;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    long N = 73316810814;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 36658405409;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    long N = 25780653;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 8593554;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    long N = 50123;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 50124;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    long N = 95066;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 47535;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    long N = 1141118;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 570561;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    long N = 641536;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 320770;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    long N = 1303791137;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 118526478;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    long N = 934;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 469;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    long N = 3979;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 196;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    long N = 8544095;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 1708824;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    long N = 1716;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 860;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    long N = 708;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 356;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    long N = 37222940;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 18611472;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    long N = 255270;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 127637;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    long N = 194934;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 97469;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    long N = 35020;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 17512;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    long N = 4921;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 710;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    long N = 22198161106;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 11099080555;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    long N = 793869339907;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 113409905708;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    long N = 455750691863;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 455750691864;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    long N = 88458156143;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 12636879456;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    long N = 743531953133;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 10185369294;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    long N = 67336661975;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 13467332400;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    long N = 55858966335;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 18619655448;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    long N = 462398666113;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 20104289854;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    long N = 414917635852;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 207458817928;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    long N = 80399258354;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 40199629179;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    long N = 804762276120;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 402381138062;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    long N = 41071462606;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 20535731305;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    long N = 411282164164;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 205641082084;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    long N = 80052724013;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 80052724014;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    long N = 657164428388;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 328582214196;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    long N = 253690000746;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 126845000375;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    long N = 63345060786;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 31672530395;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    long N = 86775214293;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 28925071434;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    long N = 703837870306;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 351918935155;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    long N = 86567864778;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 43283932391;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    long N = 84631031817;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 28210343942;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    long N = 636455831109;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 212151943706;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    long N = 132336486706;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 66168243355;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    long N = 72724370282;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 36362185143;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    long N = 661765556521;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 22819501978;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    long N = 475808264703;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 158602754904;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    long N = 45572770802;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 22786385403;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    long N = 257935587385;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 51587117482;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    long N = 29460618561;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 9820206190;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    long N = 866070866297;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 123724409478;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    long N = 47539168631;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 1011471720;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    long N = 33346970931;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 11115656980;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    long N = 234250059026;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 117125029515;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    long N = 456203051683;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 350118764;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    long N = 655050458446;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 327525229225;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    long N = 154332755733;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 51444251914;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    long N = 97860137303;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 1378311864;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    long N = 948237557684;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 474118778844;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    long N = 72541902122;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 36270951063;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    long N = 375775526335;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 75155105272;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    long N = 1000000007;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000008;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    long N = 92225672626;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 46112836315;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    long N = 1500450271;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 1500450272;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    long N = 999999999991;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 1321004720;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    long N = 1234567891;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 1234567892;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    long N = 999999999901;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 142857142850;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    long N = 99987898781;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 4347299970;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    long N = 999999999999;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 333333333336;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    long N = 100000000000;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 50000000002;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    long N = 999999999989;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999990;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    long N = 2147483647;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 2147483648;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    long N = 111111378917;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 15873054138;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    long N = 999999898799;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 90909081720;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    long N = 982451653;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 982451654;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    long N = 1000000000;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 500000002;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    long N = 25459215277;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 25459215278;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    long N = 10000000001;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 99010002;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    long N = 999999999959;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999960;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    long N = 10000000000;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 5000000002;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    long N = 24000000000;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 12000000002;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    long N = 100000000003;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 100000000004;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    long N = 5463458053;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 5463458054;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    long N = 99999999998;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 50000000001;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    long N = 4564841564;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 2282420784;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    long N = 99999999977;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 99999999978;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    long N = 45810138910;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 22905069457;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    long N = 2000000000;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000002;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    long N = 99999999999;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 33333333336;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    long N = 1002000001;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 1002000002;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    long N = 999999999990;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 499999999997;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    long N = 92937447289;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 1575211030;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    long N = 32416190071;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 32416190072;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    long N = 464112462563;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 1362516;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    long N = 824633720831;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 824633720832;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    long N = 999781420691;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 999781420692;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    long N = 53;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 54;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    long N = 999999999937;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999938;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    long N = 1000003;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 1000004;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    long N = 199999999;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 2247280;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    long N = 10000000033;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 10000000034;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    long N = 763;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 116;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    long N = 9234511;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 839512;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    long N = 94143178827;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 31381059612;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    long N = 200560490131;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 200560490132;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    long N = 7000105037;
    MinskyMysteryDiv2* pObj = new MinskyMysteryDiv2();
    clock_t start = clock();
    long result = pObj->computeAnswer(N);
    clock_t end = clock();
    delete pObj;
    long expected = 7000105038;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22901548&rd=14722&pm=11746
********************************************************************************
#line 5 "MinskyMysteryDiv2.cpp" 
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
 
#define PB push_back 
#define MP make_pair 
 
#define REP(i,n) for(i=0;i<(n);++i) 
#define FOR(i,l,h) for(i=(l);i<=(h);++i) 
#define FORD(i,h,l) for(i=(h);i>=(l);--i) 
 
typedef vector<int> VI; 
typedef vector<string> VS; 
typedef vector<double> VD; 
typedef long long LL; 
typedef pair<int,int> PII; 
 
 
class MinskyMysteryDiv2 
{ 
        public: 
        long long computeAnswer(long long N) 
        { 
            if (N <= 1) return -1; 
            LL t = sqrt(N * 1.0) + 1, i; 
            for (i = 2; i <= t; ++i) { 
                if (N % i == 0) break; 
            } 
            if (N % i != 0) i = N; 
            return N / i + i; 
        } 
         
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/