/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11934
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

class PatrolRoute {
public:
    int countRoutes(int X, int Y, int minT, int maxT);
};

int PatrolRoute::countRoutes(int X, int Y, int minT, int maxT) {
    int ret;
    return ret;
}


int test0() {
    int X = 3;
    int Y = 3;
    int minT = 1;
    int maxT = 20000;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int X = 3;
    int Y = 3;
    int minT = 4;
    int maxT = 7;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int X = 4;
    int Y = 6;
    int minT = 9;
    int maxT = 12;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 264;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int X = 7;
    int Y = 5;
    int minT = 13;
    int maxT = 18;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 1212;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int X = 4000;
    int Y = 4000;
    int minT = 4000;
    int maxT = 14000;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 859690013;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int X = 3;
    int Y = 3;
    int minT = 8;
    int maxT = 16490;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int X = 3;
    int Y = 5;
    int minT = 10;
    int maxT = 10;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int X = 3;
    int Y = 74;
    int minT = 49;
    int maxT = 54;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 20688;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int X = 3;
    int Y = 965;
    int minT = 845;
    int maxT = 15653;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 534553440;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int X = 3;
    int Y = 2848;
    int minT = 58;
    int maxT = 413;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 331326708;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int X = 3;
    int Y = 3852;
    int minT = 2094;
    int maxT = 4759;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 97261732;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int X = 3;
    int Y = 4000;
    int minT = 138;
    int maxT = 1403;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 120856025;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int X = 3;
    int Y = 4000;
    int minT = 3192;
    int maxT = 18090;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 604282241;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int X = 3;
    int Y = 4000;
    int minT = 4126;
    int maxT = 4373;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 962485226;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int X = 3;
    int Y = 4000;
    int minT = 948;
    int maxT = 2176;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 130607277;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int X = 5;
    int Y = 3;
    int minT = 10;
    int maxT = 12;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int X = 4;
    int Y = 4;
    int minT = 8;
    int maxT = 12;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 96;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int X = 6;
    int Y = 19;
    int minT = 4;
    int maxT = 18776;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 116280;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int X = 4;
    int Y = 596;
    int minT = 4;
    int maxT = 11528;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 842577120;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int X = 7;
    int Y = 1139;
    int minT = 539;
    int maxT = 1512;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 709062678;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int X = 4;
    int Y = 3328;
    int minT = 1;
    int maxT = 16142;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 305292795;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int X = 6;
    int Y = 4000;
    int minT = 4;
    int maxT = 13687;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 40151047;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int X = 7;
    int Y = 4000;
    int minT = 3528;
    int maxT = 5968;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 263582038;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int X = 8;
    int Y = 4000;
    int minT = 3357;
    int maxT = 7339;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 167595594;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int X = 10;
    int Y = 4000;
    int minT = 3195;
    int maxT = 6204;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 468314247;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int X = 69;
    int Y = 3;
    int minT = 16;
    int maxT = 43;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 53214;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int X = 78;
    int Y = 10;
    int minT = 9;
    int maxT = 81;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 22615296;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int X = 59;
    int Y = 55;
    int minT = 202;
    int maxT = 202;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 5324592;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int X = 69;
    int Y = 764;
    int minT = 449;
    int maxT = 536;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 255131323;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int X = 49;
    int Y = 1939;
    int minT = 7;
    int maxT = 7454;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 47536481;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int X = 15;
    int Y = 3175;
    int minT = 1750;
    int maxT = 5517;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 355443154;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int X = 64;
    int Y = 4000;
    int minT = 918;
    int maxT = 3723;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 419556572;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int X = 88;
    int Y = 4000;
    int minT = 2885;
    int maxT = 6204;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 688183076;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int X = 54;
    int Y = 4000;
    int minT = 696;
    int maxT = 4511;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 44199280;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int X = 41;
    int Y = 4000;
    int minT = 3850;
    int maxT = 5823;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 407417253;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int X = 919;
    int Y = 3;
    int minT = 1349;
    int maxT = 1392;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 21210882;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int X = 662;
    int Y = 4;
    int minT = 34;
    int maxT = 492;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 352261560;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int X = 290;
    int Y = 57;
    int minT = 452;
    int maxT = 684;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 338550943;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int X = 189;
    int Y = 331;
    int minT = 154;
    int maxT = 10373;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 325724526;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int X = 826;
    int Y = 2274;
    int minT = 2648;
    int maxT = 4657;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 206951426;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int X = 550;
    int Y = 3214;
    int minT = 1431;
    int maxT = 3693;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 191123235;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int X = 792;
    int Y = 4000;
    int minT = 702;
    int maxT = 4928;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 536532765;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int X = 725;
    int Y = 4000;
    int minT = 6003;
    int maxT = 6772;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 679294073;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int X = 902;
    int Y = 4000;
    int minT = 559;
    int maxT = 2527;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 884141942;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int X = 428;
    int Y = 4000;
    int minT = 2443;
    int maxT = 4815;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 743555437;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int X = 2237;
    int Y = 3;
    int minT = 406;
    int maxT = 1233;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 811851535;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int X = 2632;
    int Y = 5;
    int minT = 2004;
    int maxT = 14285;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 436563411;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int X = 1278;
    int Y = 62;
    int minT = 504;
    int maxT = 899;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 858000322;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int X = 1734;
    int Y = 666;
    int minT = 1482;
    int maxT = 2578;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 959315776;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int X = 1050;
    int Y = 1910;
    int minT = 3645;
    int maxT = 15557;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 96866904;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int X = 1797;
    int Y = 3221;
    int minT = 1860;
    int maxT = 6896;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 239429453;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int X = 1068;
    int Y = 4000;
    int minT = 2;
    int maxT = 8140;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 487587099;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int X = 2644;
    int Y = 4000;
    int minT = 2950;
    int maxT = 16801;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 240109543;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int X = 1153;
    int Y = 4000;
    int minT = 2614;
    int maxT = 7521;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 567674971;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int X = 2672;
    int Y = 4000;
    int minT = 1;
    int maxT = 6995;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 558833528;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int X = 3179;
    int Y = 3;
    int minT = 1601;
    int maxT = 10334;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 47540751;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int X = 3722;
    int Y = 6;
    int minT = 1835;
    int maxT = 4700;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 630079540;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int X = 3097;
    int Y = 67;
    int minT = 6;
    int maxT = 16139;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 417332860;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int X = 3073;
    int Y = 896;
    int minT = 2971;
    int maxT = 5162;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 42264110;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int X = 3611;
    int Y = 1909;
    int minT = 3455;
    int maxT = 15516;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 265817429;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int X = 3684;
    int Y = 3658;
    int minT = 790;
    int maxT = 3571;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 642256061;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int X = 3912;
    int Y = 4000;
    int minT = 5511;
    int maxT = 11808;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 655385380;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int X = 3571;
    int Y = 4000;
    int minT = 5;
    int maxT = 17352;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 546521875;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int X = 3463;
    int Y = 4000;
    int minT = 9932;
    int maxT = 11412;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 603574675;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int X = 3802;
    int Y = 4000;
    int minT = 6309;
    int maxT = 16618;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 370713244;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int X = 4000;
    int Y = 3;
    int minT = 3169;
    int maxT = 6678;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 172914481;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int X = 4000;
    int Y = 7;
    int minT = 2339;
    int maxT = 3206;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 138485080;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int X = 4000;
    int Y = 90;
    int minT = 1330;
    int maxT = 7479;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 235469308;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int X = 4000;
    int Y = 153;
    int minT = 1417;
    int maxT = 7391;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 804113801;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int X = 4000;
    int Y = 2201;
    int minT = 1181;
    int maxT = 18727;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 838302983;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int X = 4000;
    int Y = 3439;
    int minT = 4704;
    int maxT = 12176;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 892445093;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int X = 4000;
    int Y = 4000;
    int minT = 154;
    int maxT = 14115;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 271094810;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int X = 4000;
    int Y = 4000;
    int minT = 7;
    int maxT = 6955;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 12515125;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int X = 4000;
    int Y = 4000;
    int minT = 3536;
    int maxT = 13883;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 829054842;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int X = 4000;
    int Y = 4000;
    int minT = 2958;
    int maxT = 11049;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 530782180;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int X = 4000;
    int Y = 3;
    int minT = 966;
    int maxT = 7406;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 398387820;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int X = 4000;
    int Y = 5;
    int minT = 4581;
    int maxT = 7565;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 768689693;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int X = 4000;
    int Y = 81;
    int minT = 7;
    int maxT = 2216;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 88083667;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int X = 4000;
    int Y = 763;
    int minT = 353;
    int maxT = 3088;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 609972979;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int X = 4000;
    int Y = 2415;
    int minT = 6498;
    int maxT = 8052;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 906988521;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int X = 4000;
    int Y = 3786;
    int minT = 1;
    int maxT = 17433;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 211309943;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int X = 4000;
    int Y = 4000;
    int minT = 4757;
    int maxT = 11014;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 941272513;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int X = 4000;
    int Y = 4000;
    int minT = 2264;
    int maxT = 6947;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 770259243;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int X = 4000;
    int Y = 4000;
    int minT = 9278;
    int maxT = 14869;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 18742782;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int X = 4000;
    int Y = 4000;
    int minT = 7615;
    int maxT = 10237;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 761102148;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int X = 4000;
    int Y = 3;
    int minT = 6925;
    int maxT = 6925;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int X = 4000;
    int Y = 7;
    int minT = 791;
    int maxT = 1684;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 535319677;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int X = 4000;
    int Y = 88;
    int minT = 1068;
    int maxT = 5291;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 637493061;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int X = 4000;
    int Y = 525;
    int minT = 4986;
    int maxT = 17078;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 154085517;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int X = 4000;
    int Y = 1039;
    int minT = 5973;
    int maxT = 6375;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 686890365;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int X = 4000;
    int Y = 3702;
    int minT = 595;
    int maxT = 2847;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 954799055;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int X = 4000;
    int Y = 4000;
    int minT = 5668;
    int maxT = 12617;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 934060675;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int X = 4000;
    int Y = 4000;
    int minT = 5351;
    int maxT = 9402;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 904618957;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int X = 4000;
    int Y = 4000;
    int minT = 3176;
    int maxT = 3942;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 597294897;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int X = 4000;
    int Y = 4000;
    int minT = 10577;
    int maxT = 18396;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 294461960;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int X = 4000;
    int Y = 3;
    int minT = 5187;
    int maxT = 19979;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 211944834;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int X = 4000;
    int Y = 7;
    int minT = 2;
    int maxT = 19417;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 320264334;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int X = 4000;
    int Y = 56;
    int minT = 2492;
    int maxT = 5314;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 532258081;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int X = 4000;
    int Y = 419;
    int minT = 4176;
    int maxT = 18328;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 96662287;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int X = 4000;
    int Y = 1126;
    int minT = 6818;
    int maxT = 6818;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 328603423;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int X = 4000;
    int Y = 3161;
    int minT = 1;
    int maxT = 15656;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 635094855;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int X = 4000;
    int Y = 4000;
    int minT = 1;
    int maxT = 16087;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 841484969;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int X = 4000;
    int Y = 4000;
    int minT = 1;
    int maxT = 15583;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 881384874;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int X = 4000;
    int Y = 4000;
    int minT = 14660;
    int maxT = 15978;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 306325003;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int X = 4000;
    int Y = 4000;
    int minT = 4408;
    int maxT = 9435;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 255776655;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int X = 4000;
    int Y = 4000;
    int minT = 1;
    int maxT = 20000;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 841484969;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int X = 4000;
    int Y = 4000;
    int minT = 1;
    int maxT = 7;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int X = 4000;
    int Y = 4000;
    int minT = 15996;
    int maxT = 15996;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 95904024;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int X = 4000;
    int Y = 4000;
    int minT = 15997;
    int maxT = 20000;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int X = 4000;
    int Y = 4000;
    int minT = 9;
    int maxT = 15995;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 649676921;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int X = 4000;
    int Y = 4000;
    int minT = 1;
    int maxT = 19998;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 841484969;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int X = 4000;
    int Y = 4000;
    int minT = 4000;
    int maxT = 20000;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 445258349;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int X = 4000;
    int Y = 4000;
    int minT = 20000;
    int maxT = 20000;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int X = 4000;
    int Y = 4000;
    int minT = 331;
    int maxT = 20000;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 888967583;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int X = 3999;
    int Y = 2999;
    int minT = 1999;
    int maxT = 19998;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 40906664;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int X = 3970;
    int Y = 3121;
    int minT = 1;
    int maxT = 14560;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 449660083;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int X = 4000;
    int Y = 4000;
    int minT = 2138;
    int maxT = 2140;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 100744667;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int X = 4000;
    int Y = 3999;
    int minT = 10000;
    int maxT = 20000;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 423622390;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int X = 3795;
    int Y = 3997;
    int minT = 3;
    int maxT = 19997;
    PatrolRoute* pObj = new PatrolRoute();
    clock_t start = clock();
    int result = pObj->countRoutes(X, Y, minT, maxT);
    clock_t end = clock();
    delete pObj;
    int expected = 124289875;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20315020&rd=14734&pm=11934
********************************************************************************
#include <string>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <iostream>
#include <sstream>
#include <cstring>
#include <numeric>
using namespace std;
typedef long long ll;
#define F0(i,n) for (int i = 0; i < n; i++)
#define F1(i,n) for (int i = 1; i <= n; i++)
#define CL(a,x) memset(x, a, sizeof(x));
#define SZ(x) ((int)x.size())
const double eps = 1e-10;
const int MOD = 1000000007;
int i, j, k, m, n, l;
int ans;
ll cntx[20005], cnty[20005];
 
struct PatrolRoute { 
int countRoutes(int X, int Y, int minT, int maxT) {
    CL(0,cntx); CL(0,cnty);
    F1(i,X) F1(j,X) if (i+j < X) cntx[i+j] += X-(i+j);
    F1(i,Y) F1(j,Y) if (i+j < Y) cnty[i+j] += Y-(i+j);
 
    ll s = 0;
    F1(i,X) F1(j,Y) if (2*(i+j) >= minT && 2*(i+j) <= maxT) {
        s += cntx[i] * cnty[j];
        s %= MOD;
    }
    ans = (s * 6) % MOD;
  return ans;
} 
  
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/