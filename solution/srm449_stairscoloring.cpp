/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10551
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

class StairsColoring {
public:
    int coloringCount(int N, int K);
};

int StairsColoring::coloringCount(int N, int K) {
    int ret;
    return ret;
}


int test0() {
    int N = 3;
    int K = 2;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 2;
    int K = 2;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
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
    int N = 1;
    int K = 1;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
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
    int N = 4;
    int K = 5;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 103514887;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 7;
    int K = 77;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 747707397;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 1000000000;
    int K = 123;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
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
    int N = 1000000000;
    int K = 1000000000;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
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
    int N = 536870911;
    int K = 1000000000;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 543724762;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 123456789;
    int K = 1;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 268435455;
    int K = 36648724;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 208048256;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 134217727;
    int K = 36648724;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 117825866;
    int K = 7457346;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 13498530;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 387420488;
    int K = 84069467;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 806796213;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 643076642;
    int K = 123;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 214970630;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 279;
    int K = 562444338;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 47154375;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 11;
    int K = 358206529;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 857359266;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 362;
    int K = 863193754;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 274995007;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 120;
    int K = 438119233;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 437630283;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 256;
    int K = 689481272;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 90697485;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 8775;
    int K = 278000423;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 572861679;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 2938;
    int K = 487044242;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 410078719;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 7273;
    int K = 610019679;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 711942185;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 3047;
    int K = 259939330;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 832431563;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 8752;
    int K = 679078961;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 618152009;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 959349;
    int K = 298165444;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 373912105;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 271825;
    int K = 558967608;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 728819731;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 604088;
    int K = 872931663;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 755962687;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 754447;
    int K = 686456775;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 372431019;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 848707;
    int K = 623629290;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 224104687;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 930552;
    int K = 186804456;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 237516386;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 197350;
    int K = 232952234;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 974852665;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 798144;
    int K = 717319524;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 887479123;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 840344;
    int K = 311701756;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 356084284;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 712455;
    int K = 435488855;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 747050769;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 280179047;
    int K = 138284830;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 144167434;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 489152343;
    int K = 650268386;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 807372474;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 131266783;
    int K = 482122404;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 973886042;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 909833560;
    int K = 572746703;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 377020583;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 214776896;
    int K = 461181366;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2124231;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 477365003;
    int K = 637517399;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 705347008;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 439584539;
    int K = 933502299;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 646156402;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 685949640;
    int K = 579379272;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 414936531;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 319453138;
    int K = 683268749;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 245072125;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 684365003;
    int K = 308843531;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 43749586;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 999988776;
    int K = 2;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 676672996;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 999999999;
    int K = 3;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 999999997;
    int K = 4;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 1000000000;
    int K = 5;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 888888888;
    int K = 6;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
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
    int N = 999999997;
    int K = 999999997;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
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
    int N = 1000000000;
    int K = 500000000;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 326402540;
    int K = 326402540;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 113950251;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 987558789;
    int K = 987558789;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 787202130;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 100028703;
    int K = 2;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 133309173;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 46248482;
    int K = 7189719;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 999998743;
    int K = 999998742;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 345389292;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 423531123;
    int K = 8013;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 223632865;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 11000;
    int K = 2645743;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 798025601;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 100000000;
    int K = 599111111;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 999999991;
    int K = 999999973;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 24;
    int K = 2;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 440011672;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 123;
    int K = 9999;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 885229876;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 3627;
    int K = 2;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 985575155;
    int K = 1337731;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
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
    int N = 131071;
    int K = 2;
    StairsColoring* pObj = new StairsColoring();
    clock_t start = clock();
    int result = pObj->coloringCount(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 596907532;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=13903&pm=10551
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
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
#include <cctype>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
typedef long long int64;
 
class StairsColoring
{
public:
  int MODE;
  int left[10000];
  int mypower(int p,int e,int MODE)
  {
    if (e==0) return 1%MODE;
    if (e%2==0)
    {
      int t=mypower(p,e/2,MODE);
      return (int)(((int64)t*(int64)t)%MODE);
    }
    else
    {
      int t=mypower(p,e-1,MODE);
      return (int)(((int64)t*(int64)p)%MODE);
    }
  }
  void solveIt(int n,int &e,int &p)
  {
    if (n<MODE)
    {
      e=0;
      p=left[n];
    }
    else
    {
      solveIt(n/MODE,e,p);
      int c=left[MODE-1];
      int d=mypower(c,n/MODE,MODE);
      p=(p*d)%MODE;
      p=(p*left[n%MODE])%MODE;
      e+=n/MODE;
    }
  }
  int solve(int n,int _MODE)
  {
    MODE=_MODE;
    left[0]=1%MODE;
    for (int i=1;i<MODE;i++) left[i]=(i*left[i-1])%MODE;
    int e1,p1,e2,p2,e3,p3,s2=0,s3=0;
    solveIt(2*n,e1,p1);
    solveIt(n+1,e2,p2);
    solveIt(n,e3,p3);
    if (e1>e2+e3) return 0;
    for (int i=0;i<MODE;i++) 
    {
      if ((i*p2)%MODE==1) s2=i;
      if ((i*p3)%MODE==1) s3=i;
    }
    return (((p1*s2)%MODE)*s3)%MODE;
  }
  int coloringCount(int n, int k)
  {
    int64 m[5]={2,3,11,2089,7253};
    int64 b[5];
    for (int i=0;i<5;i++)
    {
      b[i]=solve(n,(int)m[i]);
    }
    int64 R=0;
    for (int i=0;i<5;i++)
    {
      int64 s=1;
      for (int j=0;j<5;j++) if (i!=j) s*=m[j];
      int64 t=0;
      while (t%m[i]!=b[i]) t+=s;
      R+=t;
    }
    int d=(int)(R%1000000122);
    int ret=mypower(k,d,1000000123);
    return ret;
  }
};

********************************************************************************
*******************************************************************************/