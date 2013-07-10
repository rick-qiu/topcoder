/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11840
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

class RandomColoring {
public:
    double getProbability(int N, int maxR, int maxG, int maxB, int startR, int startG, int startB, int d1, int d2);
};

double RandomColoring::getProbability(int N, int maxR, int maxG, int maxB, int startR, int startG, int startB, int d1, int d2) {
    double ret;
    return ret;
}


int test0() {
    int N = 2;
    int maxR = 5;
    int maxG = 1;
    int maxB = 1;
    int startR = 2;
    int startG = 0;
    int startB = 0;
    int d1 = 0;
    int d2 = 1;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 3;
    int maxR = 5;
    int maxG = 1;
    int maxB = 1;
    int startR = 2;
    int startG = 0;
    int startB = 0;
    int d1 = 0;
    int d2 = 1;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.22222222222222227;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 7;
    int maxR = 4;
    int maxG = 2;
    int maxB = 2;
    int startR = 0;
    int startG = 0;
    int startB = 0;
    int d1 = 3;
    int d2 = 3;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
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
    int N = 10;
    int maxR = 7;
    int maxG = 8;
    int maxB = 9;
    int startR = 1;
    int startG = 2;
    int startB = 3;
    int d1 = 0;
    int d2 = 10;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 10;
    int maxR = 7;
    int maxG = 8;
    int maxB = 9;
    int startR = 1;
    int startG = 2;
    int startB = 3;
    int d1 = 4;
    int d2 = 10;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.37826245943967396;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 3;
    int maxR = 3;
    int maxG = 2;
    int maxB = 2;
    int startR = 1;
    int startG = 0;
    int startB = 0;
    int d1 = 1;
    int d2 = 2;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.09090909090909148;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 40;
    int maxR = 50;
    int maxG = 50;
    int maxB = 50;
    int startR = 0;
    int startG = 0;
    int startB = 0;
    int d1 = 0;
    int d2 = 50;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 40;
    int maxR = 50;
    int maxG = 50;
    int maxB = 50;
    int startR = 49;
    int startG = 0;
    int startB = 0;
    int d1 = 1;
    int d2 = 50;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 7.999999162722319E-6;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 40;
    int maxR = 50;
    int maxG = 50;
    int maxB = 50;
    int startR = 0;
    int startG = 49;
    int startB = 0;
    int d1 = 2;
    int d2 = 50;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 6.400528043573172E-5;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 40;
    int maxR = 50;
    int maxG = 50;
    int maxB = 50;
    int startR = 0;
    int startG = 0;
    int startB = 49;
    int d1 = 3;
    int d2 = 20;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9363916743415929;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 40;
    int maxR = 50;
    int maxG = 50;
    int maxB = 50;
    int startR = 49;
    int startG = 0;
    int startB = 49;
    int d1 = 5;
    int d2 = 15;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9768976795402184;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 40;
    int maxR = 50;
    int maxG = 50;
    int maxB = 50;
    int startR = 49;
    int startG = 49;
    int startB = 49;
    int d1 = 10;
    int d2 = 10;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9980932537435082;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 40;
    int maxR = 50;
    int maxG = 50;
    int maxB = 50;
    int startR = 3;
    int startG = 4;
    int startB = 5;
    int d1 = 0;
    int d2 = 50;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 40;
    int maxR = 50;
    int maxG = 50;
    int maxB = 50;
    int startR = 2;
    int startG = 6;
    int startB = 4;
    int d1 = 1;
    int d2 = 50;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 7.999999162605608E-6;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 40;
    int maxR = 50;
    int maxG = 50;
    int maxB = 50;
    int startR = 45;
    int startG = 3;
    int startB = 47;
    int d1 = 2;
    int d2 = 50;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 2.1599815802982012E-4;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 40;
    int maxR = 50;
    int maxG = 50;
    int maxB = 50;
    int startR = 45;
    int startG = 44;
    int startB = 7;
    int d1 = 3;
    int d2 = 20;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8494042621591069;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 40;
    int maxR = 50;
    int maxG = 50;
    int maxB = 50;
    int startR = 3;
    int startG = 1;
    int startB = 40;
    int d1 = 10;
    int d2 = 10;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.995285899775498;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 40;
    int maxR = 50;
    int maxG = 50;
    int maxB = 50;
    int startR = 46;
    int startG = 5;
    int startB = 48;
    int d1 = 5;
    int d2 = 15;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9565504879695093;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 40;
    int maxR = 50;
    int maxG = 50;
    int maxB = 50;
    int startR = 25;
    int startG = 25;
    int startB = 25;
    int d1 = 0;
    int d2 = 50;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 40;
    int maxR = 50;
    int maxG = 50;
    int maxB = 50;
    int startR = 24;
    int startG = 25;
    int startB = 25;
    int d1 = 1;
    int d2 = 50;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 7.999999162595684E-6;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 40;
    int maxR = 50;
    int maxG = 50;
    int maxB = 50;
    int startR = 25;
    int startG = 24;
    int startB = 25;
    int d1 = 2;
    int d2 = 50;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 2.159981580300001E-4;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 40;
    int maxR = 50;
    int maxG = 50;
    int maxB = 50;
    int startR = 25;
    int startG = 25;
    int startB = 24;
    int d1 = 3;
    int d2 = 20;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.333577561703687;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 40;
    int maxR = 50;
    int maxG = 50;
    int maxB = 50;
    int startR = 24;
    int startG = 24;
    int startB = 24;
    int d1 = 10;
    int d2 = 10;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.97034000737779;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 40;
    int maxR = 50;
    int maxG = 50;
    int maxB = 50;
    int startR = 24;
    int startG = 25;
    int startB = 24;
    int d1 = 5;
    int d2 = 15;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6548209778221126;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 40;
    int maxR = 50;
    int maxG = 50;
    int maxB = 50;
    int startR = 43;
    int startG = 18;
    int startB = 34;
    int d1 = 0;
    int d2 = 0;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 40;
    int maxR = 50;
    int maxG = 50;
    int maxB = 50;
    int startR = 16;
    int startG = 7;
    int startB = 24;
    int d1 = 1;
    int d2 = 1;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9885711963807836;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 40;
    int maxR = 50;
    int maxG = 50;
    int maxB = 50;
    int startR = 36;
    int startG = 47;
    int startB = 22;
    int d1 = 0;
    int d2 = 1;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.979045695376202;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 2;
    int maxR = 1;
    int maxG = 1;
    int maxB = 1;
    int startR = 0;
    int startG = 0;
    int startB = 0;
    int d1 = 0;
    int d2 = 0;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 2;
    int maxR = 1;
    int maxG = 1;
    int maxB = 1;
    int startR = 0;
    int startG = 0;
    int startB = 0;
    int d1 = 0;
    int d2 = 50;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
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
    int N = 39;
    int maxR = 1;
    int maxG = 1;
    int maxB = 1;
    int startR = 0;
    int startG = 0;
    int startB = 0;
    int d1 = 0;
    int d2 = 0;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 39;
    int maxR = 1;
    int maxG = 1;
    int maxB = 1;
    int startR = 0;
    int startG = 0;
    int startB = 0;
    int d1 = 0;
    int d2 = 50;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 4;
    int maxR = 6;
    int maxG = 9;
    int maxB = 7;
    int startR = 5;
    int startG = 7;
    int startB = 1;
    int d1 = 3;
    int d2 = 6;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.21716864069381273;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 2;
    int maxR = 5;
    int maxG = 7;
    int maxB = 10;
    int startR = 1;
    int startG = 3;
    int startB = 2;
    int d1 = 3;
    int d2 = 9;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 6;
    int maxR = 9;
    int maxG = 10;
    int maxB = 6;
    int startR = 3;
    int startG = 1;
    int startB = 3;
    int d1 = 3;
    int d2 = 8;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1801907458222012;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 39;
    int maxR = 10;
    int maxG = 8;
    int maxB = 7;
    int startR = 7;
    int startG = 6;
    int startB = 6;
    int d1 = 6;
    int d2 = 10;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.47441441587022387;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 37;
    int maxR = 10;
    int maxG = 10;
    int maxB = 8;
    int startR = 5;
    int startG = 6;
    int startB = 2;
    int d1 = 2;
    int d2 = 5;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.12399421390469781;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 40;
    int maxR = 8;
    int maxG = 10;
    int maxB = 10;
    int startR = 2;
    int startG = 4;
    int startB = 2;
    int d1 = 2;
    int d2 = 6;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.120270912547511;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 9;
    int maxR = 22;
    int maxG = 27;
    int maxB = 22;
    int startR = 4;
    int startG = 1;
    int startB = 1;
    int d1 = 9;
    int d2 = 19;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.34076526666192497;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 8;
    int maxR = 27;
    int maxG = 21;
    int maxB = 21;
    int startR = 16;
    int startG = 4;
    int startB = 15;
    int d1 = 12;
    int d2 = 12;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9075600949313886;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 4;
    int maxR = 27;
    int maxG = 20;
    int maxB = 28;
    int startR = 13;
    int startG = 11;
    int startB = 12;
    int d1 = 13;
    int d2 = 18;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.779708917067499;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 38;
    int maxR = 30;
    int maxG = 28;
    int maxB = 28;
    int startR = 17;
    int startG = 17;
    int startB = 27;
    int d1 = 2;
    int d2 = 11;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7206614061190684;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 39;
    int maxR = 29;
    int maxG = 29;
    int maxB = 22;
    int startR = 20;
    int startG = 8;
    int startB = 6;
    int d1 = 8;
    int d2 = 15;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.44663445031649157;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 38;
    int maxR = 28;
    int maxG = 23;
    int maxB = 25;
    int startR = 14;
    int startG = 11;
    int startB = 0;
    int d1 = 6;
    int d2 = 19;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.23443037657967256;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 7;
    int maxR = 45;
    int maxG = 48;
    int maxB = 41;
    int startR = 2;
    int startG = 19;
    int startB = 36;
    int d1 = 12;
    int d2 = 34;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.26122377825213083;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 2;
    int maxR = 49;
    int maxG = 44;
    int maxB = 47;
    int startR = 14;
    int startG = 26;
    int startB = 9;
    int d1 = 17;
    int d2 = 35;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 9;
    int maxR = 46;
    int maxG = 42;
    int maxB = 50;
    int startR = 29;
    int startG = 34;
    int startB = 21;
    int d1 = 25;
    int d2 = 33;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6312973156846686;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 40;
    int maxR = 47;
    int maxG = 40;
    int maxB = 43;
    int startR = 28;
    int startG = 22;
    int startB = 32;
    int d1 = 4;
    int d2 = 34;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0048251635344675175;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 37;
    int maxR = 45;
    int maxG = 49;
    int maxB = 48;
    int startR = 17;
    int startG = 28;
    int startB = 3;
    int d1 = 35;
    int d2 = 48;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7057262782124958;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 38;
    int maxR = 50;
    int maxG = 41;
    int maxB = 49;
    int startR = 3;
    int startG = 25;
    int startB = 6;
    int d1 = 3;
    int d2 = 28;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4998560722744719;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 37;
    int maxR = 39;
    int maxG = 10;
    int maxB = 26;
    int startR = 37;
    int startG = 5;
    int startB = 2;
    int d1 = 2;
    int d2 = 20;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4793340980108003;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 29;
    int maxR = 32;
    int maxG = 42;
    int maxB = 29;
    int startR = 0;
    int startG = 22;
    int startB = 8;
    int d1 = 7;
    int d2 = 29;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0940748277795792;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 33;
    int maxR = 48;
    int maxG = 16;
    int maxB = 8;
    int startR = 37;
    int startG = 11;
    int startB = 3;
    int d1 = 32;
    int d2 = 42;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 4;
    int maxR = 8;
    int maxG = 13;
    int maxB = 23;
    int startR = 1;
    int startG = 1;
    int startB = 8;
    int d1 = 2;
    int d2 = 38;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.011294159346762232;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 13;
    int maxR = 20;
    int maxG = 41;
    int maxB = 24;
    int startR = 18;
    int startG = 15;
    int startB = 2;
    int d1 = 24;
    int d2 = 49;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 20;
    int maxR = 7;
    int maxG = 44;
    int maxB = 34;
    int startR = 2;
    int startG = 14;
    int startB = 23;
    int d1 = 5;
    int d2 = 35;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.056017040270617054;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 31;
    int maxR = 34;
    int maxG = 16;
    int maxB = 29;
    int startR = 0;
    int startG = 7;
    int startB = 5;
    int d1 = 7;
    int d2 = 18;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5616457008826885;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 11;
    int maxR = 32;
    int maxG = 43;
    int maxB = 22;
    int startR = 14;
    int startG = 2;
    int startB = 14;
    int d1 = 20;
    int d2 = 48;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5230643752132742;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 39;
    int maxR = 1;
    int maxG = 1;
    int maxB = 31;
    int startR = 0;
    int startG = 0;
    int startB = 27;
    int d1 = 13;
    int d2 = 48;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5510884607734773;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 31;
    int maxR = 17;
    int maxG = 17;
    int maxB = 33;
    int startR = 7;
    int startG = 7;
    int startB = 8;
    int d1 = 19;
    int d2 = 46;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 38;
    int maxR = 44;
    int maxG = 4;
    int maxB = 2;
    int startR = 22;
    int startG = 1;
    int startB = 0;
    int d1 = 1;
    int d2 = 2;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7819124360920724;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 37;
    int maxR = 50;
    int maxG = 2;
    int maxB = 2;
    int startR = 20;
    int startG = 1;
    int startB = 1;
    int d1 = 2;
    int d2 = 4;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8556765905194399;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 32;
    int maxR = 42;
    int maxG = 3;
    int maxB = 2;
    int startR = 26;
    int startG = 2;
    int startB = 0;
    int d1 = 10;
    int d2 = 11;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7200588083436756;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 10;
    int maxR = 46;
    int maxG = 5;
    int maxB = 3;
    int startR = 15;
    int startG = 2;
    int startB = 2;
    int d1 = 8;
    int d2 = 21;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49484576859152135;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 11;
    int maxR = 5;
    int maxG = 49;
    int maxB = 4;
    int startR = 2;
    int startG = 31;
    int startB = 0;
    int d1 = 3;
    int d2 = 10;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5560094417114855;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 39;
    int maxR = 2;
    int maxG = 44;
    int maxB = 3;
    int startR = 0;
    int startG = 1;
    int startB = 2;
    int d1 = 1;
    int d2 = 10;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7564387154201265;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 4;
    int maxR = 3;
    int maxG = 4;
    int maxB = 43;
    int startR = 2;
    int startG = 2;
    int startB = 42;
    int d1 = 8;
    int d2 = 23;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4105061129503091;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 9;
    int maxR = 4;
    int maxG = 3;
    int maxB = 47;
    int startR = 2;
    int startG = 2;
    int startB = 5;
    int d1 = 2;
    int d2 = 4;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5011774955495318;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 35;
    int maxR = 42;
    int maxG = 41;
    int maxB = 3;
    int startR = 40;
    int startG = 2;
    int startB = 1;
    int d1 = 2;
    int d2 = 5;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9450650637615796;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 27;
    int maxR = 42;
    int maxG = 44;
    int maxB = 2;
    int startR = 3;
    int startG = 21;
    int startB = 1;
    int d1 = 1;
    int d2 = 6;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8910292041516622;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 36;
    int maxR = 41;
    int maxG = 2;
    int maxB = 49;
    int startR = 25;
    int startG = 1;
    int startB = 23;
    int d1 = 5;
    int d2 = 18;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.33994141933106703;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 35;
    int maxR = 47;
    int maxG = 5;
    int maxB = 40;
    int startR = 4;
    int startG = 2;
    int startB = 8;
    int d1 = 10;
    int d2 = 28;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.42901950565339647;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 23;
    int maxR = 3;
    int maxG = 50;
    int maxB = 40;
    int startR = 2;
    int startG = 1;
    int startB = 12;
    int d1 = 0;
    int d2 = 6;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8772500538648544;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 32;
    int maxR = 3;
    int maxG = 45;
    int maxB = 45;
    int startR = 2;
    int startG = 40;
    int startB = 32;
    int d1 = 6;
    int d2 = 7;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9601039433165297;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 39;
    int maxR = 50;
    int maxG = 1;
    int maxB = 1;
    int startR = 49;
    int startG = 0;
    int startB = 0;
    int d1 = 3;
    int d2 = 7;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.89708294553082;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 13;
    int maxR = 50;
    int maxG = 1;
    int maxB = 1;
    int startR = 49;
    int startG = 0;
    int startB = 0;
    int d1 = 17;
    int d2 = 34;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.689947154665351;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int N = 40;
    int maxR = 1;
    int maxG = 50;
    int maxB = 1;
    int startR = 0;
    int startG = 33;
    int startB = 0;
    int d1 = 2;
    int d2 = 22;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.24060150375511846;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int N = 7;
    int maxR = 1;
    int maxG = 50;
    int maxB = 1;
    int startR = 0;
    int startG = 5;
    int startB = 0;
    int d1 = 5;
    int d2 = 6;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int N = 39;
    int maxR = 1;
    int maxG = 1;
    int maxB = 50;
    int startR = 0;
    int startG = 0;
    int startB = 0;
    int d1 = 9;
    int d2 = 9;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int N = 18;
    int maxR = 1;
    int maxG = 1;
    int maxB = 50;
    int startR = 0;
    int startG = 0;
    int startB = 26;
    int d1 = 20;
    int d2 = 24;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5752870149251663;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int N = 14;
    int maxR = 49;
    int maxG = 50;
    int maxB = 1;
    int startR = 13;
    int startG = 31;
    int startB = 0;
    int d1 = 1;
    int d2 = 6;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8251230244691329;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int N = 39;
    int maxR = 50;
    int maxG = 49;
    int maxB = 1;
    int startR = 1;
    int startG = 44;
    int startB = 0;
    int d1 = 3;
    int d2 = 40;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.21671634944464319;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int N = 37;
    int maxR = 49;
    int maxG = 1;
    int maxB = 48;
    int startR = 25;
    int startG = 0;
    int startB = 46;
    int d1 = 0;
    int d2 = 2;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9288381880358486;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int N = 5;
    int maxR = 47;
    int maxG = 1;
    int maxB = 50;
    int startR = 0;
    int startG = 0;
    int startB = 0;
    int d1 = 8;
    int d2 = 13;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.874308849723263;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int N = 36;
    int maxR = 1;
    int maxG = 50;
    int maxB = 49;
    int startR = 0;
    int startG = 26;
    int startB = 23;
    int d1 = 1;
    int d2 = 3;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9484020123432241;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int N = 39;
    int maxR = 1;
    int maxG = 47;
    int maxB = 48;
    int startR = 0;
    int startG = 46;
    int startB = 46;
    int d1 = 45;
    int d2 = 50;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6049551880045907;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int N = 40;
    int maxR = 50;
    int maxG = 50;
    int maxB = 50;
    int startR = 12;
    int startG = 19;
    int startB = 18;
    int d1 = 3;
    int d2 = 5;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9790095941710725;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int N = 40;
    int maxR = 50;
    int maxG = 50;
    int maxB = 50;
    int startR = 12;
    int startG = 18;
    int startB = 19;
    int d1 = 3;
    int d2 = 5;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9790095941710683;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int N = 40;
    int maxR = 50;
    int maxG = 50;
    int maxB = 50;
    int startR = 12;
    int startG = 19;
    int startB = 19;
    int d1 = 3;
    int d2 = 5;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9795736307204372;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int N = 40;
    int maxR = 50;
    int maxG = 50;
    int maxB = 50;
    int startR = 12;
    int startG = 19;
    int startB = 18;
    int d1 = 3;
    int d2 = 6;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9690738249292322;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int N = 6;
    int maxR = 2;
    int maxG = 2;
    int maxB = 2;
    int startR = 0;
    int startG = 1;
    int startB = 1;
    int d1 = 1;
    int d2 = 1;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.12494793835901716;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int N = 25;
    int maxR = 2;
    int maxG = 2;
    int maxB = 2;
    int startR = 1;
    int startG = 0;
    int startB = 1;
    int d1 = 1;
    int d2 = 1;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.125;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int N = 38;
    int maxR = 2;
    int maxG = 2;
    int maxB = 2;
    int startR = 1;
    int startG = 1;
    int startB = 0;
    int d1 = 1;
    int d2 = 1;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.125;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int N = 39;
    int maxR = 2;
    int maxG = 2;
    int maxB = 2;
    int startR = 0;
    int startG = 1;
    int startB = 1;
    int d1 = 0;
    int d2 = 1;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int N = 6;
    int maxR = 2;
    int maxG = 2;
    int maxB = 2;
    int startR = 1;
    int startG = 0;
    int startB = 1;
    int d1 = 0;
    int d2 = 1;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int N = 25;
    int maxR = 2;
    int maxG = 2;
    int maxB = 2;
    int startR = 1;
    int startG = 1;
    int startB = 0;
    int d1 = 0;
    int d2 = 1;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int N = 40;
    int maxR = 49;
    int maxG = 48;
    int maxB = 47;
    int startR = 20;
    int startG = 21;
    int startB = 22;
    int d1 = 18;
    int d2 = 28;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.459691946914971;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int N = 40;
    int maxR = 40;
    int maxG = 45;
    int maxB = 50;
    int startR = 0;
    int startG = 0;
    int startB = 1;
    int d1 = 20;
    int d2 = 50;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.09671826641877793;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int N = 40;
    int maxR = 50;
    int maxG = 50;
    int maxB = 50;
    int startR = 13;
    int startG = 15;
    int startB = 17;
    int d1 = 20;
    int d2 = 50;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.32085447457047506;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int N = 40;
    int maxR = 50;
    int maxG = 50;
    int maxB = 50;
    int startR = 26;
    int startG = 25;
    int startB = 26;
    int d1 = 10;
    int d2 = 50;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.054061788408335;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int N = 40;
    int maxR = 50;
    int maxG = 50;
    int maxB = 50;
    int startR = 20;
    int startG = 21;
    int startB = 22;
    int d1 = 20;
    int d2 = 50;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4385170347665593;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int N = 40;
    int maxR = 50;
    int maxG = 50;
    int maxB = 50;
    int startR = 1;
    int startG = 1;
    int startB = 1;
    int d1 = 10;
    int d2 = 20;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9294944930812589;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int N = 40;
    int maxR = 50;
    int maxG = 50;
    int maxB = 50;
    int startR = 23;
    int startG = 18;
    int startB = 0;
    int d1 = 8;
    int d2 = 47;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.053615963891243235;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int N = 40;
    int maxR = 50;
    int maxG = 49;
    int maxB = 47;
    int startR = 20;
    int startG = 20;
    int startB = 20;
    int d1 = 10;
    int d2 = 30;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.08605175358662734;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int N = 40;
    int maxR = 50;
    int maxG = 50;
    int maxB = 50;
    int startR = 0;
    int startG = 0;
    int startB = 0;
    int d1 = 2;
    int d2 = 50;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 6.400528203524865E-5;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int N = 40;
    int maxR = 50;
    int maxG = 50;
    int maxB = 50;
    int startR = 1;
    int startG = 1;
    int startB = 1;
    int d1 = 30;
    int d2 = 50;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1996885313013972;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int N = 40;
    int maxR = 49;
    int maxG = 49;
    int maxB = 49;
    int startR = 0;
    int startG = 0;
    int startB = 0;
    int d1 = 25;
    int d2 = 26;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9616325712418037;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int N = 40;
    int maxR = 50;
    int maxG = 48;
    int maxB = 49;
    int startR = 49;
    int startG = 0;
    int startB = 35;
    int d1 = 12;
    int d2 = 24;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8037869330085015;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int N = 39;
    int maxR = 50;
    int maxG = 50;
    int maxB = 50;
    int startR = 31;
    int startG = 49;
    int startB = 23;
    int d1 = 1;
    int d2 = 49;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 7.999999162722319E-6;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int N = 40;
    int maxR = 50;
    int maxG = 50;
    int maxB = 50;
    int startR = 1;
    int startG = 0;
    int startB = 0;
    int d1 = 3;
    int d2 = 40;
    RandomColoring* pObj = new RandomColoring();
    clock_t start = clock();
    double result = pObj->getProbability(N, maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.41028449825339086;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=22840511&rd=14732&pm=11840
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
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
 
double dp[42][52][52][52];
 
double sum[52][52][52]; // R,G,B
 
int maxR, maxG, maxB;
 
int is(int l, int r, int L, int R) {
  l = max(l, L), r = min(r, R);
  if (l <= r)
    return r - l + 1;
  else
    return 0;
}
 
int count(int r, int g, int b, int d) {
  int ret = is(0, maxR - 1, r - d, r + d);
  ret *= is(0, maxG - 1, g - d, g + d);
  ret *= is(0, maxB - 1, b - d, b + d);
  return ret;
}
 
double calc(int l1, int r1, int l2, int r2, int l3, int r3) { //r,g,b
  double ret = 0;
 
  int MAX[] = { maxR, maxG, maxB };
  int L[] = { l1, l2, l3 }, R[] = { r1, r2, r3 };
 
  for (int i = 0; i < 3; ++i) {
    L[i] = max(L[i], 0);
    R[i] = min(R[i], MAX[i] - 1);
    if (L[i] > R[i])
      return 0;
  }
 
  for (int mask = 0; mask < 8; ++mask) {
    int w[3], sign = 1;
    for (int i = 0; i < 3; ++i) {
      if (mask >> i & 1) {
        w[i] = R[i];
      } else {
        w[i] = L[i] - 1;
        sign *= -1;
      }
    }
    if (w[0] >= 0 && w[1] >= 0 && w[2] >= 0)
      ret += sum[w[0]][w[1]][w[2]] * sign;
  }
 
  return ret;
}
 
class RandomColoring {
public:
  double getProbability(int N, int maxR, int maxG, int maxB, int startR, int startG, int startB, int d1, int d2) {
    memset(dp, 0, sizeof dp);
    ::maxR = maxR, ::maxB = maxB, ::maxG = maxG;
 
    dp[0][startR][startG][startB] = 1;
 
    --d1;
 
    for (int i = 0; i < N; ++i) {
 
      if (i + 1 < N) {
        for (int r = 0; r < maxR; ++r) {
          for (int g = 0; g < maxG; ++g) {
            for (int b = 0; b < maxB; ++b) {
              int cnt = count(r, g, b, d2) - count(r, g, b, d1);
              if (cnt > 0)
                dp[i][r][g][b] /= cnt;
              else
                dp[i][r][g][b] = 0;
            }
          }
        }
      }
 
      //make sum
 
      for (int r = 0; r < maxR; ++r) {
        for (int g = 0; g < maxG; ++g) {
          for (int b = 0; b < maxB; ++b) {
            sum[r][g][b] = dp[i][r][g][b];
            for (int mask = 1; mask < 8; ++mask) {
              int nr = r, ng = g, nb = b, sign = -1;
              if (mask & 1)
                --nr, sign *= -1;
              if (mask & 2)
                --ng, sign *= -1;
              if (mask & 4)
                --nb, sign *= -1;
              if (nr >= 0 && ng >= 0 && nb >= 0)
                sum[r][g][b] += sign * sum[nr][ng][nb];
            }
          }
        }
      }
 
      //calc next
      for (int r = 0; r < maxR; ++r) {
        for (int g = 0; g < maxG; ++g) {
          for (int b = 0; b < maxB; ++b) {
            dp[i + 1][r][g][b] = calc(r - d2, r + d2, g - d2, g + d2, b - d2, b + d2) - calc(r - d1, r + d1, g - d1, g + d1, b - d1, b + d1);
          }
        }
      }
    }
 
    return 1 - dp[N][startR][startG][startB];
  }
};
 
 
//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/