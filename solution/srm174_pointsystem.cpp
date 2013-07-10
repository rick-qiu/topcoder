/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1849
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

class PointSystem {
public:
    double oddsOfWinning(int pointsToWin, int pointsToWinBy, int skill);
};

double PointSystem::oddsOfWinning(int pointsToWin, int pointsToWinBy, int skill) {
    double ret;
    return ret;
}


int test0() {
    int pointsToWin = 2;
    int pointsToWinBy = 1;
    int skill = 40;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.352;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int pointsToWin = 4;
    int pointsToWinBy = 5;
    int skill = 50;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4999999999999998;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int pointsToWin = 3;
    int pointsToWinBy = 3;
    int skill = 25;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.035714285714285705;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int pointsToWin = 10;
    int pointsToWinBy = 5;
    int skill = 48;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3949566562885549;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int pointsToWin = 1;
    int pointsToWinBy = 4;
    int skill = 19;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.003018293842361875;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int pointsToWin = 9;
    int pointsToWinBy = 1;
    int skill = 24;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.00938185073388358;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int pointsToWin = 2;
    int pointsToWinBy = 4;
    int skill = 43;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2446403891804691;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int pointsToWin = 2;
    int pointsToWinBy = 4;
    int skill = 3;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 9.149506804307481E-7;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int pointsToWin = 10;
    int pointsToWinBy = 1;
    int skill = 39;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16261164304381354;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int pointsToWin = 3;
    int pointsToWinBy = 4;
    int skill = 42;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.21566777043166588;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int pointsToWin = 8;
    int pointsToWinBy = 3;
    int skill = 27;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.014182677355033809;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int pointsToWin = 10;
    int pointsToWinBy = 2;
    int skill = 35;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.07753434802621584;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int pointsToWin = 4;
    int pointsToWinBy = 5;
    int skill = 36;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.05331136440582318;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int pointsToWin = 3;
    int pointsToWinBy = 5;
    int skill = 40;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.11636363636363636;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int pointsToWin = 7;
    int pointsToWinBy = 4;
    int skill = 48;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.41541557608193425;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int pointsToWin = 3;
    int pointsToWinBy = 4;
    int skill = 19;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.003018293842361875;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int pointsToWin = 10;
    int pointsToWinBy = 3;
    int skill = 15;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 4.9649834934940344E-5;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int pointsToWin = 6;
    int pointsToWinBy = 1;
    int skill = 33;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.11714026864751065;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int pointsToWin = 6;
    int pointsToWinBy = 4;
    int skill = 24;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.006268999307536835;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int pointsToWin = 2;
    int pointsToWinBy = 5;
    int skill = 44;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.23044321230549097;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int pointsToWin = 7;
    int pointsToWinBy = 5;
    int skill = 38;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.07496708917277026;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int pointsToWin = 10;
    int pointsToWinBy = 3;
    int skill = 27;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.008354424610246745;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int pointsToWin = 2;
    int pointsToWinBy = 3;
    int skill = 50;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49999999999999983;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int pointsToWin = 1;
    int pointsToWinBy = 5;
    int skill = 6;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0595379673221927E-6;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int pointsToWin = 4;
    int pointsToWinBy = 3;
    int skill = 46;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.37719720065808476;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int pointsToWin = 8;
    int pointsToWinBy = 5;
    int skill = 15;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 3.9430677631904765E-5;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int pointsToWin = 3;
    int pointsToWinBy = 4;
    int skill = 11;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 2.332971226964399E-4;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int pointsToWin = 5;
    int pointsToWinBy = 4;
    int skill = 22;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.004985284180102935;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int pointsToWin = 8;
    int pointsToWinBy = 3;
    int skill = 33;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.054031166460224746;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int pointsToWin = 1;
    int pointsToWinBy = 3;
    int skill = 13;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0033252610867261986;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int pointsToWin = 6;
    int pointsToWinBy = 5;
    int skill = 6;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 3.752506923513088E-7;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int pointsToWin = 2;
    int pointsToWinBy = 2;
    int skill = 16;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.035010940919037205;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int pointsToWin = 6;
    int pointsToWinBy = 5;
    int skill = 25;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.00361208055840164;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int pointsToWin = 4;
    int pointsToWinBy = 4;
    int skill = 2;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 1.7346649546680006E-7;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int pointsToWin = 6;
    int pointsToWinBy = 2;
    int skill = 5;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 2.922912033839778E-6;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int pointsToWin = 1;
    int pointsToWinBy = 2;
    int skill = 34;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.20972423802612483;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int pointsToWin = 2;
    int pointsToWinBy = 2;
    int skill = 10;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.012195121951219511;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int pointsToWin = 6;
    int pointsToWinBy = 5;
    int skill = 2;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 4.681331729841816E-10;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int pointsToWin = 9;
    int pointsToWinBy = 5;
    int skill = 42;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.15345039304298383;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int pointsToWin = 8;
    int pointsToWinBy = 2;
    int skill = 40;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1985732411392001;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int pointsToWin = 1;
    int pointsToWinBy = 2;
    int skill = 7;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.005633478960680618;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int pointsToWin = 5;
    int pointsToWinBy = 3;
    int skill = 17;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.003036053386891745;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int pointsToWin = 9;
    int pointsToWinBy = 5;
    int skill = 8;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 8.332180533119887E-8;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int pointsToWin = 9;
    int pointsToWinBy = 2;
    int skill = 31;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.04118848281606164;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int pointsToWin = 2;
    int pointsToWinBy = 1;
    int skill = 11;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.033638;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int pointsToWin = 7;
    int pointsToWinBy = 5;
    int skill = 10;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 3.895021845893313E-6;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int pointsToWin = 5;
    int pointsToWinBy = 5;
    int skill = 50;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4999999999999998;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int pointsToWin = 1;
    int pointsToWinBy = 4;
    int skill = 17;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0017567893141372188;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int pointsToWin = 1;
    int pointsToWinBy = 5;
    int skill = 4;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2558672548311644E-7;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int pointsToWin = 9;
    int pointsToWinBy = 5;
    int skill = 31;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0118228182263838;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int pointsToWin = 9;
    int pointsToWinBy = 2;
    int skill = 12;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0240524779784205E-5;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int pointsToWin = 7;
    int pointsToWinBy = 4;
    int skill = 9;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 5.333811408104796E-6;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int pointsToWin = 5;
    int pointsToWinBy = 3;
    int skill = 8;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 6.912134402628339E-5;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int pointsToWin = 1;
    int pointsToWinBy = 1;
    int skill = 1;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.01;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int pointsToWin = 8;
    int pointsToWinBy = 2;
    int skill = 33;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.07177242867828629;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int pointsToWin = 10;
    int pointsToWinBy = 1;
    int skill = 3;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 4.254066587798827E-11;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int pointsToWin = 2;
    int pointsToWinBy = 5;
    int skill = 10;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 1.693480101608806E-5;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int pointsToWin = 4;
    int pointsToWinBy = 5;
    int skill = 29;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.011240584072091355;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int pointsToWin = 9;
    int pointsToWinBy = 5;
    int skill = 13;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 6.054000139275781E-6;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int pointsToWin = 8;
    int pointsToWinBy = 1;
    int skill = 30;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.05001254005377599;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int pointsToWin = 9;
    int pointsToWinBy = 1;
    int skill = 2;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0764362527481045E-11;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int pointsToWin = 8;
    int pointsToWinBy = 1;
    int skill = 4;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 3.274352606107888E-8;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int pointsToWin = 1;
    int pointsToWinBy = 5;
    int skill = 12;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 4.7148989837743444E-5;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int pointsToWin = 7;
    int pointsToWinBy = 4;
    int skill = 34;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.050787140789304845;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int pointsToWin = 10;
    int pointsToWinBy = 2;
    int skill = 48;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.426213526838083;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int pointsToWin = 9;
    int pointsToWinBy = 2;
    int skill = 38;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.14099043987057447;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int pointsToWin = 4;
    int pointsToWinBy = 4;
    int skill = 12;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 3.456560423663357E-4;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int pointsToWin = 2;
    int pointsToWinBy = 4;
    int skill = 27;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.018370094769793885;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int pointsToWin = 10;
    int pointsToWinBy = 5;
    int skill = 21;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 2.734850032311632E-4;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int pointsToWin = 5;
    int pointsToWinBy = 2;
    int skill = 49;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.47267592578044787;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int pointsToWin = 6;
    int pointsToWinBy = 2;
    int skill = 8;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 4.554672826806804E-5;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int pointsToWin = 6;
    int pointsToWinBy = 1;
    int skill = 1;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 4.425434338348E-10;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int pointsToWin = 9;
    int pointsToWinBy = 1;
    int skill = 30;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0402769360542546;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int pointsToWin = 8;
    int pointsToWinBy = 1;
    int skill = 20;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.004239749709824001;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int pointsToWin = 7;
    int pointsToWinBy = 1;
    int skill = 10;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 9.928548640000001E-5;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int pointsToWin = 4;
    int pointsToWinBy = 5;
    int skill = 15;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 1.7111471023167378E-4;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int pointsToWin = 8;
    int pointsToWinBy = 5;
    int skill = 36;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0460605973614878;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int pointsToWin = 6;
    int pointsToWinBy = 2;
    int skill = 30;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.06331923062068968;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int pointsToWin = 5;
    int pointsToWinBy = 5;
    int skill = 48;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.40126103608143454;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int pointsToWin = 9;
    int pointsToWinBy = 1;
    int skill = 30;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0402769360542546;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int pointsToWin = 7;
    int pointsToWinBy = 4;
    int skill = 42;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.19956702395603976;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int pointsToWin = 2;
    int pointsToWinBy = 3;
    int skill = 19;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.012741965446776889;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int pointsToWin = 8;
    int pointsToWinBy = 3;
    int skill = 11;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9364280273286726E-5;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int pointsToWin = 9;
    int pointsToWinBy = 5;
    int skill = 32;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.015558722804942745;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int pointsToWin = 7;
    int pointsToWinBy = 3;
    int skill = 31;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.04316016924324729;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int pointsToWin = 10;
    int pointsToWinBy = 5;
    int skill = 50;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4999999999999991;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int pointsToWin = 10;
    int pointsToWinBy = 5;
    int skill = 49;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.44694092401748997;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int pointsToWin = 1;
    int pointsToWinBy = 1;
    int skill = 50;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int pointsToWin = 10;
    int pointsToWinBy = 5;
    int skill = 23;
    PointSystem* pObj = new PointSystem();
    clock_t start = clock();
    double result = pObj->oddsOfWinning(pointsToWin, pointsToWinBy, skill);
    clock_t end = clock();
    delete pObj;
    double expected = 6.424438832898403E-4;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=272072&rd=4675&pm=1849
********************************************************************************
#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <functional> 
#include <numeric> 
#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
#include <queue> 
using namespace std; 
typedef vector<int> VI;  typedef vector<vector<int> > VVI; 
typedef vector<string> VS;  typedef vector<vector<string> > VVS; 
typedef signed long long i64;  typedef unsigned long long u64; 
 
double memo[100][100]; 
 
class PointSystem { 
public: 
double oddsOfWinning(int a, int b, int c) { 
  int i, j, k, x, y, z, n; 
  for( i = 0; i < 100000; i++ ) { 
    for( x = 0; x <= a+b; x++ ) 
    for( y = 0; y <= a+b; y++ ) { 
      if( x > a && y > a ) {memo[x][y] = memo[x-1][y-1]; continue;} 
      if( x >= a && x >= y+b ) {memo[x][y] = 0.0; continue;} 
      if( y >= a && y >= x+b ) {memo[x][y] = 1.0; continue;} 
      memo[x][y] = ((c*memo[x][y+1])+((100-c)*memo[x+1][y]))/100.0; 
    } 
  } 
  return memo[0][0]; 
} 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/