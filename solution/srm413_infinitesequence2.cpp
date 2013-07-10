/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9922
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

class InfiniteSequence2 {
public:
    long calc(long n, int p, int q, int x, int y);
};

long InfiniteSequence2::calc(long n, int p, int q, int x, int y) {
    long ret;
    return ret;
}


int test0() {
    long n = 10000000;
    int p = 2;
    int q = 3;
    int x = 10000000;
    int y = 10000000;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    long n = 12;
    int p = 2;
    int q = 3;
    int x = 1;
    int y = 0;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    long n = 0;
    int p = 2;
    int q = 2;
    int x = 0;
    int y = 0;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    long n = 123;
    int p = 45;
    int q = 67;
    int x = 8;
    int y = 9;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 0;
    int y = 10131990;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 11993312;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    long n = 10000000000000;
    int p = 2;
    int q = 3;
    int x = 3434343;
    int y = 0;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 1182936;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    long n = 9999999999998;
    int p = 2;
    int q = 2;
    int x = 3000000;
    int y = 0;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 37498466;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    long n = 1234567891011;
    int p = 2;
    int q = 3;
    int x = 0;
    int y = 1000000;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 711689;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 1000000000;
    int y = 999999999;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 8192;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    long n = 9999999999999;
    int p = 2;
    int q = 3;
    int x = 1000000000;
    int y = 999999999;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 1369;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    long n = 8335957747793;
    int p = 5;
    int q = 2;
    int x = 10;
    int y = 6;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 50167999;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    long n = 27025202362;
    int p = 9;
    int q = 8;
    int x = 6;
    int y = 0;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 2689;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    long n = 3426365180540;
    int p = 12;
    int q = 7;
    int x = 3;
    int y = 5;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 7446;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    long n = 6429294702567;
    int p = 17;
    int q = 10;
    int x = 0;
    int y = 2;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 3613;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    long n = 3135145174067;
    int p = 9;
    int q = 10;
    int x = 6;
    int y = 4;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 5352;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    long n = 8167369133069;
    int p = 8;
    int q = 2;
    int x = 7;
    int y = 10;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 4493437;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    long n = 7373131176229;
    int p = 18;
    int q = 6;
    int x = 8;
    int y = 7;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 5594;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    long n = 4324734575198;
    int p = 4;
    int q = 7;
    int x = 1;
    int y = 4;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 169441;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    long n = 8980412776091;
    int p = 9;
    int q = 4;
    int x = 6;
    int y = 7;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 75983;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    long n = 7281982906996;
    int p = 6;
    int q = 7;
    int x = 6;
    int y = 7;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 34334;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    long n = 6505572660336;
    int p = 5;
    int q = 7;
    int x = 4;
    int y = 4;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 70498;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    long n = 3895141616124;
    int p = 20;
    int q = 6;
    int x = 2;
    int y = 10;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 4614;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    long n = 364610515434;
    int p = 15;
    int q = 4;
    int x = 4;
    int y = 9;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 8361;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    long n = 7178945117276;
    int p = 15;
    int q = 9;
    int x = 9;
    int y = 6;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 3602;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    long n = 2399752392754;
    int p = 16;
    int q = 8;
    int x = 9;
    int y = 3;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 2883;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    long n = 12943947739;
    int p = 12;
    int q = 10;
    int x = 8;
    int y = 6;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 550;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    long n = 570036140795;
    int p = 9;
    int q = 5;
    int x = 9;
    int y = 5;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 13739;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    long n = 2902376710097;
    int p = 15;
    int q = 10;
    int x = 7;
    int y = 8;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 2149;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    long n = 280959997301;
    int p = 4;
    int q = 9;
    int x = 8;
    int y = 7;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 18466;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    long n = 6619364228444;
    int p = 17;
    int q = 8;
    int x = 0;
    int y = 8;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 4598;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    long n = 5771114738097;
    int p = 17;
    int q = 2;
    int x = 2;
    int y = 4;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 551168;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    long n = 7856631704567;
    int p = 13;
    int q = 2;
    int x = 2;
    int y = 5;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 1290156;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    long n = 4683269455306;
    int p = 6;
    int q = 8;
    int x = 5;
    int y = 0;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 35162;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    long n = 8829112805732;
    int p = 13;
    int q = 3;
    int x = 7;
    int y = 0;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 161652;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    long n = 6715409959708;
    int p = 8;
    int q = 2;
    int x = 4;
    int y = 10;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 4762979;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    long n = 2245117142618;
    int p = 11;
    int q = 8;
    int x = 8;
    int y = 2;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 5769;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    long n = 7488231192379;
    int p = 14;
    int q = 6;
    int x = 1;
    int y = 5;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 11671;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    long n = 1500911165193;
    int p = 6;
    int q = 3;
    int x = 8;
    int y = 8;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 403690;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    long n = 5856008936987;
    int p = 11;
    int q = 8;
    int x = 1;
    int y = 0;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 12288;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    long n = 1936960709859;
    int p = 13;
    int q = 10;
    int x = 4;
    int y = 6;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 2400;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    long n = 5407476153275;
    int p = 20;
    int q = 10;
    int x = 9;
    int y = 7;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 1729;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    long n = 1237239036029;
    int p = 10;
    int q = 10;
    int x = 8;
    int y = 8;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 4096;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    long n = 1011789366143;
    int p = 9;
    int q = 7;
    int x = 8;
    int y = 8;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 7399;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    long n = 5763939964443;
    int p = 6;
    int q = 4;
    int x = 2;
    int y = 4;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 290025;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    long n = 4818909002904;
    int p = 7;
    int q = 7;
    int x = 3;
    int y = 6;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 24576;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    long n = 6996504569917;
    int p = 10;
    int q = 8;
    int x = 0;
    int y = 1;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 16018;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    long n = 5499480298490;
    int p = 17;
    int q = 8;
    int x = 10;
    int y = 8;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 3140;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    long n = 8139544617505;
    int p = 10;
    int q = 3;
    int x = 9;
    int y = 2;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 230579;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    long n = 8464722308542;
    int p = 6;
    int q = 5;
    int x = 5;
    int y = 1;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 160031;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    long n = 8611789376348;
    int p = 285228807;
    int q = 740759357;
    int x = 6939507;
    int y = 933110197;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    long n = 5568529195746;
    int p = 654887345;
    int q = 34949302;
    int x = 37127827;
    int y = 450573621;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    long n = 1801447267605;
    int p = 494613813;
    int q = 889023313;
    int x = 87755422;
    int y = 335354339;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    long n = 8736569229320;
    int p = 346811308;
    int q = 308044881;
    int x = 396473730;
    int y = 745425661;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    long n = 3416402586708;
    int p = 470503468;
    int q = 977648525;
    int x = 434248626;
    int y = 590079443;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    long n = 5624473442062;
    int p = 884167640;
    int q = 559412926;
    int x = 188213258;
    int y = 143408281;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    long n = 5550431419379;
    int p = 273911902;
    int q = 238433455;
    int x = 776532036;
    int y = 238962600;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    long n = 4930113903881;
    int p = 407487133;
    int q = 707900975;
    int x = 619290071;
    int y = 665947467;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    long n = 7981058657199;
    int p = 937370165;
    int q = 404158662;
    int x = 711845894;
    int y = 776808932;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    long n = 9668824272813;
    int p = 472713776;
    int q = 260152961;
    int x = 501252995;
    int y = 642548898;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    long n = 1340704365084;
    int p = 437116468;
    int q = 850952929;
    int x = 967681094;
    int y = 25187188;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 0;
    int y = 0;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 17592186044416;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 2;
    int y = 2222222;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 44470458;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 1234567;
    int y = 0;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 86169543;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 0;
    int y = 1100000;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 95846721;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 1000000;
    int y = 0;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 104592532;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 1;
    int y = 1;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 4398046511104;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 0;
    int y = 1000000;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 104592532;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 1;
    int y = 4;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 2766178294444;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 0;
    int y = 10000000;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 12144693;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    long n = 9999999999999;
    int p = 2;
    int q = 2;
    int x = 1111111;
    int y = 0;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 94972147;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 0;
    int y = 5000000;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 23289372;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    long n = 1000000000000;
    int p = 2;
    int q = 3;
    int x = 1;
    int y = 1;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 1893461615;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    long n = 999999999999;
    int p = 2;
    int q = 2;
    int x = 499999;
    int y = 0;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 19949114;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 0;
    int y = 100000;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 879148277;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 0;
    int y = 400000;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 244787015;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    long n = 999999999999;
    int p = 2;
    int q = 2;
    int x = 0;
    int y = 0;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 1099511627776;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    long n = 2358775268291;
    int p = 2;
    int q = 2;
    int x = 3350;
    int y = 679115;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 13407808;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    long n = 10000000000;
    int p = 2;
    int q = 2;
    int x = 0;
    int y = 0;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 17179869184;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 0;
    int y = 123456;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 724865000;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 0;
    int y = 500007;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 199182503;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    long n = 10000000000000;
    int p = 2;
    int q = 3;
    int x = 13;
    int y = 17;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 1953326158;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 0;
    int y = 2000000;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 54796271;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 124342;
    int y = 1138;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 272433069;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    long n = 10000000000000;
    int p = 2;
    int q = 3;
    int x = 1;
    int y = 2;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 9664293228;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 1;
    int y = 1000000;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 96791648;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 0;
    int y = 3000000;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 37498466;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    long n = 9999999999999;
    int p = 2;
    int q = 2;
    int x = 0;
    int y = 0;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 17592186044416;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    long n = 100000000000;
    int p = 2;
    int q = 2;
    int x = 2;
    int y = 3;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 24230196227;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 0;
    int y = 131071;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 686650497;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 999973;
    int y = 997;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 49870998;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 0;
    int y = 16777216;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 7450599;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    long n = 999173121312;
    int p = 2;
    int q = 2;
    int x = 5;
    int y = 154456;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 47819197;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 23000;
    int y = 270000;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 72411191;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 1000000;
    int y = 1;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 96791648;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 1234567;
    int y = 1;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 79850809;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 123456;
    int y = 444;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 330443974;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    long n = 10000000000000;
    int p = 2;
    int q = 3;
    int x = 1;
    int y = 0;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 16010084397;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 2345;
    int y = 123797;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 232774981;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 123456;
    int y = 0;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 724865000;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    long n = 10000000000000;
    int p = 2;
    int q = 3;
    int x = 0;
    int y = 0;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 24595366566;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 2;
    int y = 123321;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 630709045;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    long n = 8796093022208;
    int p = 2;
    int q = 2;
    int x = 0;
    int y = 0;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 17592186044416;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 2;
    int y = 2;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 2199023255552;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 2;
    int y = 3;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 2199023255552;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    long n = 9999999999999;
    int p = 2;
    int q = 2;
    int x = 1000000;
    int y = 0;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 104592532;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 1001;
    int y = 104729;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 322241427;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 1;
    int y = 0;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 7800976744450;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 12345;
    int y = 324567;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 76283543;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    long n = 10000000000000;
    int p = 2;
    int q = 3;
    int x = 453;
    int y = 345;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 148235861;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 0;
    int y = 1;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 7800976744450;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    long n = 9999999999999;
    int p = 2;
    int q = 2;
    int x = 0;
    int y = 182311;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 506394388;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 0;
    int y = 390000;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 250633419;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 0;
    int y = 390012;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 250626223;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 10000000;
    int y = 47;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 8871503;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 0;
    int y = 390717;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 250204273;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    long n = 10000000000000;
    int p = 3;
    int q = 2;
    int x = 7;
    int y = 5;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 3829335023;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 0;
    int y = 1048575;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 100135912;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    long n = 1234567891011;
    int p = 2;
    int q = 3;
    int x = 0;
    int y = 1;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 3377145969;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 0;
    int y = 391717;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 249608366;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 0;
    int y = 397717;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 246095851;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 1;
    int y = 2;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 3900488372226;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 123;
    int y = 1234566;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 54025419;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 234512;
    int y = 0;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 401142982;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 0;
    int y = 65536;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 1296998106;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    long n = 10000000000000;
    int p = 2;
    int q = 2;
    int x = 3;
    int y = 1757567;
    InfiniteSequence2* pObj = new InfiniteSequence2();
    clock_t start = clock();
    long result = pObj->calc(n, p, q, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 53867288;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20463878&rd=13504&pm=9922
********************************************************************************
#include <algorithm> 
#include <string> 
#include <set> 
#include <map> 
#include <vector> 
#include <queue>  
#include <iostream> 
#include <iterator> 
#include <math.h> 
#include <cstdio> 
#include <cstdlib> 
#include <sstream> 
#include <bitset> 
 
#pragma comment(linker, "/STACK:60777216") 
 
using namespace std; 
 
#define F(i,a,b) for (int _n(b), i(a); i < _n; i++)  
#define R(i,n) F(i,0,n)  
#define UN(v) SORT(v),v.erase(unique(v.begin(),v.end()),v.end()) 
#define SORT(c) sort((c).begin(), (c).end()) 
#define CL(a,b) memset(a,b,sizeof(a)) 
#define INF 1000000000 
#define pb push_back 
#define pii pair<int,int> 
#define ll long long 
#define ld long double 
 
 
int p,q,x,y; 
ll a[1111111]; 
 
class InfiniteSequence2 { 
public: 
    ll go(ll n){         
        if(n<=0) return 1; 
        if(n<=1000000 && a[n]!=-1) return a[n]; 
        ll v=go(n/p-x)+go(n/q-y); 
        if(n<=1000000) a[n]=v; 
    return v; 
    } 
  ll calc(long long N, int _p, int _q, int _x, int _y) { 
        CL(a,-1); 
        p=_p,q=_q;x=_x;y=_y; 
        return go(N); 
  } 
   
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/