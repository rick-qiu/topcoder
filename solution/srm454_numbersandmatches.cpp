/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10709
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

class NumbersAndMatches {
public:
    long differentNumbers(long N, int K);
};

long NumbersAndMatches::differentNumbers(long N, int K) {
    long ret;
    return ret;
}


int test0() {
    long N = 10;
    int K = 1;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
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
    long N = 23;
    int K = 1;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
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
    long N = 66;
    int K = 2;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 15;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    long N = 888888888;
    int K = 100;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    long N = 444444444444444444;
    int K = 2;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
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
    long N = 444444444444444444;
    int K = 3;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1225;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    long N = 1;
    int K = 10;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    long N = 4;
    int K = 10;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
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
    long N = 6;
    int K = 10;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    long N = 9;
    int K = 10;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    long N = 8;
    int K = 10;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
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
    long N = 584780;
    int K = 7;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 64583;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    long N = 1457;
    int K = 2;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
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
    long N = 179789;
    int K = 2;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 168;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    long N = 2933596;
    int K = 7;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 505644;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    long N = 447460;
    int K = 6;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 9420;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    long N = 78689;
    int K = 4;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 2555;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    long N = 7244;
    int K = 8;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 465;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    long N = 66212;
    int K = 1;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    long N = 25311;
    int K = 8;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 4728;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    long N = 538;
    int K = 1;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    long N = 71032;
    int K = 9;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 7783;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    long N = 96;
    int K = 2;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 15;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    long N = 396;
    int K = 4;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 132;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    long N = 59481;
    int K = 1;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 18;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    long N = 3318876;
    int K = 12;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1138862;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    long N = 94492;
    int K = 5;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 3620;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    long N = 39857;
    int K = 5;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 6524;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    long N = 5649257;
    int K = 10;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 831739;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    long N = 5806545;
    int K = 9;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 765790;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    long N = 299351;
    int K = 1;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 26;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    long N = 5671702;
    int K = 10;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 351549;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    long N = 5041963;
    int K = 14;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1167792;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    long N = 2770;
    int K = 7;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 734;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    long N = 4378253;
    int K = 5;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 32015;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    long N = 3352;
    int K = 3;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 237;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    long N = 569;
    int K = 3;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 112;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    long N = 912;
    int K = 5;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 147;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    long N = 79418;
    int K = 10;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 10521;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    long N = 239;
    int K = 2;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 35;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    long N = 4243;
    int K = 9;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1098;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    long N = 5891911393;
    int K = 9;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 141044049;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    long N = 810;
    int K = 1;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    long N = 58866962718526;
    int K = 18;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 2796495743545;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    long N = 77457252;
    int K = 5;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 6409;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    long N = 369048204097567;
    int K = 16;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 15329445832838;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    long N = 72222962555318370;
    int K = 9;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 21840703301;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    long N = 9948674;
    int K = 5;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 44617;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    long N = 968204;
    int K = 8;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 60198;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    long N = 89337183138636;
    int K = 8;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 4757717426;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    long N = 815178010;
    int K = 5;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 133717;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    long N = 29791019054717928;
    int K = 3;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 71771;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    long N = 84424056394501305;
    int K = 16;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 228739684270103;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    long N = 95480254595884168;
    int K = 9;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 175540553740;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    long N = 5;
    int K = 36;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    long N = 73386163865874;
    int K = 1;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 110;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    long N = 49045826563;
    int K = 11;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1688392108;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    long N = 618;
    int K = 1;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    long N = 21208323598517225;
    int K = 5;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 12447266;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    long N = 6795227713992567;
    int K = 34;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 474380414263848;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    long N = 8;
    int K = 60;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    long N = 571625929;
    int K = 1;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 43;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    long N = 40384360072744351;
    int K = 27;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 5480331841122702;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    long N = 437;
    int K = 2;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    long N = 70;
    int K = 1;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    long N = 73593195;
    int K = 9;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 4903784;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    long N = 95218853389;
    int K = 7;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 88236832;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    long N = 87;
    int K = 4;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 19;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    long N = 9606773610310312;
    int K = 11;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 240195937548;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    long N = 46953996133488729;
    int K = 1;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 189;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    long N = 2597152058426292;
    int K = 1;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 94;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    long N = 44888823;
    int K = 3;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 3397;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    long N = 3944694855090580;
    int K = 12;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 4972523101620;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    long N = 3679831;
    int K = 9;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 913451;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    long N = 23528;
    int K = 1;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 15;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    long N = 555144151;
    int K = 14;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 10529252;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    long N = 52;
    int K = 2;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    long N = 144776303177556463;
    int K = 36;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 9462320934663752;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    long N = 566;
    int K = 1;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    long N = 625024;
    int K = 3;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 461;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    long N = 753;
    int K = 1;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    long N = 84647859393083902;
    int K = 4;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 5752005;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    long N = 18802230967797;
    int K = 4;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 511339;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    long N = 83573501233396242;
    int K = 6;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 188980848;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    long N = 3061307575233837;
    int K = 6;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 96062950;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    long N = 9391332969073671;
    int K = 27;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 761305760293876;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    long N = 8590430783287900;
    int K = 10;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 289574049548;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    long N = 7327210417031947;
    int K = 17;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 4029386929968;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    long N = 811406970855869192;
    int K = 17;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 3664510893077393;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    long N = 337972959334662208;
    int K = 23;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 53459276914630388;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    long N = 328352453435175;
    int K = 13;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 726369733414;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    long N = 2795465984945472;
    int K = 15;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 15734819733474;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    long N = 966264404849669735;
    int K = 11;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 4463132890261;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    long N = 17032331246316251;
    int K = 6;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 26349378;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    long N = 535167791648838;
    int K = 8;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 4799186304;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    long N = 751452600138841876;
    int K = 4;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1600248;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    long N = 90020061282502153;
    int K = 8;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 6675645800;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    long N = 712916399035092062;
    int K = 13;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 66913890482787;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    long N = 877552597773714842;
    int K = 34;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 9462224772921064;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    long N = 8745998130609693;
    int K = 20;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 302264148195226;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    long N = 4607457303101098;
    int K = 24;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 685330255502119;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    long N = 55269389046032838;
    int K = 16;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 354019876642158;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    long N = 7269326896563393;
    int K = 17;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 187543404025831;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    long N = 571152816476731599;
    int K = 37;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 18415520351694236;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    long N = 669291984052404;
    int K = 12;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 528272692048;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    long N = 1303625962603750;
    int K = 9;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 34965179849;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    long N = 341518108736536963;
    int K = 2;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 8582;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    long N = 9076500865561527;
    int K = 12;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1964443222396;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    long N = 1016578928468547;
    int K = 20;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 368592135484824;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    long N = 45867338383585985;
    int K = 20;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1690850760269308;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    long N = 7945346246416888;
    int K = 7;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 792834613;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    long N = 20870941125871905;
    int K = 23;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 4948770722157148;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    long N = 6136393239367948;
    int K = 18;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 370196604937287;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    long N = 70454790698050302;
    int K = 125;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 5834803841784360;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    long N = 168227367326959853;
    int K = 125;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 64527700155023418;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    long N = 13278173218807769;
    int K = 125;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 4735794663165804;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    long N = 17887262576459834;
    int K = 126;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 7400894886230503;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    long N = 9020404399103103;
    int K = 125;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 735117180482704;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    long N = 7639400097564080;
    int K = 125;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 499226907048416;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    long N = 4508862073077470;
    int K = 125;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 761316888721584;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    long N = 6836400496017025;
    int K = 126;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 591462657520232;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    long N = 999999999999999999;
    int K = 126;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 147519902109597;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    long N = 666666666666666666;
    int K = 126;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 147519902109597;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    long N = 811189876543210111;
    int K = 35;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 24462028021923946;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    long N = 888811111111188888;
    int K = 126;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 73756864709370409;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    long N = 123456543216789987;
    int K = 25;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 55714945330330022;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    long N = 103456859212945679;
    int K = 126;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 73756864709370409;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    long N = 123456789123456789;
    int K = 8;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 16726023513;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    long N = 12345678901234567;
    int K = 99;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 5575389364259316;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    long N = 888888811012345679;
    int K = 126;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 25164471596521500;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    long N = 88123344556677990;
    int K = 122;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 7504216310916973;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    long N = 666666666666666666;
    int K = 100;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 147519902109597;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    long N = 404404012211439;
    int K = 27;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 29248248238223;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    long N = 1234567890123234;
    int K = 126;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 646475143167696;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    long N = 66666666666666666;
    int K = 126;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 21817331427269;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    long N = 123456789111299765;
    int K = 126;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 39166520188298994;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    long N = 716385113497812334;
    int K = 123;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 24462048267074250;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    long N = 48209834123;
    int K = 13;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 4429759478;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    long N = 123456789012345677;
    int K = 126;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 39166520188298994;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    long N = 23885619856348745;
    int K = 100;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 4975000553975848;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    long N = 98765432109876123;
    int K = 126;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 7585959247501861;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    long N = 123456789012345678;
    int K = 126;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 68090790265439823;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    long N = 122252525252521337;
    int K = 125;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 39166520188298994;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    long N = 444444444444444444;
    int K = 126;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 314403345046093;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    long N = 111111111888888888;
    int K = 126;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 73756864709370409;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    long N = 1234567891234567;
    int K = 126;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 474380414264208;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    long N = 123456789123456;
    int K = 126;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 65924729666145;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    long N = 12345678998765432;
    int K = 125;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 7585959247501861;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    long N = 111111111999999999;
    int K = 126;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 18415520400090492;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    long N = 12345678912345678;
    int K = 126;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 6342769928297556;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    long N = 2;
    int K = 1;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    long N = 11;
    int K = 1;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    long N = 111111111111111111;
    int K = 126;
    NumbersAndMatches* pObj = new NumbersAndMatches();
    clock_t start = clock();
    long result = pObj->differentNumbers(N, K);
    clock_t end = clock();
    delete pObj;
    long expected = 262144;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20812309&rd=13908&pm=10709
********************************************************************************
const int dis[10][7] = 
{ 
  {1, 1, 1, 0, 1, 1, 1}, 
  {0, 0, 1, 0, 0, 1, 1}, 
  {1, 0, 1, 1, 1, 0, 1}, 
  {1, 0, 1, 1, 0, 1, 1}, 
  {0, 1, 1, 1, 0, 1, 0}, 
  {1, 1, 0, 1, 0, 1, 1}, 
  {1, 1, 0, 1, 1, 1, 1}, 
  {1, 0, 1, 0, 0, 1, 0}, 
  {1, 1, 1, 1, 1, 1, 1}, 
  {1, 1, 1, 1, 0, 1, 1}, 
}; 
 
class NumbersAndMatches 
{ 
  public: 
   
  long long dp[127][127]; 
   
  long long differentNumbers(long long N, int K) 
  { 
    const int m = 126; 
     
    for (int i = 0; i <= m; i ++) 
      for (int j = 0; j <= m; j ++) 
        dp[i][j] = !i && !j; 
     
    int inc[10][10], dec[10][10]; 
     
    for (int i = 0; i < 10; i ++) 
      for (int j = 0; j < 10; j ++) 
      { 
        inc[i][j] = dec[i][j] = 0; 
        for (int k = 0; k < 7; k ++) 
        { 
          if (dis[i][k] < dis[j][k]) 
            inc[i][j] ++; 
          if (dis[i][k] > dis[j][k]) 
            dec[i][j] ++; 
        } 
      } 
     
    while (N > 0) 
    { 
      int n = N % 10; 
      N /= 10; 
       
      for (int i = m; i >= 0; i --) 
        for (int j = m; j >= 0; j --) 
          if (dp[i][j]) 
          { 
            long long me = dp[i][j]; 
 
            dp[i][j] -= me; 
            for (int k = 0; k < 10; k ++) 
            { 
              dp[i + inc[n][k]][j + dec[n][k]] += me; 
            } 
          } 
    } 
     
    long long re = 0; 
    for (int i = 0; i <= K; i ++) 
      re += dp[i][i]; 
    return re; 
  } 
};

********************************************************************************
*******************************************************************************/