/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11463
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

class TheLuckyGameDivOne {
public:
    int find(long a, long b, long jLen, long bLen);
};

int TheLuckyGameDivOne::find(long a, long b, long jLen, long bLen) {
    int ret;
    return ret;
}


int test0() {
    long a = 1;
    long b = 10;
    long jLen = 2;
    long bLen = 1;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    long a = 1;
    long b = 100;
    long jLen = 100;
    long bLen = 100;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
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
    long a = 4;
    long b = 8;
    long jLen = 3;
    long bLen = 2;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
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
    long a = 1;
    long b = 100;
    long jLen = 75;
    long bLen = 50;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
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
    long a = 99;
    long b = 100;
    long jLen = 1;
    long bLen = 1;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    long a = 96;
    long b = 99;
    long jLen = 4;
    long bLen = 2;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    long a = 14;
    long b = 19;
    long jLen = 5;
    long bLen = 5;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
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
    long a = 1915;
    long b = 4451;
    long jLen = 2380;
    long bLen = 25;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    long a = 3224;
    long b = 4554;
    long jLen = 334;
    long bLen = 151;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    long a = 1222;
    long b = 2767;
    long jLen = 1482;
    long bLen = 1302;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    long a = 4125;
    long b = 4664;
    long jLen = 285;
    long bLen = 61;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    long a = 1280;
    long b = 3575;
    long jLen = 569;
    long bLen = 246;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    long a = 2915;
    long b = 3271;
    long jLen = 20;
    long bLen = 2;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    long a = 2027;
    long b = 3742;
    long jLen = 1379;
    long bLen = 638;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    long a = 911;
    long b = 1254;
    long jLen = 237;
    long bLen = 103;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    long a = 160;
    long b = 2650;
    long jLen = 1563;
    long bLen = 1480;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    long a = 3995;
    long b = 4179;
    long jLen = 145;
    long bLen = 95;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    long a = 3373;
    long b = 4742;
    long jLen = 461;
    long bLen = 336;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    long a = 2259;
    long b = 4617;
    long jLen = 1020;
    long bLen = 650;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    long a = 2592;
    long b = 2867;
    long jLen = 182;
    long bLen = 73;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    long a = 77;
    long b = 474;
    long jLen = 96;
    long bLen = 65;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    long a = 44;
    long b = 774;
    long jLen = 165;
    long bLen = 58;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    long a = 77;
    long b = 777;
    long jLen = 364;
    long bLen = 54;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    long a = 44;
    long b = 477;
    long jLen = 233;
    long bLen = 134;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    long a = 74;
    long b = 777;
    long jLen = 569;
    long bLen = 246;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    long a = 1915;
    long b = 4451;
    long jLen = 2537;
    long bLen = 2537;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    long a = 3224;
    long b = 4554;
    long jLen = 1331;
    long bLen = 1331;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    long a = 1222;
    long b = 2767;
    long jLen = 1546;
    long bLen = 1546;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    long a = 1915;
    long b = 4451;
    long jLen = 1;
    long bLen = 1;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    long a = 3224;
    long b = 4554;
    long jLen = 1;
    long bLen = 1;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    long a = 1222;
    long b = 2767;
    long jLen = 1;
    long bLen = 1;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    long a = 157;
    long b = 4678;
    long jLen = 2261;
    long bLen = 1130;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    long a = 694;
    long b = 4474;
    long jLen = 1890;
    long bLen = 945;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    long a = 533;
    long b = 4627;
    long jLen = 2047;
    long bLen = 1023;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    long a = 282;
    long b = 4479;
    long jLen = 2099;
    long bLen = 1049;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    long a = 1;
    long b = 4747;
    long jLen = 2373;
    long bLen = 1186;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    long a = 1;
    long b = 4747;
    long jLen = 1;
    long bLen = 1;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    long a = 1;
    long b = 4747;
    long jLen = 4747;
    long bLen = 4747;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    long a = 1;
    long b = 4747;
    long jLen = 8;
    long bLen = 3;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    long a = 1;
    long b = 4747;
    long jLen = 4;
    long bLen = 2;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    long a = 777;
    long b = 4444;
    long jLen = 3667;
    long bLen = 3666;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    long a = 777;
    long b = 4444;
    long jLen = 3668;
    long bLen = 3668;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    long a = 777;
    long b = 4444;
    long jLen = 3668;
    long bLen = 3667;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    long a = 1;
    long b = 4747;
    long jLen = 1052;
    long bLen = 81;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    long a = 1;
    long b = 4747;
    long jLen = 446;
    long bLen = 373;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    long a = 1;
    long b = 4747;
    long jLen = 1899;
    long bLen = 345;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    long a = 1;
    long b = 4747;
    long jLen = 19;
    long bLen = 4;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    long a = 9347723696;
    long b = 9571920780;
    long jLen = 195615841;
    long bLen = 154218370;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    long a = 2333393417;
    long b = 9544562943;
    long jLen = 3790188035;
    long bLen = 1306872028;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    long a = 3434727064;
    long b = 5306990644;
    long jLen = 661022424;
    long bLen = 577260426;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 512;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    long a = 3852497597;
    long b = 5052077036;
    long jLen = 106564945;
    long bLen = 81282281;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 256;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    long a = 5729529199;
    long b = 6695255706;
    long jLen = 159262941;
    long bLen = 79824511;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    long a = 1606852396;
    long b = 2164763569;
    long jLen = 87630290;
    long bLen = 41930822;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    long a = 8823596914;
    long b = 9681161364;
    long jLen = 170880455;
    long bLen = 25195410;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    long a = 3241098837;
    long b = 8853343676;
    long jLen = 5078969173;
    long bLen = 4259523817;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 1024;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    long a = 96;
    long b = 2048347782;
    long jLen = 1480258452;
    long bLen = 318337601;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    long a = 17;
    long b = 7808832881;
    long jLen = 5496032947;
    long bLen = 5153288770;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 1024;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    long a = 64;
    long b = 6882562792;
    long jLen = 3360592841;
    long bLen = 2808641059;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 512;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    long a = 97;
    long b = 5195708848;
    long jLen = 702456945;
    long bLen = 58522006;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    long a = 99;
    long b = 9413414523;
    long jLen = 9128363832;
    long bLen = 6954249838;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 768;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    long a = 1;
    long b = 10000000000;
    long jLen = 65038986;
    long bLen = 31016009;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 128;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    long a = 1;
    long b = 10000000000;
    long jLen = 1683104052;
    long bLen = 769794991;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 256;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    long a = 1;
    long b = 10000000000;
    long jLen = 5454765462;
    long bLen = 3256888704;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
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
    long a = 1;
    long b = 10000000000;
    long jLen = 9558222065;
    long bLen = 5684483791;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 512;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    long a = 1;
    long b = 10000000000;
    long jLen = 4297339257;
    long bLen = 1957709038;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    long a = 1;
    long b = 10000000000;
    long jLen = 10000000000;
    long bLen = 10000000000;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 2046;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    long a = 1;
    long b = 10000000000;
    long jLen = 1;
    long bLen = 1;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    long a = 1;
    long b = 10000000000;
    long jLen = 5000000000;
    long bLen = 2500000000;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 256;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    long a = 47777;
    long b = 4444447474;
    long jLen = 2222199849;
    long bLen = 1111099924;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    long a = 47444;
    long b = 4747477774;
    long jLen = 2373715165;
    long bLen = 1186857582;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    long a = 74777;
    long b = 7774774777;
    long jLen = 3887350000;
    long bLen = 1943675000;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 256;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    long a = 77744;
    long b = 4444744477;
    long jLen = 2222333367;
    long bLen = 1111166683;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
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
    long a = 447778;
    long b = 444447473;
    long jLen = 221999848;
    long bLen = 110999924;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    long a = 447445;
    long b = 747477773;
    long jLen = 373515164;
    long bLen = 186757582;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 128;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    long a = 7;
    long b = 88;
    long jLen = 66;
    long bLen = 39;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    long a = 53;
    long b = 96361194;
    long jLen = 342;
    long bLen = 1;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
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
    long a = 398763;
    long b = 221391366;
    long jLen = 4;
    long bLen = 4;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    long a = 1206;
    long b = 3726511;
    long jLen = 7;
    long bLen = 5;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    long a = 2;
    long b = 21;
    long jLen = 12;
    long bLen = 9;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    long a = 8;
    long b = 24;
    long jLen = 1;
    long bLen = 1;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
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
    long a = 37;
    long b = 54;
    long jLen = 4;
    long bLen = 4;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    long a = 9;
    long b = 43;
    long jLen = 5;
    long bLen = 5;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    long a = 3;
    long b = 4;
    long jLen = 1;
    long bLen = 1;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
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
    long a = 1;
    long b = 10000000000;
    long jLen = 913900914;
    long bLen = 407734;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
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
    long a = 1;
    long b = 10000000000;
    long jLen = 619939513;
    long bLen = 333666832;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 256;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    long a = 1;
    long b = 10000000000;
    long jLen = 94301452;
    long bLen = 31377248;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    long a = 7437;
    long b = 10000000000;
    long jLen = 50000000;
    long bLen = 49900000;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 320;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    long a = 1;
    long b = 10000000000;
    long jLen = 1337;
    long bLen = 1331;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    long a = 1;
    long b = 10000000000;
    long jLen = 10000000;
    long bLen = 1000;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
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
    long a = 1;
    long b = 9999999999;
    long jLen = 827382;
    long bLen = 827377;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 125;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    long a = 40;
    long b = 46;
    long jLen = 3;
    long bLen = 2;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
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
    long a = 1;
    long b = 10000000000;
    long jLen = 2000000000;
    long bLen = 1300000000;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 512;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    long a = 1;
    long b = 10;
    long jLen = 8;
    long bLen = 3;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
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
    long a = 5;
    long b = 10;
    long jLen = 3;
    long bLen = 2;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
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
    long a = 4;
    long b = 44;
    long jLen = 6;
    long bLen = 3;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    long a = 200000;
    long b = 999999;
    long jLen = 11;
    long bLen = 7;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
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
    long a = 4774444445;
    long b = 5000000000;
    long jLen = 68;
    long bLen = 41;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    long a = 6782916802;
    long b = 9934429950;
    long jLen = 1879588595;
    long bLen = 1075074264;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 256;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    long a = 1;
    long b = 9999999999;
    long jLen = 5555555555;
    long bLen = 2222222222;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    long a = 45;
    long b = 55;
    long jLen = 3;
    long bLen = 2;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    long a = 1;
    long b = 10000000000;
    long jLen = 9999999997;
    long bLen = 3;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    long a = 4444444444;
    long b = 4444444447;
    long jLen = 4;
    long bLen = 4;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
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
    long a = 1;
    long b = 10000000000;
    long jLen = 1543143244;
    long bLen = 1530344384;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 768;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    long a = 40;
    long b = 51;
    long jLen = 8;
    long bLen = 3;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    long a = 430;
    long b = 490;
    long jLen = 34;
    long bLen = 3;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
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
    long a = 444;
    long b = 477;
    long jLen = 34;
    long bLen = 33;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    long a = 40;
    long b = 60;
    long jLen = 3;
    long bLen = 2;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
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
    long a = 4;
    long b = 4;
    long jLen = 1;
    long bLen = 1;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    long a = 1;
    long b = 5;
    long jLen = 5;
    long bLen = 3;
    TheLuckyGameDivOne* pObj = new TheLuckyGameDivOne();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22674179&rd=14439&pm=11463
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
#include <queue>
#include <cassert>
 
using namespace std;
 
typedef long long int64;
 
#define forn(i, n) for(int i = 0; i < (int)(n); i++)
#define fore(i, a, n) for(int i = (int)(a); i < (int)(n); i++)
#define ford(i, n) for(int i = (int)(n) - 1; i >= 0; i--)
#define pb push_back
#define mp make_pair
#define fs first
#define sc second
#define last(a) int(a.size() - 1)
#define all(a) a.begin(), a.end()
#define _CRT_SECURE_NO_DEPRECATE
 
const long double EPS = 1E-9;
const int INF = (int) 1E9;
const int64 INF64 = (int64) 1E18;
 
class TheLuckyGameDivOne {
public:
  int find(long long, long long, long long, long long);
};
 
vector<int64> a;
int64 l, r, len2;
int ans;
 
void dfs(int64 cur) {
  if (l <= cur && cur <= r)
    a.pb(cur);
  if (cur > r)
    return;
 
  dfs(cur * 10 + 4);
  dfs(cur * 10 + 7);
}
 
void check(int64 x, int64 y) {
  if (x < l || r < y)
    return;
 
  vector<int64> b;
  b.pb(x - 1);
  forn(i, a.size())
    if (x <= a[i] && a[i] <= y)
      b.pb(a[i]);
  b.pb(y + 1);
 
  for (int i = ans + 1; i < (int)b.size(); i++) {
    for (int j = 0; j + i < (int)b.size(); j++)
      if (b[j + i] - b[j] - 1 >= len2)
        goto bad;
    ans++;
bad:;
  }
}
 
int TheLuckyGameDivOne::find(long long A, long long B, long long len1, long long len2) {
  a.clear();
  l = A;
  r = B;
 
//  l = 1;
//  r = INF * 10LL;
  dfs(0);
 
  ::len2 = len2;
 
  sort(all(a));
 
  ans = 0;
  check(l, l + len1 - 1);
  check(r - len1 + 1, r);
 
  forn(i, a.size())
    check(a[i] - len2 + 1, a[i] - len2 + 1 + len1 - 1);
 
  return ans;
}
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/