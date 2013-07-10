/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8179
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

class IsoscelesTriangulations {
public:
    int getCount(int n, int k);
};

int IsoscelesTriangulations::getCount(int n, int k) {
    int ret;
    return ret;
}


int test0() {
    int n = 4;
    int k = 2;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 3;
    int k = 0;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
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
    int n = 5;
    int k = 3;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 6;
    int k = 2;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 10;
    int k = 8;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 3;
    int k = 1;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 4;
    int k = 0;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
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
    int n = 4;
    int k = 1;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
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
    int n = 5;
    int k = 0;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
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
    int n = 5;
    int k = 1;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
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
    int n = 5;
    int k = 2;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
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
    int n = 6;
    int k = 4;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 7;
    int k = 3;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 7;
    int k = 4;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 8;
    int k = 6;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 8;
    int k = 4;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 8;
    int k = 2;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 9;
    int k = 7;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 9;
    int k = 5;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 108;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 9;
    int k = 4;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 9;
    int k = 3;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 288;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 10;
    int k = 6;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 140;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 10;
    int k = 5;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 10;
    int k = 4;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 560;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 10;
    int k = 3;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 320;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 10;
    int k = 2;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 320;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 36;
    int k = 31;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 14496;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 14;
    int k = 4;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 60928;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 34;
    int k = 4;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 21406679;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 47;
    int k = 11;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 105275978;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 23;
    int k = 5;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 106887772;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 26;
    int k = 8;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 83920238;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 16;
    int k = 4;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 638976;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 37;
    int k = 9;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1198520;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 25;
    int k = 7;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 65975697;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 12;
    int k = 7;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 480;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 37;
    int k = 26;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 65855403;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 29;
    int k = 9;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 74024031;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 19;
    int k = 3;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1867776;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 22;
    int k = 17;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3696;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 27;
    int k = 22;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2232;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 13;
    int k = 2;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 31;
    int k = 1;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 12;
    int k = 9;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
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
    int n = 35;
    int k = 33;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 35;
    int k = 0;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
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
    int n = 50;
    int k = 9;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 58394758;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 50;
    int k = 47;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 50;
    int k = 21;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 31719829;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 50;
    int k = 39;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 92087776;
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
    int k = 36;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 15420199;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 50;
    int k = 48;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
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
    int n = 50;
    int k = 46;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 50;
    int k = 45;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 16000;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 50;
    int k = 0;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 50;
    int k = 1;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
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
    int n = 50;
    int k = 2;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 101931970;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 50;
    int k = 3;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 114751022;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 50;
    int k = 44;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 226000;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 50;
    int k = 4;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 11410498;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 50;
    int k = 10;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 112698825;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 50;
    int k = 7;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 20336526;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 49;
    int k = 23;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 62241972;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 50;
    int k = 20;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 28775584;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 50;
    int k = 25;
    IsoscelesTriangulations* pObj = new IsoscelesTriangulations();
    clock_t start = clock();
    int result = pObj->getCount(n, k);
    clock_t end = clock();
    delete pObj;
    int expected = 107780782;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22692196&rd=10785&pm=8179
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
 
using namespace std;
 
long long dp[51][51][51];
const long long MOD=123456789;
 
int nn;
int getc(int i,int j) {
  int c1=i-j;
  int c2=j-i+nn;
  return min(c1,c2);
}
 
long long solve(int i,int j,int k) {
  if(j-i<2) {
    dp[i][j][k]=0;
    return 0;
  }
  if(i+2==j) {
    if(k==1) {
      dp[i][j][k]=1;
      return 1;
    }else{
      dp[i][j][k]=0;
      return 0;
    }
  }
  /*if(k==0) {
    dp[i][j][k]==0;
    return 0;
  }*/
  if(dp[i][j][k]!=-1) return dp[i][j][k];
  long long ans=0;
  int c1=getc(i+1,i);
  int c2=getc(j,i+1);
  int c3=getc(j,i);
  if(c1==c2||c1==c3||c2==c3) {
    ans+=solve(i+1,j,k-1)%MOD;
  }else{
    ans+=solve(i+1,j,k)%MOD;
  }
  c1=getc(j-1,i);
  c2=getc(j,j-1);
  c3=getc(j,i);
  if(c1==c2||c1==c3||c2==c3) {
    ans+=solve(i,j-1,k-1);
    ans=ans%MOD;
  }else{
    ans+=solve(i,j-1,k);
    ans=ans%MOD;
  }
  //ans=solve(i+1,j,k)+solve(i,j-1,k);
  for(int k1=i+2;k1<j-1;k1++) {
    c1=getc(j,i);
    c2=getc(k1,i);
    c3=getc(j,k1);
    if(c1==c2||c1==c3||c2==c3) {
      for(int k2=0;k2<=k-1;k2++) {
        ans=(ans+(solve(i,k1,k2)%MOD)*solve(k1,j,k-1-k2))%MOD;
      }
    }else{
      for(int k2=0;k2<=k;k2++) {
        ans=(ans+(solve(i,k1,k2)%MOD)*solve(k1,j,k-k2))%MOD;
      }
    }
  }
  dp[i][j][k]=ans;
  return ans;
}
      
class IsoscelesTriangulations {
public:
  int getCount(int, int);
};
 
int IsoscelesTriangulations::getCount(int n, int k) {
  memset(dp,-1,sizeof dp);
  nn=n;
  return solve(0,n-1,k);
}

********************************************************************************
*******************************************************************************/