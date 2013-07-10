/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7421
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

class BettingStrategy {
public:
    int finalSum(int initSum, string outcome);
};

int BettingStrategy::finalSum(int initSum, string outcome) {
    int ret;
    return ret;
}


int test0() {
    int initSum = 12;
    string outcome = "WWWWWWWW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int initSum = 12;
    string outcome = "LLLLLLLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int initSum = 15;
    string outcome = "LLLWLLLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
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
    int initSum = 20;
    string outcome = "WLWLWLWL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int initSum = 39;
    string outcome = "W";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int initSum = 232;
    string outcome = "LW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 233;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int initSum = 2;
    string outcome = "WLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int initSum = 755;
    string outcome = "WLWL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 756;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int initSum = 408;
    string outcome = "WWWWW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 413;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int initSum = 782;
    string outcome = "WWWLWW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 787;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int initSum = 799;
    string outcome = "LWLLLLW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 801;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int initSum = 920;
    string outcome = "LWWWWWWW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 927;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int initSum = 634;
    string outcome = "WWWLWLWWW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 641;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int initSum = 107;
    string outcome = "WWLWWLLLWL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 111;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int initSum = 826;
    string outcome = "LLWLLWLLLLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 797;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int initSum = 195;
    string outcome = "WWWLLWLLLLLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 136;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int initSum = 118;
    string outcome = "LLWLLLLLLLLLW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int initSum = 831;
    string outcome = "WLWLWLLWLLLWWL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 836;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int initSum = 461;
    string outcome = "LWWLWLLLWWWWLLW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 469;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int initSum = 653;
    string outcome = "LLWWLLLLWWWWWLLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 653;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int initSum = 317;
    string outcome = "WWLLWWWLWWLLLLLLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 197;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int initSum = 48;
    string outcome = "WWWWWWLWWLLLLWLLLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int initSum = 707;
    string outcome = "LLWWWWWWWWWLWLLLLWW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 719;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int initSum = 654;
    string outcome = "LWLWLLLWLWWWWWLWWLWW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 666;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int initSum = 580;
    string outcome = "LLLLWLWWWLWLWLLLWWLLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 581;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int initSum = 988;
    string outcome = "WLWLLWWWWLWWWLLWLWWWLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 998;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int initSum = 351;
    string outcome = "WWWLLLLLWLLLWLWLWWLWWWW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 363;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int initSum = 275;
    string outcome = "WLLLLWWWLWLWLLLLLWWLWWWL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 285;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int initSum = 42;
    string outcome = "LLWLLWWWWLLLLLWLLWLLLWWLW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int initSum = 668;
    string outcome = "WLWLWWLLLWLWWLWLLLWLWWWLLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 673;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int initSum = 797;
    string outcome = "WLLLWLWLWWLLLWWWLWLLLWLLLLW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 808;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int initSum = 95;
    string outcome = "WWWLWWWLWWWLWLLLWWLWWLLLLLWW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 111;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int initSum = 64;
    string outcome = "WWLWLLLWWWWLLLWLWWWWWWLWWWWWL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 82;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int initSum = 991;
    string outcome = "WLLLWWLWWWLWWLWLWLWLWLLLLWWWWW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 1008;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int initSum = 925;
    string outcome = "WLLLLLWLLLLLLWWWWWLWLLWLLLLLLWL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 934;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int initSum = 494;
    string outcome = "WWWWLLWWLWLLLWLWWWLLWLLLLLWLWWWW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 511;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int initSum = 433;
    string outcome = "LWLWLWWWWWWWLWLWLLLLWLWLLWLLWLWWL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 449;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int initSum = 433;
    string outcome = "WWWWWWLLWLLLWLWWWLLWLWLLLWWLWWWWWW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 454;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int initSum = 916;
    string outcome = "LWLLWLWLLLWWWLWLWLLLLWLWWWLWWWLWWLW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 934;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int initSum = 184;
    string outcome = "LWLLWWWWWWWWWLWLLLLWWLWWLWLWLLLLLLWW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 203;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int initSum = 730;
    string outcome = "WLWWWWLWWWLLLWWWWLWLLWWWLLWWLWWWLLLWW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 753;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int initSum = 994;
    string outcome = "WLWWWLLLWWLLLWLLWWWLWLWLWWWWWLLWLLWWWW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 1016;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int initSum = 953;
    string outcome = "LWWWLLLLLWLLWLWWWWLWLLLWWWWLLLWWLLLWWLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 968;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int initSum = 639;
    string outcome = "LWLLWWLWWLLWLLWLLLLWWLWWLLWLWLWWLWLWLLLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 641;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int initSum = 563;
    string outcome = "LWLLWLLLWWWLWWLLWWWLLWLWWLLLWWLWWLLLWLWLW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 583;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int initSum = 339;
    string outcome = "WWWWWLWWWLLLLLWWWWWLWWWWLLLWLWLLLWLLWLLLWW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 362;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int initSum = 957;
    string outcome = "LLWLWLWWWLLLWLWWWWLWWWWLLWLLWLWWLLWLLLWWLWW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 980;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int initSum = 281;
    string outcome = "LWLLLWWWWWWWWLLWWWWWWWLWWLLLLWWWLWLLLWLLWLLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 298;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int initSum = 369;
    string outcome = "LLLWWLLWLWWLLWLWWLLLWWLLWWLWWWWWWLWWLWWLLWLWL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 392;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int initSum = 231;
    string outcome = "WWLWWLLWLWLLLLWWWLLWLWWLLWWLLWWLWLWWLLLLLWLWWL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 252;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int initSum = 70;
    string outcome = "LWLWLWWWWLLWWWWWWLWLLWWWLLLLWWWLLLLWLLLWWLWLLLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 78;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int initSum = 968;
    string outcome = "LLWLLLLLWLLLWWLWLWLWWWWLWLWLLWWWLWLWLWLWWLLWLWWW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 992;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int initSum = 58;
    string outcome = "LLWWLLWLWLLLLWWWWLLWLWWLLWLLWLLLLLWWWWWWWLLLWWLLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 73;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int initSum = 661;
    string outcome = "WLWWWLWWLWWLWWLLLLLLWLWLWWLLWWWLWWWLLLWLLLWLWWLLLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 670;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int initSum = 491;
    string outcome = "LWWWWWLWWLWLLWLLLWWLLLLWLWWWLLLWWLWLWLWLLWWWWLWWLW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 518;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int initSum = 965;
    string outcome = "LLWLWLLWWLWWLWLWWLWWWWWWLWWLWLWWWLWWWLWWLLWWLWWWWL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 996;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int initSum = 956;
    string outcome = "WWLLLWLLWWLLLWLWWLLWLWLLWLLLLWLLWLLWWWWLLLLLLLWWLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 972;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int initSum = 372;
    string outcome = "WWLWLLWLLLWLLLWLWLWWLWLWLLLWLWWLLWLLWLWWWLLLLLWWWL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 393;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int initSum = 376;
    string outcome = "LWLLWWLLWWWWWLLWWLLWLLWLWLLLLLWLLLLWLLWLLLLLLLLLLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 137;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int initSum = 204;
    string outcome = "WWWWLWWWLLWLLWLLWWLLLWWWLLWWWLWWLLWWLWLWLLWLWWLWWW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 233;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int initSum = 783;
    string outcome = "WLLWWWWLWLWLLLWLLWWLLWWLWWWWWWLWWLWLLLWLLWWWWLWWWL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 811;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int initSum = 966;
    string outcome = "LWWLWLLLLLWLWWLLWLWWLLLLLWWLWLWLWLWWWLLLWWWLWWLWWL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 989;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int initSum = 92;
    string outcome = "WWWLWWWWLWWWLLWWLWWWWWWLLWLWLWWLWWWLWWLWWLWLLWLWLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 121;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int initSum = 1000;
    string outcome = "LWWWLLWWWWLLWLWWLLLLWWLWWLWLWWWLWWLWLLLLWWWLLWLLWL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 1025;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int initSum = 1000;
    string outcome = "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 1050;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int initSum = 15;
    string outcome = "LWWLLLLWLLLLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int initSum = 10;
    string outcome = "LLLLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int initSum = 10;
    string outcome = "LLLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int initSum = 2;
    string outcome = "LW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int initSum = 2;
    string outcome = "LWWW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int initSum = 1;
    string outcome = "LLLLLLLLLLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int initSum = 1;
    string outcome = "LWWWW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int initSum = 16;
    string outcome = "LLLLLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int initSum = 2;
    string outcome = "LL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
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
    int initSum = 10;
    string outcome = "WLLLLLLLLLLLLLLLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int initSum = 3;
    string outcome = "LLW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int initSum = 1;
    string outcome = "L";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int initSum = 1;
    string outcome = "LLLWWWWWWWWW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int initSum = 5;
    string outcome = "LLW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int initSum = 1;
    string outcome = "LW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int initSum = 1;
    string outcome = "LLLLLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int initSum = 5;
    string outcome = "LLLLLLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int initSum = 4;
    string outcome = "LLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int initSum = 1;
    string outcome = "LWW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int initSum = 10;
    string outcome = "LLLLLLLLLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int initSum = 10;
    string outcome = "LLLLW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int initSum = 6;
    string outcome = "LLW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int initSum = 1;
    string outcome = "WLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int initSum = 1;
    string outcome = "LLLLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int initSum = 1;
    string outcome = "W";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int initSum = 2;
    string outcome = "LLLLLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int initSum = 6;
    string outcome = "LLLLLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int initSum = 4;
    string outcome = "LLW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
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
    int initSum = 5;
    string outcome = "LLLLLLLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int initSum = 1;
    string outcome = "LWWWL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int initSum = 2;
    string outcome = "LLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int initSum = 10;
    string outcome = "LLLLLLLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int initSum = 4;
    string outcome = "LLLW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
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
    int initSum = 12;
    string outcome = "LLLLLLLLLLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int initSum = 5;
    string outcome = "LLLLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int initSum = 6;
    string outcome = "LLLLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int initSum = 5;
    string outcome = "LLLLLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int initSum = 14;
    string outcome = "LLLWLLLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int initSum = 1;
    string outcome = "LLLLLLLLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int initSum = 1;
    string outcome = "LL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int initSum = 1;
    string outcome = "LWWW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int initSum = 4;
    string outcome = "LLLLLLLLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int initSum = 511;
    string outcome = "LLLLLLLLLW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int initSum = 17;
    string outcome = "LLLLWWWWW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int initSum = 15;
    string outcome = "LLLLW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int initSum = 13;
    string outcome = "LLLWLLLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int initSum = 9;
    string outcome = "LLLWW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int initSum = 7;
    string outcome = "LLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int initSum = 9;
    string outcome = "LLLW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int initSum = 18;
    string outcome = "LLLLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int initSum = 2;
    string outcome = "LLLLLLLLLLLLLLLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int initSum = 1;
    string outcome = "LLLLLLL";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int initSum = 4;
    string outcome = "LLWLW";
    BettingStrategy* pObj = new BettingStrategy();
    clock_t start = clock();
    int result = pObj->finalSum(initSum, outcome);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22652389&rd=10663&pm=7421
********************************************************************************
#include<vector> 
#include<string> 
using namespace std; 
class BettingStrategy 
{ 
public: 
  int finalSum(int initSum, string outcome) 
  { 
    int s,i,j,k; 
    s=initSum;k=1; 
    for (i=0;i<outcome.length();i++) 
    { 
      if (outcome[i]=='W') {s=s+k;k=1;} 
      else {s=s-k;k=k*2;if (s<k) return s;} 
    } 
    return s; 
  }   
};

********************************************************************************
*******************************************************************************/