/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10878
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

class RabbitStepping {
public:
    double getExpected(string field, int r);
};

double RabbitStepping::getExpected(string field, int r) {
    double ret;
    return ret;
}


int test0() {
    string field = "WRBRW";
    int r = 4;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string field = "WWB";
    int r = 2;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3333333333333333;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string field = "WW";
    int r = 1;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
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
    string field = "BBBBBBBBBB";
    int r = 4;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9523809523809523;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string field = "RRBRRWRRBRRW";
    int r = 8;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9696969696969697;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string field = "WB";
    int r = 1;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
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
    string field = "BW";
    int r = 2;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string field = "RBR";
    int r = 1;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
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
    string field = "BBB";
    int r = 2;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3333333333333333;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string field = "BBB";
    int r = 3;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string field = "WWBR";
    int r = 1;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string field = "WWRR";
    int r = 2;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3333333333333333;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string field = "RBRR";
    int r = 3;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string field = "RBRW";
    int r = 4;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string field = "RBBWB";
    int r = 1;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string field = "RWWWW";
    int r = 2;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string field = "RBRBW";
    int r = 3;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string field = "WWWWB";
    int r = 4;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string field = "RBWRW";
    int r = 5;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
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
    string field = "WBRBRR";
    int r = 1;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string field = "WBBWBW";
    int r = 2;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string field = "RBRRBB";
    int r = 3;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string field = "BBWWWB";
    int r = 4;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string field = "WRRWRW";
    int r = 5;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string field = "WRRRBW";
    int r = 6;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string field = "WWWWWWWWWWWRRRRR";
    int r = 1;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string field = "RRRRRRRRRRRRRRRR";
    int r = 2;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0666666666666667;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string field = "BBBBBBBBRRRRRRRR";
    int r = 3;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string field = "WWWWWWWWWWWWBBBB";
    int r = 4;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9846153846153847;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string field = "BBWWWWWWWWWWWWWW";
    int r = 5;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string field = "WWWWWWWWWWWWWWWW";
    int r = 6;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.006993006993007;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string field = "BBBBBBBBBBBBBBBB";
    int r = 7;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string field = "RRRRRRRRRRRRRRRR";
    int r = 8;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9945609945609946;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string field = "BBBBBBBBBBBBBRRR";
    int r = 9;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
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
    string field = "BBBBBBBBBBBBBBBB";
    int r = 10;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.006993006993007;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string field = "RRRRRRRRRRRRRRRR";
    int r = 11;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string field = "WWWWWWWWWWWWBBBB";
    int r = 12;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9846153846153847;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string field = "BBBBBBBBBRRRRRRR";
    int r = 13;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string field = "RRRRRRRRRRRRWWWW";
    int r = 14;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0666666666666667;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string field = "BBBBBBWWWWWWWWWW";
    int r = 15;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string field = "RRRRWWWWWWWWWWWW";
    int r = 16;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
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
    string field = "BBBBBBBBBBBBBBBBB";
    int r = 1;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string field = "WWWWWWWWWWBBBBBBB";
    int r = 2;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0588235294117647;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string field = "BBBBBBBBBBBBBBBBB";
    int r = 3;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
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
    string field = "BBBBBBBBBBBBBBBBB";
    int r = 4;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9882352941176471;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string field = "BBBBBBBBBBBBRRRRR";
    int r = 5;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
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
    string field = "WWWWWWWWWWWWWWWWW";
    int r = 6;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.004524886877828;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string field = "RRRRRRRRRRRRRRRRR";
    int r = 7;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string field = "RRRRRRRBBBBBBBBBB";
    int r = 8;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9971205265322912;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string field = "BBBBBBBBBBBRRRRRR";
    int r = 9;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string field = "WWWWWWWWWWWWWWWWW";
    int r = 10;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0028794734677087;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string field = "RRRRRRBBBBBBBBBBB";
    int r = 11;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
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
    string field = "BBBBBBBBBBBBBBBBB";
    int r = 12;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 0.995475113122172;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string field = "RRBBBBBBBBBBBBBBB";
    int r = 13;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
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
    string field = "RRRRRRRRRRRWWWWWW";
    int r = 14;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.011764705882353;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string field = "RRRRRRRRRRRRRRRRR";
    int r = 15;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string field = "BBBBRRRRRRRRRRRRR";
    int r = 16;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9411764705882353;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string field = "WWWWWWWWWWWWWWWWW";
    int r = 17;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string field = "RWRR";
    int r = 3;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
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
    string field = "RRBWB";
    int r = 2;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string field = "BBBWRRBWWWB";
    int r = 8;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9696969696969697;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string field = "RBWRWWR";
    int r = 7;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
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
    string field = "BBB";
    int r = 1;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string field = "RBR";
    int r = 2;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3333333333333333;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string field = "RBWWW";
    int r = 5;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string field = "WBR";
    int r = 2;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3333333333333333;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string field = "WWBBR";
    int r = 3;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string field = "BWBRRWBRBW";
    int r = 9;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string field = "WWWBRRW";
    int r = 5;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string field = "RRRWW";
    int r = 1;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
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
    string field = "RWRRRWB";
    int r = 3;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string field = "BBRWBBWRR";
    int r = 4;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9523809523809523;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string field = "RW";
    int r = 2;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string field = "RRWR";
    int r = 1;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string field = "RWB";
    int r = 2;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3333333333333333;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string field = "RRRWBRWRRRW";
    int r = 1;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string field = "BBBWRWBWBRR";
    int r = 3;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
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
    string field = "RR";
    int r = 1;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
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
    string field = "RWWRWBR";
    int r = 2;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1428571428571428;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string field = "RRRWRBBB";
    int r = 8;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
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
    string field = "BRWRWRBWBB";
    int r = 9;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string field = "RW";
    int r = 2;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string field = "WRRRRRRBRWWW";
    int r = 6;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0216450216450217;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string field = "BRBBWB";
    int r = 5;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string field = "BWBWWBR";
    int r = 4;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9142857142857143;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string field = "BRWWBWBWWR";
    int r = 1;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string field = "WBWWBB";
    int r = 4;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string field = "RBWBBRRRWRBW";
    int r = 10;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0909090909090908;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string field = "WRB";
    int r = 3;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string field = "WWBBRRB";
    int r = 5;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
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
    string field = "WRWB";
    int r = 3;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string field = "WBBWRWWBWW";
    int r = 6;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0476190476190477;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string field = "BBBBRWBBBWB";
    int r = 10;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0909090909090908;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string field = "WB";
    int r = 1;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string field = "WWBRRBWR";
    int r = 2;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1428571428571428;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string field = "WRWRWWR";
    int r = 3;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
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
    string field = "RRWRWBWWBRB";
    int r = 5;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
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
    string field = "BBRWWRWBW";
    int r = 3;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string field = "BBBRWRBBRR";
    int r = 4;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9523809523809523;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string field = "BWBRWBB";
    int r = 2;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1428571428571428;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string field = "RRBRRRBWRRBWBWWRR";
    int r = 5;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string field = "RRRRRRRRRRRRRRRRR";
    int r = 8;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9971205265322912;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string field = "WBRWBRWBRWBRWBRWB";
    int r = 16;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9411764705882353;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string field = "RRWBRRWRWRRBRBRBR";
    int r = 9;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string field = "RRBRRWRRBRRWRRRRR";
    int r = 8;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9971205265322912;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string field = "RRBRRRWRRBRRWWW";
    int r = 10;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.006993006993007;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string field = "RRRRRRRRRRR";
    int r = 4;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9696969696969697;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string field = "WWW";
    int r = 3;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string field = "BB";
    int r = 2;
    RabbitStepping* pObj = new RabbitStepping();
    clock_t start = clock();
    double result = pObj->getExpected(field, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=9906197&rd=14156&pm=10878
********************************************************************************
#include <algorithm>  
#include <iostream>  
#include <sstream>  
#include <string>  
#include <vector>  
#include <queue>  
#include <set>  
#include <map>  
#include <cstdio>  
#include <cstdlib>  
#include <cctype>  
#include <cmath>  
#include <list>  
using namespace std;  
 
#define PB push_back  
#define MP make_pair  
#define SZ(v) ((int)(v).size())  
#define FOR(i,a,b) for(int i=(a);i<(b);++i)  
#define REP(i,n) FOR(i,0,n)  
#define FORE(i,a,b) for(int i=(a);i<=(b);++i)  
#define REPE(i,n) FORE(i,0,n)  
#define FORSZ(i,a,v) FOR(i,a,SZ(v))  
#define REPSZ(i,v) REP(i,SZ(v))  
typedef long long ll;  
 
int calc(int mask,int prevleft,const string &s) { 
  int n=SZ(s); 
  while(n>=2) { 
    int nmask=0,nprevleft=0,nmult=0; 
    REP(i,n) if(mask&(1<<i)) { 
      int to=-1; 
      if(i==0) to=i+1; 
      else if(i==n-1||i==n-2) to=i-1; 
      else if(s[i]=='W') to=i-1; 
      else if(s[i]=='B') to=i+1; 
      else if((prevleft&(1<<i))==0) to=i-1; else to=i+1; 
      if(nmask&(1<<to)) nmult|=1<<to; 
      nmask|=1<<to; 
      if(to==i-1) nprevleft|=1<<to; 
    } 
    nmask&=~nmult; nprevleft&=~nmult; 
    mask=nmask; prevleft=nprevleft; --n; 
  } 
  return __builtin_popcount(mask); 
} 
 
class RabbitStepping {  
public:    
  double getExpected(string s, int r) { 
    int n=SZ(s); 
    int num=0,den=0; 
    REP(i,1<<n) if(__builtin_popcount(i)==r) { 
      num+=calc(i,0,s); 
      ++den; 
    } 
    return 1.0*num/den; 
  } 
};

********************************************************************************
*******************************************************************************/