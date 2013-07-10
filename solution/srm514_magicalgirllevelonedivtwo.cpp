/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11475
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

class MagicalGirlLevelOneDivTwo {
public:
    double theMinDistance(int d, int x, int y);
};

double MagicalGirlLevelOneDivTwo::theMinDistance(int d, int x, int y) {
    double ret;
    return ret;
}


int test0() {
    int d = 5;
    int x = 10;
    int y = 10;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0710678118654755;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int d = 5;
    int x = 10;
    int y = 3;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int d = 5;
    int x = -8;
    int y = -6;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.1622776601683795;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int d = 5;
    int x = 3;
    int y = 2;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
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
    int d = 24;
    int x = 24;
    int y = -24;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int d = 345;
    int x = -471;
    int y = 333;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 126.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int d = 1;
    int x = 1;
    int y = 1;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
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
    int d = 1;
    int x = -1;
    int y = -1;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
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
    int d = 1;
    int x = 1;
    int y = -1;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int d = 1;
    int x = 2;
    int y = 0;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
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
    int d = 1;
    int x = 1;
    int y = 0;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
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
    int d = 1;
    int x = 0;
    int y = -1;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int d = 1;
    int x = 3;
    int y = 5;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 4.47213595499958;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int d = 1;
    int x = 132;
    int y = -132;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 185.26197667087544;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int d = 1;
    int x = 500;
    int y = 500;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 705.6925676241744;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int d = 1;
    int x = -500;
    int y = -500;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 705.6925676241744;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int d = 8;
    int x = 8;
    int y = 6;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
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
    int d = 8;
    int x = 8;
    int y = -79;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 71.0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int d = 8;
    int x = 6;
    int y = -8;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
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
    int d = 8;
    int x = 79;
    int y = -8;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 71.0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int d = 9;
    int x = 9;
    int y = 13;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int d = 9;
    int x = 9;
    int y = -3;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
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
    int d = 123;
    int x = 123;
    int y = -123;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int d = 123;
    int x = -123;
    int y = -123;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int d = 123;
    int x = 124;
    int y = 0;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
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
    int d = 500;
    int x = 427;
    int y = -116;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int d = 156;
    int x = 236;
    int y = -113;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 80.0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int d = 83;
    int x = 371;
    int y = -319;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 372.34392703520757;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int d = 180;
    int x = -95;
    int y = 445;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 265.0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int d = 56;
    int x = 6;
    int y = 170;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 114.0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int d = 140;
    int x = -135;
    int y = 151;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 11.0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int d = 454;
    int x = 399;
    int y = -449;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
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
    int d = 426;
    int x = 500;
    int y = 155;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 74.0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int d = 414;
    int x = 318;
    int y = 103;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int d = 240;
    int x = 470;
    int y = -440;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 304.7950130825634;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int d = 356;
    int x = -217;
    int y = -10;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
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
    int d = 374;
    int x = -21;
    int y = 162;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
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
    int d = 231;
    int x = -378;
    int y = -416;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 236.29219199965115;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int d = 275;
    int x = 324;
    int y = -123;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 49.0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int d = 494;
    int x = 315;
    int y = -392;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
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
    int d = 29;
    int x = -480;
    int y = 282;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 517.117008035899;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int d = 409;
    int x = -454;
    int y = 472;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 77.42092740338364;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int d = 289;
    int x = 94;
    int y = 149;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
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
    int d = 290;
    int x = 348;
    int y = 287;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 58.0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int d = 171;
    int x = 202;
    int y = -107;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 31.0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int d = 291;
    int x = 326;
    int y = -487;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 199.1004771465905;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int d = 221;
    int x = -466;
    int y = 476;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 353.62409420173844;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int d = 74;
    int x = -192;
    int y = -200;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 172.6267650163207;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int d = 208;
    int x = 242;
    int y = 297;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 95.2732911156112;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int d = 86;
    int x = 434;
    int y = 343;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 432.6118352518803;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int d = 193;
    int x = 109;
    int y = -50;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
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
    int d = 319;
    int x = -418;
    int y = -362;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 107.93516572461452;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int d = 430;
    int x = 118;
    int y = 258;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
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
    int d = 64;
    int x = 486;
    int y = 383;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 529.0037807048263;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int d = 398;
    int x = 108;
    int y = -356;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
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
    int d = 130;
    int x = 291;
    int y = -85;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 161.0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int d = 425;
    int x = 319;
    int y = 163;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
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
    int d = 299;
    int x = -417;
    int y = 425;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 172.6267650163207;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int d = 275;
    int x = 482;
    int y = 375;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 229.88910370002316;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int d = 36;
    int x = -345;
    int y = 51;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 309.3638634359223;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int d = 191;
    int x = 130;
    int y = -482;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 291.0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int d = 156;
    int x = -329;
    int y = -5;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 173.0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int d = 466;
    int x = -38;
    int y = -93;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
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
    int d = 41;
    int x = 172;
    int y = -120;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 152.97712247261026;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int d = 166;
    int x = -152;
    int y = 115;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
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
    int d = 103;
    int x = -59;
    int y = -266;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 163.0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int d = 158;
    int x = -288;
    int y = -177;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 131.38112497615478;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int d = 478;
    int x = -336;
    int y = 145;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
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
    int d = 383;
    int x = -5;
    int y = 229;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
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
    int d = 472;
    int x = -442;
    int y = 131;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
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
    int d = 129;
    int x = -453;
    int y = 254;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 347.2765468614315;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int d = 187;
    int x = -328;
    int y = 320;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 193.82982226685345;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int d = 246;
    int x = -342;
    int y = 376;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 161.60445538412608;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int d = 7;
    int x = -320;
    int y = 266;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 406.2634613154375;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int d = 418;
    int x = 396;
    int y = -106;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
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
    int d = 50;
    int x = 100;
    int y = -100;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 70.71067811865476;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int d = 100;
    int x = -1;
    int y = -1;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
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
    int d = 1;
    int x = 0;
    int y = 0;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
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
    int d = 2;
    int x = -4;
    int y = -4;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 2.8284271247461903;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int d = 5;
    int x = 3;
    int y = 3;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
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
    int d = 2;
    int x = 4;
    int y = 0;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int d = 5;
    int x = 2;
    int y = 2;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
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
    int d = 5;
    int x = 4;
    int y = -10;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int d = 1;
    int x = 4;
    int y = 4;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 4.242640687119285;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int d = 1;
    int x = 0;
    int y = 10;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 9.0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int d = 10;
    int x = 10;
    int y = 200;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 190.0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int d = 7;
    int x = 8;
    int y = 8;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4142135623730951;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int d = 10;
    int x = -1;
    int y = -1;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
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
    int d = 5;
    int x = 5;
    int y = 10;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int d = 5;
    int x = 12;
    int y = 0;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int d = 9;
    int x = 10;
    int y = -10;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4142135623730951;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int d = 5;
    int x = 11;
    int y = 9;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 7.211102550927978;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int d = 1;
    int x = -2;
    int y = -3;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 2.23606797749979;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int d = 20;
    int x = 15;
    int y = 28;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 8.0;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int d = 5;
    int x = -10;
    int y = -2;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int d = 2;
    int x = 1;
    int y = 4;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int d = 2;
    int x = -10;
    int y = -10;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 11.313708498984761;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int d = 3;
    int x = 5;
    int y = 4;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 2.23606797749979;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int d = 2;
    int x = 0;
    int y = 3;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int d = 5;
    int x = 7;
    int y = 0;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int d = 5;
    int x = 3;
    int y = 10;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int d = 5;
    int x = 10;
    int y = 0;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int d = 3;
    int x = 20;
    int y = 0;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 17.0;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int d = 2;
    int x = 1;
    int y = 3;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
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
    int d = 100;
    int x = 99;
    int y = 99;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
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
    int d = 5;
    int x = 5;
    int y = 0;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
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
    int d = 100;
    int x = 10;
    int y = 10;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
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
    int d = 50;
    int x = 1;
    int y = 499;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 449.0;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int d = 12;
    int x = 10;
    int y = 10;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int d = 101;
    int x = 0;
    int y = 100;
    MagicalGirlLevelOneDivTwo* pObj = new MagicalGirlLevelOneDivTwo();
    clock_t start = clock();
    double result = pObj->theMinDistance(d, x, y);
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22927009&rd=14539&pm=11475
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
 
using namespace std;
 
class MagicalGirlLevelOneDivTwo {
public:
  double theMinDistance(int, int, int);
};
 
double MagicalGirlLevelOneDivTwo::theMinDistance(int d, int x, int y) {
  int xx = max(0, abs(x) - d);
  int yy = max(0, abs(y) - d);
  return sqrt((double)(xx * xx + yy * yy));
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/