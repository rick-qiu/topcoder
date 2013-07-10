/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11609
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

class CorrectMultiplicationTwo {
public:
    int getMinimum(int a, int b, int c);
};

int CorrectMultiplicationTwo::getMinimum(int a, int b, int c) {
    int ret;
    return ret;
}


int test0() {
    int a = 19;
    int b = 28;
    int c = 522;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
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
    int a = 10;
    int b = 30;
    int c = 500;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int a = 111;
    int b = 111;
    int c = 12321;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int a = 1000;
    int b = 100;
    int c = 10;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1089;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int a = 399;
    int b = 522;
    int c = 199999;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int a = 1;
    int b = 1;
    int c = 1;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
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
    int a = 1;
    int b = 1;
    int c = 2;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
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
    int a = 1;
    int b = 1;
    int c = 3;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int a = 1;
    int b = 2;
    int c = 1;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
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
    int a = 1;
    int b = 2;
    int c = 2;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
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
    int a = 1;
    int b = 2;
    int c = 3;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
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
    int a = 1;
    int b = 3;
    int c = 1;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
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
    int a = 1;
    int b = 3;
    int c = 2;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
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
    int a = 1;
    int b = 3;
    int c = 3;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
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
    int a = 2;
    int b = 1;
    int c = 1;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
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
    int a = 2;
    int b = 1;
    int c = 2;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int a = 2;
    int b = 1;
    int c = 3;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
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
    int a = 2;
    int b = 2;
    int c = 1;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int a = 2;
    int b = 2;
    int c = 2;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
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
    int a = 2;
    int b = 2;
    int c = 3;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int a = 2;
    int b = 3;
    int c = 1;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int a = 2;
    int b = 3;
    int c = 2;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int a = 2;
    int b = 3;
    int c = 3;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int a = 3;
    int b = 1;
    int c = 1;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int a = 3;
    int b = 1;
    int c = 2;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int a = 3;
    int b = 1;
    int c = 3;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int a = 3;
    int b = 2;
    int c = 1;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int a = 3;
    int b = 2;
    int c = 2;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int a = 3;
    int b = 2;
    int c = 3;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
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
    int a = 3;
    int b = 3;
    int c = 1;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int a = 3;
    int b = 3;
    int c = 2;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int a = 3;
    int b = 3;
    int c = 3;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int a = 1;
    int b = 1;
    int c = 1;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
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
    int a = 1;
    int b = 1;
    int c = 1000000;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1998;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int a = 1;
    int b = 1000000;
    int c = 1;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 999999;
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
    int b = 1000000;
    int c = 1000000;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
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
    int a = 1000000;
    int b = 1;
    int c = 1;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 999999;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int a = 1000000;
    int b = 1;
    int c = 1000000;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int a = 1000000;
    int b = 1000000;
    int c = 1;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1999998;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int a = 1000000;
    int b = 1000000;
    int c = 1000000;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 999999;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int a = 4;
    int b = 249999;
    int c = 999994;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int a = 249999;
    int b = 4;
    int c = 999994;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
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
    int a = 4;
    int b = 249999;
    int c = 999995;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
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
    int a = 249999;
    int b = 4;
    int c = 999995;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int a = 4;
    int b = 249999;
    int c = 999996;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
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
    int a = 249999;
    int b = 4;
    int c = 999996;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
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
    int a = 4;
    int b = 249999;
    int c = 999997;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int a = 249999;
    int b = 4;
    int c = 999997;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int a = 4;
    int b = 249999;
    int c = 999998;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int a = 249999;
    int b = 4;
    int c = 999998;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
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
    int b = 117315;
    int c = 117436;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 121;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int a = 316;
    int b = 1;
    int c = 148030;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 454;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int a = 350;
    int b = 666;
    int c = 239626;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
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
    int b = 104;
    int c = 613;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int a = 1;
    int b = 117;
    int c = 44109;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 311;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int a = 1;
    int b = 53;
    int c = 54;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
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
    int a = 5;
    int b = 1020;
    int c = 554040;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 541;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int a = 1830;
    int b = 383;
    int c = 4874;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 586;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int a = 1;
    int b = 6383;
    int c = 6292;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 91;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int a = 2449;
    int b = 1;
    int c = 16599;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 86;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int a = 27327;
    int b = 1;
    int c = 27327;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int a = 1966;
    int b = 31;
    int c = 70786;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int a = 1153;
    int b = 1;
    int c = 1023;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 130;
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
    int b = 107217;
    int c = 107217;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int a = 2;
    int b = 6;
    int c = 17;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int a = 55;
    int b = 66;
    int c = 3400;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int a = 8;
    int b = 408;
    int c = 3248;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int a = 1;
    int b = 26699;
    int c = 26701;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int a = 1657;
    int b = 1;
    int c = 150770;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 107;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int a = 776;
    int b = 1;
    int c = 4;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 772;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int a = 615147;
    int b = 1;
    int c = 615144;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int a = 1972;
    int b = 371;
    int c = 544118;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 148;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int a = 617;
    int b = 1256;
    int c = 2512;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 615;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int a = 3934;
    int b = 14;
    int c = 54958;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int a = 866;
    int b = 3606;
    int c = 104589;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 852;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int a = 9369;
    int b = 67;
    int c = 533634;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int a = 557;
    int b = 735;
    int c = 2938;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 555;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int a = 6532;
    int b = 71;
    int c = 1;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 6601;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int a = 23;
    int b = 732;
    int c = 22;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 732;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int a = 815585;
    int b = 3185;
    int c = 366;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 818403;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int a = 8370;
    int b = 6942;
    int c = 6862;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 8449;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int a = 134901;
    int b = 132173;
    int c = 130336;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 136737;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int a = 16326;
    int b = 218202;
    int c = 1;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 234526;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int a = 102079;
    int b = 7;
    int c = 23;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 102062;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int a = 1231;
    int b = 63;
    int c = 367;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 926;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int a = 6620;
    int b = 20716;
    int c = 6863;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 20472;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int a = 35739;
    int b = 18886;
    int c = 130337;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 22038;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int a = 9999;
    int b = 9999;
    int c = 9999;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 9998;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int a = 999999;
    int b = 988989;
    int c = 989796;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 999191;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int a = 715406;
    int b = 610901;
    int c = 755977;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 651471;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int a = 999999;
    int b = 777777;
    int c = 888888;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 888887;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int a = 1000000;
    int b = 999999;
    int c = 28;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1999970;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int a = 10;
    int b = 10;
    int c = 1000000;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1980;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int a = 499999;
    int b = 500001;
    int c = 1000000;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 499998;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int a = 1000000;
    int b = 1000000;
    int c = 573;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1999426;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int a = 999961;
    int b = 999979;
    int c = 999983;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 999964;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int a = 999999;
    int b = 999999;
    int c = 999999;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 999998;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int a = 999999;
    int b = 123456;
    int c = 999999;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 123455;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int a = 1000000;
    int b = 1000000;
    int c = 3;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1999996;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int a = 100000;
    int b = 1;
    int c = 100000;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int a = 999;
    int b = 9;
    int c = 99999;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 93;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int a = 500;
    int b = 1000000;
    int c = 1000000;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 499;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int a = 99;
    int b = 9;
    int c = 99999;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 532;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int a = 1000000;
    int b = 1000000;
    int c = 10;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1999989;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int a = 1;
    int b = 10000;
    int c = 10001;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
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
    int a = 1000;
    int b = 1000;
    int c = 1000000;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
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
    int a = 101;
    int b = 9901;
    int c = 1000000;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
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
    int a = 933343;
    int b = 832456;
    int c = 933343;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 832455;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int a = 909091;
    int b = 907197;
    int c = 13681;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1802606;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int a = 999999;
    int b = 1;
    int c = 999999;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
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
    int a = 1;
    int b = 100000;
    int c = 99000;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int a = 2;
    int b = 100000;
    int c = 199999;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int a = 2000;
    int b = 100;
    int c = 200000;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
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
    int a = 99999;
    int b = 9;
    int c = 9;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 99998;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int a = 50000;
    int b = 50000;
    int c = 115733;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 57865;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int a = 4;
    int b = 5;
    int c = 999983;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1992;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int a = 1100;
    int b = 10;
    int c = 11000;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
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
    int a = 999999;
    int b = 999998;
    int c = 1000000;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 999998;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int a = 2200;
    int b = 10;
    int c = 22000;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int a = 1;
    int b = 600000;
    int c = 600000;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int a = 1;
    int b = 10;
    int c = 1;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int a = 999997;
    int b = 999998;
    int c = 1;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1999993;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int a = 10000;
    int b = 10000;
    int c = 1;
    CorrectMultiplicationTwo* pObj = new CorrectMultiplicationTwo();
    clock_t start = clock();
    int result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 19998;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23027210&rd=14547&pm=11609
********************************************************************************
#include <cstdio> 
#include <cstring> 
#include <iostream> 
#include <algorithm> 
using namespace std; 
 
class CorrectMultiplicationTwo{ 
    public: 
        int getMinimum(int a,int b,int c){ 
            int ans=a+b+c; 
            for(int i=1;i<=1000000;++i) 
                for(int j=1;j<=1000000;++j){ 
                    int tmp=abs(i-a)+abs(j-b)+abs(i*j-c); 
                    if(ans>tmp)ans=tmp; 
                    if(i*j>c)break; 
                } 
            return ans; 
        } 
};

********************************************************************************
*******************************************************************************/