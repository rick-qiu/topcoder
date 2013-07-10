/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8414
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

class TheDiceGame {
public:
    double expectedThrows(int candies);
};

double TheDiceGame::expectedThrows(int candies) {
    double ret;
    return ret;
}


int test0() {
    int candies = 1;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int candies = 2;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1666666666666667;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int candies = 7;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5216263717421126;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int candies = 47;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 13.90476189046144;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int candies = 9;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0433247837600974;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int candies = 6;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 2.1613940329218106;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int candies = 8;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 2.7752307670324643;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int candies = 3;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3611111111111112;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int candies = 4;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 1.587962962962963;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int candies = 5;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 1.8526234567901234;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int candies = 17;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 5.33319373864191;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int candies = 20;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 6.190195198987439;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int candies = 36;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 10.761904997432147;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int candies = 34;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 10.190480976827903;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int candies = 18;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 5.619895663375334;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int candies = 35;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 10.476194803681265;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int candies = 37;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 11.0476167312735;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int candies = 21;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 6.475816279139172;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int candies = 30;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 9.047634594384022;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int candies = 22;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 6.761784262898289;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int candies = 97;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 28.190476190476154;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int candies = 50;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 14.761904780325601;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int candies = 56;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 16.476190482101313;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int candies = 74;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 21.619047619049557;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int candies = 68;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 19.904761904864905;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int candies = 75;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 21.904761904746998;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int candies = 87;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 25.333333333333048;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int candies = 51;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 15.047619080389286;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int candies = 90;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 26.190476190476236;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int candies = 72;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 21.047619047648613;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int candies = 1147;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 328.1904761904732;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int candies = 1000;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 286.19047619047393;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int candies = 1356;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 387.9047619047577;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int candies = 1124;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 321.61904761904475;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int candies = 1368;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 391.3333333333291;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int candies = 1225;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 350.47619047618707;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int candies = 1387;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 396.7619047619004;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int candies = 1851;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 529.3333333333255;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int candies = 1290;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 369.0476190476153;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int candies = 1572;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 449.619047619042;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int candies = 157147;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 44899.619047563094;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int candies = 151000;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 43143.33333328167;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int candies = 113356;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 32387.90476187565;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int candies = 171124;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 48893.04761898127;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int candies = 198368;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 56677.04761895846;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int candies = 167225;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 47779.04761898426;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int candies = 149387;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 42682.47619042562;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int candies = 190851;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 54529.333333250805;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int candies = 166290;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 47511.90476184211;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int candies = 139572;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 39878.19047614634;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int candies = 757148;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 216328.47618917728;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int candies = 851001;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 243143.61904597818;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int candies = 413357;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 118102.47619008906;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int candies = 971125;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 277464.7619026251;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int candies = 598369;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 170963.04761823636;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int candies = 567226;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 162065.0476183186;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int candies = 749388;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 214111.33333206092;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int candies = 890852;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 254529.6190458209;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int candies = 766291;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 218940.76190343144;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int candies = 239573;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 68449.90476177471;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int candies = 957147;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 273471.0476169719;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int candies = 951000;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 271714.76190271275;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int candies = 913356;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 260959.3333314432;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int candies = 971124;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 277464.4761883394;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int candies = 998368;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 285248.4761882178;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int candies = 967225;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 276350.4761883565;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int candies = 949387;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 271253.9047598626;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int candies = 990851;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 283100.76190253743;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int candies = 966290;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 276083.33333121776;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int candies = 939572;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 268449.61904561886;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int candies = 999996;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 285713.6190453533;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int candies = 999999;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 285714.4761882104;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int candies = 999992;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 285712.4761882105;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int candies = 999996;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 285713.6190453533;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int candies = 999990;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 285711.90475963906;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int candies = 999999;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 285714.4761882104;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int candies = 1000000;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 285714.76190249616;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int candies = 999998;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 285714.19047392474;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int candies = 2005;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 573.3333333333243;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int candies = 101;
    TheDiceGame* pObj = new TheDiceGame();
    clock_t start = clock();
    double result = pObj->expectedThrows(candies);
    clock_t end = clock();
    delete pObj;
    double expected = 29.33333333333331;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22663781&rd=10804&pm=8414
********************************************************************************
#include <iostream> 
#include <cstdio> 
#include <cstdlib> 
#include <vector> 
#include <string> 
#include <algorithm> 
 
using namespace std; 
 
const int maxn=1000010; 
 
double f[maxn]; 
 
struct TheDiceGame { 
  double expectedThrows(int candies) { 
    f[0]=0; 
    for (int i=1; i<=candies; i++) { 
      f[i]=0; 
      for (int j=1; j<=6; j++) { 
        int x=i-j; 
        if (x<0) x=0; 
        f[i]+=(f[x]+1)/6; 
      } 
    } 
    return f[candies]; 
  } 
};

********************************************************************************
*******************************************************************************/