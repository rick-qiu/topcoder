/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5968
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

class SnailRace {
public:
    double shortestTime(int snails, int distance, int snailSpeed, int georgeSpeed);
};

double SnailRace::shortestTime(int snails, int distance, int snailSpeed, int georgeSpeed) {
    double ret;
    return ret;
}


int test0() {
    int snails = 2;
    int distance = 11;
    int snailSpeed = 4;
    int georgeSpeed = 8;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1.75;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int snails = 3;
    int distance = 12;
    int snailSpeed = 2;
    int georgeSpeed = 100;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.502;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int snails = 2;
    int distance = 11;
    int snailSpeed = 50;
    int georgeSpeed = 40;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int snails = 10;
    int distance = 6;
    int snailSpeed = 1;
    int georgeSpeed = 1000;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.09323356231599604;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int snails = 2;
    int distance = 201;
    int snailSpeed = 10;
    int georgeSpeed = 20;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 14.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int snails = 2;
    int distance = 21;
    int snailSpeed = 2;
    int georgeSpeed = 2;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int snails = 2;
    int distance = 21;
    int snailSpeed = 3;
    int georgeSpeed = 2;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 6.666666666666667;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int snails = 2;
    int distance = 11;
    int snailSpeed = 50;
    int georgeSpeed = 40;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int snails = 10;
    int distance = 6;
    int snailSpeed = 1;
    int georgeSpeed = 1000;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.09323356231599604;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int snails = 1;
    int distance = 2;
    int snailSpeed = 1;
    int georgeSpeed = 10000;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0E-4;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int snails = 50;
    int distance = 2;
    int snailSpeed = 50;
    int georgeSpeed = 10000;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.006622408026755859;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int snails = 50;
    int distance = 1000;
    int snailSpeed = 1;
    int georgeSpeed = 2;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 984.1633663366333;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int snails = 50;
    int distance = 1000;
    int snailSpeed = 1;
    int georgeSpeed = 1;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 999.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int snails = 25;
    int distance = 666;
    int snailSpeed = 50;
    int georgeSpeed = 50;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 13.3;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int snails = 49;
    int distance = 123;
    int snailSpeed = 20;
    int georgeSpeed = 600;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 4.66065616797899;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int snails = 49;
    int distance = 123;
    int snailSpeed = 20;
    int georgeSpeed = 600;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 4.66065616797899;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int snails = 50;
    int distance = 1000;
    int snailSpeed = 50;
    int georgeSpeed = 1000;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 16.630411764705876;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int snails = 1;
    int distance = 2;
    int snailSpeed = 1;
    int georgeSpeed = 1;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int snails = 2;
    int distance = 2;
    int snailSpeed = 1;
    int georgeSpeed = 1;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int snails = 50;
    int distance = 1000;
    int snailSpeed = 50;
    int georgeSpeed = 51;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 19.97208793535277;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int snails = 30;
    int distance = 10;
    int snailSpeed = 50;
    int georgeSpeed = 49;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.18;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int snails = 7;
    int distance = 12;
    int snailSpeed = 33;
    int georgeSpeed = 133;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.25930484574425383;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int snails = 50;
    int distance = 2;
    int snailSpeed = 100;
    int georgeSpeed = 10000;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.004975376884422097;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int snails = 1;
    int distance = 1000;
    int snailSpeed = 100;
    int georgeSpeed = 10000;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0999;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int snails = 10;
    int distance = 1000;
    int snailSpeed = 1;
    int georgeSpeed = 10000;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1.8945104202016168;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int snails = 10;
    int distance = 1000;
    int snailSpeed = 100;
    int georgeSpeed = 1000;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 6.579620689655172;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int snails = 45;
    int distance = 321;
    int snailSpeed = 58;
    int georgeSpeed = 9999;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1.878626488069296;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int snails = 40;
    int distance = 12;
    int snailSpeed = 10;
    int georgeSpeed = 12;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0949709060681474;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int snails = 33;
    int distance = 999;
    int snailSpeed = 9;
    int georgeSpeed = 1234;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 35.66645341849004;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int snails = 7;
    int distance = 777;
    int snailSpeed = 7;
    int georgeSpeed = 777;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 11.6301739527546;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int snails = 37;
    int distance = 88;
    int snailSpeed = 10;
    int georgeSpeed = 17;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 8.57051736357191;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int snails = 45;
    int distance = 2;
    int snailSpeed = 100;
    int georgeSpeed = 1890;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.008253281747257656;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int snails = 50;
    int distance = 34;
    int snailSpeed = 3;
    int georgeSpeed = 4678;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6566876709326888;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int snails = 17;
    int distance = 678;
    int snailSpeed = 56;
    int georgeSpeed = 57;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 12.076704885573225;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int snails = 42;
    int distance = 487;
    int snailSpeed = 35;
    int georgeSpeed = 6501;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 4.288817405968029;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int snails = 20;
    int distance = 741;
    int snailSpeed = 79;
    int georgeSpeed = 9359;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 2.320437813010087;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int snails = 13;
    int distance = 490;
    int snailSpeed = 6;
    int georgeSpeed = 8146;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4736451514915478;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int snails = 32;
    int distance = 845;
    int snailSpeed = 62;
    int georgeSpeed = 492;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 12.114224129962984;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int snails = 46;
    int distance = 955;
    int snailSpeed = 28;
    int georgeSpeed = 5437;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 10.872750532685608;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int snails = 42;
    int distance = 620;
    int snailSpeed = 3;
    int georgeSpeed = 154;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 127.51627404853215;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int snails = 43;
    int distance = 396;
    int snailSpeed = 22;
    int georgeSpeed = 8717;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 3.1714363750452494;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int snails = 19;
    int distance = 916;
    int snailSpeed = 48;
    int georgeSpeed = 1727;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 9.671833109878017;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int snails = 22;
    int distance = 551;
    int snailSpeed = 70;
    int georgeSpeed = 9913;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1.8303709501635825;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int snails = 18;
    int distance = 327;
    int snailSpeed = 36;
    int georgeSpeed = 9895;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0229660290060425;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int snails = 4;
    int distance = 836;
    int snailSpeed = 23;
    int georgeSpeed = 334;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 11.924242424242424;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int snails = 24;
    int distance = 670;
    int snailSpeed = 42;
    int georgeSpeed = 7712;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 3.2466078270558634;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int snails = 4;
    int distance = 876;
    int snailSpeed = 48;
    int georgeSpeed = 7645;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7681360464589337;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int snails = 13;
    int distance = 791;
    int snailSpeed = 38;
    int georgeSpeed = 2860;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 5.186482021915091;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int snails = 24;
    int distance = 752;
    int snailSpeed = 30;
    int georgeSpeed = 779;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 16.13792676769305;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int snails = 17;
    int distance = 40;
    int snailSpeed = 91;
    int georgeSpeed = 1843;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.26597723167089504;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int snails = 39;
    int distance = 138;
    int snailSpeed = 41;
    int georgeSpeed = 8943;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8718700900006735;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int snails = 50;
    int distance = 1000;
    int snailSpeed = 1;
    int georgeSpeed = 2;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 984.1633663366333;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int snails = 1;
    int distance = 10;
    int snailSpeed = 5;
    int georgeSpeed = 4;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1.8;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int snails = 50;
    int distance = 1000;
    int snailSpeed = 100;
    int georgeSpeed = 10000;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 4.97040150753769;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int snails = 1;
    int distance = 717;
    int snailSpeed = 50;
    int georgeSpeed = 42;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 14.32;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int snails = 1;
    int distance = 100;
    int snailSpeed = 5;
    int georgeSpeed = 6;
    SnailRace* pObj = new SnailRace();
    clock_t start = clock();
    double result = pObj->shortestTime(snails, distance, snailSpeed, georgeSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 16.5;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=9958899&rd=9811&pm=5968
********************************************************************************
class SnailRace{
public:
  double shortestTime(int n,int dis,int ss,int gs){
    double time;
    if(ss>=gs)
      return (dis-1)*1.0/ss;
    time = (dis-1)*1.0/(gs+(n-1)*ss*1.0+ss*1.0*(gs-ss)*(n-1)/(gs+ss));
    time = n*time*1.0+(n-1)*1.0*(gs-ss)/(gs+ss)*time;
    return time;
  }
};

********************************************************************************
*******************************************************************************/