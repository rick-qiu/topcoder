/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8056
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

class SignificanceArithmetic {
public:
    string evaluate(string expression);
};

string SignificanceArithmetic::evaluate(string expression) {
    string ret;
    return ret;
}


int test0() {
    string expression = "2+2";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "4";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string expression = "1.234+0.000";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "1.234";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string expression = "1.234+0.006";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "1.240";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string expression = "12.57+2.6";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "15.2";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string expression = "5.50005+0";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "6";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string expression = "2.5+2";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "4";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string expression = "999999+0.900";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "1000000";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string expression = "1.0001+0.9999";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "2.0000";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string expression = "0.00+000";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "0";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string expression = "1.5+0";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "2";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string expression = "1.51+0";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "2";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string expression = "2.5+0";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "2";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string expression = "0.25+0";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "0";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string expression = "0.25+0.0";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "0.2";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string expression = "0.00001+0.00009";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "0.00010";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string expression = "0.0+0.0";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "0.0";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string expression = "0+0.84994";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "1";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string expression = "0.99+1.01";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "2.00";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string expression = "0.2+1.48";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "1.7";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string expression = "4.44+0.2";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "4.6";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string expression = "0.23+5.22501";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "5.46";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string expression = "1.3+0.25";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "1.6";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string expression = "1.3+0.35";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "1.6";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string expression = "0.99+0.01";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "1.00";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string expression = "0.2+0.48";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "0.7";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string expression = "0.2+0.44";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "0.6";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string expression = "0.23+0.22005";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "0.45";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string expression = "0.25+0.3";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "0.6";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string expression = "0.35+0.3";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "0.6";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string expression = "0+0";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "0";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string expression = "000+000";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "0";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string expression = "0+1";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "1";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string expression = "0+0.1";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "0";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string expression = "0+0.6";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "1";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string expression = "0+0.4";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "0";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string expression = "0.5001+0";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "1";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string expression = "0+0.5";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "0";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string expression = "01.98+0.02";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "2.00";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string expression = "05.2+2.6";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "7.8";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string expression = "0002.2+0.2";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "2.4";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string expression = "4.4505+00003.1";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "7.6";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string expression = "004.15+0.2";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "4.4";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string expression = "004.25+0.2";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "4.4";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string expression = "999999+999999";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "1999998";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string expression = "1+999999";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "1000000";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string expression = "123+456";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "579";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string expression = "009+0";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "9";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string expression = "500+00500";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "1000";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string expression = "999999+0.5";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "1000000";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string expression = "0.00000+01.0001";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "1.0001";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string expression = "0.00009+0.00001";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "0.00010";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string expression = "0.00000+0.00001";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "0.00001";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string expression = "6408.19+81482.1";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "87890.3";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string expression = "14122.3+601327";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "615449";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string expression = "5.77167+2154.46";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "2160.23";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string expression = "577964+0.89146";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "577965";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string expression = "64066+4706.74";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "68773";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string expression = "4.27071+795.405";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "799.676";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string expression = "60.3820+60.6559";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "121.0379";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string expression = "509834+9.70502";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "509844";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string expression = "1.84565+396875";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "396877";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string expression = "3.36085+6169.95";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "6173.31";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string expression = "0.4146+643.418";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "643.833";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string expression = "26.2826+1401.41";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "1427.69";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string expression = "202.563+92.2725";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "294.836";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string expression = "12800.9+13.9656";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "12814.9";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string expression = "82498.4+68.238";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "82566.6";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string expression = "85414+5.78276";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "85420";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string expression = "94311.4+36048";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "130359";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string expression = "39.3798+286609";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "286648";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string expression = "18.2227+4.94041";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "23.1631";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string expression = "136133+158.14";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "136291";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string expression = "258.812+8812.92";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "9071.73";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string expression = "91.3922+47.871";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "139.263";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string expression = "94.9966+71.6394";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "166.6360";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string expression = "423.712+67.1592";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "490.871";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string expression = "9.48534+438951";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "438960";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string expression = "12.7528+8605.39";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "8618.14";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string expression = "3950.67+12578.0";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "16528.7";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string expression = "1624.91+4.92270";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "1629.83";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string expression = "4.41672+8311.43";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "8315.85";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string expression = "951.320+454.213";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "1405.533";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string expression = "665.880+88061";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "88727";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string expression = "9.25400+27.3379";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "36.5919";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string expression = "12857.4+16976.4";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "29833.8";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string expression = "74760.5+96.72";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "74857.2";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string expression = "7465.61+949.587";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "8415.20";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string expression = "4.55918+4703.31";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "4707.87";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string expression = "78.8214+500.17";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "578.99";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string expression = "7.82339+869161";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "869169";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string expression = "3282.2+2.81021";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "3285.0";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string expression = "776.94+0.49295";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "777.43";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string expression = "501.798+7.7792";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "509.577";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string expression = "358.50+8.12127";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "366.62";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string expression = "79265.7+6076.86";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "85342.6";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string expression = "27488.1+96424.3";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "123912.4";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string expression = "163836+575.376";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "164411";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string expression = "47.4684+477153";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "477200";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string expression = "7497.55+1.20069";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "7498.75";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string expression = "716.702+9485.71";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "10202.41";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string expression = "77893.1+697.379";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "78590.5";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string expression = "1992.86+41402.6";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "43395.5";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string expression = "27432.6+794.199";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "28226.8";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string expression = "21761.7+93.3480";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "21855.0";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string expression = "995389+5482.6";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "1000872";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string expression = "792.825+8884.66";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "9677.48";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string expression = "326885+58057.6";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "384943";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string expression = "329757+861.239";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "330618";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string expression = "0.36178+6412.73";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "6413.09";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string expression = "3559.4+84.3855";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "3643.8";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string expression = "51346.0+4621.38";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "55967.4";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    string expression = "1.23301+494943";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "494944";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    string expression = "99+0.6";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "100";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    string expression = "0200+000.4";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "200";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    string expression = "346+0.51";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "347";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    string expression = "345+0.51";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "346";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    string expression = "346+0.5001";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "347";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    string expression = "345+0.5001";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "346";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    string expression = "123+0.5";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "124";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    string expression = "124+0.5";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "124";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    string expression = "123+0.50";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "124";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    string expression = "124+0.50";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "124";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    string expression = "124+00.5000";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "124";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    string expression = "123+00.5000";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "124";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    string expression = "74508.2+724.399";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "75232.6";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    string expression = "22378.0+8695.94";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "31073.9";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    string expression = "552.983+274.304";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "827.287";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    string expression = "71.9902+3.64956";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "75.6398";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    string expression = "513072+8.83621";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "513081";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    string expression = "1241.61+85.984";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "1327.59";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    string expression = "18.2368+89.482";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "107.719";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    string expression = "9837.37+12063.7";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "21901.1";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    string expression = "31409+49.5775";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "31459";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    string expression = "5435.69+83.7178";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "5519.41";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    string expression = "0.04+0.0";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "0.0";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    string expression = "0.04+0.02";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "0.06";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    string expression = "983.17+76.8";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "1060.0";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    string expression = "0.52+0";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "1";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    string expression = "0.0053+00.02";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "0.03";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    string expression = "0.00053+00.002";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "0.003";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    string expression = "7.4772+7.62";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "15.10";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    string expression = "0.00050+00.003";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "0.004";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    string expression = "0.00050+00.002";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "0.002";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    string expression = "3.00050+02.002";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "5.002";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    string expression = "0.1202+0.12647";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "0.2467";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    string expression = "1.257+15.56";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "16.82";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    string expression = "10.885+10.11";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "21.00";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    string expression = "9999.18+0.8";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "10000.0";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    string expression = "2.35+0.1";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "2.4";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    string expression = "2.25+2.2";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "4.4";
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    string expression = "14.502+0";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "15";
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    string expression = "3.5+2";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "6";
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    string expression = "4.00001+5.55554";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "9.55555";
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    string expression = "97.951+2.0";
    SignificanceArithmetic* pObj = new SignificanceArithmetic();
    clock_t start = clock();
    string result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "100.0";
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22655153&rd=10775&pm=8056
********************************************************************************
#include<string>
#include<vector>
#include<math.h>
#include<sstream>
using namespace std;
class SignificanceArithmetic{
  public:
  string evaluate(string expression);
};
 
string SignificanceArithmetic::evaluate(string expression){
  int len1=0,len2=0;
  bool point=false;
  int i=0;
  long long val1=0,val2=0;
  for(;expression[i]!='+';i++)
    if(expression[i]=='.')
      point=true;
    else{
      val1=val1*10+(expression[i]-'0');
      if(point)len1++;
    }
  point=false;
  for(i++;i<expression.length();i++)
    if(expression[i]=='.')
      point=true;
    else{
      val2=val2*10+(expression[i]-'0');
      if(point)len2++;
    }
  int alen=abs(len1-len2);
  while(len1<len2){
    val1*=10;
    len1++;
  }
  while(len1>len2){
    val2*=10;
    len2++;
  }
  int shax=1;
  len1-=alen;
  while(alen){
    shax*=10;
    alen--;
  }
  val1+=val2;
  if(val1%shax>shax/2)
    val1+=shax;
  else if(shax>1&&val1%shax==shax/2&&((val1/shax)&1))
    val1+=shax;
  val1/=shax;
  shax=1;
  while(len1){
    shax*=10;
    len1--;
  }
  ostringstream res;
  res<<val1/shax;
  if(shax!=1){
    res<<'.';
    for(shax/=10;shax;shax/=10)
      res<<((val1/shax)%10);
  }
  return res.str();
}

********************************************************************************
*******************************************************************************/