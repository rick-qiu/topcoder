/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10968
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

class KnightCircuit2 {
public:
    int maxSize(int w, int h);
};

int KnightCircuit2::maxSize(int w, int h) {
    int ret;
    return ret;
}


int test0() {
    int w = 1;
    int h = 1;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int w = 15;
    int h = 2;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int w = 100;
    int h = 100;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 10000;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int w = 3;
    int h = 3;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int w = 5;
    int h = 4;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int w = 3;
    int h = 2;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int w = 1;
    int h = 45000;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
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
    int w = 45000;
    int h = 1;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int w = 1;
    int h = 22279;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
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
    int w = 1;
    int h = 39878;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int w = 43270;
    int h = 1;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
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
    int w = 13784;
    int h = 1;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int w = 1;
    int h = 27255;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int w = 29043;
    int h = 1;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int w = 1;
    int h = 5043;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int w = 1;
    int h = 21932;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int w = 13510;
    int h = 1;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int w = 39576;
    int h = 1;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int w = 2;
    int h = 2;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int w = 2;
    int h = 15463;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 7732;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int w = 23900;
    int h = 2;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 11950;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int w = 10827;
    int h = 2;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 5414;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int w = 27471;
    int h = 2;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 13736;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int w = 10856;
    int h = 2;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 5428;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int w = 22189;
    int h = 2;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 11095;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int w = 2;
    int h = 16267;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 8134;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int w = 11416;
    int h = 2;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 5708;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int w = 2;
    int h = 7641;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 3821;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int w = 2;
    int h = 5887;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 2944;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int w = 9663;
    int h = 2;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 4832;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int w = 2;
    int h = 7417;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 3709;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int w = 2;
    int h = 44820;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 22410;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int w = 12338;
    int h = 2;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 6169;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int w = 11540;
    int h = 2;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 5770;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int w = 2;
    int h = 33896;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 16948;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int w = 39060;
    int h = 2;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 19530;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int w = 34885;
    int h = 2;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 17443;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int w = 39519;
    int h = 2;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 19760;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int w = 7236;
    int h = 2;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 3618;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int w = 3;
    int h = 29038;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 87114;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int w = 3;
    int h = 39515;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 118545;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int w = 11345;
    int h = 3;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 34035;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int w = 2473;
    int h = 3;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 7419;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int w = 26591;
    int h = 3;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 79773;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int w = 3;
    int h = 25053;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 75159;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int w = 10661;
    int h = 3;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 31983;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int w = 3;
    int h = 362;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 1086;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int w = 3;
    int h = 32740;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 98220;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int w = 3;
    int h = 5936;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 17808;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int w = 3;
    int h = 8468;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 25404;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int w = 3;
    int h = 12128;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 36384;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int w = 3;
    int h = 31858;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 95574;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int w = 3;
    int h = 34476;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 103428;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int w = 28802;
    int h = 3;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 86406;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int w = 32913;
    int h = 3;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 98739;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int w = 18628;
    int h = 3;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 55884;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int w = 3;
    int h = 8306;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 24918;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int w = 19097;
    int h = 3;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 57291;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int w = 25406;
    int h = 3;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 76218;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int w = 2541;
    int h = 20856;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 52995096;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int w = 14419;
    int h = 12565;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 181174735;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int w = 38541;
    int h = 42422;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 1634986302;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int w = 11035;
    int h = 14984;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 165348440;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int w = 14034;
    int h = 5341;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 74955594;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int w = 9038;
    int h = 19759;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 178581842;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int w = 8390;
    int h = 11828;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 99236920;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int w = 9918;
    int h = 28487;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 282534066;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int w = 30892;
    int h = 30300;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 936027600;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int w = 18127;
    int h = 12992;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 235505984;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int w = 34788;
    int h = 34923;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 1214901324;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int w = 20739;
    int h = 15623;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 324005397;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int w = 23954;
    int h = 26913;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 644674002;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int w = 13419;
    int h = 28274;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 379408806;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int w = 28689;
    int h = 4500;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 129100500;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int w = 28530;
    int h = 31815;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 907681950;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int w = 22985;
    int h = 1063;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 24433055;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int w = 17051;
    int h = 34304;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 584917504;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int w = 13245;
    int h = 30758;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 407389710;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int w = 950;
    int h = 19702;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 18716900;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int w = 31665;
    int h = 29950;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 948366750;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int w = 41419;
    int h = 14625;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 605752875;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int w = 38383;
    int h = 37867;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 1453449061;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int w = 12259;
    int h = 348;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 4266132;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int w = 40450;
    int h = 22196;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 897828200;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int w = 2614;
    int h = 17017;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 44482438;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int w = 25447;
    int h = 27169;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 691369543;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int w = 16903;
    int h = 16123;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 272527069;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int w = 31014;
    int h = 17527;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 543582378;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int w = 7177;
    int h = 35843;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 257245211;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int w = 5;
    int h = 5;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int w = 4;
    int h = 4;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int w = 1;
    int h = 100;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int w = 45000;
    int h = 45000;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 2025000000;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int w = 3;
    int h = 5;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int w = 51;
    int h = 51;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 2601;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int w = 4;
    int h = 2;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int w = 3;
    int h = 4;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int w = 2;
    int h = 100;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int w = 99;
    int h = 98;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 9702;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int w = 3;
    int h = 7;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int w = 2;
    int h = 4;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
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
    int w = 16;
    int h = 2;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int w = 1;
    int h = 3;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int w = 1;
    int h = 7;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
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
    int w = 1;
    int h = 123;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int w = 99;
    int h = 45000;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 4455000;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int w = 1;
    int h = 10;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
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
    int w = 33;
    int h = 3;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int w = 1;
    int h = 1234;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int w = 9;
    int h = 45000;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 405000;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int w = 5;
    int h = 2;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int w = 10;
    int h = 45000;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 450000;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int w = 45000;
    int h = 50;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 2250000;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int w = 2;
    int h = 45000;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 22500;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int w = 4;
    int h = 45000;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 180000;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int w = 10;
    int h = 3;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int w = 45000;
    int h = 98;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 4410000;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int w = 1;
    int h = 199;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
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

int test118() {
    int w = 80;
    int h = 45000;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 3600000;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int w = 45000;
    int h = 99;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 4455000;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int w = 3;
    int h = 45000;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 135000;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int w = 2;
    int h = 3;
    KnightCircuit2* pObj = new KnightCircuit2();
    clock_t start = clock();
    int result = pObj->maxSize(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22928808&rd=15186&pm=10968
********************************************************************************
#include <cstdio> 
#include <cstring> 
#include <set> 
#include <vector> 
using namespace std; 
 
class KnightCircuit2 
{ 
public: 
    int maxSize(int col, int row) 
    { 
        if (row > col) swap(row, col); 
    if (row == 3) 
        if(col == 3) 
                return 8; 
            else if(col < 3) 
                return 1; 
    if (row == 2) 
            return (col + 1) >> 1; 
    if (row == 1) 
            return 1; 
    return row * col; 
    } 
};

********************************************************************************
*******************************************************************************/