/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10702
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

class TheHexagonsDivOne {
public:
    long count(int n);
};

long TheHexagonsDivOne::count(int n) {
    long ret;
    return ret;
}


int test0() {
    int n = 3;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 4;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 256;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 8;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 3458560;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 20;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 11193888000;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 1;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 2;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 3;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 5;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 12800;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 6;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 142080;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 7;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 842240;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 9;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 11160576;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 10;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 30374400;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 11;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 72821760;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 12;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 158273280;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 13;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 318123520;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 14;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 599895296;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 15;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 1072780800;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 16;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 1834327040;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 17;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 3018373120;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 18;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 4804346880;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 19;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 7428028416;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 21;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 16489105920;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 22;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 23799381760;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 23;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 33726640640;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 24;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 47008743936;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 25;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 64541312000;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 26;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 87401766400;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 27;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 116875699200;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 28;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 154485676800;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 29;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 202022585856;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 30;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 261579628800;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 31;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 335589076480;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 32;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 426861885440;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 33;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 538630287360;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 34;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 674593458176;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 35;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 838966374400;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 36;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 1036531964160;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 37;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 1272696660480;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 38;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 1553549464320;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 39;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 1885924624896;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 40;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 2277468044800;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 41;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 2736707517440;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 42;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 3273126904320;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 43;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 3897244359680;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 44;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 4620694710016;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 45;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 5456316096000;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 46;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 6418240984320;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 47;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 7521991656960;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 48;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 8784580285440;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 49;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 10224613697536;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 50;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 11862402944000;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 51;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 13720077772800;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 52;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 15821706118400;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 53;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 18193418713600;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 54;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 20863538931456;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 55;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 23862717964800;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 56;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 27224075450880;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 57;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 30983345648640;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 58;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 35179029276160;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 59;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 39852551115776;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 60;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 45048423494400;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 61;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 50814415746560;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 62;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 57201729767680;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 63;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 64265181765120;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 64;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 72063390314496;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int n = 65;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 80658970828800;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int n = 66;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 90118736547840;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int n = 67;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 100513906155520;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int n = 68;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 111920318132480;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int n = 69;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 124418651951616;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int n = 70;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 138094656224000;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int n = 71;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 153039383902720;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int n = 72;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 169349434652160;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int n = 73;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 187127204490240;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int n = 74;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 206481142811136;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int n = 75;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 227526016896000;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int n = 76;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 250383184019200;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int n = 77;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 275180871257600;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int n = 78;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 302054463110400;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int n = 79;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 331146797037056;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int n = 80;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 362608467020800;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int n = 81;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 396598135265280;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int n = 82;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 433282852131840;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int n = 83;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 472838384424960;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int n = 84;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 515449552133376;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int n = 85;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 561310573734400;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int n = 86;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 610625420168960;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int n = 87;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 663608177594880;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int n = 88;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 720483419025920;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int n = 89;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 781486584964096;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int n = 90;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 846864373132800;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int n = 91;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 916875137418240;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int n = 92;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 991789296126720;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int n = 93;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 1071889749665280;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int n = 94;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 1157472307753216;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int n = 95;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 1248846126272000;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int n = 96;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 1346334153861120;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int n = 97;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 1450273588367360;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int n = 98;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 1561016343255040;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int n = 99;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 1678929524084736;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int n = 100;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 1804395915168000;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int n = 101;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 1937814476505600;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int n = 102;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 2079600851116800;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int n = 103;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 2230187882867200;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int n = 104;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 2390026144902656;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int n = 105;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 2559584478796800;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int n = 106;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 2739350544519680;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int n = 107;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 2929831381335040;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int n = 108;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 3131553979733760;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int n = 109;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 3345065864510976;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int n = 110;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 3570935689094400;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int n = 111;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 3809753841231360;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int n = 112;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 4062133060142080;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int n = 113;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 4328709065246720;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int n = 114;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 4610141196573696;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int n = 115;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 4907113066956800;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int n = 116;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 5220333226128640;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int n = 117;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 5550535836817920;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int n = 118;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 5898481362958080;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int n = 119;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 6264957270114816;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int n = 120;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 6650778738240000;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int n = 121;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 7056789386859520;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int n = 122;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 7483862012802560;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int n = 123;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 7932899340579840;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int n = 124;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 8404834785518336;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int n = 125;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 8900633229760000;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int n = 126;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 9421291811232000;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int n = 127;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 9967840725696000;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int n = 128;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 10541344041984000;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int n = 129;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 11142900530528256;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int n = 130;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 11773644505292800;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int n = 131;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 12434746679214080;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int n = 132;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 13127415033258240;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int n = 133;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 13852895699202560;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int n = 134;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 14612473856248576;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int n = 135;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 15407474641574400;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int n = 136;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 16239264074933760;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int n = 137;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 17109249997409280;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int n = 138;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 18018883024427520;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int n = 139;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 18969657513143296;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int n = 140;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 19963112544300800;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int n = 141;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 21000832918679040;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int n = 142;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 22084450168229120;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int n = 143;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 23215643582010880;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int n = 144;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 24396141247036416;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int n = 145;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 25627721104128000;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int n = 146;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 26912212018897920;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int n = 147;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 28251494867957760;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int n = 148;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 29647503640464640;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int n = 149;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 31102226555111936;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int n = 150;
    TheHexagonsDivOne* pObj = new TheHexagonsDivOne();
    clock_t start = clock();
    long result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    long expected = 32617707192672000;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=14144&pm=10702
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
 
class TheHexagonsDivOne
{
public:
  int n;
  bool G[7][7];
  int A[7];
  bool used[1000];
  int64 DFS(int d,int p)
  {
    if (d==7)
      return 1;
    int64 R=0;
    for (int i=0;i<p;i++) for (int s=0;s<2;s++)
    {
      A[d]=i+s*n;
      if (used[A[d]]) continue;
      bool isGood=true;
      for (int k=0;k<d;k++) if (G[d][k] && A[k]%n==A[d]%n) isGood=false;
      if (isGood)
      {
        used[A[d]]=true;
        R+=DFS(d+1,p);
        used[A[d]]=false;
      }
    }
    if (p<n)
    {
      A[d]=p;
      used[A[d]]=true;
      R+=DFS(d+1,p+1)*(n-p)*2;
      used[A[d]]=false;
    }
    return R;
  }
  int64 count(int _n)
  {
    n=_n;
    memset(G,false,sizeof(G));
    G[1][0]=true;
    G[2][0]=G[2][1]=true;
    G[3][0]=G[3][2]=true;
    G[4][1]=G[4][2]=true;
    G[5][2]=G[5][3]=true;
    G[6][2]=G[6][4]=G[6][5]=true;
    memset(used,false,sizeof(used));
    int64 R=DFS(0,0);
    return R/6;
  }
};

********************************************************************************
*******************************************************************************/