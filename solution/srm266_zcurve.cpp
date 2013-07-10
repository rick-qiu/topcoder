/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4808
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

class ZCurve {
public:
    int zValue(int N, int r, int c);
};

int ZCurve::zValue(int N, int r, int c) {
    int ret;
    return ret;
}


int test0() {
    int N = 2;
    int r = 3;
    int c = 1;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 1;
    int r = 0;
    int c = 0;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 3;
    int r = 7;
    int c = 7;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
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
    int r = 7;
    int c = 7;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 10;
    int r = 511;
    int c = 511;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 262143;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 10;
    int r = 512;
    int c = 512;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 786432;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 1;
    int r = 0;
    int c = 1;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
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
    int N = 15;
    int r = 32157;
    int c = 32212;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1072944050;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 15;
    int r = 24224;
    int c = 2;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 581470212;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 14;
    int r = 4095;
    int c = 4094;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 16777214;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 13;
    int r = 4094;
    int c = 4095;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 16777213;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 1;
    int r = 1;
    int c = 1;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
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
    int N = 1;
    int r = 1;
    int c = 0;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 15;
    int r = 27207;
    int c = 2764;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 684486778;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 15;
    int r = 2937;
    int c = 5651;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 27143047;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 15;
    int r = 21630;
    int c = 16852;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 841055160;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 15;
    int r = 4753;
    int c = 8866;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 101500422;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 15;
    int r = 2764;
    int c = 24778;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 344518884;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 15;
    int r = 15244;
    int c = 25405;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 512722417;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 15;
    int r = 7971;
    int c = 32445;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 402541915;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 7;
    int r = 37;
    int c = 110;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 7286;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 15;
    int r = 7613;
    int c = 16885;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 312729523;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 14;
    int r = 6185;
    int c = 13535;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 126900695;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 15;
    int r = 4990;
    int c = 19020;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 307116792;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 11;
    int r = 1456;
    int c = 35;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 2264581;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 3;
    int r = 6;
    int c = 0;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 15;
    int r = 454;
    int c = 17476;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 269660216;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 15;
    int r = 21909;
    int c = 26593;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 909628963;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 15;
    int r = 32119;
    int c = 29;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 715271035;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 15;
    int r = 15101;
    int c = 19012;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 449624754;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 15;
    int r = 29819;
    int c = 3285;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 712014747;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 10;
    int r = 619;
    int c = 226;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 556174;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 11;
    int r = 1522;
    int c = 1836;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 3649112;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 15;
    int r = 4266;
    int c = 7215;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 55610589;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 15;
    int r = 23791;
    int c = 32081;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 938588587;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 15;
    int r = 28445;
    int c = 12136;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 754915042;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 15;
    int r = 24527;
    int c = 23664;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 872068522;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 3;
    int r = 6;
    int c = 5;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 15;
    int r = 11903;
    int c = 25932;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 481901306;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 8;
    int r = 63;
    int c = 37;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 3771;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 3;
    int r = 7;
    int c = 1;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 2;
    int r = 2;
    int c = 1;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 7;
    int r = 48;
    int c = 105;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 7745;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 15;
    int r = 26488;
    int c = 29080;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1026255808;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 2;
    int r = 0;
    int c = 1;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 15;
    int r = 19354;
    int c = 25111;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 881755037;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 6;
    int r = 23;
    int c = 27;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 879;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 15;
    int r = 1371;
    int c = 13940;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 87439258;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 11;
    int r = 18;
    int c = 326;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 70172;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 15;
    int r = 22834;
    int c = 26276;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 915820056;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 7;
    int r = 6;
    int c = 25;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 361;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 14;
    int r = 15752;
    int c = 4428;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 195268816;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 11;
    int r = 1701;
    int c = 443;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 2739559;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 14;
    int r = 480;
    int c = 16350;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 89651540;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 8;
    int r = 57;
    int c = 224;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 24194;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 15;
    int r = 32515;
    int c = 21379;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1001340943;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 15;
    int r = 18091;
    int c = 6438;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 560565406;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 15;
    int r = 4252;
    int c = 14801;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 121754529;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 15;
    int r = 29632;
    int c = 12398;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 789230676;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 15;
    int r = 21204;
    int c = 22899;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 860469029;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 15;
    int r = 21811;
    int c = 1926;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 574048798;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 15;
    int r = 32452;
    int c = 1617;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 717009185;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 3;
    int r = 7;
    int c = 4;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 15;
    int r = 22239;
    int c = 2524;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 577369082;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 15;
    int r = 1757;
    int c = 23342;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 292398838;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 15;
    int r = 28827;
    int c = 14213;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 789955227;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 15;
    int r = 32260;
    int c = 22139;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1002181989;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 15;
    int r = 6917;
    int c = 28302;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 383664246;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 15;
    int r = 32228;
    int c = 24222;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1006037364;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 15;
    int r = 14853;
    int c = 25011;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 512312615;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 11;
    int r = 856;
    int c = 1683;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1991557;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 14;
    int r = 15483;
    int c = 4698;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 195312590;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 15;
    int r = 1896;
    int c = 2208;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 6974592;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 15;
    int r = 26495;
    int c = 12365;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 757742331;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 15;
    int r = 18377;
    int c = 13400;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 624603586;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int N = 3;
    int r = 1;
    int c = 5;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int N = 12;
    int r = 1024;
    int c = 679;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 2376725;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int N = 15;
    int r = 32767;
    int c = 32767;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1073741823;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int N = 1;
    int r = 0;
    int c = 0;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int N = 3;
    int r = 7;
    int c = 7;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int N = 10;
    int r = 511;
    int c = 511;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 262143;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int N = 15;
    int r = 32766;
    int c = 32767;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1073741821;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int N = 8;
    int r = 13;
    int c = 7;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 183;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int N = 10;
    int r = 512;
    int c = 512;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 786432;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int N = 15;
    int r = 32767;
    int c = 32767;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1073741823;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int N = 15;
    int r = 15;
    int c = 32767;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 357914111;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int N = 13;
    int r = 213;
    int c = 17;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 41763;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int N = 15;
    int r = 32719;
    int c = 32719;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1073737983;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int N = 15;
    int r = 16;
    int c = 7;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 533;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int N = 15;
    int r = 31581;
    int c = 31581;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1070543859;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int N = 2;
    int r = 0;
    int c = 2;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int N = 6;
    int r = 8;
    int c = 9;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 193;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int N = 3;
    int r = 5;
    int c = 6;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int N = 15;
    int r = 32761;
    int c = 32651;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1073736391;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int N = 1;
    int r = 1;
    int c = 0;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int N = 13;
    int r = 20;
    int c = 25;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 865;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int N = 15;
    int r = 32767;
    int c = 32765;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1073741819;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int N = 1;
    int r = 1;
    int c = 1;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int N = 15;
    int r = 30000;
    int c = 30000;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1060310784;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int N = 2;
    int r = 0;
    int c = 3;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int N = 2;
    int r = 1;
    int c = 0;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int N = 2;
    int r = 2;
    int c = 3;
    ZCurve* pObj = new ZCurve();
    clock_t start = clock();
    int result = pObj->zValue(N, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=251074&rd=7999&pm=4808
********************************************************************************
#include <string>
#include <vector>
#include <map>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <set>
#include <iostream>
#include <sstream>
#include <cstddef>
#include <algorithm>
#include <utility>
#include <iterator>
#include <numeric>
#include <list>
 
using namespace std;
 
typedef vector<int> vi;
typedef vector<int>::iterator vi_i;
typedef vector<string> vs;
typedef vector<string>::iterator vs_i;
typedef pair<int, int> pii;
 
template<class T>
void splitstr(const string &s, vector<T> &out)
{
    istringstream in(s);
    T tmp;
 
    out.clear();
    while (in >> tmp) out.push_back(tmp);
}
 
class ZCurve
{
public:
    int zValue(int N, int r, int c);
};
 
int ZCurve::zValue(int N, int r, int c)
{
    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        ans |= (c & 1) << (i * 2);
        ans |= (r & 1) << (i * 2 + 1);
        c >>= 1;
        r >>= 1;
    }
    return ans;
}
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/