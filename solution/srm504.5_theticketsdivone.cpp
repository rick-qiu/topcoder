/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11098
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

class TheTicketsDivOne {
public:
    double find(int n, int m);
};

double TheTicketsDivOne::find(int n, int m) {
    double ret;
    return ret;
}


int test0() {
    int n = 2;
    int m = 1;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4444444444444444;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 2;
    int m = 2;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5555555555555556;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 1;
    int m = 1;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
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
    int n = 3;
    int m = 2;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.31746031746031744;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 25;
    int m = 1;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16776527430800667;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 7;
    int m = 1;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.21272477008341567;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 40;
    int m = 26;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0017521393226481148;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 17;
    int m = 3;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.11993258942241557;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 43;
    int m = 27;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0014585205711715305;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 38;
    int m = 27;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0014625153332662843;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 23;
    int m = 10;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.03294600045355396;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 22;
    int m = 3;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1173214640737295;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 18;
    int m = 7;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.058145594919708644;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 37;
    int m = 4;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.09653754521315697;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 18;
    int m = 7;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.058145594919708644;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 12;
    int m = 4;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.10736589253163475;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 37;
    int m = 12;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.022469018416812463;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 7;
    int m = 1;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.21272477008341567;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 8;
    int m = 3;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.146740717545711;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 8;
    int m = 5;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.107905269308481;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 47;
    int m = 42;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 9.475790347815949E-5;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 44;
    int m = 29;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.001012810488300904;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 44;
    int m = 6;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.06699911122616958;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 47;
    int m = 32;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 5.85838661241397E-4;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 46;
    int m = 23;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.003021262465457692;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 44;
    int m = 15;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.01298868651151011;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 44;
    int m = 41;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 1.139030212404029E-4;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 46;
    int m = 37;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 2.35666564043745E-4;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 46;
    int m = 11;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.026925601755560444;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 45;
    int m = 31;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 7.033061884509057E-4;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 25;
    int m = 1;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16776527430800667;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 7;
    int m = 1;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.21272477008341567;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 40;
    int m = 1;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16673530169869788;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 17;
    int m = 1;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.171763066351931;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 43;
    int m = 1;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16670628940724788;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 25;
    int m = 25;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.002197215282679989;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 7;
    int m = 7;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.092116206833498;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 40;
    int m = 40;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3727006406245328E-4;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 17;
    int m = 17;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.010192799370528687;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 43;
    int m = 43;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 7.924548116240987E-5;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 47;
    int m = 42;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 9.475790347815949E-5;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 47;
    int m = 19;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.006263051514682197;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 47;
    int m = 45;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 5.4877050657080916E-5;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 47;
    int m = 32;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 5.85838661241397E-4;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 47;
    int m = 1;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16668573258953942;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 47;
    int m = 47;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 3.8131845745485545E-5;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 47;
    int m = 23;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0030208806165636496;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 1000;
    int m = 1;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16666666666666666;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 1000;
    int m = 125;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5314784793751827E-11;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 1000;
    int m = 226;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5472313367414E-19;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 1000;
    int m = 852;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0E-32;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 1000;
    int m = 573;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0E-32;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 1000;
    int m = 7;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.05581632944673068;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 1000;
    int m = 437;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0E-32;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 1000;
    int m = 523;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0E-32;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 1000;
    int m = 529;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0E-32;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 1000;
    int m = 291;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 1.81671747E-24;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 1000;
    int m = 227;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 2.1226927806178E-19;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 1000;
    int m = 252;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 2.22513308733E-21;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 1000;
    int m = 269;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0029396683E-22;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 951;
    int m = 475;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0E-32;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 966;
    int m = 483;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0E-32;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 992;
    int m = 496;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0E-32;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 981;
    int m = 490;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0E-32;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 969;
    int m = 484;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0E-32;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int n = 996;
    int m = 3;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.11574074074074074;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int n = 992;
    int m = 1;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16666666666666666;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int n = 990;
    int m = 1;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16666666666666666;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int n = 997;
    int m = 1;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16666666666666666;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int n = 1000;
    int m = 3;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.11574074074074074;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int n = 1000;
    int m = 1;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16666666666666666;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int n = 1000;
    int m = 1000;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0E-32;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int n = 1000;
    int m = 500;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0E-32;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int n = 1000;
    int m = 4;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.09645061728395062;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int n = 110;
    int m = 110;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 3.900274442572262E-10;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int n = 128;
    int m = 122;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 4.374396941772629E-11;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int n = 52;
    int m = 50;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 2.2021905767741966E-5;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int n = 163;
    int m = 145;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 6.603121991488001E-13;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int n = 173;
    int m = 68;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 8.254775460163392E-7;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int n = 136;
    int m = 104;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 1.16460974290397E-9;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int n = 83;
    int m = 61;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 2.9578835127451844E-6;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int n = 94;
    int m = 89;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 1.794350668344125E-8;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int n = 103;
    int m = 92;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0383825105978649E-8;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int n = 101;
    int m = 93;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 8.653209789287519E-9;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int n = 98;
    int m = 91;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2460665231186242E-8;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int n = 105;
    int m = 93;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 8.653177594869053E-9;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int n = 92;
    int m = 87;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 2.583876453475784E-8;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int n = 102;
    int m = 83;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 5.3578157834141396E-8;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int n = 97;
    int m = 87;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5838402947961E-8;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int n = 90;
    int m = 85;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 3.720802529862536E-8;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int n = 91;
    int m = 88;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 2.15324530526375E-8;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int n = 101;
    int m = 100;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 2.414964438734903E-9;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int n = 101;
    int m = 98;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 3.4775426758278295E-9;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int n = 102;
    int m = 98;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 3.477536551997076E-9;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int n = 98;
    int m = 98;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 3.4775694400722464E-9;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int n = 102;
    int m = 102;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6770580593590213E-9;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int n = 100;
    int m = 100;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4149703940927286E-9;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int n = 1000;
    int m = 100;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4149346944827333E-9;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int n = 101;
    int m = 101;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0124723507316943E-9;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int n = 104;
    int m = 104;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1646210012967942E-9;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int n = 107;
    int m = 107;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 6.739687149675048E-10;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int n = 997;
    int m = 779;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0E-32;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int n = 1000;
    int m = 999;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0E-32;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int n = 1000;
    int m = 391;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0E-32;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int n = 51;
    int m = 51;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 1.836292277544459E-5;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int n = 10;
    int m = 5;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.09650729524561763;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int n = 999;
    int m = 42;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 9.44969217773099E-5;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int n = 990;
    int m = 500;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0E-32;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int n = 1000;
    int m = 10;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.03230111657796914;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int n = 997;
    int m = 995;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0E-32;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int n = 1000;
    int m = 389;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0E-32;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int n = 50;
    int m = 47;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 3.806515119122412E-5;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int n = 1000;
    int m = 13;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 0.01869277579743585;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int n = 90;
    int m = 90;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4953273949768097E-8;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int n = 1000;
    int m = 103;
    TheTicketsDivOne* pObj = new TheTicketsDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 1.39753165189973E-9;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=21468741&rd=14514&pm=11098
********************************************************************************
#include <cstring>
#include <string>
#include <vector>
 
using namespace std;
 
class TheTicketsDivOne {
  public:
    double find(int n, int m);
};
 
long double r[1010][1010];
 
double TheTicketsDivOne::find( int n, int m ) {
  r[1][0] = 1.0;
  long double k2 = 1.0 / 2;
  long double k3 = 1.0 / 3;
  long double k6 = 1.0 / 6;
  for (int i = 2; i <= n; i++) {
    for (int j = 0; j < i; j++)
      r[i][j] = 0.0;
    for (int step = 0; step * i <= 10000; step++) {
      r[i][0] = k6 + k2 * r[i][i - 1];
      for (int j = 1; j < i; j++)
        r[i][j] = k3 * r[i - 1][j - 1] + k2 * r[i][j - 1];
    }
  }
  return r[n][m - 1];
}

********************************************************************************
*******************************************************************************/