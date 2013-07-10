/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11464
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

class TheLuckyGameDivTwo {
public:
    int find(int a, int b, int jLen, int bLen);
};

int TheLuckyGameDivTwo::find(int a, int b, int jLen, int bLen) {
    int ret;
    return ret;
}


int test0() {
    int a = 1;
    int b = 10;
    int jLen = 2;
    int bLen = 1;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 1;
    int b = 100;
    int jLen = 100;
    int bLen = 100;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 4;
    int b = 8;
    int jLen = 3;
    int bLen = 2;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 1;
    int b = 100;
    int jLen = 75;
    int bLen = 50;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 99;
    int b = 100;
    int jLen = 1;
    int bLen = 1;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 96;
    int b = 99;
    int jLen = 4;
    int bLen = 2;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 14;
    int b = 19;
    int jLen = 5;
    int bLen = 5;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 1915;
    int b = 4451;
    int jLen = 2380;
    int bLen = 25;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 3224;
    int b = 4554;
    int jLen = 334;
    int bLen = 151;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 1222;
    int b = 2767;
    int jLen = 1482;
    int bLen = 1302;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 4125;
    int b = 4664;
    int jLen = 285;
    int bLen = 61;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 1280;
    int b = 3575;
    int jLen = 569;
    int bLen = 246;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 2915;
    int b = 3271;
    int jLen = 20;
    int bLen = 2;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 2027;
    int b = 3742;
    int jLen = 1379;
    int bLen = 638;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 911;
    int b = 1254;
    int jLen = 237;
    int bLen = 103;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 160;
    int b = 2650;
    int jLen = 1563;
    int bLen = 1480;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 3995;
    int b = 4179;
    int jLen = 145;
    int bLen = 95;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 3373;
    int b = 4742;
    int jLen = 461;
    int bLen = 336;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 2259;
    int b = 4617;
    int jLen = 1020;
    int bLen = 650;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 2592;
    int b = 2867;
    int jLen = 182;
    int bLen = 73;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 77;
    int b = 474;
    int jLen = 96;
    int bLen = 65;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 44;
    int b = 774;
    int jLen = 165;
    int bLen = 58;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 77;
    int b = 777;
    int jLen = 364;
    int bLen = 54;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 44;
    int b = 477;
    int jLen = 233;
    int bLen = 134;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 74;
    int b = 777;
    int jLen = 569;
    int bLen = 246;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 1915;
    int b = 4451;
    int jLen = 2537;
    int bLen = 2537;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 3224;
    int b = 4554;
    int jLen = 1331;
    int bLen = 1331;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 1222;
    int b = 2767;
    int jLen = 1546;
    int bLen = 1546;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 1915;
    int b = 4451;
    int jLen = 1;
    int bLen = 1;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 3224;
    int b = 4554;
    int jLen = 1;
    int bLen = 1;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 1222;
    int b = 2767;
    int jLen = 1;
    int bLen = 1;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 157;
    int b = 4678;
    int jLen = 2261;
    int bLen = 1130;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 694;
    int b = 4474;
    int jLen = 1890;
    int bLen = 945;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 533;
    int b = 4627;
    int jLen = 2047;
    int bLen = 1023;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 282;
    int b = 4479;
    int jLen = 2099;
    int bLen = 1049;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 1;
    int b = 4747;
    int jLen = 2373;
    int bLen = 1186;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 1;
    int b = 4747;
    int jLen = 1;
    int bLen = 1;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 1;
    int b = 4747;
    int jLen = 4747;
    int bLen = 4747;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 1;
    int b = 4747;
    int jLen = 8;
    int bLen = 3;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 1;
    int b = 4747;
    int jLen = 4;
    int bLen = 2;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 777;
    int b = 4444;
    int jLen = 3667;
    int bLen = 3666;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 777;
    int b = 4444;
    int jLen = 3668;
    int bLen = 3668;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 777;
    int b = 4444;
    int jLen = 3668;
    int bLen = 3667;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 1;
    int b = 4747;
    int jLen = 1052;
    int bLen = 81;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 1;
    int b = 4747;
    int jLen = 446;
    int bLen = 373;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 1;
    int b = 4747;
    int jLen = 1899;
    int bLen = 345;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 1;
    int b = 4747;
    int jLen = 19;
    int bLen = 4;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 1;
    int b = 4747;
    int jLen = 2109;
    int bLen = 1;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 1;
    int b = 4747;
    int jLen = 2825;
    int bLen = 99;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 1;
    int b = 4747;
    int jLen = 1223;
    int bLen = 490;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int a = 1;
    int b = 4747;
    int jLen = 962;
    int bLen = 397;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int a = 1;
    int b = 4747;
    int jLen = 1412;
    int bLen = 898;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int a = 1;
    int b = 4747;
    int jLen = 696;
    int bLen = 351;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int a = 1;
    int b = 4747;
    int jLen = 379;
    int bLen = 198;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int a = 765;
    int b = 4376;
    int jLen = 6;
    int bLen = 5;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int a = 575;
    int b = 4206;
    int jLen = 86;
    int bLen = 27;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int a = 640;
    int b = 4086;
    int jLen = 8;
    int bLen = 3;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int a = 27;
    int b = 3516;
    int jLen = 3360;
    int bLen = 2646;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int a = 7;
    int b = 87;
    int jLen = 71;
    int bLen = 30;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
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
    int a = 48;
    int b = 854;
    int jLen = 752;
    int bLen = 359;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int a = 1;
    int b = 4747;
    int jLen = 2400;
    int bLen = 1998;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int a = 1;
    int b = 4747;
    int jLen = 3000;
    int bLen = 1500;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int a = 44;
    int b = 44;
    int jLen = 1;
    int bLen = 1;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
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
    int a = 1;
    int b = 4747;
    int jLen = 5;
    int bLen = 3;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
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
    int a = 1;
    int b = 4747;
    int jLen = 1000;
    int bLen = 500;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int a = 1237;
    int b = 4437;
    int jLen = 103;
    int bLen = 97;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int a = 1;
    int b = 4747;
    int jLen = 2000;
    int bLen = 1000;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int a = 3;
    int b = 5;
    int jLen = 3;
    int bLen = 3;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int a = 8;
    int b = 77;
    int jLen = 70;
    int bLen = 30;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 1;
    int b = 4747;
    int jLen = 2373;
    int bLen = 1180;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 1;
    int b = 4747;
    int jLen = 2350;
    int bLen = 1200;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
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
    int a = 1;
    int b = 4747;
    int jLen = 2372;
    int bLen = 1186;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 444;
    int b = 444;
    int jLen = 1;
    int bLen = 1;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
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
    int a = 1;
    int b = 4747;
    int jLen = 4543;
    int bLen = 4513;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int a = 1;
    int b = 4747;
    int jLen = 2000;
    int bLen = 400;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int a = 73;
    int b = 75;
    int jLen = 2;
    int bLen = 2;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int a = 1;
    int b = 4747;
    int jLen = 2747;
    int bLen = 1274;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
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
    int a = 1;
    int b = 4000;
    int jLen = 350;
    int bLen = 79;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
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
    int a = 1;
    int b = 4747;
    int jLen = 3;
    int bLen = 2;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 1;
    int b = 4747;
    int jLen = 600;
    int bLen = 300;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int a = 1;
    int b = 100;
    int jLen = 2;
    int bLen = 2;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int a = 1;
    int b = 4747;
    int jLen = 4600;
    int bLen = 2000;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
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
    int a = 8;
    int b = 4747;
    int jLen = 2000;
    int bLen = 800;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int a = 100;
    int b = 4747;
    int jLen = 100;
    int bLen = 98;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int a = 44;
    int b = 45;
    int jLen = 1;
    int bLen = 1;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int a = 1;
    int b = 4747;
    int jLen = 2300;
    int bLen = 1200;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int a = 4;
    int b = 4;
    int jLen = 1;
    int bLen = 1;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int a = 1;
    int b = 4747;
    int jLen = 50;
    int bLen = 3;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int a = 3;
    int b = 8;
    int jLen = 4;
    int bLen = 4;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int a = 1;
    int b = 6;
    int jLen = 3;
    int bLen = 2;
    TheLuckyGameDivTwo* pObj = new TheLuckyGameDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b, jLen, bLen);
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=22929352&rd=14439&pm=11464
********************************************************************************
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
 
 
class TheLuckyGameDivTwo    
{    
public:    
 int find(int a, int b, int jLen, int bLen)    
 {    
  int aa[5000]={0},ans=0,i,j; 
  for(i=1;i<=4747;i++){ 
   int temp=i; 
   while(temp){ 
    if(temp%10!=4&&temp%10!=7) break; 
    temp/=10; 
   } 
   if(temp) aa[i]=aa[i-1]; 
   else { 
    aa[i]=aa[i-1]+1; 
   } 
  } 
  for(i=a;i<=b-jLen+1;i++){ 
   int min=5000; 
   for(j=i;j<=(i+jLen-1)-bLen+1;j++){ 
    if(aa[j+bLen-1]-aa[j-1]<min) min=aa[j+bLen-1]-aa[j-1]; 
   } 
   if(min>ans) ans=min; 
  } 
  return ans; 
 } 
};

********************************************************************************
*******************************************************************************/