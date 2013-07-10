/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2310
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

class RSABreaker {
public:
    int decrypt(int e, int n, int b);
};

int RSABreaker::decrypt(int e, int n, int b) {
    int ret;
    return ret;
}


int test0() {
    int e = 3;
    int n = 10;
    int b = 3;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int e = 17;
    int n = 33;
    int b = 4;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int e = 1;
    int n = 42;
    int b = 17;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int e = 5;
    int n = 997;
    int b = 7;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 523;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int e = 47;
    int n = 843;
    int b = 822;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 831;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int e = 999;
    int n = 786;
    int b = 56;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 614;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int e = 67;
    int n = 238;
    int b = 93;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 121;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int e = 589;
    int n = 563;
    int b = 469;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 364;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int e = 233;
    int n = 511;
    int b = 209;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 209;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int e = 287;
    int n = 287;
    int b = 98;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 119;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int e = 599;
    int n = 151;
    int b = 71;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 134;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int e = 865;
    int n = 454;
    int b = 51;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 143;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int e = 755;
    int n = 193;
    int b = 53;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 176;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int e = 289;
    int n = 674;
    int b = 73;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 641;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int e = 681;
    int n = 902;
    int b = 12;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int e = 481;
    int n = 802;
    int b = 632;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 476;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int e = 627;
    int n = 467;
    int b = 417;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 410;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int e = 775;
    int n = 29;
    int b = 6;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int e = 839;
    int n = 615;
    int b = 607;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 538;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int e = 165;
    int n = 30;
    int b = 27;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int e = 647;
    int n = 935;
    int b = 513;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 827;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int e = 549;
    int n = 538;
    int b = 48;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 262;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int e = 859;
    int n = 865;
    int b = 779;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 694;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int e = 691;
    int n = 922;
    int b = 24;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int e = 553;
    int n = 206;
    int b = 152;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 144;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int e = 151;
    int n = 766;
    int b = 699;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 505;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int e = 119;
    int n = 805;
    int b = 340;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 555;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int e = 971;
    int n = 535;
    int b = 118;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 297;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int e = 491;
    int n = 914;
    int b = 176;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int e = 151;
    int n = 102;
    int b = 66;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int e = 523;
    int n = 471;
    int b = 309;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 69;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int e = 587;
    int n = 111;
    int b = 84;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int e = 577;
    int n = 263;
    int b = 91;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 161;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int e = 309;
    int n = 510;
    int b = 504;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int e = 769;
    int n = 777;
    int b = 654;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 213;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int e = 359;
    int n = 454;
    int b = 216;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 354;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int e = 185;
    int n = 415;
    int b = 161;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 191;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int e = 629;
    int n = 469;
    int b = 297;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 439;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int e = 277;
    int n = 395;
    int b = 379;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 314;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int e = 39;
    int n = 391;
    int b = 129;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 379;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int e = 751;
    int n = 611;
    int b = 405;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 505;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int e = 107;
    int n = 969;
    int b = 311;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 125;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int e = 991;
    int n = 886;
    int b = 493;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 127;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int e = 895;
    int n = 499;
    int b = 455;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 441;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int e = 127;
    int n = 498;
    int b = 129;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 447;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int e = 617;
    int n = 319;
    int b = 94;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int e = 403;
    int n = 607;
    int b = 9;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 428;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int e = 439;
    int n = 598;
    int b = 122;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 424;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int e = 511;
    int n = 470;
    int b = 176;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 116;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int e = 979;
    int n = 122;
    int b = 67;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int e = 639;
    int n = 934;
    int b = 772;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 832;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int e = 769;
    int n = 815;
    int b = 105;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 105;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int e = 809;
    int n = 341;
    int b = 108;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int e = 89;
    int n = 866;
    int b = 31;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 321;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int e = 451;
    int n = 766;
    int b = 166;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 246;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int e = 403;
    int n = 519;
    int b = 82;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 103;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int e = 453;
    int n = 177;
    int b = 83;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 101;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int e = 55;
    int n = 563;
    int b = 169;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 555;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int e = 441;
    int n = 46;
    int b = 19;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int e = 581;
    int n = 941;
    int b = 775;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 545;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int e = 311;
    int n = 695;
    int b = 149;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int e = 641;
    int n = 307;
    int b = 147;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 189;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int e = 929;
    int n = 658;
    int b = 12;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 178;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int e = 317;
    int n = 703;
    int b = 663;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 386;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int e = 349;
    int n = 319;
    int b = 132;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 165;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int e = 859;
    int n = 91;
    int b = 10;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int e = 269;
    int n = 523;
    int b = 467;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 518;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int e = 257;
    int n = 377;
    int b = 72;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int e = 989;
    int n = 93;
    int b = 15;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int e = 821;
    int n = 133;
    int b = 15;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 78;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int e = 491;
    int n = 958;
    int b = 124;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 136;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int e = 997;
    int n = 74;
    int b = 23;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int e = 577;
    int n = 151;
    int b = 139;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int e = 517;
    int n = 19;
    int b = 13;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int e = 815;
    int n = 767;
    int b = 450;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 148;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int e = 149;
    int n = 919;
    int b = 0;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
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
    int e = 835;
    int n = 254;
    int b = 190;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 246;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int e = 613;
    int n = 733;
    int b = 552;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 237;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int e = 89;
    int n = 886;
    int b = 392;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 288;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int e = 503;
    int n = 906;
    int b = 120;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 708;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int e = 169;
    int n = 417;
    int b = 24;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 144;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int e = 507;
    int n = 958;
    int b = 929;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 579;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int e = 59;
    int n = 246;
    int b = 80;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int e = 667;
    int n = 898;
    int b = 860;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 682;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int e = 23;
    int n = 597;
    int b = 126;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int e = 629;
    int n = 742;
    int b = 98;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 602;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int e = 407;
    int n = 553;
    int b = 300;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int e = 501;
    int n = 697;
    int b = 581;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 403;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int e = 173;
    int n = 899;
    int b = 381;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 267;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int e = 79;
    int n = 902;
    int b = 130;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 170;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int e = 67;
    int n = 187;
    int b = 0;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int e = 447;
    int n = 557;
    int b = 278;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 357;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int e = 625;
    int n = 398;
    int b = 247;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int e = 103;
    int n = 745;
    int b = 425;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 155;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int e = 787;
    int n = 713;
    int b = 526;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 681;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int e = 7;
    int n = 878;
    int b = 643;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 121;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int e = 843;
    int n = 743;
    int b = 67;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 555;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int e = 179;
    int n = 634;
    int b = 538;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 148;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int e = 739;
    int n = 133;
    int b = 33;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int e = 335;
    int n = 258;
    int b = 244;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int e = 5;
    int n = 997;
    int b = 7;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 523;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int e = 5;
    int n = 997;
    int b = 9;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 250;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int e = 5;
    int n = 997;
    int b = 996;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 996;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int e = 3;
    int n = 10;
    int b = 3;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int e = 715;
    int n = 910;
    int b = 531;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int e = 17;
    int n = 33;
    int b = 4;
    RSABreaker* pObj = new RSABreaker();
    clock_t start = clock();
    int result = pObj->decrypt(e, n, b);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7499514&rd=4730&pm=2310
********************************************************************************
class RSABreaker {
   public:
   int gcd(int m,int n) {
      if(n==0) return m;
      else return(gcd(n,m%n));
   } 
   int decrypt(int e,int n,int b) {
      int m=0;
      for(int i=0;i<n;i++) if(gcd(n,i)==1) m++;
      int d;
      for(int i=0;;i++) 
         if((e*i-1)%m==0) {
            d=i;
            break;
         }
      int val;
      val=1;
      for(int i=0;i<d;i++) {
         val=val*b;
         val=val%n;
      }
      return val;
   }
};

********************************************************************************
*******************************************************************************/