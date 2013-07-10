/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2868
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

class NoOrderOfOperations {
public:
    int evaluate(string expr);
};

int NoOrderOfOperations::evaluate(string expr) {
    int ret;
    return ret;
}


int test0() {
    string expr = "3+5*7";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string expr = "4-8*9*1";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
    clock_t end = clock();
    delete pObj;
    int expected = -36;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string expr = "0";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
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
    string expr = "1*2*3*4*5*6*7*8*9";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
    clock_t end = clock();
    delete pObj;
    int expected = 362880;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string expr = "5-7*9+2*0";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
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
    string expr = "9*9*9*9*9*9*9*9*9";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
    clock_t end = clock();
    delete pObj;
    int expected = 387420489;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string expr = "9+8*3*2*3";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
    clock_t end = clock();
    delete pObj;
    int expected = 306;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string expr = "5+0+8+2+1";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string expr = "1*9-3*3*7-9+5+1";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
    clock_t end = clock();
    delete pObj;
    int expected = 123;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string expr = "7*9*2*1";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
    clock_t end = clock();
    delete pObj;
    int expected = 126;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string expr = "7*9-2*0+2";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string expr = "4*4+7";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string expr = "8-5-4-7*2-9+6-2";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
    clock_t end = clock();
    delete pObj;
    int expected = -21;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string expr = "8*5-1+9-0+7*0-7";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
    clock_t end = clock();
    delete pObj;
    int expected = -7;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string expr = "6+2-3*3";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string expr = "6-4+1*1+6+6";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string expr = "3*0*5*8-2*9-1*3";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
    clock_t end = clock();
    delete pObj;
    int expected = -57;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string expr = "1-3*6-8+9+4-0-8";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
    clock_t end = clock();
    delete pObj;
    int expected = -15;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string expr = "1+5+5+3-9+9";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string expr = "5*6*9+3-2+9";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
    clock_t end = clock();
    delete pObj;
    int expected = 280;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string expr = "3+4+1+8-7*4";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string expr = "0+7-2*0";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
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
    string expr = "6-7";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string expr = "1+1*8+6*7-2-5+0";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
    clock_t end = clock();
    delete pObj;
    int expected = 147;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string expr = "6*5+0*1";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string expr = "5-1*3";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string expr = "6+4-7-9-4+3-5-0";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
    clock_t end = clock();
    delete pObj;
    int expected = -12;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string expr = "7+2+4+8*4+4-9";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string expr = "2+6*3*9*5+5-7+6";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
    clock_t end = clock();
    delete pObj;
    int expected = 1084;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string expr = "3-3*4+5*1+9-3-5";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string expr = "9+6*1";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string expr = "5-1-0";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string expr = "4+2*9";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string expr = "7+3-2-1+6-8-5+8";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string expr = "6-2+8-8*6";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string expr = "8*2+7-2";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string expr = "0*2-7-1+6*9-4";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
    clock_t end = clock();
    delete pObj;
    int expected = -22;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string expr = "8+0-2-8-0-1+3*9";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
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
    string expr = "2*7*7-4+1*2+4*8+8";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
    clock_t end = clock();
    delete pObj;
    int expected = 1560;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string expr = "5-4*2*9+8";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string expr = "2*6";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string expr = "5*6+3";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string expr = "4-8*9*1+5-2*3";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
    clock_t end = clock();
    delete pObj;
    int expected = -99;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string expr = "1*2*3*4*5*6*7*8*9";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
    clock_t end = clock();
    delete pObj;
    int expected = 362880;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string expr = "8";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string expr = "5";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string expr = "9*9*9*9*9*9*9*9";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
    clock_t end = clock();
    delete pObj;
    int expected = 43046721;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string expr = "5-7-4-6-7-8+2*4-3";
    NoOrderOfOperations* pObj = new NoOrderOfOperations();
    clock_t start = clock();
    int result = pObj->evaluate(expr);
    clock_t end = clock();
    delete pObj;
    int expected = -103;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8516621&rd=5075&pm=2868
********************************************************************************
#include <iostream>
#include <sstream>
#include <algorithm>
#include <queue>
#include <vector>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <math.h>
 
using namespace std;
 
#define REP(i,n) for(int i=0;i<(n);++i)
#define FOR(i,a,b) for(int i=(a);i<=(b);++i)
#define FORD(i,a,b) for(int i=(a);i>=(b);--i)
#define FOREACH(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();++i)
#define ALL(x) (x).begin(),(x).end()
const int INF = 1000000000;
typedef long long LL;
typedef vector<int> VI;
 
string joinStr(vector<string> v, string add=" "){
  string ret = "";
  for(int i=0; i<v.size()-1; i++){
    ret+=v[i]+add;
  }
  ret+=v[v.size()-1];
  return ret;
}
 
string stripStr(string s, string delim = " "){
string ret="";
while(s.size() > 0){
if(s.find(delim,0) != string::npos){
ret += s.substr(0,s.find(delim,0));
s.erase(0, s.find(delim,0) + delim.size());
}
else break;
}
if(s.size() > 0) ret += s;
return ret;
}
    
 
vector<string> splitStr(string s, string delim = " ", int times=2){
vector<string> ret;
while(s.size()>0 && ret.size() < times){
if(s.find(delim, 0) != string::npos){
ret.push_back(s.substr(0,s.find(delim, 0)));
s.erase(0,s.find(delim, 0)+delim.size());
}
else break;
}
if(s.size() > 0) ret.push_back(s);
return ret;
}
 
class NoOrderOfOperations {
public:
int evaluate(string expr) {
  int tot = expr[0]-'0';
  for(int i=1; i<expr.size(); i+=2){
    int n = expr[i+1]-'0';
    switch(expr[i]){
      case '+': tot+=n;
      break;
      case '-': tot-=n;
      break;
      case '*': tot*=n;
      break;
    }
  }
  return tot;
    
}
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/