/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6412
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

class Conditional {
public:
    double probability(int nDice, int maxSide, int v, int theSum);
};

double Conditional::probability(int nDice, int maxSide, int v, int theSum) {
    double ret;
    return ret;
}


int test0() {
    int nDice = 2;
    int maxSide = 6;
    int v = 6;
    int theSum = 12;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.09090909090909091;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int nDice = 2;
    int maxSide = 6;
    int v = 6;
    int theSum = 6;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int nDice = 1;
    int maxSide = 9;
    int v = 3;
    int theSum = 3;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int nDice = 2;
    int maxSide = 3;
    int v = 2;
    int theSum = 4;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int nDice = 50;
    int maxSide = 50;
    int v = 50;
    int theSum = 1;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999999999967;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int nDice = 50;
    int maxSide = 50;
    int v = 1;
    int theSum = 1234;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6065038966315277;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int nDice = 3;
    int maxSide = 1;
    int v = 1;
    int theSum = 2;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int nDice = 3;
    int maxSide = 1;
    int v = 1;
    int theSum = 3;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int nDice = 3;
    int maxSide = 2;
    int v = 2;
    int theSum = 6;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.14285714285714285;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int nDice = 50;
    int maxSide = 2;
    int v = 2;
    int theSum = 76;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.44386241367039186;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int nDice = 50;
    int maxSide = 2;
    int v = 1;
    int theSum = 75;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5561375863296081;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int nDice = 50;
    int maxSide = 30;
    int v = 1;
    int theSum = 1300;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5399419266958173E-23;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int nDice = 5;
    int maxSide = 30;
    int v = 1;
    int theSum = 75;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.27533413164043663;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int nDice = 1;
    int maxSide = 4;
    int v = 4;
    int theSum = 3;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int nDice = 20;
    int maxSide = 4;
    int v = 4;
    int theSum = 27;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999720718009;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int nDice = 9;
    int maxSide = 6;
    int v = 5;
    int theSum = 31;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6268537748023865;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int nDice = 31;
    int maxSide = 40;
    int v = 20;
    int theSum = 367;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999930562338223;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int nDice = 14;
    int maxSide = 13;
    int v = 11;
    int theSum = 151;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 5.453029923318587E-5;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int nDice = 29;
    int maxSide = 13;
    int v = 10;
    int theSum = 297;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 7.795014737059219E-7;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int nDice = 34;
    int maxSide = 26;
    int v = 22;
    int theSum = 563;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.010441662002489594;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int nDice = 19;
    int maxSide = 17;
    int v = 7;
    int theSum = 232;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0013834917661672413;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int nDice = 12;
    int maxSide = 38;
    int v = 14;
    int theSum = 388;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 5.775198675184631E-7;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int nDice = 39;
    int maxSide = 10;
    int v = 2;
    int theSum = 362;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 7.316645457324389E-23;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int nDice = 39;
    int maxSide = 5;
    int v = 5;
    int theSum = 108;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8585970614298535;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int nDice = 24;
    int maxSide = 37;
    int v = 19;
    int theSum = 231;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999975047685218;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int nDice = 26;
    int maxSide = 41;
    int v = 9;
    int theSum = 830;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 8.861924833662333E-8;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int nDice = 3;
    int maxSide = 48;
    int v = 21;
    int theSum = 40;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9321908701433004;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int nDice = 48;
    int maxSide = 26;
    int v = 14;
    int theSum = 99;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999999999993;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int nDice = 21;
    int maxSide = 42;
    int v = 19;
    int theSum = 862;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int nDice = 49;
    int maxSide = 32;
    int v = 10;
    int theSum = 173;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0000000000000002;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int nDice = 34;
    int maxSide = 30;
    int v = 7;
    int theSum = 614;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.03345959839326994;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int nDice = 46;
    int maxSide = 2;
    int v = 1;
    int theSum = 69;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5585020439387954;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int nDice = 22;
    int maxSide = 11;
    int v = 1;
    int theSum = 75;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999642798272311;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int nDice = 37;
    int maxSide = 2;
    int v = 1;
    int theSum = 6;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int nDice = 30;
    int maxSide = 29;
    int v = 11;
    int theSum = 835;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 1.082803357398144E-30;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int nDice = 23;
    int maxSide = 9;
    int v = 1;
    int theSum = 122;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.27422716822202015;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int nDice = 15;
    int maxSide = 49;
    int v = 25;
    int theSum = 353;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6623121652697722;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int nDice = 7;
    int maxSide = 49;
    int v = 5;
    int theSum = 149;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5868050160689797;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int nDice = 24;
    int maxSide = 8;
    int v = 8;
    int theSum = 7;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0000000000000002;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int nDice = 22;
    int maxSide = 34;
    int v = 25;
    int theSum = 486;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.017276761759106717;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int nDice = 32;
    int maxSide = 44;
    int v = 35;
    int theSum = 877;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.018148482714944094;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int nDice = 38;
    int maxSide = 42;
    int v = 36;
    int theSum = 1401;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 2.1820394590906484E-18;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int nDice = 34;
    int maxSide = 46;
    int v = 41;
    int theSum = 174;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999999999998;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int nDice = 1;
    int maxSide = 8;
    int v = 8;
    int theSum = 3;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int nDice = 48;
    int maxSide = 50;
    int v = 27;
    int theSum = 235;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999999999989;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int nDice = 14;
    int maxSide = 19;
    int v = 11;
    int theSum = 211;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 1.32940448169323E-4;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int nDice = 12;
    int maxSide = 18;
    int v = 11;
    int theSum = 49;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999827581018343;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int nDice = 50;
    int maxSide = 4;
    int v = 4;
    int theSum = 114;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9270471837179275;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int nDice = 9;
    int maxSide = 38;
    int v = 7;
    int theSum = 310;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 2.2975880608148006E-12;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int nDice = 41;
    int maxSide = 32;
    int v = 18;
    int theSum = 1226;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 4.284894444082593E-30;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int nDice = 44;
    int maxSide = 33;
    int v = 4;
    int theSum = 448;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999993000184015;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int nDice = 12;
    int maxSide = 38;
    int v = 7;
    int theSum = 375;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 2.020161856917486E-6;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int nDice = 26;
    int maxSide = 34;
    int v = 2;
    int theSum = 220;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999992301535131;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int nDice = 12;
    int maxSide = 37;
    int v = 21;
    int theSum = 180;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9196250744358586;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int nDice = 49;
    int maxSide = 38;
    int v = 38;
    int theSum = 998;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.33174712168162546;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int nDice = 50;
    int maxSide = 50;
    int v = 48;
    int theSum = 1666;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 7.534739841501312E-5;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int nDice = 50;
    int maxSide = 50;
    int v = 25;
    int theSum = 200;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999999999997;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int nDice = 50;
    int maxSide = 50;
    int v = 1;
    int theSum = 1;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999999999992;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int nDice = 50;
    int maxSide = 50;
    int v = 38;
    int theSum = 1200;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.792839402396853;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int nDice = 50;
    int maxSide = 50;
    int v = 50;
    int theSum = 1200;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.813885451334627;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int nDice = 50;
    int maxSide = 50;
    int v = 1;
    int theSum = 1250;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5443439491287221;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int nDice = 50;
    int maxSide = 50;
    int v = 35;
    int theSum = 1250;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6199599173066064;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int nDice = 50;
    int maxSide = 50;
    int v = 34;
    int theSum = 1978;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9798976937437787E-13;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int nDice = 50;
    int maxSide = 50;
    int v = 6;
    int theSum = 100;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999999999988;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int nDice = 50;
    int maxSide = 50;
    int v = 50;
    int theSum = 2500;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 1.770755296785606E-85;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int nDice = 50;
    int maxSide = 50;
    int v = 30;
    int theSum = 1000;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9970818543000018;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int nDice = 50;
    int maxSide = 50;
    int v = 50;
    int theSum = 2499;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 9.030852013606592E-84;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int nDice = 50;
    int maxSide = 50;
    int v = 32;
    int theSum = 1349;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2463888390005133;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int nDice = 50;
    int maxSide = 50;
    int v = 30;
    int theSum = 1200;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7788946791076431;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int nDice = 50;
    int maxSide = 50;
    int v = 21;
    int theSum = 200;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999999999992;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int nDice = 50;
    int maxSide = 50;
    int v = 23;
    int theSum = 1250;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.59342105224914;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int nDice = 49;
    int maxSide = 47;
    int v = 23;
    int theSum = 1230;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2839462500117616;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int nDice = 50;
    int maxSide = 50;
    int v = 50;
    int theSum = 2000;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 4.2082315493315665E-14;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int nDice = 50;
    int maxSide = 50;
    int v = 50;
    int theSum = 1119;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9555720210984059;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int nDice = 50;
    int maxSide = 50;
    int v = 30;
    int theSum = 465;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999999999996;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int nDice = 50;
    int maxSide = 50;
    int v = 25;
    int theSum = 1500;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.01319355483009048;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int nDice = 33;
    int maxSide = 16;
    int v = 16;
    int theSum = 474;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 2.1789896914338626E-16;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int nDice = 50;
    int maxSide = 50;
    int v = 25;
    int theSum = 300;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999999999997;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int nDice = 50;
    int maxSide = 50;
    int v = 17;
    int theSum = 997;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9966371988641942;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int nDice = 50;
    int maxSide = 50;
    int v = 35;
    int theSum = 1300;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4259162818274663;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int nDice = 50;
    int maxSide = 50;
    int v = 1;
    int theSum = 1000;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9954527270692969;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int nDice = 50;
    int maxSide = 30;
    int v = 20;
    int theSum = 1500;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int nDice = 50;
    int maxSide = 50;
    int v = 48;
    int theSum = 1666;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 7.534739841501312E-5;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int nDice = 50;
    int maxSide = 50;
    int v = 25;
    int theSum = 200;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999999999997;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int nDice = 50;
    int maxSide = 50;
    int v = 1;
    int theSum = 1;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999999999992;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int nDice = 50;
    int maxSide = 50;
    int v = 38;
    int theSum = 1200;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.792839402396853;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int nDice = 50;
    int maxSide = 50;
    int v = 50;
    int theSum = 1200;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.813885451334627;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int nDice = 50;
    int maxSide = 50;
    int v = 1;
    int theSum = 1250;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5443439491287221;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int nDice = 50;
    int maxSide = 50;
    int v = 35;
    int theSum = 1250;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6199599173066064;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int nDice = 50;
    int maxSide = 50;
    int v = 34;
    int theSum = 1978;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9798976937437787E-13;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int nDice = 50;
    int maxSide = 50;
    int v = 6;
    int theSum = 100;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999999999988;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int nDice = 50;
    int maxSide = 50;
    int v = 50;
    int theSum = 2500;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 1.770755296785606E-85;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int nDice = 50;
    int maxSide = 50;
    int v = 30;
    int theSum = 1000;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9970818543000018;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int nDice = 50;
    int maxSide = 50;
    int v = 50;
    int theSum = 2499;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 9.030852013606592E-84;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int nDice = 50;
    int maxSide = 50;
    int v = 32;
    int theSum = 1349;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2463888390005133;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int nDice = 50;
    int maxSide = 50;
    int v = 30;
    int theSum = 1200;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7788946791076431;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int nDice = 50;
    int maxSide = 50;
    int v = 21;
    int theSum = 200;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999999999992;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int nDice = 50;
    int maxSide = 50;
    int v = 23;
    int theSum = 1250;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.59342105224914;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int nDice = 49;
    int maxSide = 47;
    int v = 23;
    int theSum = 1230;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2839462500117616;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int nDice = 50;
    int maxSide = 50;
    int v = 50;
    int theSum = 2000;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 4.2082315493315665E-14;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int nDice = 50;
    int maxSide = 50;
    int v = 50;
    int theSum = 1119;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9555720210984059;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int nDice = 50;
    int maxSide = 50;
    int v = 30;
    int theSum = 465;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999999999996;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int nDice = 50;
    int maxSide = 50;
    int v = 25;
    int theSum = 1500;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.01319355483009048;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int nDice = 33;
    int maxSide = 16;
    int v = 16;
    int theSum = 474;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 2.1789896914338626E-16;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int nDice = 50;
    int maxSide = 50;
    int v = 25;
    int theSum = 300;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999999999997;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int nDice = 50;
    int maxSide = 50;
    int v = 17;
    int theSum = 997;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9966371988641942;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int nDice = 50;
    int maxSide = 50;
    int v = 35;
    int theSum = 1300;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4259162818274663;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int nDice = 50;
    int maxSide = 50;
    int v = 1;
    int theSum = 1000;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9954527270692969;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int nDice = 50;
    int maxSide = 30;
    int v = 20;
    int theSum = 1500;
    Conditional* pObj = new Conditional();
    clock_t start = clock();
    double result = pObj->probability(nDice, maxSide, v, theSum);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=2058177&rd=9825&pm=6412
********************************************************************************
#include <vector> 
#include <string> 
#include <algorithm> 
#include <iostream> 
#include <sstream> 
#include <cmath> 
 
using namespace std; 
 
double dp[51][2501][2]; 
 
class Conditional  {  
public:  
 
  double probability(int nDice, int maxSide, int v, int theSum) {  
    int i, j, k; 
    dp[0][0][1] = 0; 
    dp[0][0][0] = 1; 
    for (i = 1; i <= nDice; i++) { 
      for (j = i; j <= i * maxSide; j++) dp[i][j][0] = dp[i][j][1] = 0.0; 
      for (j = (i - 1); j <= (i - 1) * maxSide; j++) 
        for (k = 1; k <= maxSide; k++) { 
          if (k == v) { 
            dp[i][j + k][1] += dp[i - 1][j][0]; 
            dp[i][j + k][1] += dp[i - 1][j][1]; 
          } else { 
            dp[i][j + k][0] += dp[i - 1][j][0]; 
            dp[i][j + k][1] += dp[i - 1][j][1]; 
          } 
        } 
    } 
 
    double tot = 0, sum = 0; 
    for (j = nDice; j <= nDice * maxSide; j++) { 
      tot += dp[nDice][j][1]; 
      if (j >= theSum) sum += dp[nDice][j][1]; 
    } 
 
    return sum / tot; 
  }  
 
     
  
};  
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.2 [15-Oct-2005 modified by Revenger]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/