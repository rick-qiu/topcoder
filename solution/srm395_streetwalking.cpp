/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8464
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

class StreetWalking {
public:
    long minTime(int X, int Y, int walkTime, int sneakTime);
};

long StreetWalking::minTime(int X, int Y, int walkTime, int sneakTime) {
    long ret;
    return ret;
}


int test0() {
    int X = 4;
    int Y = 2;
    int walkTime = 3;
    int sneakTime = 10;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 18;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int X = 4;
    int Y = 2;
    int walkTime = 3;
    int sneakTime = 5;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int X = 2;
    int Y = 0;
    int walkTime = 12;
    int sneakTime = 10;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 20;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int X = 1000000;
    int Y = 1000000;
    int walkTime = 1000;
    int sneakTime = 1000;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int X = 0;
    int Y = 0;
    int walkTime = 12;
    int sneakTime = 25;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int X = 25;
    int Y = 18;
    int walkTime = 7;
    int sneakTime = 11;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 247;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int X = 25;
    int Y = 18;
    int walkTime = 7;
    int sneakTime = 6;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 151;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int X = 24;
    int Y = 16;
    int walkTime = 12;
    int sneakTime = 10;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 240;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int X = 1000000000;
    int Y = 1000000000;
    int walkTime = 10000;
    int sneakTime = 10000;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 10000000000000;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int X = 37;
    int Y = 18;
    int walkTime = 12;
    int sneakTime = 25;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 660;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int X = 53437378;
    int Y = 43542123;
    int walkTime = 37;
    int sneakTime = 12;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 641248561;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int X = 453543573;
    int Y = 453573787;
    int walkTime = 1234;
    int sneakTime = 6789;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 1119382822240;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int X = 453543573;
    int Y = 453573787;
    int walkTime = 6789;
    int sneakTime = 1234;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 559710053158;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int X = 453543573;
    int Y = 453573787;
    int walkTime = 6789;
    int sneakTime = 7890;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 3578663913816;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int X = 239458;
    int Y = 23535;
    int walkTime = 10;
    int sneakTime = 1;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 239467;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int X = 239458;
    int Y = 23535;
    int walkTime = 10;
    int sneakTime = 15;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 2512255;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int X = 239458;
    int Y = 23535;
    int walkTime = 10;
    int sneakTime = 30;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 2629930;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int X = 23;
    int Y = 131351355;
    int walkTime = 249;
    int sneakTime = 302;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 32706488614;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int X = 123;
    int Y = 456;
    int walkTime = 78;
    int sneakTime = 90;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 37044;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int X = 398527359;
    int Y = 0;
    int walkTime = 40;
    int sneakTime = 20;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 7970547200;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int X = 0;
    int Y = 398527359;
    int walkTime = 15;
    int sneakTime = 40;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 5977910385;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int X = 0;
    int Y = 0;
    int walkTime = 10000;
    int sneakTime = 10000;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int X = 1000000000;
    int Y = 0;
    int walkTime = 10000;
    int sneakTime = 8000;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 8000000000000;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int X = 0;
    int Y = 1000000000;
    int walkTime = 10000;
    int sneakTime = 7000;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 7000000000000;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int X = 1000000000;
    int Y = 50000;
    int walkTime = 1000;
    int sneakTime = 1500;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 1000025000000;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int X = 50000;
    int Y = 1000000000;
    int walkTime = 1000;
    int sneakTime = 2001;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 1000050000000;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int X = 1000000000;
    int Y = 50000;
    int walkTime = 1000;
    int sneakTime = 666;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 666000000000;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int X = 50001;
    int Y = 1000000000;
    int walkTime = 1000;
    int sneakTime = 666;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 666000000334;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int X = 1000000000;
    int Y = 50001;
    int walkTime = 1000;
    int sneakTime = 665;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 665000000335;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int X = 125;
    int Y = 472;
    int walkTime = 1;
    int sneakTime = 2;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 597;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int X = 10000000;
    int Y = 50000000;
    int walkTime = 800;
    int sneakTime = 901;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 41010000000;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int X = 135;
    int Y = 122;
    int walkTime = 43;
    int sneakTime = 29;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 3929;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int X = 3445333;
    int Y = 545437122;
    int walkTime = 345;
    int sneakTime = 354;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 188206815087;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int X = 100000000;
    int Y = 100000000;
    int walkTime = 2;
    int sneakTime = 2;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 200000000;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int X = 10000000;
    int Y = 5;
    int walkTime = 123;
    int sneakTime = 122;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 1220000001;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int X = 125;
    int Y = 122313000;
    int walkTime = 123;
    int sneakTime = 344;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 15044514375;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int X = 214748364;
    int Y = 214748365;
    int walkTime = 8;
    int sneakTime = 10;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 2147483648;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int X = 214748364;
    int Y = 214748365;
    int walkTime = 7;
    int sneakTime = 10;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 2147483647;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int X = 343454353;
    int Y = 0;
    int walkTime = 951;
    int sneakTime = 950;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 326281635351;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int X = 999999999;
    int Y = 0;
    int walkTime = 1000;
    int sneakTime = 1;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000998;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int X = 1;
    int Y = 1;
    int walkTime = 4;
    int sneakTime = 6;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int X = 100;
    int Y = 100;
    int walkTime = 100;
    int sneakTime = 100;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 10000;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int X = 1000000000;
    int Y = 999999997;
    int walkTime = 4999;
    int sneakTime = 10000;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 9997999985003;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int X = 1;
    int Y = 1;
    int walkTime = 1;
    int sneakTime = 100;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int X = 2;
    int Y = 3;
    int walkTime = 3;
    int sneakTime = 4;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int X = 1000000000;
    int Y = 1000000000;
    int walkTime = 4999;
    int sneakTime = 9999;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 9998000000000;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int X = 2;
    int Y = 1;
    int walkTime = 100;
    int sneakTime = 10;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 110;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int X = 11234;
    int Y = 3214;
    int walkTime = 100;
    int sneakTime = 3;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 33702;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int X = 1000000000;
    int Y = 1000000000;
    int walkTime = 1;
    int sneakTime = 10;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 2000000000;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int X = 10000000;
    int Y = 9758463;
    int walkTime = 11;
    int sneakTime = 12;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 119758463;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int X = 932859771;
    int Y = 1000000000;
    int walkTime = 9835;
    int sneakTime = 5431;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 5431000004404;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int X = 1;
    int Y = 2;
    int walkTime = 5;
    int sneakTime = 3;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int X = 2;
    int Y = 2;
    int walkTime = 10;
    int sneakTime = 100;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 40;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int X = 1000000000;
    int Y = 0;
    int walkTime = 10000;
    int sneakTime = 9999;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 9999000000000;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int X = 1000000000;
    int Y = 1000000000;
    int walkTime = 10000;
    int sneakTime = 50;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 50000000000;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int X = 999999999;
    int Y = 999999997;
    int walkTime = 5;
    int sneakTime = 7;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 6999999989;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int X = 1000000000;
    int Y = 999999999;
    int walkTime = 324;
    int sneakTime = 1000;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 647999999676;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int X = 999999999;
    int Y = 899899899;
    int walkTime = 98;
    int sneakTime = 76;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 75999999924;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int X = 10000000;
    int Y = 9758463;
    int walkTime = 50;
    int sneakTime = 12;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 120000038;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int X = 3;
    int Y = 5;
    int walkTime = 100;
    int sneakTime = 1;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int X = 1000000000;
    int Y = 1000000000;
    int walkTime = 499;
    int sneakTime = 1000;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 998000000000;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int X = 1;
    int Y = 2;
    int walkTime = 1000;
    int sneakTime = 1;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 1001;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int X = 136;
    int Y = 123;
    int walkTime = 43;
    int sneakTime = 29;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 3958;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int X = 1000000000;
    int Y = 1000000000;
    int walkTime = 1;
    int sneakTime = 1;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int X = 1000000000;
    int Y = 1000000000;
    int walkTime = 400;
    int sneakTime = 1000;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 800000000000;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int X = 100000000;
    int Y = 100000000;
    int walkTime = 10000;
    int sneakTime = 10000;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000000;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int X = 1;
    int Y = 3;
    int walkTime = 296;
    int sneakTime = 300;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 892;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int X = 7;
    int Y = 7;
    int walkTime = 10;
    int sneakTime = 2;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 14;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int X = 3;
    int Y = 1;
    int walkTime = 100;
    int sneakTime = 1;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int X = 1000000000;
    int Y = 1000000000;
    int walkTime = 5;
    int sneakTime = 20;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 10000000000;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int X = 100000;
    int Y = 1;
    int walkTime = 10000;
    int sneakTime = 1;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 109999;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int X = 0;
    int Y = 5;
    int walkTime = 100;
    int sneakTime = 99;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 496;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int X = 1000000000;
    int Y = 1000000000;
    int walkTime = 4999;
    int sneakTime = 10000;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 9998000000000;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int X = 1000000000;
    int Y = 1000000000;
    int walkTime = 10000;
    int sneakTime = 9999;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 9999000000000;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int X = 0;
    int Y = 0;
    int walkTime = 10;
    int sneakTime = 1000;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int X = 30;
    int Y = 10;
    int walkTime = 10;
    int sneakTime = 30;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 400;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int X = 135;
    int Y = 122;
    int walkTime = 60;
    int sneakTime = 29;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 3946;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int X = 1000000000;
    int Y = 1000000000;
    int walkTime = 1000;
    int sneakTime = 2000;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 2000000000000;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int X = 999;
    int Y = 988;
    int walkTime = 100;
    int sneakTime = 10000;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 198700;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int X = 5;
    int Y = 1;
    int walkTime = 3;
    int sneakTime = 2;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int X = 1000000000;
    int Y = 1000000000;
    int walkTime = 1000;
    int sneakTime = 10000;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 2000000000000;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int X = 1000000000;
    int Y = 1000000000;
    int walkTime = 1000;
    int sneakTime = 3000;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 2000000000000;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int X = 1;
    int Y = 1;
    int walkTime = 10;
    int sneakTime = 90;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 20;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int X = 3;
    int Y = 0;
    int walkTime = 3;
    int sneakTime = 2;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int X = 2;
    int Y = 1;
    int walkTime = 5;
    int sneakTime = 2;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int X = 1000000000;
    int Y = 1000000000;
    int walkTime = 5000;
    int sneakTime = 10000;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 10000000000000;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int X = 1;
    int Y = 1;
    int walkTime = 15;
    int sneakTime = 10;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int X = 1000000000;
    int Y = 1000000000;
    int walkTime = 10000;
    int sneakTime = 1;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int X = 7;
    int Y = 1;
    int walkTime = 4;
    int sneakTime = 3;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 21;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int X = 3;
    int Y = 0;
    int walkTime = 10;
    int sneakTime = 100;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 30;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int X = 100;
    int Y = 100;
    int walkTime = 24;
    int sneakTime = 50;
    StreetWalking* pObj = new StreetWalking();
    clock_t start = clock();
    long result = pObj->minTime(X, Y, walkTime, sneakTime);
    clock_t end = clock();
    delete pObj;
    long expected = 4800;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22662189&rd=11129&pm=8464
********************************************************************************
#define _CRT_SECURE_NO_DEPRECATE 
 
#include <cstdio> 
#include <cmath> 
#include <sstream> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <functional> 
#include <iostream> 
#include <map> 
#include <set> 
 
#define fo(a,b,c) for( a = ( b ); a < ( c ); ++ a ) 
#define fr(a,b) fo( a, 0, ( b ) ) 
#define fi(a) fr( i, ( a ) ) 
#define fj(a) fr( j, ( a ) ) 
#define fk(a) fr( k, ( a ) ) 
#define fin fi( n ) 
#define all(v) (v).begin( ), (v).end( ) 
#define pb push_back 
#define mp make_pair 
 
using namespace std; 
 
class StreetWalking  
{ 
public: 
  long long minTime(int X, int Y, int walkTime, int sneakTime)  
  { 
    long long x = X; 
    long long y = Y; 
    long long w = walkTime; 
    long long s = sneakTime; 
    if( x > y ) swap( x, y ); 
    long long dif = ( ( x + y ) % 2 ); 
    return min( w * ( x + y ), min( x * s + ( y - x ) * w, ( y - dif ) * s + w * dif ) ); 
  } 
   
  
}; 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/