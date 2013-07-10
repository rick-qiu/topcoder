/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11604
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

class CorrectMultiplication {
public:
    long getMinimum(int a, int b, int c);
};

long CorrectMultiplication::getMinimum(int a, int b, int c) {
    long ret;
    return ret;
}


int test0() {
    int a = 19;
    int b = 28;
    int c = 522;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
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
    int a = 10;
    int b = 30;
    int c = 500;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int a = 11111;
    int b = 11111;
    int c = 123454321;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
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
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1089;
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
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 24;
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
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
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
    int a = 1;
    int b = 1;
    int c = 2;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
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
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
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
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
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
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
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
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
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
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
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
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
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
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
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
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
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
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
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
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
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
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
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
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
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
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
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
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
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
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
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
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
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
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
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
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
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
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
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
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
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
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
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
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
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
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
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
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
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
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
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
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
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
    int c = 1000000000;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 63248;
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
    int b = 1000000000;
    int c = 1;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999;
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
    int b = 1000000000;
    int c = 1000000000;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int a = 1000000000;
    int b = 1;
    int c = 1;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int a = 1000000000;
    int b = 1;
    int c = 1000000000;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int a = 1000000000;
    int b = 1000000000;
    int c = 1;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1999999998;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int a = 1000000000;
    int b = 1000000000;
    int c = 1000000000;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999;
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
    int b = 249999999;
    int c = 999999994;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int a = 249999999;
    int b = 4;
    int c = 999999994;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
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
    int b = 249999999;
    int c = 999999995;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int a = 249999999;
    int b = 4;
    int c = 999999995;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
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
    int b = 249999999;
    int c = 999999996;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int a = 249999999;
    int b = 4;
    int c = 999999996;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
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
    int b = 249999999;
    int c = 999999997;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int a = 249999999;
    int b = 4;
    int c = 999999997;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
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
    int b = 249999999;
    int c = 999999998;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int a = 249999999;
    int b = 4;
    int c = 999999998;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
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
    int a = 1;
    int b = 40610703;
    int c = 81226365;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 2481;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int a = 37194;
    int b = 1;
    int c = 57354072;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1736;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int a = 6711;
    int b = 17546;
    int c = 117899381;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 15;
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
    int b = 1071;
    int c = 57133;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 60;
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
    int b = 1275;
    int c = 9343200;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 4845;
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
    int b = 392;
    int c = 785;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
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
    int a = 13647;
    int b = 30611;
    int c = 413590271;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 196;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int a = 112760;
    int b = 6385;
    int c = 481468;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 13988;
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
    int b = 440880;
    int c = 439789;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1091;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int a = 121247;
    int b = 1;
    int c = 2173902;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 498;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int a = 4517412;
    int b = 1;
    int c = 9034824;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int a = 87231;
    int b = 213;
    int c = 19016368;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 15;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int a = 39185;
    int b = 1;
    int c = 32055;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 7130;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int a = 2;
    int b = 35107548;
    int c = 70215096;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int a = 3;
    int b = 15;
    int c = 50;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int a = 409;
    int b = 498;
    int c = 202036;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 14;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int a = 24;
    int b = 8194;
    int c = 196608;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int a = 2;
    int b = 4361992;
    int c = 8723983;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int a = 28725;
    int b = 1;
    int c = 59335140;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 2184;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int a = 1777;
    int b = 1;
    int c = 9;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1768;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int a = 482462951;
    int b = 1;
    int c = 482462948;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int a = 61736;
    int b = 7165;
    int c = 402888976;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 799;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int a = 6618;
    int b = 44513;
    int c = 133539;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 6615;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int a = 245986;
    int b = 57;
    int c = 14020697;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 17;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int a = 2053;
    int b = 157669;
    int c = 35003621;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1843;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int a = 905932;
    int b = 444;
    int c = 393171450;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 17;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int a = 4643;
    int b = 5632;
    int c = 115328;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 4765;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int a = 528029;
    int b = 606;
    int c = 1;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 528633;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int a = 25;
    int b = 19011;
    int c = 22;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 19013;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int a = 736455372;
    int b = 150239;
    int c = 366;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 736605244;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int a = 65857;
    int b = 7605;
    int c = 6862;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 66599;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int a = 481405;
    int b = 218774;
    int c = 130336;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 569842;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int a = 2509341;
    int b = 50445925;
    int c = 2476121;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 50479144;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int a = 47045905;
    int b = 47084965;
    int c = 47045897;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 47084972;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int a = 893871809;
    int b = 893871784;
    int c = 893871760;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 893871832;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int a = 9744507;
    int b = 950;
    int c = 1;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 9745455;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int a = 1510863;
    int b = 71115;
    int c = 23;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1581954;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int a = 27064;
    int b = 2629;
    int c = 367;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 29325;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int a = 353641;
    int b = 1525;
    int c = 6863;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 348302;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int a = 71825;
    int b = 18786;
    int c = 130337;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 25441;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int a = 64618380;
    int b = 353732;
    int c = 2476121;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 62495990;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int a = 525885918;
    int b = 6720850;
    int c = 47045897;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 485560870;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int a = 149950356;
    int b = 129464957;
    int c = 893871761;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 130436681;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int a = 999999999;
    int b = 999999999;
    int c = 999999999;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 999999998;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int a = 891236747;
    int b = 891236747;
    int c = 891236747;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 891236746;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int a = 900660000;
    int b = 900660000;
    int c = 900660000;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 900659999;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int a = 139826;
    int b = 3008;
    int c = 420593474;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 127;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int a = 700000000;
    int b = 1000;
    int c = 999999999;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 200000999;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int a = 987654321;
    int b = 987654321;
    int c = 2;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1975308639;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int a = 65;
    int b = 6;
    int c = 46;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 24;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int a = 1;
    int b = 1;
    int c = 999999999;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 63249;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int a = 999999999;
    int b = 1;
    int c = 1000000000;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int a = 1000000000;
    int b = 100000;
    int c = 1;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1000099998;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int a = 1000000000;
    int b = 1000000000;
    int c = 1234;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1999998765;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int a = 999999999;
    int b = 10000;
    int c = 1000000000;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 10000;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int a = 999999937;
    int b = 999999929;
    int c = 999999893;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 999999972;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int a = 100000;
    int b = 100000;
    int c = 1;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 199998;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int a = 123456789;
    int b = 987654321;
    int c = 918273645;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 192837464;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int a = 100000000;
    int b = 100000000;
    int c = 100000000;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 99999999;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int a = 999999999;
    int b = 999999999;
    int c = 1;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1999999996;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int a = 609;
    int b = 254;
    int c = 593182807;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 47865;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int a = 500000000;
    int b = 1000000000;
    int c = 1000000000;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 499999999;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int a = 500000000;
    int b = 2;
    int c = 1000000000;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int a = 673961459;
    int b = 51099236;
    int c = 795;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 725059899;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int a = 10000;
    int b = 2;
    int c = 1000000000;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 53248;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int a = 3501;
    int b = 3501;
    int c = 12260501;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int a = 5;
    int b = 15;
    int c = 1000000000;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 63230;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int a = 5000000;
    int b = 999999999;
    int c = 999999999;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 4999999;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int a = 999999997;
    int b = 4877544;
    int c = 475548554;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 529328986;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int a = 200000000;
    int b = 300000000;
    int c = 1000000000;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 233333331;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int a = 1000000;
    int b = 1000;
    int c = 1000000000;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int a = 30000;
    int b = 10000;
    int c = 300059991;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int a = 100000000;
    int b = 2;
    int c = 100000000;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int a = 100000;
    int b = 100;
    int c = 100000;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 99;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int a = 999123998;
    int b = 1000000000;
    int c = 987999857;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1011124140;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int a = 399;
    int b = 522;
    int c = 999999998;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 62331;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int a = 11;
    int b = 2;
    int c = 1;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int a = 500000;
    int b = 300000;
    int c = 1000000000;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 298000;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int a = 1000000000;
    int b = 1;
    int c = 999999999;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int a = 1000000000;
    int b = 999999999;
    int c = 999999998;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int a = 1000000000;
    int b = 999999997;
    int c = 999999997;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int a = 999999999;
    int b = 1000000000;
    int c = 1000000000;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 999999998;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int a = 1000000000;
    int b = 1000000000;
    int c = 10000;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1999989999;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int a = 10000000;
    int b = 100000000;
    int c = 1000000000;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 9999990;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int a = 1009000;
    int b = 9000;
    int c = 1000000000;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 8353;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int a = 310101;
    int b = 22;
    int c = 999999999;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 3581;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int a = 23658;
    int b = 42269;
    int c = 1000000000;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int a = 2;
    int b = 2;
    int c = 1000000000;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 63246;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int a = 20000;
    int b = 20000;
    int c = 400000300;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 300;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int a = 7;
    int b = 51;
    int c = 2;
    CorrectMultiplication* pObj = new CorrectMultiplication();
    clock_t start = clock();
    long result = pObj->getMinimum(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 55;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22074760&rd=14547&pm=11604
********************************************************************************
#include <algorithm>
#include <iostream>
#include <complex>
#include <numeric>
#include <sstream>
#include <cstring>
#include <bitset>
#include <vector>
#include <cmath>
#include <ctime>
#include <deque>
#include <stack>
#include <queue>
#include <list>
#include <map>
#include <set>
 
using namespace std;using namespace std;using namespace std;using namespace std;using namespace std;using namespace std;using namespace std;using namespace std;using namespace std;using namespace std;using namespace std;using namespace std;using namespace std;using namespace std;using namespace std;using namespace std;using namespace std;using namespace std;using namespace std;using namespace std;using namespace std;using namespace std;using namespace std;using namespace std;using namespace std;using namespace std;using namespace std;using namespace std;using namespace std;using namespace std;using namespace std;using namespace std;using namespace std;using namespace std;using namespace std;using namespace std;using namespace std;using namespace std;using namespace std;using namespace std;using namespace std;using namespace std;using namespace std;using namespace std;
 
#define FOR(i,a,b)    for(int i(a);i<b;++i)
#define REP(i,n)    FOR(i,0,n)
#define CL(a,x)      memset(a,x,sizeof(a))
#define all(ar)      (ar).begin(),(ar).end()
#define sz(a)      int((a).size())
#define foreach(x,a)  if(bool __B=true)for(const typeof(a)&__A=a;__B;__B=false)for(typeof(const_cast<typeof(a)&>(__A).begin())__I=const_cast<typeof(a)&>(__A).begin();__B && (__B=false,__I!=const_cast<typeof(a)&>(__A).end());++__I)for(x=*__I;!__B;__B=true)
#define cstr(x)      ((stringstream&)((stringstream()<<(x)))).str()
#define pb        push_back
#define X        first
#define Y        second
typedef long long     ll;
typedef vector<int>    vi;
typedef pair<int,int>  pii;
 
struct CorrectMultiplication {long long getMinimum(int, int, int);};
 
long long CorrectMultiplication::getMinimum(int a, int b, int c) {
  ll res = -1ull/2;
  for (ll x = 1; x <= 100000; ++x) {
    ll y = c / x - 10;
    REP (k, 20) {
      ll z = x * y;
      if (y > 0) {
        res = min(res, abs(x - a) + abs(y - b) + abs(z - c));
        res = min(res, abs(y - a) + abs(x - b) + abs(z - c));
      }
      ++y;
    }
  }
  return res;
}
 
/** testing-code **/
// Powered by [KawigiEdit] 2.0! (edited by Rizvanov)

********************************************************************************
*******************************************************************************/