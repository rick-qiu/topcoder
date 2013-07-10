/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2376
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

class Hilbert {
public:
    int steps(int k, int x, int y);
};

int Hilbert::steps(int k, int x, int y) {
    int ret;
    return ret;
}


int test0() {
    int k = 3;
    int x = 2;
    int y = 3;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int k = 5;
    int x = 1;
    int y = 1;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
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
    int k = 15;
    int x = 32768;
    int y = 1;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1073741823;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int k = 1;
    int x = 2;
    int y = 2;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
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
    int k = 10;
    int x = 546;
    int y = 109;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 955129;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int k = 15;
    int x = 30000;
    int y = 30000;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 706873514;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int k = 1;
    int x = 1;
    int y = 1;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
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
    int k = 2;
    int x = 3;
    int y = 1;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int k = 2;
    int x = 3;
    int y = 2;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int k = 3;
    int x = 6;
    int y = 7;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int k = 3;
    int x = 7;
    int y = 2;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int k = 4;
    int x = 9;
    int y = 2;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 233;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int k = 4;
    int x = 8;
    int y = 3;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int k = 5;
    int x = 21;
    int y = 21;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 544;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int k = 5;
    int x = 18;
    int y = 23;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 573;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int k = 7;
    int x = 52;
    int y = 87;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 7353;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int k = 10;
    int x = 17;
    int y = 47;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1878;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int k = 6;
    int x = 20;
    int y = 12;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 480;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int k = 8;
    int x = 92;
    int y = 186;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 29742;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int k = 6;
    int x = 12;
    int y = 11;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 137;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int k = 7;
    int x = 5;
    int y = 108;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 5343;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int k = 7;
    int x = 52;
    int y = 72;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 7984;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int k = 8;
    int x = 162;
    int y = 162;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 34818;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int k = 9;
    int x = 492;
    int y = 143;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 202257;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int k = 8;
    int x = 78;
    int y = 114;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 12114;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int k = 6;
    int x = 21;
    int y = 2;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 313;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int k = 10;
    int x = 777;
    int y = 476;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 850821;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int k = 7;
    int x = 82;
    int y = 19;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 14509;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int k = 10;
    int x = 574;
    int y = 264;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 896998;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int k = 9;
    int x = 321;
    int y = 290;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 138923;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int k = 8;
    int x = 33;
    int y = 28;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 3429;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int k = 10;
    int x = 319;
    int y = 712;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 483305;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int k = 6;
    int x = 22;
    int y = 56;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1580;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int k = 6;
    int x = 25;
    int y = 2;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 323;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int k = 7;
    int x = 14;
    int y = 40;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 3652;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int k = 8;
    int x = 71;
    int y = 219;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 25560;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int k = 9;
    int x = 265;
    int y = 506;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 152961;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int k = 7;
    int x = 104;
    int y = 45;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 13029;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int k = 10;
    int x = 587;
    int y = 64;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 963993;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int k = 8;
    int x = 115;
    int y = 12;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 5601;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int k = 6;
    int x = 60;
    int y = 31;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 3089;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int k = 10;
    int x = 417;
    int y = 709;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 472122;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int k = 9;
    int x = 415;
    int y = 292;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 190457;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int k = 10;
    int x = 747;
    int y = 873;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 639526;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int k = 8;
    int x = 69;
    int y = 120;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 12069;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int k = 9;
    int x = 444;
    int y = 393;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 165263;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int k = 6;
    int x = 13;
    int y = 9;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 186;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int k = 9;
    int x = 3;
    int y = 390;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 81949;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int k = 10;
    int x = 951;
    int y = 765;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 735948;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int k = 7;
    int x = 120;
    int y = 100;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 11194;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int k = 8;
    int x = 5;
    int y = 241;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 21776;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int k = 8;
    int x = 167;
    int y = 100;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 53905;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int k = 7;
    int x = 46;
    int y = 21;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1867;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int k = 6;
    int x = 52;
    int y = 26;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 3276;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int k = 7;
    int x = 54;
    int y = 20;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1588;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int k = 11;
    int x = 123;
    int y = 1976;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1405145;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int k = 12;
    int x = 4000;
    int y = 2561;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 11626837;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int k = 13;
    int x = 6217;
    int y = 3122;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 53491137;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int k = 14;
    int x = 455;
    int y = 15555;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 89235506;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int k = 15;
    int x = 15678;
    int y = 9871;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 158191527;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int k = 15;
    int x = 32767;
    int y = 17011;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 805038840;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int k = 5;
    int x = 1;
    int y = 1;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
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
    int k = 15;
    int x = 30000;
    int y = 30000;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 706873514;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int k = 10;
    int x = 546;
    int y = 109;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 955129;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int k = 15;
    int x = 666;
    int y = 666;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 557698;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int k = 15;
    int x = 2000;
    int y = 3000;
    Hilbert* pObj = new Hilbert();
    clock_t start = clock();
    int result = pObj->steps(k, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 13645248;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7442498&rd=4745&pm=2376
********************************************************************************
#include <string>
#include <vector>
#include <stdio.h>
#include <stack>
#include <algorithm>
#include <deque>
#include <stdlib.h>
using namespace std;
int min(int a,int b)
{if (a<=b) return a; else return b;}
 
int max(int a,int b)
{if (a>=b) return a; else return b;}
 
int gcd(int a, int b)
{
  if (b==0) return a; else
  return gcd(b,a%b);
}
class Hilbert {
  public:
  int steps(int k, int x, int y) ;
};
int Hilbert::steps(int k, int x, int y)
{
  int i,j,bok,ans,nr_cw;
  bok=1;
  for (i=1; i<k; i++) bok*=2;
  ans=0;
  while (k>0)
  {
    nr_cw=0;
    //printf("x %d y %d ans %d\n",x,y,ans);
    if (x>bok) {nr_cw+=2; x-=bok;}
    if (y>bok) {nr_cw+=1; y-=bok;}
    if (nr_cw==3) nr_cw=2; else
    if (nr_cw==2) nr_cw=3;
    ans+=nr_cw*bok*bok;
    if (nr_cw==0) {j=x; x=y; y=j; }
    if (nr_cw==3) {j=x; x=y; y=j; y=bok+1-y; x=bok+1-x;}
    k--; bok/=2;
  }
  return ans;
}
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/