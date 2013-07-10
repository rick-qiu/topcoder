/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10386
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

class SquareFreeSets {
public:
    int countPerfect(int N, int K);
};

int SquareFreeSets::countPerfect(int N, int K) {
    int ret;
    return ret;
}


int test0() {
    int N = 5;
    int K = 1;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 5;
    int K = 2;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 5;
    int K = 3;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 6;
    int K = 3;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 28;
    int K = 41;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1599;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 2;
    int K = 1;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
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
    int N = 2;
    int K = 2;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 3;
    int K = 1;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
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
    int N = 3;
    int K = 2;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 4;
    int K = 1;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 4;
    int K = 2;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 10;
    int K = 1;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 10;
    int K = 3;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 19;
    int K = 6;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 514;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 19;
    int K = 7;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 526;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 19;
    int K = 8;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 527;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 20;
    int K = 1;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 20;
    int K = 2;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 65;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 20;
    int K = 7;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 526;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 25;
    int K = 4;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 703;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 30;
    int K = 5;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2129;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 31;
    int K = 5;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3362;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 31;
    int K = 11;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6655;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 31;
    int K = 30;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6655;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 50;
    int K = 18;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 217087;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 52;
    int K = 100;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 241663;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 53;
    int K = 500;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 483327;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 54;
    int K = 6;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 101352;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 77;
    int K = 2;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 877;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 77;
    int K = 7;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2780581;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 90;
    int K = 16;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 401466010;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 90;
    int K = 23;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 410124286;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 100;
    int K = 1;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 100;
    int K = 11;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 396162793;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 100;
    int K = 30;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 184890872;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 101;
    int K = 9;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 160354310;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 101;
    int K = 217;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 369781745;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 133;
    int K = 22;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 919816342;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 140;
    int K = 2;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2836;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 143;
    int K = 5;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6547947;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 149;
    int K = 12;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 934469273;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 150;
    int K = 66;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 216547409;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 171;
    int K = 4;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1386007;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 171;
    int K = 5;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 14866231;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 171;
    int K = 8;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 273252649;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 171;
    int K = 17;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 242687948;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 171;
    int K = 100;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 560722957;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 180;
    int K = 3;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 107872;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 180;
    int K = 23;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 236303590;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 199;
    int K = 30;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 675949811;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 199;
    int K = 31;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 549627783;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 199;
    int K = 61;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 561216532;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 200;
    int K = 44;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 561216429;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 201;
    int K = 1;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 122;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 201;
    int K = 2;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5834;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 201;
    int K = 3;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 156176;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 201;
    int K = 4;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2777475;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 201;
    int K = 5;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 35930774;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 201;
    int K = 10;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 680094343;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 201;
    int K = 19;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 297753758;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 250;
    int K = 6;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 273671628;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 250;
    int K = 12;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 622456092;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 250;
    int K = 19;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 767284319;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 288;
    int K = 1;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 176;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 288;
    int K = 8;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 929484630;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 288;
    int K = 20;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 214979107;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 288;
    int K = 53;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 302173652;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 289;
    int K = 1;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 176;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 289;
    int K = 2;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12064;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 289;
    int K = 30;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 681974323;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 289;
    int K = 40;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 247719734;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 289;
    int K = 68;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 504131194;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 299;
    int K = 23;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 166018334;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 299;
    int K = 34;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 899354107;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 300;
    int K = 50;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 77423504;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int N = 300;
    int K = 125;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 532876911;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int N = 300;
    int K = 500;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 532876911;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int N = 302;
    int K = 6;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 46613614;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int N = 302;
    int K = 15;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 456487101;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int N = 311;
    int K = 2;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 14080;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int N = 311;
    int K = 13;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 890742119;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int N = 311;
    int K = 73;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 166937251;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int N = 320;
    int K = 4;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 18125207;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int N = 333;
    int K = 41;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 824243233;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int N = 333;
    int K = 60;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 922474248;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int N = 340;
    int K = 29;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 167455959;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int N = 350;
    int K = 300;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 608483469;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int N = 361;
    int K = 1;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 218;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int N = 361;
    int K = 2;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 18547;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int N = 361;
    int K = 6;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 712602321;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int N = 361;
    int K = 50;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 202406534;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int N = 361;
    int K = 126;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 68935461;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int N = 400;
    int K = 5;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 86754309;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int N = 400;
    int K = 18;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 365058783;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int N = 401;
    int K = 17;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 27831151;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int N = 410;
    int K = 21;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 595242627;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int N = 410;
    int K = 25;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 87250417;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int N = 420;
    int K = 30;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 220202719;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int N = 430;
    int K = 3;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1497405;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int N = 441;
    int K = 4;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 63348791;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int N = 441;
    int K = 27;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 288920433;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int N = 456;
    int K = 1;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 278;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int N = 456;
    int K = 76;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 365037057;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int N = 492;
    int K = 500;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 638909183;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int N = 493;
    int K = 8;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 981256579;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int N = 493;
    int K = 409;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 521680420;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int N = 494;
    int K = 21;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 19103265;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int N = 498;
    int K = 3;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2378973;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int N = 498;
    int K = 26;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 187129846;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int N = 498;
    int K = 499;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 529982055;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int N = 499;
    int K = 4;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 107376919;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int N = 499;
    int K = 45;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 923357053;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int N = 499;
    int K = 220;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 59964104;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int N = 500;
    int K = 1;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 305;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int N = 500;
    int K = 2;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 36163;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int N = 500;
    int K = 5;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 484973720;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int N = 500;
    int K = 17;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 183569777;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int N = 500;
    int K = 34;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 145016606;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int N = 500;
    int K = 92;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 59938211;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int N = 500;
    int K = 500;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 59964104;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int N = 500;
    int K = 300;
    SquareFreeSets* pObj = new SquareFreeSets();
    clock_t start = clock();
    int result = pObj->countPerfect(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 59964104;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8394868&rd=13748&pm=10386
********************************************************************************
#include <map> 
#include <set> 
#include <cmath> 
#include <queue> 
#include <vector> 
#include <string> 
#include <cstdio> 
#include <climits> 
#include <cstdlib> 
#include <cstring> 
#include <cassert> 
#include <numeric> 
#include <algorithm> 
#include <iostream> 
#include <sstream> 
#include <cctype> 
#include <ctime> 
#include <float.h> 
using namespace std; 
 
typedef vector<int> vi; 
 
#define For(i,a,b) for (int i(a),_b(b); i <= _b; ++i) 
#define Ford(i,a,b) for (int i(a),_b(b); i >= _b; --i) 
#define Rep(i,n) for (int i(0),_n(n); i < _n; ++i) 
#define Repd(i,n) for (int i((n)-1); i >= 0; --i) 
#define All(v) (v).begin(), (v).end() 
#define MP make_pair 
 
template<typename T> inline int size(const T& c) { return (int)c.size(); } 
 
const int mod = 1000000007; 
 
inline void add(int& a, int b) { 
  a += b; 
  if (a >= mod) 
    a -= mod; 
} 
 
vector<int> primes; 
int n, k; 
map<pair<pair<int,int>,vector<int> >,int> memo; 
 
int solve(int g, vector<int> cur, int pos) { 
  if (pos == size(primes) || primes[pos] > n) { 
    if (g+size(cur) > 0) 
      return 1; 
    else 
      return 0; 
  } 
  int p = primes[pos]; 
  while (size(cur) > 0 && cur.back()*p > n) { 
    ++g; 
    cur.pop_back(); 
  } 
  pair<pair<int,int>,vector<int> > state = MP(MP(g, pos), cur); 
  if (memo.count(state)) 
    return memo[state]; 
  int& res = memo[state]; 
  res = solve(g, cur, pos+1); 
  if (g+size(cur) < k) { 
    vi v = cur; 
    v.push_back(p); 
    sort(All(v)); 
    add(res, solve(g, v, pos+1)); 
  } 
  Rep(i, size(cur)) { 
    vi v = cur; 
    v[i] *= p; 
    sort(All(v)); 
    add(res, solve(g, v, pos+1)); 
  } 
  return res; 
} 
 
class SquareFreeSets { 
  public: 
  int countPerfect(int N, int K) { 
    n = N; 
    k = K; 
    For(i, 2, 500) { 
      bool prime = true; 
      For(j, 2, i-1) 
        prime &= i%j != 0; 
      if (prime)  
        primes.push_back(i); 
    } 
    memo.clear(); 
    return solve(0, vi(), 0); 
  } 
}; 
 
 
 
// Powered by FileEdit
// Powered by moj 4.12 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/