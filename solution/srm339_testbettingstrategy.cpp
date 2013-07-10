/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7422
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

class TestBettingStrategy {
public:
    double winProbability(int initSum, int goalSum, int rounds, int prob);
};

double TestBettingStrategy::winProbability(int initSum, int goalSum, int rounds, int prob) {
    double ret;
    return ret;
}


int test0() {
    int initSum = 10;
    int goalSum = 11;
    int rounds = 4;
    int prob = 50;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.875;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int initSum = 10;
    int goalSum = 20;
    int rounds = 20;
    int prob = 50;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3441343307495117;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int initSum = 10;
    int goalSum = 20;
    int rounds = 10;
    int prob = 90;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.34867844010000015;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int initSum = 96;
    int goalSum = 97;
    int rounds = 1;
    int prob = 79;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.79;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int initSum = 62;
    int goalSum = 63;
    int rounds = 1;
    int prob = 65;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.65;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int initSum = 68;
    int goalSum = 69;
    int rounds = 2;
    int prob = 37;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6031;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int initSum = 39;
    int goalSum = 41;
    int rounds = 2;
    int prob = 38;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1444;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int initSum = 80;
    int goalSum = 82;
    int rounds = 3;
    int prob = 98;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9988159999999999;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int initSum = 20;
    int goalSum = 23;
    int rounds = 3;
    int prob = 50;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.125;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int initSum = 900;
    int goalSum = 902;
    int rounds = 4;
    int prob = 43;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.57590803;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int initSum = 438;
    int goalSum = 441;
    int rounds = 4;
    int prob = 55;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.39098125000000006;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int initSum = 93;
    int goalSum = 96;
    int rounds = 5;
    int prob = 80;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9420800000000001;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int initSum = 147;
    int goalSum = 150;
    int rounds = 5;
    int prob = 20;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.05792000000000003;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int initSum = 20;
    int goalSum = 25;
    int rounds = 6;
    int prob = 54;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.15152445792000002;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int initSum = 42;
    int goalSum = 45;
    int rounds = 6;
    int prob = 84;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9925184102399999;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int initSum = 172;
    int goalSum = 175;
    int rounds = 7;
    int prob = 74;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9846563910336001;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int initSum = 14;
    int goalSum = 19;
    int rounds = 7;
    int prob = 52;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2606678843392;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int initSum = 691;
    int goalSum = 696;
    int rounds = 8;
    int prob = 16;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0038303055216639993;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int initSum = 162;
    int goalSum = 168;
    int rounds = 8;
    int prob = 14;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 1.633276830976001E-4;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int initSum = 367;
    int goalSum = 373;
    int rounds = 9;
    int prob = 45;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16582204764843755;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int initSum = 573;
    int goalSum = 576;
    int rounds = 9;
    int prob = 27;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4552306842262887;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int initSum = 770;
    int goalSum = 777;
    int rounds = 10;
    int prob = 28;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.007003913649746088;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int initSum = 961;
    int goalSum = 967;
    int rounds = 10;
    int prob = 65;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7514955091185547;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int initSum = 339;
    int goalSum = 345;
    int rounds = 11;
    int prob = 34;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.13235007447814498;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int initSum = 757;
    int goalSum = 764;
    int rounds = 11;
    int prob = 25;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.007561206817626953;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int initSum = 927;
    int goalSum = 932;
    int rounds = 12;
    int prob = 43;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6443261166261832;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int initSum = 201;
    int goalSum = 207;
    int rounds = 12;
    int prob = 51;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6395748104688188;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int initSum = 9;
    int goalSum = 13;
    int rounds = 13;
    int prob = 27;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.13935305894741862;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int initSum = 27;
    int goalSum = 31;
    int rounds = 13;
    int prob = 33;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4036756715317635;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int initSum = 953;
    int goalSum = 965;
    int rounds = 14;
    int prob = 91;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8744890267682135;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int initSum = 105;
    int goalSum = 113;
    int rounds = 14;
    int prob = 88;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9994230335926174;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int initSum = 694;
    int goalSum = 707;
    int rounds = 15;
    int prob = 75;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2360878111794591;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int initSum = 5;
    int goalSum = 16;
    int rounds = 15;
    int prob = 55;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.10345875012448452;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int initSum = 20;
    int goalSum = 34;
    int rounds = 16;
    int prob = 99;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9994920575907095;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int initSum = 35;
    int goalSum = 41;
    int rounds = 17;
    int prob = 26;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.18130082314428705;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int initSum = 24;
    int goalSum = 30;
    int rounds = 18;
    int prob = 31;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.21150614403517082;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int initSum = 155;
    int goalSum = 162;
    int rounds = 19;
    int prob = 38;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5952235876407102;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int initSum = 37;
    int goalSum = 44;
    int rounds = 20;
    int prob = 30;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2439854616048496;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int initSum = 86;
    int goalSum = 104;
    int rounds = 21;
    int prob = 90;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8480346894280453;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int initSum = 13;
    int goalSum = 30;
    int rounds = 22;
    int prob = 59;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.05916231444619313;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int initSum = 43;
    int goalSum = 58;
    int rounds = 23;
    int prob = 49;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.08700240819422014;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int initSum = 24;
    int goalSum = 38;
    int rounds = 24;
    int prob = 60;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5940784635646947;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int initSum = 100;
    int goalSum = 122;
    int rounds = 25;
    int prob = 43;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 4.063783527013334E-6;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int initSum = 2;
    int goalSum = 19;
    int rounds = 26;
    int prob = 77;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5504215617924308;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int initSum = 57;
    int goalSum = 64;
    int rounds = 27;
    int prob = 43;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6654143721112978;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int initSum = 869;
    int goalSum = 882;
    int rounds = 28;
    int prob = 33;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.09651040771505859;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int initSum = 725;
    int goalSum = 750;
    int rounds = 29;
    int prob = 70;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.037894911252999625;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int initSum = 60;
    int goalSum = 84;
    int rounds = 30;
    int prob = 52;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0014688093488389015;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int initSum = 20;
    int goalSum = 50;
    int rounds = 31;
    int prob = 94;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.43751569726666195;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int initSum = 11;
    int goalSum = 37;
    int rounds = 32;
    int prob = 90;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9607183600737896;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int initSum = 47;
    int goalSum = 70;
    int rounds = 33;
    int prob = 66;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3992715855813985;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int initSum = 22;
    int goalSum = 52;
    int rounds = 34;
    int prob = 96;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9891754176464141;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int initSum = 33;
    int goalSum = 62;
    int rounds = 35;
    int prob = 53;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 2.2468605836139833E-4;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int initSum = 354;
    int goalSum = 386;
    int rounds = 36;
    int prob = 78;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.07751563458344804;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int initSum = 126;
    int goalSum = 158;
    int rounds = 37;
    int prob = 90;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8402196838785219;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int initSum = 621;
    int goalSum = 640;
    int rounds = 38;
    int prob = 55;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.781033644895088;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int initSum = 154;
    int goalSum = 172;
    int rounds = 39;
    int prob = 41;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.28294709560534465;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int initSum = 320;
    int goalSum = 349;
    int rounds = 40;
    int prob = 56;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.024190398892661856;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int initSum = 89;
    int goalSum = 94;
    int rounds = 41;
    int prob = 14;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.07484514677560127;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int initSum = 2;
    int goalSum = 13;
    int rounds = 42;
    int prob = 62;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2368201057373569;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int initSum = 159;
    int goalSum = 193;
    int rounds = 43;
    int prob = 74;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.28622415983107474;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int initSum = 19;
    int goalSum = 39;
    int rounds = 44;
    int prob = 73;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9273420872873085;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int initSum = 1;
    int goalSum = 46;
    int rounds = 45;
    int prob = 99;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6361854860638709;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int initSum = 793;
    int goalSum = 833;
    int rounds = 46;
    int prob = 85;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.45357084090652705;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int initSum = 464;
    int goalSum = 485;
    int rounds = 47;
    int prob = 43;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4366692587615992;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int initSum = 45;
    int goalSum = 80;
    int rounds = 48;
    int prob = 71;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4520093300008817;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int initSum = 205;
    int goalSum = 249;
    int rounds = 49;
    int prob = 84;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.18263230249950224;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int initSum = 33;
    int goalSum = 45;
    int rounds = 50;
    int prob = 41;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.41060608474568533;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int initSum = 13;
    int goalSum = 15;
    int rounds = 6;
    int prob = 0;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
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
    int initSum = 13;
    int goalSum = 15;
    int rounds = 6;
    int prob = 100;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int initSum = 972;
    int goalSum = 1000;
    int rounds = 39;
    int prob = 67;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3262616555347305;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int initSum = 990;
    int goalSum = 1000;
    int rounds = 50;
    int prob = 50;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.980639377210653;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int initSum = 100;
    int goalSum = 1000;
    int rounds = 50;
    int prob = 50;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
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
    int initSum = 10;
    int goalSum = 40;
    int rounds = 50;
    int prob = 25;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 7.476787558840655E-8;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int initSum = 10;
    int goalSum = 20;
    int rounds = 20;
    int prob = 50;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3441343307495117;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int initSum = 975;
    int goalSum = 1000;
    int rounds = 50;
    int prob = 49;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49472519628223177;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int initSum = 150;
    int goalSum = 190;
    int rounds = 50;
    int prob = 20;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2907778453341292E-19;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int initSum = 10;
    int goalSum = 1000;
    int rounds = 50;
    int prob = 10;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
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
    int initSum = 1;
    int goalSum = 1000;
    int rounds = 50;
    int prob = 67;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
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
    int initSum = 1;
    int goalSum = 1000;
    int rounds = 50;
    int prob = 50;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
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
    int initSum = 500;
    int goalSum = 1000;
    int rounds = 50;
    int prob = 50;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
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
    int initSum = 970;
    int goalSum = 1000;
    int rounds = 50;
    int prob = 60;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5605893505699144;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int initSum = 500;
    int goalSum = 1000;
    int rounds = 50;
    int prob = 60;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
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
    int initSum = 965;
    int goalSum = 987;
    int rounds = 50;
    int prob = 32;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.04802096739937314;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int initSum = 999;
    int goalSum = 1000;
    int rounds = 50;
    int prob = 100;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int initSum = 998;
    int goalSum = 1000;
    int rounds = 1;
    int prob = 100;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
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
    int initSum = 510;
    int goalSum = 540;
    int rounds = 50;
    int prob = 50;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
    clock_t end = clock();
    delete pObj;
    double expected = 0.10118145797005695;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int initSum = 10;
    int goalSum = 1000;
    int rounds = 50;
    int prob = 2;
    TestBettingStrategy* pObj = new TestBettingStrategy();
    clock_t start = clock();
    double result = pObj->winProbability(initSum, goalSum, rounds, prob);
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22652328&rd=10663&pm=7422
********************************************************************************
const double EPS = 1e-8; 
 
double ps[64][15][2048]; 
 
class TestBettingStrategy 
{ 
public:   
  double winProbability(int iS, int gS, int r, int p) 
  { 
    int i; 
    int j; 
    int k; 
    double res = 0; 
    double prob = (double)p / 100.0; 
 
    ps[0][0][iS] = 1.0; 
 
    for ( i=0; i<r; i++ ) 
    { 
      for ( j=0; j<12; j++ ) 
        for ( k=0; k<gS; k++ ) 
          if ( k >= ( 1 << j ) ) 
          { 
            //win 
            ps[i+1][0][k+( 1 << j )] += ps[i][j][k] * prob; 
            //lose 
            ps[i+1][j+1][k-( 1 << j )] += ps[i][j][k] * ( 1.0 - prob ); 
          } 
    } 
 
    for ( i=0; i<=r; i++ ) 
      for ( j=0; j<=12; j++ ) 
        for ( k=gS; k<2048; k++ ) 
          res += ps[i][j][k]; 
 
    return res; 
  } 
};

********************************************************************************
*******************************************************************************/