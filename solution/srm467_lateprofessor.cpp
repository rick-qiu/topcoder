/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10823
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

class LateProfessor {
public:
    double getProbability(int waitTime, int walkTime, int lateTime, int bestArrival, int worstArrival);
};

double LateProfessor::getProbability(int waitTime, int walkTime, int lateTime, int bestArrival, int worstArrival) {
    double ret;
    return ret;
}


int test0() {
    int waitTime = 20;
    int walkTime = 30;
    int lateTime = 10;
    int bestArrival = 0;
    int worstArrival = 50;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int waitTime = 20;
    int walkTime = 30;
    int lateTime = 10;
    int bestArrival = 30;
    int worstArrival = 100;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.42857142857142855;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int waitTime = 20;
    int walkTime = 40;
    int lateTime = 50;
    int bestArrival = 0;
    int worstArrival = 300;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int waitTime = 10;
    int walkTime = 100;
    int lateTime = 50;
    int bestArrival = 59;
    int worstArrival = 60;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int waitTime = 300;
    int walkTime = 50;
    int lateTime = 25;
    int bestArrival = 9000;
    int worstArrival = 10000;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.075;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int waitTime = 20000;
    int walkTime = 30000;
    int lateTime = 10000;
    int bestArrival = 30000;
    int worstArrival = 30001;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int waitTime = 100;
    int walkTime = 200;
    int lateTime = 10;
    int bestArrival = 3150;
    int worstArrival = 3170;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
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
    int waitTime = 1000000;
    int walkTime = 2000000;
    int lateTime = 100000;
    int bestArrival = 0;
    int worstArrival = 100000;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int waitTime = 101;
    int walkTime = 230;
    int lateTime = 10;
    int bestArrival = 654;
    int worstArrival = 17890;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6637270828498492;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int waitTime = 120000;
    int walkTime = 180000;
    int lateTime = 150000;
    int bestArrival = 600000;
    int worstArrival = 1400000;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1125;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int waitTime = 20;
    int walkTime = 30;
    int lateTime = 10;
    int bestArrival = 10;
    int worstArrival = 10;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int waitTime = 20;
    int walkTime = 30;
    int lateTime = 10;
    int bestArrival = 90;
    int worstArrival = 90;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int waitTime = 1000;
    int walkTime = 600;
    int lateTime = 1;
    int bestArrival = 17000;
    int worstArrival = 17000;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
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
    int waitTime = 20;
    int walkTime = 30;
    int lateTime = 10;
    int bestArrival = 89;
    int worstArrival = 89;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
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
    int waitTime = 20;
    int walkTime = 30;
    int lateTime = 10;
    int bestArrival = 91;
    int worstArrival = 91;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int waitTime = 17;
    int walkTime = 20;
    int lateTime = 14;
    int bestArrival = 58798;
    int worstArrival = 58818;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int waitTime = 12;
    int walkTime = 15;
    int lateTime = 20;
    int bestArrival = 170324;
    int worstArrival = 170340;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int waitTime = 15;
    int walkTime = 2;
    int lateTime = 19;
    int bestArrival = 503939;
    int worstArrival = 503951;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int waitTime = 15;
    int walkTime = 2;
    int lateTime = 5;
    int bestArrival = 117525;
    int worstArrival = 117528;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
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
    int waitTime = 3;
    int walkTime = 9;
    int lateTime = 18;
    int bestArrival = 325671;
    int worstArrival = 325685;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int waitTime = 20;
    int walkTime = 19;
    int lateTime = 7;
    int bestArrival = 187871;
    int worstArrival = 187881;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int waitTime = 4;
    int walkTime = 2;
    int lateTime = 6;
    int bestArrival = 743659;
    int worstArrival = 743670;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int waitTime = 3;
    int walkTime = 10;
    int lateTime = 1;
    int bestArrival = 299006;
    int worstArrival = 299016;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int waitTime = 13;
    int walkTime = 16;
    int lateTime = 2;
    int bestArrival = 676576;
    int worstArrival = 676595;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.631578947368421;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int waitTime = 11;
    int walkTime = 10;
    int lateTime = 1;
    int bestArrival = 93882;
    int worstArrival = 93885;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int waitTime = 8;
    int walkTime = 16;
    int lateTime = 15;
    int bestArrival = 70555;
    int worstArrival = 70575;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.05;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int waitTime = 5;
    int walkTime = 10;
    int lateTime = 16;
    int bestArrival = 601464;
    int worstArrival = 601481;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int waitTime = 6;
    int walkTime = 13;
    int lateTime = 14;
    int bestArrival = 945270;
    int worstArrival = 945273;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
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
    int waitTime = 5;
    int walkTime = 6;
    int lateTime = 14;
    int bestArrival = 957655;
    int worstArrival = 957667;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
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
    int waitTime = 20;
    int walkTime = 14;
    int lateTime = 10;
    int bestArrival = 671701;
    int worstArrival = 671708;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
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
    int waitTime = 19;
    int walkTime = 12;
    int lateTime = 14;
    int bestArrival = 37945;
    int worstArrival = 37961;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
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
    int waitTime = 10;
    int walkTime = 15;
    int lateTime = 10;
    int bestArrival = 69345;
    int worstArrival = 69352;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int waitTime = 2;
    int walkTime = 3;
    int lateTime = 10;
    int bestArrival = 801989;
    int worstArrival = 802007;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
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
    int waitTime = 5;
    int walkTime = 20;
    int lateTime = 10;
    int bestArrival = 867898;
    int worstArrival = 867912;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int waitTime = 13;
    int walkTime = 14;
    int lateTime = 20;
    int bestArrival = 689760;
    int worstArrival = 689763;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int waitTime = 910962;
    int walkTime = 967045;
    int lateTime = 672717;
    int bestArrival = 181666;
    int worstArrival = 181682;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int waitTime = 344978;
    int walkTime = 621265;
    int lateTime = 104920;
    int bestArrival = 168820;
    int worstArrival = 168831;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int waitTime = 413937;
    int walkTime = 86547;
    int lateTime = 53027;
    int bestArrival = 413339;
    int worstArrival = 413355;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int waitTime = 703524;
    int walkTime = 56660;
    int lateTime = 492404;
    int bestArrival = 318459;
    int worstArrival = 318473;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int waitTime = 62849;
    int walkTime = 693858;
    int lateTime = 997881;
    int bestArrival = 73175;
    int worstArrival = 73194;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int waitTime = 417913;
    int walkTime = 368356;
    int lateTime = 150984;
    int bestArrival = 321483;
    int worstArrival = 321500;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int waitTime = 988276;
    int walkTime = 280415;
    int lateTime = 234542;
    int bestArrival = 582818;
    int worstArrival = 582820;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int waitTime = 227339;
    int walkTime = 168075;
    int lateTime = 318377;
    int bestArrival = 311781;
    int worstArrival = 311785;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int waitTime = 331218;
    int walkTime = 763736;
    int lateTime = 991481;
    int bestArrival = 539781;
    int worstArrival = 539793;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int waitTime = 715732;
    int walkTime = 403199;
    int lateTime = 315087;
    int bestArrival = 614978;
    int worstArrival = 614993;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
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
    int waitTime = 622682;
    int walkTime = 765931;
    int lateTime = 57477;
    int bestArrival = 722602;
    int worstArrival = 722607;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int waitTime = 972097;
    int walkTime = 20375;
    int lateTime = 392176;
    int bestArrival = 172850;
    int worstArrival = 172870;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int waitTime = 482430;
    int walkTime = 438809;
    int lateTime = 594296;
    int bestArrival = 761418;
    int worstArrival = 761429;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int waitTime = 372760;
    int walkTime = 42199;
    int lateTime = 516341;
    int bestArrival = 568770;
    int worstArrival = 568775;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int waitTime = 707714;
    int walkTime = 583669;
    int lateTime = 347666;
    int bestArrival = 655457;
    int worstArrival = 655467;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int waitTime = 114929;
    int walkTime = 200856;
    int lateTime = 606921;
    int bestArrival = 715107;
    int worstArrival = 715125;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int waitTime = 732799;
    int walkTime = 3498;
    int lateTime = 803715;
    int bestArrival = 508483;
    int worstArrival = 508485;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int waitTime = 935817;
    int walkTime = 538186;
    int lateTime = 937432;
    int bestArrival = 743545;
    int worstArrival = 743548;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int waitTime = 964447;
    int walkTime = 85032;
    int lateTime = 89613;
    int bestArrival = 997120;
    int worstArrival = 997138;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int waitTime = 574307;
    int walkTime = 845669;
    int lateTime = 533616;
    int bestArrival = 266685;
    int worstArrival = 266703;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int waitTime = 733080;
    int walkTime = 137870;
    int lateTime = 836766;
    int bestArrival = 573505;
    int worstArrival = 573553;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int waitTime = 91922;
    int walkTime = 208382;
    int lateTime = 639173;
    int bestArrival = 231037;
    int worstArrival = 231132;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int waitTime = 18591;
    int walkTime = 245097;
    int lateTime = 740461;
    int bestArrival = 209819;
    int worstArrival = 209886;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int waitTime = 693708;
    int walkTime = 922954;
    int lateTime = 719107;
    int bestArrival = 900626;
    int worstArrival = 900687;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int waitTime = 964087;
    int walkTime = 294685;
    int lateTime = 751974;
    int bestArrival = 840395;
    int worstArrival = 840403;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int waitTime = 179080;
    int walkTime = 230443;
    int lateTime = 798121;
    int bestArrival = 503974;
    int worstArrival = 503978;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int waitTime = 834830;
    int walkTime = 483139;
    int lateTime = 164941;
    int bestArrival = 836257;
    int worstArrival = 836285;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int waitTime = 507630;
    int walkTime = 853721;
    int lateTime = 815446;
    int bestArrival = 249489;
    int worstArrival = 249493;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int waitTime = 716490;
    int walkTime = 905890;
    int lateTime = 901884;
    int bestArrival = 497641;
    int worstArrival = 497723;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int waitTime = 195125;
    int walkTime = 142330;
    int lateTime = 890045;
    int bestArrival = 458282;
    int worstArrival = 458382;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int waitTime = 721568;
    int walkTime = 358367;
    int lateTime = 247562;
    int bestArrival = 43653;
    int worstArrival = 43718;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int waitTime = 41959;
    int walkTime = 815785;
    int lateTime = 940120;
    int bestArrival = 728357;
    int worstArrival = 728392;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int waitTime = 60949;
    int walkTime = 935161;
    int lateTime = 482514;
    int bestArrival = 783452;
    int worstArrival = 783464;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int waitTime = 127426;
    int walkTime = 194183;
    int lateTime = 837926;
    int bestArrival = 825484;
    int worstArrival = 825556;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int waitTime = 461341;
    int walkTime = 411083;
    int lateTime = 395148;
    int bestArrival = 608064;
    int worstArrival = 608099;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int waitTime = 946151;
    int walkTime = 514386;
    int lateTime = 488702;
    int bestArrival = 882784;
    int worstArrival = 882876;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int waitTime = 296410;
    int walkTime = 467233;
    int lateTime = 959733;
    int bestArrival = 8599;
    int worstArrival = 8647;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int waitTime = 395926;
    int walkTime = 301514;
    int lateTime = 831922;
    int bestArrival = 773360;
    int worstArrival = 773424;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int waitTime = 47377;
    int walkTime = 414723;
    int lateTime = 874619;
    int bestArrival = 300577;
    int worstArrival = 300649;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int waitTime = 113039;
    int walkTime = 751870;
    int lateTime = 991493;
    int bestArrival = 135592;
    int worstArrival = 135661;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int waitTime = 293631;
    int walkTime = 164582;
    int lateTime = 894034;
    int bestArrival = 211029;
    int worstArrival = 211337;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int waitTime = 192241;
    int walkTime = 124624;
    int lateTime = 346923;
    int bestArrival = 882214;
    int worstArrival = 882858;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int waitTime = 298244;
    int walkTime = 729830;
    int lateTime = 893965;
    int bestArrival = 576101;
    int worstArrival = 576321;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int waitTime = 785661;
    int walkTime = 230173;
    int lateTime = 351853;
    int bestArrival = 301832;
    int worstArrival = 302482;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int waitTime = 189680;
    int walkTime = 6651;
    int lateTime = 906825;
    int bestArrival = 280749;
    int worstArrival = 280904;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int waitTime = 44003;
    int walkTime = 564255;
    int lateTime = 639370;
    int bestArrival = 264983;
    int worstArrival = 265683;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int waitTime = 384007;
    int walkTime = 83640;
    int lateTime = 535207;
    int bestArrival = 485501;
    int worstArrival = 485622;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
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
    int waitTime = 587125;
    int walkTime = 705034;
    int lateTime = 841679;
    int bestArrival = 281279;
    int worstArrival = 282031;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int waitTime = 388298;
    int walkTime = 609302;
    int lateTime = 9270;
    int bestArrival = 279815;
    int worstArrival = 280597;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int waitTime = 441439;
    int walkTime = 228015;
    int lateTime = 769159;
    int bestArrival = 639966;
    int worstArrival = 640466;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int waitTime = 675529;
    int walkTime = 766094;
    int lateTime = 687011;
    int bestArrival = 479740;
    int worstArrival = 480172;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int waitTime = 636371;
    int walkTime = 607725;
    int lateTime = 668688;
    int bestArrival = 547580;
    int worstArrival = 547975;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int waitTime = 784145;
    int walkTime = 18479;
    int lateTime = 824961;
    int bestArrival = 592576;
    int worstArrival = 593481;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int waitTime = 205089;
    int walkTime = 913436;
    int lateTime = 315750;
    int bestArrival = 957908;
    int worstArrival = 958622;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int waitTime = 937214;
    int walkTime = 463860;
    int lateTime = 309838;
    int bestArrival = 944247;
    int worstArrival = 944700;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int waitTime = 552376;
    int walkTime = 859261;
    int lateTime = 834039;
    int bestArrival = 797536;
    int worstArrival = 797851;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int waitTime = 645185;
    int walkTime = 755104;
    int lateTime = 300319;
    int bestArrival = 684108;
    int worstArrival = 684872;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int waitTime = 425522;
    int walkTime = 385073;
    int lateTime = 485786;
    int bestArrival = 333633;
    int worstArrival = 334105;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
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
    int waitTime = 460155;
    int walkTime = 751065;
    int lateTime = 784221;
    int bestArrival = 478819;
    int worstArrival = 479383;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
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
    int waitTime = 942189;
    int walkTime = 448778;
    int lateTime = 201805;
    int bestArrival = 13244;
    int worstArrival = 13430;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
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
    int waitTime = 38246;
    int walkTime = 892286;
    int lateTime = 396684;
    int bestArrival = 46629;
    int worstArrival = 66217;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int waitTime = 412175;
    int walkTime = 387007;
    int lateTime = 62775;
    int bestArrival = 537294;
    int worstArrival = 577403;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int waitTime = 865379;
    int walkTime = 225279;
    int lateTime = 21259;
    int bestArrival = 191505;
    int worstArrival = 200935;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int waitTime = 752871;
    int walkTime = 241358;
    int lateTime = 762498;
    int bestArrival = 15019;
    int worstArrival = 51716;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int waitTime = 851775;
    int walkTime = 59511;
    int lateTime = 20895;
    int bestArrival = 626055;
    int worstArrival = 689315;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int waitTime = 187943;
    int walkTime = 307088;
    int lateTime = 578093;
    int bestArrival = 19912;
    int worstArrival = 105242;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int waitTime = 429247;
    int walkTime = 768;
    int lateTime = 420025;
    int bestArrival = 738845;
    int worstArrival = 808770;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int waitTime = 397417;
    int walkTime = 589366;
    int lateTime = 138587;
    int bestArrival = 885436;
    int worstArrival = 984029;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int waitTime = 300064;
    int walkTime = 729117;
    int lateTime = 579025;
    int bestArrival = 226555;
    int worstArrival = 273756;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int waitTime = 171266;
    int walkTime = 958428;
    int lateTime = 570961;
    int bestArrival = 603112;
    int worstArrival = 664105;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int waitTime = 435940;
    int walkTime = 757549;
    int lateTime = 114932;
    int bestArrival = 35541;
    int worstArrival = 111482;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int waitTime = 828978;
    int walkTime = 537765;
    int lateTime = 183384;
    int bestArrival = 0;
    int worstArrival = 9656;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int waitTime = 545876;
    int walkTime = 128464;
    int lateTime = 586907;
    int bestArrival = 721974;
    int worstArrival = 796111;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int waitTime = 498697;
    int walkTime = 866191;
    int lateTime = 783344;
    int bestArrival = 483712;
    int worstArrival = 502961;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2215180009351135;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int waitTime = 461038;
    int walkTime = 172096;
    int lateTime = 876212;
    int bestArrival = 630999;
    int worstArrival = 660670;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int waitTime = 322872;
    int walkTime = 26383;
    int lateTime = 39995;
    int bestArrival = 662940;
    int worstArrival = 669976;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int waitTime = 70837;
    int walkTime = 596307;
    int lateTime = 287895;
    int bestArrival = 892074;
    int worstArrival = 913046;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int waitTime = 460336;
    int walkTime = 885515;
    int lateTime = 640917;
    int bestArrival = 0;
    int worstArrival = 50255;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int waitTime = 153596;
    int walkTime = 629825;
    int lateTime = 85134;
    int bestArrival = 747461;
    int worstArrival = 814959;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int waitTime = 435529;
    int walkTime = 391868;
    int lateTime = 233066;
    int bestArrival = 285055;
    int worstArrival = 314994;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int waitTime = 84952;
    int walkTime = 347328;
    int lateTime = 986386;
    int bestArrival = 587196;
    int worstArrival = 622791;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int waitTime = 154261;
    int walkTime = 904502;
    int lateTime = 459190;
    int bestArrival = 0;
    int worstArrival = 157874;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.02288533894118094;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int waitTime = 808087;
    int walkTime = 370289;
    int lateTime = 760902;
    int bestArrival = 0;
    int worstArrival = 169637;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int waitTime = 886325;
    int walkTime = 477955;
    int lateTime = 51428;
    int bestArrival = 0;
    int worstArrival = 248141;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int waitTime = 399072;
    int walkTime = 836239;
    int lateTime = 599720;
    int bestArrival = 703835;
    int worstArrival = 835334;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int waitTime = 339362;
    int walkTime = 715983;
    int lateTime = 71119;
    int bestArrival = 0;
    int worstArrival = 75214;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int waitTime = 325895;
    int walkTime = 384307;
    int lateTime = 922392;
    int bestArrival = 563997;
    int worstArrival = 879550;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int waitTime = 89094;
    int walkTime = 974488;
    int lateTime = 167178;
    int bestArrival = 192551;
    int worstArrival = 577369;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int waitTime = 38738;
    int walkTime = 275554;
    int lateTime = 17060;
    int bestArrival = 496225;
    int worstArrival = 986371;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.772320900303175;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int waitTime = 349662;
    int walkTime = 341661;
    int lateTime = 522736;
    int bestArrival = 143680;
    int worstArrival = 897197;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int waitTime = 212735;
    int walkTime = 199959;
    int lateTime = 100154;
    int bestArrival = 0;
    int worstArrival = 170085;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int waitTime = 620153;
    int walkTime = 991681;
    int lateTime = 249412;
    int bestArrival = 675433;
    int worstArrival = 900189;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int waitTime = 141560;
    int walkTime = 743485;
    int lateTime = 770359;
    int bestArrival = 0;
    int worstArrival = 128268;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int waitTime = 703661;
    int walkTime = 145018;
    int lateTime = 694831;
    int bestArrival = 0;
    int worstArrival = 315682;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int waitTime = 693639;
    int walkTime = 6037;
    int lateTime = 73075;
    int bestArrival = 296089;
    int worstArrival = 369345;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int waitTime = 598824;
    int walkTime = 943184;
    int lateTime = 417063;
    int bestArrival = 149355;
    int worstArrival = 494799;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int waitTime = 763397;
    int walkTime = 499182;
    int lateTime = 776361;
    int bestArrival = 269819;
    int worstArrival = 593077;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int waitTime = 546791;
    int walkTime = 48816;
    int lateTime = 250928;
    int bestArrival = 234670;
    int worstArrival = 594691;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int waitTime = 215583;
    int walkTime = 52181;
    int lateTime = 34254;
    int bestArrival = 594230;
    int worstArrival = 903386;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.057986906286793725;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int waitTime = 112125;
    int walkTime = 938216;
    int lateTime = 814808;
    int bestArrival = 968667;
    int worstArrival = 971379;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int waitTime = 433138;
    int walkTime = 597856;
    int lateTime = 95631;
    int bestArrival = 863582;
    int worstArrival = 863582;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int waitTime = 515869;
    int walkTime = 635459;
    int lateTime = 872940;
    int bestArrival = 714553;
    int worstArrival = 714553;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int waitTime = 777057;
    int walkTime = 60805;
    int lateTime = 927343;
    int bestArrival = 173861;
    int worstArrival = 173861;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int waitTime = 85891;
    int walkTime = 78712;
    int lateTime = 94135;
    int bestArrival = 377558;
    int worstArrival = 377558;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int waitTime = 419271;
    int walkTime = 756497;
    int lateTime = 417360;
    int bestArrival = 468006;
    int worstArrival = 468006;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int waitTime = 745246;
    int walkTime = 786193;
    int lateTime = 136604;
    int bestArrival = 338654;
    int worstArrival = 338654;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int waitTime = 374485;
    int walkTime = 38820;
    int lateTime = 836045;
    int bestArrival = 265709;
    int worstArrival = 265709;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int waitTime = 988750;
    int walkTime = 537521;
    int lateTime = 547725;
    int bestArrival = 189297;
    int worstArrival = 189297;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int waitTime = 236722;
    int walkTime = 572622;
    int lateTime = 322507;
    int bestArrival = 258471;
    int worstArrival = 258471;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int waitTime = 181684;
    int walkTime = 713538;
    int lateTime = 871000;
    int bestArrival = 972796;
    int worstArrival = 972796;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int waitTime = 201765;
    int walkTime = 166450;
    int lateTime = 691252;
    int bestArrival = 567147;
    int worstArrival = 567147;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int waitTime = 686727;
    int walkTime = 473793;
    int lateTime = 98035;
    int bestArrival = 555978;
    int worstArrival = 555978;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int waitTime = 699587;
    int walkTime = 60537;
    int lateTime = 428454;
    int bestArrival = 654065;
    int worstArrival = 654065;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int waitTime = 466093;
    int walkTime = 432213;
    int lateTime = 990464;
    int bestArrival = 933579;
    int worstArrival = 933579;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int waitTime = 462670;
    int walkTime = 228357;
    int lateTime = 316069;
    int bestArrival = 248071;
    int worstArrival = 248071;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int waitTime = 894851;
    int walkTime = 21978;
    int lateTime = 195563;
    int bestArrival = 688243;
    int worstArrival = 688243;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    int waitTime = 567982;
    int walkTime = 367463;
    int lateTime = 472046;
    int bestArrival = 645786;
    int worstArrival = 645786;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    int waitTime = 707730;
    int walkTime = 48923;
    int lateTime = 664291;
    int bestArrival = 726338;
    int worstArrival = 726338;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    int waitTime = 151787;
    int walkTime = 414682;
    int lateTime = 779622;
    int bestArrival = 591905;
    int worstArrival = 591905;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    int waitTime = 737086;
    int walkTime = 520842;
    int lateTime = 86354;
    int bestArrival = 923024;
    int worstArrival = 923024;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    int waitTime = 110654;
    int walkTime = 439198;
    int lateTime = 134130;
    int bestArrival = 373018;
    int worstArrival = 614023;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.17719134457791333;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    int waitTime = 45888;
    int walkTime = 998669;
    int lateTime = 122059;
    int bestArrival = 0;
    int worstArrival = 731646;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9372811441598806;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    int waitTime = 811728;
    int walkTime = 414034;
    int lateTime = 65679;
    int bestArrival = 0;
    int worstArrival = 621099;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    int waitTime = 257845;
    int walkTime = 753255;
    int lateTime = 533795;
    int bestArrival = 585673;
    int worstArrival = 836339;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    int waitTime = 374864;
    int walkTime = 712562;
    int lateTime = 236878;
    int bestArrival = 0;
    int worstArrival = 235452;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    int waitTime = 994619;
    int walkTime = 742416;
    int lateTime = 31640;
    int bestArrival = 18827;
    int worstArrival = 906346;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    int waitTime = 318440;
    int walkTime = 652442;
    int lateTime = 963888;
    int bestArrival = 0;
    int worstArrival = 189859;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    int waitTime = 834151;
    int walkTime = 8925;
    int lateTime = 606595;
    int bestArrival = 0;
    int worstArrival = 329619;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    int waitTime = 211581;
    int walkTime = 809384;
    int lateTime = 812504;
    int bestArrival = 97495;
    int worstArrival = 941581;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    int waitTime = 920224;
    int walkTime = 723627;
    int lateTime = 876236;
    int bestArrival = 0;
    int worstArrival = 127724;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    int waitTime = 963459;
    int walkTime = 994011;
    int lateTime = 439268;
    int bestArrival = 0;
    int worstArrival = 876634;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    int waitTime = 966141;
    int walkTime = 193767;
    int lateTime = 5184;
    int bestArrival = 117251;
    int worstArrival = 172190;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    int waitTime = 135902;
    int walkTime = 487762;
    int lateTime = 127598;
    int bestArrival = 0;
    int worstArrival = 171943;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.20961016150701103;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    int waitTime = 949464;
    int walkTime = 319653;
    int lateTime = 571155;
    int bestArrival = 0;
    int worstArrival = 470385;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    int waitTime = 367268;
    int walkTime = 795160;
    int lateTime = 146465;
    int bestArrival = 9293;
    int worstArrival = 138178;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    int waitTime = 131487;
    int walkTime = 882340;
    int lateTime = 295484;
    int bestArrival = 0;
    int worstArrival = 221321;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.40589912389696414;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    int waitTime = 737681;
    int walkTime = 650467;
    int lateTime = 795714;
    int bestArrival = 228433;
    int worstArrival = 483794;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    int waitTime = 490875;
    int walkTime = 560982;
    int lateTime = 877390;
    int bestArrival = 237293;
    int worstArrival = 912607;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    int waitTime = 234224;
    int walkTime = 759883;
    int lateTime = 848915;
    int bestArrival = 0;
    int worstArrival = 568750;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    int waitTime = 113496;
    int walkTime = 837665;
    int lateTime = 204172;
    int bestArrival = 136538;
    int worstArrival = 688593;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    int waitTime = 504781;
    int walkTime = 544634;
    int lateTime = 19030;
    int bestArrival = 285466;
    int worstArrival = 997440;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6919620660305011;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    int waitTime = 30325;
    int walkTime = 53751;
    int lateTime = 863797;
    int bestArrival = 318428;
    int worstArrival = 380591;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    int waitTime = 204601;
    int walkTime = 271926;
    int lateTime = 210630;
    int bestArrival = 0;
    int worstArrival = 327480;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.18717478930010992;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    int waitTime = 38900;
    int walkTime = 487712;
    int lateTime = 491573;
    int bestArrival = 1723;
    int worstArrival = 153323;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    int waitTime = 706212;
    int walkTime = 118341;
    int lateTime = 442071;
    int bestArrival = 0;
    int worstArrival = 573249;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    int waitTime = 951687;
    int walkTime = 427004;
    int lateTime = 499350;
    int bestArrival = 828983;
    int worstArrival = 957745;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    int waitTime = 298601;
    int walkTime = 977218;
    int lateTime = 124565;
    int bestArrival = 192164;
    int worstArrival = 463100;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6071507662326158;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    int waitTime = 605165;
    int walkTime = 739451;
    int lateTime = 554037;
    int bestArrival = 520065;
    int worstArrival = 771981;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6621889836294638;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    int waitTime = 730370;
    int walkTime = 645015;
    int lateTime = 734172;
    int bestArrival = 0;
    int worstArrival = 474528;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    int waitTime = 70371;
    int walkTime = 840430;
    int lateTime = 516031;
    int bestArrival = 0;
    int worstArrival = 211006;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6664976351383373;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    int waitTime = 185315;
    int walkTime = 716503;
    int lateTime = 164908;
    int bestArrival = 316564;
    int worstArrival = 338752;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    int waitTime = 127317;
    int walkTime = 980491;
    int lateTime = 278983;
    int bestArrival = 242785;
    int worstArrival = 601405;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    int waitTime = 254526;
    int walkTime = 668497;
    int lateTime = 355235;
    int bestArrival = 70458;
    int worstArrival = 458224;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5253116570302708;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    int waitTime = 525130;
    int walkTime = 796222;
    int lateTime = 745530;
    int bestArrival = 391397;
    int worstArrival = 957121;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.08960553202621774;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    int waitTime = 510100;
    int walkTime = 964361;
    int lateTime = 884630;
    int bestArrival = 461246;
    int worstArrival = 953506;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16196928452443832;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    int waitTime = 41908;
    int walkTime = 414411;
    int lateTime = 349624;
    int bestArrival = 0;
    int worstArrival = 219293;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.29543578682402083;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    int waitTime = 972900;
    int walkTime = 954724;
    int lateTime = 698264;
    int bestArrival = 701045;
    int worstArrival = 978888;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.02155173965152982;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    int waitTime = 265015;
    int walkTime = 839117;
    int lateTime = 460082;
    int bestArrival = 0;
    int worstArrival = 621369;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5734981951143362;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    int waitTime = 745249;
    int walkTime = 791292;
    int lateTime = 61559;
    int bestArrival = 0;
    int worstArrival = 23397;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    int waitTime = 100;
    int walkTime = 42;
    int lateTime = 15;
    int bestArrival = 110;
    int worstArrival = 131;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8095238095238095;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    int waitTime = 1;
    int walkTime = 1;
    int lateTime = 1;
    int bestArrival = 3;
    int worstArrival = 3;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    int waitTime = 17;
    int walkTime = 47;
    int lateTime = 3;
    int bestArrival = 178532;
    int worstArrival = 323244;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6875172756924097;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    int waitTime = 2;
    int walkTime = 3;
    int lateTime = 2;
    int bestArrival = 1;
    int worstArrival = 10000000;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.200000020000002;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    int waitTime = 1;
    int walkTime = 1;
    int lateTime = 1;
    int bestArrival = 0;
    int worstArrival = 10000000;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    int waitTime = 1;
    int walkTime = 1;
    int lateTime = 1;
    int bestArrival = 1;
    int worstArrival = 1;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    int waitTime = 2;
    int walkTime = 2;
    int lateTime = 2;
    int bestArrival = 1;
    int worstArrival = 1;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    int waitTime = 10;
    int walkTime = 10;
    int lateTime = 1;
    int bestArrival = 100;
    int worstArrival = 100;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    int waitTime = 10;
    int walkTime = 10;
    int lateTime = 10;
    int bestArrival = 10;
    int worstArrival = 10;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    int waitTime = 1;
    int walkTime = 1;
    int lateTime = 1;
    int bestArrival = 1;
    int worstArrival = 10000000;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    int waitTime = 1;
    int walkTime = 1;
    int lateTime = 10000000;
    int bestArrival = 1;
    int worstArrival = 10000000;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    int waitTime = 2;
    int walkTime = 15;
    int lateTime = 1;
    int bestArrival = 99;
    int worstArrival = 10000;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8233511766488234;
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    int waitTime = 23322;
    int walkTime = 212322;
    int lateTime = 12232;
    int bestArrival = 1000000;
    int worstArrival = 10000000;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8498831111111111;
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    int waitTime = 3;
    int walkTime = 3;
    int lateTime = 1;
    int bestArrival = 10;
    int worstArrival = 10;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    int waitTime = 10;
    int walkTime = 10;
    int lateTime = 2;
    int bestArrival = 5;
    int worstArrival = 25;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4;
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    int waitTime = 10;
    int walkTime = 10;
    int lateTime = 10;
    int bestArrival = 5;
    int worstArrival = 5;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    int waitTime = 1;
    int walkTime = 2;
    int lateTime = 1;
    int bestArrival = 0;
    int worstArrival = 10000000;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333;
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    int waitTime = 20;
    int walkTime = 20;
    int lateTime = 10;
    int bestArrival = 35;
    int worstArrival = 35;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    int waitTime = 3;
    int walkTime = 150;
    int lateTime = 5;
    int bestArrival = 35;
    int worstArrival = 35;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    int waitTime = 34;
    int walkTime = 43;
    int lateTime = 7;
    int bestArrival = 4567;
    int worstArrival = 10000000;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4675331223769896;
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    int waitTime = 25;
    int walkTime = 25;
    int lateTime = 1;
    int bestArrival = 25;
    int worstArrival = 75;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.48;
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    int waitTime = 2;
    int walkTime = 2;
    int lateTime = 2;
    int bestArrival = 3;
    int worstArrival = 3;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    int waitTime = 1000000;
    int walkTime = 100000;
    int lateTime = 1;
    int bestArrival = 1;
    int worstArrival = 10000000;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0899991089999109;
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    int waitTime = 20;
    int walkTime = 40;
    int lateTime = 100;
    int bestArrival = 100;
    int worstArrival = 100;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    int waitTime = 2;
    int walkTime = 2;
    int lateTime = 1;
    int bestArrival = 0;
    int worstArrival = 10000000;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.25;
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    int waitTime = 20;
    int walkTime = 20;
    int lateTime = 10;
    int bestArrival = 71;
    int worstArrival = 71;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    int waitTime = 50;
    int walkTime = 50;
    int lateTime = 30;
    int bestArrival = 75;
    int worstArrival = 75;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test221() {
    int waitTime = 20;
    int walkTime = 20;
    int lateTime = 20;
    int bestArrival = 25;
    int worstArrival = 25;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 221: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 221: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test222() {
    int waitTime = 5;
    int walkTime = 5;
    int lateTime = 1;
    int bestArrival = 10;
    int worstArrival = 10;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 222: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 222: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test223() {
    int waitTime = 1;
    int walkTime = 2;
    int lateTime = 1;
    int bestArrival = 1;
    int worstArrival = 10000000;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 223: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 223: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test224() {
    int waitTime = 5000;
    int walkTime = 5000;
    int lateTime = 1000;
    int bestArrival = 9500;
    int worstArrival = 9500;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 224: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 224: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test225() {
    int waitTime = 2;
    int walkTime = 4;
    int lateTime = 2;
    int bestArrival = 3;
    int worstArrival = 3;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 225: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 225: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test226() {
    int waitTime = 13;
    int walkTime = 55;
    int lateTime = 10;
    int bestArrival = 0;
    int worstArrival = 567;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6525573192239859;
    if(result == expected) {
        cout << "Test Case 226: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 226: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test227() {
    int waitTime = 1;
    int walkTime = 2;
    int lateTime = 1;
    int bestArrival = 20;
    int worstArrival = 20;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 227: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 227: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test228() {
    int waitTime = 1;
    int walkTime = 1;
    int lateTime = 10000000;
    int bestArrival = 10;
    int worstArrival = 10000000;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 228: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 228: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test229() {
    int waitTime = 20;
    int walkTime = 30;
    int lateTime = 11;
    int bestArrival = 90;
    int worstArrival = 90;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 229: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 229: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test230() {
    int waitTime = 20;
    int walkTime = 30;
    int lateTime = 10;
    int bestArrival = 23;
    int worstArrival = 74;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4117647058823529;
    if(result == expected) {
        cout << "Test Case 230: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 230: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test231() {
    int waitTime = 2;
    int walkTime = 2;
    int lateTime = 1;
    int bestArrival = 4;
    int worstArrival = 4;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 231: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 231: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test232() {
    int waitTime = 20;
    int walkTime = 30;
    int lateTime = 1000000;
    int bestArrival = 1000;
    int worstArrival = 1000;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 232: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 232: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test233() {
    int waitTime = 10;
    int walkTime = 10;
    int lateTime = 1000000;
    int bestArrival = 50;
    int worstArrival = 90;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 233: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 233: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test234() {
    int waitTime = 10;
    int walkTime = 10;
    int lateTime = 1;
    int bestArrival = 3;
    int worstArrival = 3;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 234: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 234: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test235() {
    int waitTime = 40;
    int walkTime = 10;
    int lateTime = 10;
    int bestArrival = 40;
    int worstArrival = 40;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 235: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 235: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test236() {
    int waitTime = 10;
    int walkTime = 10;
    int lateTime = 5;
    int bestArrival = 119;
    int worstArrival = 119;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 236: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 236: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test237() {
    int waitTime = 121;
    int walkTime = 222;
    int lateTime = 101;
    int bestArrival = 65;
    int worstArrival = 17890;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3529873772791024;
    if(result == expected) {
        cout << "Test Case 237: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 237: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test238() {
    int waitTime = 20;
    int walkTime = 10;
    int lateTime = 10;
    int bestArrival = 20;
    int worstArrival = 20;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 238: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 238: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test239() {
    int waitTime = 1;
    int walkTime = 1;
    int lateTime = 100;
    int bestArrival = 0;
    int worstArrival = 10000000;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 239: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 239: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test240() {
    int waitTime = 10000000;
    int walkTime = 10000000;
    int lateTime = 10000000;
    int bestArrival = 10000000;
    int worstArrival = 10000000;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 240: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 240: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test241() {
    int waitTime = 30;
    int walkTime = 20;
    int lateTime = 2;
    int bestArrival = 49;
    int worstArrival = 49;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 241: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 241: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test242() {
    int waitTime = 3;
    int walkTime = 3;
    int lateTime = 2;
    int bestArrival = 5;
    int worstArrival = 5;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 242: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 242: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test243() {
    int waitTime = 4;
    int walkTime = 4;
    int lateTime = 3;
    int bestArrival = 6;
    int worstArrival = 6;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 243: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 243: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test244() {
    int waitTime = 10;
    int walkTime = 10;
    int lateTime = 5;
    int bestArrival = 17;
    int worstArrival = 17;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 244: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 244: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test245() {
    int waitTime = 10;
    int walkTime = 10;
    int lateTime = 1;
    int bestArrival = 5;
    int worstArrival = 7;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 245: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 245: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test246() {
    int waitTime = 1;
    int walkTime = 5;
    int lateTime = 6;
    int bestArrival = 2;
    int worstArrival = 2;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 246: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 246: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test247() {
    int waitTime = 1;
    int walkTime = 1;
    int lateTime = 1;
    int bestArrival = 100;
    int worstArrival = 102;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 247: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 247: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test248() {
    int waitTime = 1;
    int walkTime = 5;
    int lateTime = 4;
    int bestArrival = 3;
    int worstArrival = 3;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 248: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 248: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test249() {
    int waitTime = 20;
    int walkTime = 30;
    int lateTime = 9;
    int bestArrival = 99;
    int worstArrival = 99;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 249: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 249: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test250() {
    int waitTime = 100;
    int walkTime = 100;
    int lateTime = 300;
    int bestArrival = 150;
    int worstArrival = 150;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 250: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 250: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test251() {
    int waitTime = 2;
    int walkTime = 5;
    int lateTime = 2;
    int bestArrival = 6;
    int worstArrival = 6;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 251: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 251: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test252() {
    int waitTime = 20;
    int walkTime = 20;
    int lateTime = 10;
    int bestArrival = 10;
    int worstArrival = 10;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 252: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 252: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test253() {
    int waitTime = 30;
    int walkTime = 5;
    int lateTime = 100;
    int bestArrival = 65;
    int worstArrival = 65;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 253: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 253: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test254() {
    int waitTime = 20;
    int walkTime = 30;
    int lateTime = 1;
    int bestArrival = 120;
    int worstArrival = 120;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 254: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 254: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test255() {
    int waitTime = 10;
    int walkTime = 10;
    int lateTime = 1;
    int bestArrival = 0;
    int worstArrival = 10;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 255: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 255: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test256() {
    int waitTime = 9999990;
    int walkTime = 2;
    int lateTime = 1;
    int bestArrival = 0;
    int worstArrival = 10000000;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0E-7;
    if(result == expected) {
        cout << "Test Case 256: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 256: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test257() {
    int waitTime = 20;
    int walkTime = 30;
    int lateTime = 1;
    int bestArrival = 21;
    int worstArrival = 25;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 257: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 257: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test258() {
    int waitTime = 1;
    int walkTime = 100;
    int lateTime = 50;
    int bestArrival = 70;
    int worstArrival = 70;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 258: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 258: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test259() {
    int waitTime = 20;
    int walkTime = 30;
    int lateTime = 5;
    int bestArrival = 25;
    int worstArrival = 25;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 259: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 259: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test260() {
    int waitTime = 2;
    int walkTime = 2;
    int lateTime = 1;
    int bestArrival = 1;
    int worstArrival = 10000000;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2500000250000025;
    if(result == expected) {
        cout << "Test Case 260: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 260: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test261() {
    int waitTime = 100;
    int walkTime = 42;
    int lateTime = 15;
    int bestArrival = 110;
    int worstArrival = 130;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.85;
    if(result == expected) {
        cout << "Test Case 261: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 261: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test262() {
    int waitTime = 20;
    int walkTime = 30;
    int lateTime = 10;
    int bestArrival = 45;
    int worstArrival = 45;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 262: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 262: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test263() {
    int waitTime = 10;
    int walkTime = 10;
    int lateTime = 5;
    int bestArrival = 19;
    int worstArrival = 19;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 263: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 263: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test264() {
    int waitTime = 20;
    int walkTime = 30;
    int lateTime = 10;
    int bestArrival = 25;
    int worstArrival = 25;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 264: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 264: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test265() {
    int waitTime = 1;
    int walkTime = 10;
    int lateTime = 1;
    int bestArrival = 10;
    int worstArrival = 10;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 265: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 265: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test266() {
    int waitTime = 20;
    int walkTime = 30;
    int lateTime = 50;
    int bestArrival = 50;
    int worstArrival = 50;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 266: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 266: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test267() {
    int waitTime = 1;
    int walkTime = 2;
    int lateTime = 1;
    int bestArrival = 2;
    int worstArrival = 2;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 267: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 267: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test268() {
    int waitTime = 4;
    int walkTime = 9;
    int lateTime = 1;
    int bestArrival = 3;
    int worstArrival = 3;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 268: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 268: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test269() {
    int waitTime = 1;
    int walkTime = 3;
    int lateTime = 1;
    int bestArrival = 1;
    int worstArrival = 2;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 269: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 269: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test270() {
    int waitTime = 2;
    int walkTime = 2;
    int lateTime = 1;
    int bestArrival = 3;
    int worstArrival = 3;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 270: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 270: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test271() {
    int waitTime = 1;
    int walkTime = 2;
    int lateTime = 1;
    int bestArrival = 0;
    int worstArrival = 29;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3448275862068966;
    if(result == expected) {
        cout << "Test Case 271: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 271: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test272() {
    int waitTime = 86;
    int walkTime = 42;
    int lateTime = 24;
    int bestArrival = 30;
    int worstArrival = 30;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 272: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 272: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test273() {
    int waitTime = 1;
    int walkTime = 3;
    int lateTime = 1;
    int bestArrival = 1;
    int worstArrival = 3;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 273: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 273: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test274() {
    int waitTime = 1;
    int walkTime = 29;
    int lateTime = 1;
    int bestArrival = 100;
    int worstArrival = 100;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 274: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 274: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test275() {
    int waitTime = 2000;
    int walkTime = 7000;
    int lateTime = 6000;
    int bestArrival = 400;
    int worstArrival = 5000;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.21739130434782608;
    if(result == expected) {
        cout << "Test Case 275: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 275: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test276() {
    int waitTime = 5;
    int walkTime = 5;
    int lateTime = 1;
    int bestArrival = 11;
    int worstArrival = 11;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 276: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 276: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test277() {
    int waitTime = 1337;
    int walkTime = 31337;
    int lateTime = 239;
    int bestArrival = 21;
    int worstArrival = 9999999;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.951642693613926;
    if(result == expected) {
        cout << "Test Case 277: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 277: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test278() {
    int waitTime = 4;
    int walkTime = 4;
    int lateTime = 1;
    int bestArrival = 7;
    int worstArrival = 8;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 278: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 278: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test279() {
    int waitTime = 3;
    int walkTime = 3;
    int lateTime = 1;
    int bestArrival = 4;
    int worstArrival = 4;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 279: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 279: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test280() {
    int waitTime = 20;
    int walkTime = 30;
    int lateTime = 5;
    int bestArrival = 50;
    int worstArrival = 50;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 280: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 280: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test281() {
    int waitTime = 2;
    int walkTime = 4;
    int lateTime = 2;
    int bestArrival = 1;
    int worstArrival = 1;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 281: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 281: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test282() {
    int waitTime = 10;
    int walkTime = 10;
    int lateTime = 1;
    int bestArrival = 12;
    int worstArrival = 15;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 282: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 282: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test283() {
    int waitTime = 1;
    int walkTime = 2;
    int lateTime = 1;
    int bestArrival = 10;
    int worstArrival = 10000000;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 283: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 283: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test284() {
    int waitTime = 9000000;
    int walkTime = 9000000;
    int lateTime = 100;
    int bestArrival = 9000200;
    int worstArrival = 10000000;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 284: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 284: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test285() {
    int waitTime = 100;
    int walkTime = 100;
    int lateTime = 1;
    int bestArrival = 1;
    int worstArrival = 1;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 285: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 285: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test286() {
    int waitTime = 10;
    int walkTime = 10;
    int lateTime = 5;
    int bestArrival = 15;
    int worstArrival = 15;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 286: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 286: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test287() {
    int waitTime = 1;
    int walkTime = 2;
    int lateTime = 1;
    int bestArrival = 1;
    int worstArrival = 5;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 287: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 287: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test288() {
    int waitTime = 100;
    int walkTime = 100;
    int lateTime = 50;
    int bestArrival = 175;
    int worstArrival = 175;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 288: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 288: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test289() {
    int waitTime = 99;
    int walkTime = 200;
    int lateTime = 100;
    int bestArrival = 101;
    int worstArrival = 101;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 289: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 289: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test290() {
    int waitTime = 5;
    int walkTime = 6;
    int lateTime = 5;
    int bestArrival = 10;
    int worstArrival = 10;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 290: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 290: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test291() {
    int waitTime = 10;
    int walkTime = 10;
    int lateTime = 1;
    int bestArrival = 5;
    int worstArrival = 19;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6428571428571429;
    if(result == expected) {
        cout << "Test Case 291: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 291: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test292() {
    int waitTime = 8;
    int walkTime = 2;
    int lateTime = 1;
    int bestArrival = 11;
    int worstArrival = 11;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 292: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 292: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test293() {
    int waitTime = 5;
    int walkTime = 5;
    int lateTime = 1;
    int bestArrival = 6;
    int worstArrival = 6;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 293: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 293: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test294() {
    int waitTime = 2;
    int walkTime = 3;
    int lateTime = 1;
    int bestArrival = 1;
    int worstArrival = 1;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 294: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 294: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test295() {
    int waitTime = 20;
    int walkTime = 20;
    int lateTime = 1000;
    int bestArrival = 30;
    int worstArrival = 30;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 295: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 295: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test296() {
    int waitTime = 100;
    int walkTime = 100;
    int lateTime = 99;
    int bestArrival = 150;
    int worstArrival = 150;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 296: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 296: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test297() {
    int waitTime = 2000000;
    int walkTime = 3000000;
    int lateTime = 1000000;
    int bestArrival = 9999999;
    int worstArrival = 9999999;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 297: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 297: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test298() {
    int waitTime = 10;
    int walkTime = 30;
    int lateTime = 1;
    int bestArrival = 30;
    int worstArrival = 30;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 298: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 298: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test299() {
    int waitTime = 1;
    int walkTime = 10;
    int lateTime = 1;
    int bestArrival = 2;
    int worstArrival = 3;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 299: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 299: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test300() {
    int waitTime = 2;
    int walkTime = 1;
    int lateTime = 1000000;
    int bestArrival = 0;
    int worstArrival = 10000000;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 300: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 300: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test301() {
    int waitTime = 3;
    int walkTime = 600;
    int lateTime = 1;
    int bestArrival = 0;
    int worstArrival = 10;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7;
    if(result == expected) {
        cout << "Test Case 301: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 301: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test302() {
    int waitTime = 10;
    int walkTime = 2;
    int lateTime = 1;
    int bestArrival = 2;
    int worstArrival = 2;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 302: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 302: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test303() {
    int waitTime = 1000;
    int walkTime = 566;
    int lateTime = 125;
    int bestArrival = 1700;
    int worstArrival = 852129;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2815790618617192;
    if(result == expected) {
        cout << "Test Case 303: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 303: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test304() {
    int waitTime = 1000;
    int walkTime = 600;
    int lateTime = 100;
    int bestArrival = 17502;
    int worstArrival = 17502;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 304: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 304: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test305() {
    int waitTime = 2;
    int walkTime = 4;
    int lateTime = 3;
    int bestArrival = 4;
    int worstArrival = 4;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 305: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 305: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test306() {
    int waitTime = 20;
    int walkTime = 30;
    int lateTime = 10;
    int bestArrival = 21;
    int worstArrival = 21;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 306: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 306: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test307() {
    int waitTime = 20;
    int walkTime = 30;
    int lateTime = 20;
    int bestArrival = 25;
    int worstArrival = 25;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 307: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 307: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test308() {
    int waitTime = 20;
    int walkTime = 100;
    int lateTime = 2;
    int bestArrival = 128;
    int worstArrival = 8997;
    LateProfessor* pObj = new LateProfessor();
    clock_t start = clock();
    double result = pObj->getProbability(waitTime, walkTime, lateTime, bestArrival, worstArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 0.817566805727816;
    if(result == expected) {
        cout << "Test Case 308: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 308: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    test193() == 0 ? ++passed : ++failed;
    test194() == 0 ? ++passed : ++failed;
    test195() == 0 ? ++passed : ++failed;
    test196() == 0 ? ++passed : ++failed;
    test197() == 0 ? ++passed : ++failed;
    test198() == 0 ? ++passed : ++failed;
    test199() == 0 ? ++passed : ++failed;
    test200() == 0 ? ++passed : ++failed;
    test201() == 0 ? ++passed : ++failed;
    test202() == 0 ? ++passed : ++failed;
    test203() == 0 ? ++passed : ++failed;
    test204() == 0 ? ++passed : ++failed;
    test205() == 0 ? ++passed : ++failed;
    test206() == 0 ? ++passed : ++failed;
    test207() == 0 ? ++passed : ++failed;
    test208() == 0 ? ++passed : ++failed;
    test209() == 0 ? ++passed : ++failed;
    test210() == 0 ? ++passed : ++failed;
    test211() == 0 ? ++passed : ++failed;
    test212() == 0 ? ++passed : ++failed;
    test213() == 0 ? ++passed : ++failed;
    test214() == 0 ? ++passed : ++failed;
    test215() == 0 ? ++passed : ++failed;
    test216() == 0 ? ++passed : ++failed;
    test217() == 0 ? ++passed : ++failed;
    test218() == 0 ? ++passed : ++failed;
    test219() == 0 ? ++passed : ++failed;
    test220() == 0 ? ++passed : ++failed;
    test221() == 0 ? ++passed : ++failed;
    test222() == 0 ? ++passed : ++failed;
    test223() == 0 ? ++passed : ++failed;
    test224() == 0 ? ++passed : ++failed;
    test225() == 0 ? ++passed : ++failed;
    test226() == 0 ? ++passed : ++failed;
    test227() == 0 ? ++passed : ++failed;
    test228() == 0 ? ++passed : ++failed;
    test229() == 0 ? ++passed : ++failed;
    test230() == 0 ? ++passed : ++failed;
    test231() == 0 ? ++passed : ++failed;
    test232() == 0 ? ++passed : ++failed;
    test233() == 0 ? ++passed : ++failed;
    test234() == 0 ? ++passed : ++failed;
    test235() == 0 ? ++passed : ++failed;
    test236() == 0 ? ++passed : ++failed;
    test237() == 0 ? ++passed : ++failed;
    test238() == 0 ? ++passed : ++failed;
    test239() == 0 ? ++passed : ++failed;
    test240() == 0 ? ++passed : ++failed;
    test241() == 0 ? ++passed : ++failed;
    test242() == 0 ? ++passed : ++failed;
    test243() == 0 ? ++passed : ++failed;
    test244() == 0 ? ++passed : ++failed;
    test245() == 0 ? ++passed : ++failed;
    test246() == 0 ? ++passed : ++failed;
    test247() == 0 ? ++passed : ++failed;
    test248() == 0 ? ++passed : ++failed;
    test249() == 0 ? ++passed : ++failed;
    test250() == 0 ? ++passed : ++failed;
    test251() == 0 ? ++passed : ++failed;
    test252() == 0 ? ++passed : ++failed;
    test253() == 0 ? ++passed : ++failed;
    test254() == 0 ? ++passed : ++failed;
    test255() == 0 ? ++passed : ++failed;
    test256() == 0 ? ++passed : ++failed;
    test257() == 0 ? ++passed : ++failed;
    test258() == 0 ? ++passed : ++failed;
    test259() == 0 ? ++passed : ++failed;
    test260() == 0 ? ++passed : ++failed;
    test261() == 0 ? ++passed : ++failed;
    test262() == 0 ? ++passed : ++failed;
    test263() == 0 ? ++passed : ++failed;
    test264() == 0 ? ++passed : ++failed;
    test265() == 0 ? ++passed : ++failed;
    test266() == 0 ? ++passed : ++failed;
    test267() == 0 ? ++passed : ++failed;
    test268() == 0 ? ++passed : ++failed;
    test269() == 0 ? ++passed : ++failed;
    test270() == 0 ? ++passed : ++failed;
    test271() == 0 ? ++passed : ++failed;
    test272() == 0 ? ++passed : ++failed;
    test273() == 0 ? ++passed : ++failed;
    test274() == 0 ? ++passed : ++failed;
    test275() == 0 ? ++passed : ++failed;
    test276() == 0 ? ++passed : ++failed;
    test277() == 0 ? ++passed : ++failed;
    test278() == 0 ? ++passed : ++failed;
    test279() == 0 ? ++passed : ++failed;
    test280() == 0 ? ++passed : ++failed;
    test281() == 0 ? ++passed : ++failed;
    test282() == 0 ? ++passed : ++failed;
    test283() == 0 ? ++passed : ++failed;
    test284() == 0 ? ++passed : ++failed;
    test285() == 0 ? ++passed : ++failed;
    test286() == 0 ? ++passed : ++failed;
    test287() == 0 ? ++passed : ++failed;
    test288() == 0 ? ++passed : ++failed;
    test289() == 0 ? ++passed : ++failed;
    test290() == 0 ? ++passed : ++failed;
    test291() == 0 ? ++passed : ++failed;
    test292() == 0 ? ++passed : ++failed;
    test293() == 0 ? ++passed : ++failed;
    test294() == 0 ? ++passed : ++failed;
    test295() == 0 ? ++passed : ++failed;
    test296() == 0 ? ++passed : ++failed;
    test297() == 0 ? ++passed : ++failed;
    test298() == 0 ? ++passed : ++failed;
    test299() == 0 ? ++passed : ++failed;
    test300() == 0 ? ++passed : ++failed;
    test301() == 0 ? ++passed : ++failed;
    test302() == 0 ? ++passed : ++failed;
    test303() == 0 ? ++passed : ++failed;
    test304() == 0 ? ++passed : ++failed;
    test305() == 0 ? ++passed : ++failed;
    test306() == 0 ? ++passed : ++failed;
    test307() == 0 ? ++passed : ++failed;
    test308() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22504795&rd=14151&pm=10823
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
#include <complex>
#include <setjmp.h>
#include <ext/hash_map>
#include <queue>
using namespace std;
 
#define FR(i,a,b) for(int i=a;i<b;i++)
#define FOR(i,n) FR(i,0,n)
#define FORI(i,v) FOR(i,(int)v.size())
#define FORALL(i,v) for(typeof(v.end())i=v.begin();i!=v.end();++i)
#define BEND(v) v.begin(),v.end()
#define dump(x) cerr << #x << " = " << (x) << endl;
typedef long long ll; typedef long double ld;
 
struct LateProfessor {
double getProbability(int waitTime, int walkTime, int lateTime, int bestArrival, int worstArrival) {
  int period = waitTime+walkTime;
  if (bestArrival != worstArrival) {
    int tot = 0;
    for (int t = bestArrival; t < worstArrival; ++t) {
      int q = t%period;
 
      if (q < waitTime) continue;
      if (q+lateTime >= period) continue;
      ++tot;
    }
    return double(tot) / double(worstArrival-bestArrival);
  } else {
    int t = bestArrival;
    int q = t % period;
 
    if (0 <= q && q <= waitTime) return 0;
    if (q+lateTime > period) return 0;
    return 1;
  }
}
 
 
};
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/