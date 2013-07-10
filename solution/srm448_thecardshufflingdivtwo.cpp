/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10618
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

class TheCardShufflingDivTwo {
public:
    int shuffle(int n, int m);
};

int TheCardShufflingDivTwo::shuffle(int n, int m) {
    int ret;
    return ret;
}


int test0() {
    int n = 5;
    int m = 1;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 5;
    int m = 2;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
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
    int m = 10;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
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
    int n = 17;
    int m = 9;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 1;
    int m = 3;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 5;
    int m = 7;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 5;
    int m = 7;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 48;
    int m = 1;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 57;
    int m = 25;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 69;
    int m = 26;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 88;
    int m = 52;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 78;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 91;
    int m = 73;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 65;
    int m = 7;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 45;
    int m = 37;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 11;
    int m = 23;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 99;
    int m = 29;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 34;
    int m = 91;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 34;
    int m = 27;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 73;
    int m = 52;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 5;
    int m = 69;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 148;
    int m = 1;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 357;
    int m = 125;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 369;
    int m = 226;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 187;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 388;
    int m = 852;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 193;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 291;
    int m = 573;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 182;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 165;
    int m = 7;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 128;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 545;
    int m = 437;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 611;
    int m = 523;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 271;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 799;
    int m = 529;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 189;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 434;
    int m = 291;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 308;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 757148;
    int m = 851001;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 300266;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 413357;
    int m = 971125;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 19168;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 598369;
    int m = 567226;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 594726;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 749388;
    int m = 890852;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 318320;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 766291;
    int m = 239573;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 432807;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 38165;
    int m = 597007;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 22228;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 615545;
    int m = 51437;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 115672;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 289611;
    int m = 341523;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 101186;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 427799;
    int m = 215529;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 90056;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 16434;
    int m = 544291;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 1838;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 957148;
    int m = 951001;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 167358;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 913357;
    int m = 971125;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 279980;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 998369;
    int m = 967226;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 927632;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 949388;
    int m = 990852;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 118714;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 1000000;
    int m = 1000000;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 605496;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 999999;
    int m = 999999;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 399680;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 555555;
    int m = 777777;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 347222;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 100000;
    int m = 100000;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 1024;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 6;
    int m = 3;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 1;
    int m = 1;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 999997;
    int m = 999997;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 295776;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 1000000;
    int m = 999999;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 302748;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 10;
    int m = 5;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 999999;
    int m = 880977;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 188063;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 1000000;
    int m = 100000;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 230887;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 997763;
    int m = 997763;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 402227;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 1235;
    int m = 124312;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 999201;
    int m = 1000000;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 243322;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 23423;
    int m = 34534;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 7115;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 123456;
    int m = 12345;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 71582;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 987654;
    int m = 987654;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 821029;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 999998;
    int m = 999998;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 199840;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 999;
    int m = 998001;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 512;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 30;
    int m = 10;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 50000;
    int m = 12345;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 25166;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int n = 100000;
    int m = 10000;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 45453;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int n = 987891;
    int m = 987653;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 681077;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int n = 100000;
    int m = 1000000;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 29503;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int n = 999979;
    int m = 1000000;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 194388;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int n = 16;
    int m = 5;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int n = 243254;
    int m = 234454;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 9859;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int n = 2;
    int m = 1;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int n = 999999;
    int m = 453123;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 36044;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int n = 1;
    int m = 2;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int n = 999999;
    int m = 888888;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 185914;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int n = 1000000;
    int m = 1000;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 230887;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int n = 8;
    int m = 2;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int n = 98452;
    int m = 1212;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 18090;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int n = 12345;
    int m = 1234;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 11524;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int n = 100;
    int m = 1000000;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int n = 954125;
    int m = 125487;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 785528;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int n = 987654;
    int m = 654321;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 801392;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int n = 1000000;
    int m = 999198;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 551031;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int n = 10;
    int m = 4;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int n = 4;
    int m = 2;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int n = 50;
    int m = 50;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int n = 999999;
    int m = 1000000;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 799360;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int n = 8;
    int m = 4;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int n = 4;
    int m = 3;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int n = 1;
    int m = 979797;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int n = 999999;
    int m = 999998;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 199840;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int n = 999997;
    int m = 1000000;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 366214;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int n = 1;
    int m = 92;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int n = 3;
    int m = 2;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int n = 1234;
    int m = 1234;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 1024;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int n = 42;
    int m = 68;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int n = 987933;
    int m = 999977;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 269558;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int n = 1;
    int m = 10;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int n = 7;
    int m = 3;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int n = 12;
    int m = 8;
    TheCardShufflingDivTwo* pObj = new TheCardShufflingDivTwo();
    clock_t start = clock();
    int result = pObj->shuffle(n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22696479&rd=13902&pm=10618
********************************************************************************
#include <set> 
#include <map> 
#include <vector> 
#include <string> 
#include <iostream> 
#include <algorithm> 
using namespace std; 
 
class TheCardShufflingDivTwo{ 
public: 
  int shuffle(int n, int m){ 
    int ans=1; 
    for(int i=0;i<m;i++){ 
      if(ans<=(n/2)) ans*=2; 
      else ans=(ans-n/2)*2-1; 
    } 
    return ans; 
  } 
};

********************************************************************************
*******************************************************************************/