/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7766
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

class RadarFinder {
public:
    int possibleLocations(int x1, int y1, int r1, int x2, int y2, int r2);
};

int RadarFinder::possibleLocations(int x1, int y1, int r1, int x2, int y2, int r2) {
    int ret;
    return ret;
}


int test0() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 13;
    int x2 = 40;
    int y2 = 0;
    int r2 = 37;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 3;
    int x2 = 0;
    int y2 = 7;
    int r2 = 4;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 5;
    int x2 = 10;
    int y2 = 10;
    int r2 = 3;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1;
    int x2 = 0;
    int y2 = 0;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 5;
    int x2 = 2;
    int y2 = 0;
    int r2 = 4;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 5;
    int x2 = 1;
    int y2 = 0;
    int r2 = 4;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 5;
    int x2 = 1;
    int y2 = 0;
    int r2 = 2;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int x1 = -700;
    int y1 = -700;
    int r1 = 1000;
    int x2 = 700;
    int y2 = 700;
    int r2 = 1000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int x1 = -500;
    int y1 = 829;
    int r1 = 927;
    int x2 = -500;
    int y2 = 894;
    int r2 = 999;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int x1 = -500;
    int y1 = 831;
    int r1 = 999;
    int x2 = -500;
    int y2 = 899;
    int r2 = 932;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int x1 = -500;
    int y1 = 859;
    int r1 = 999;
    int x2 = -500;
    int y2 = 869;
    int r2 = 930;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int x1 = -500;
    int y1 = 878;
    int r1 = 999;
    int x2 = -500;
    int y2 = 891;
    int r2 = 959;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int x1 = -500;
    int y1 = -500;
    int r1 = 927;
    int x2 = 829;
    int y2 = 894;
    int r2 = 999;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int x1 = -500;
    int y1 = -500;
    int r1 = 999;
    int x2 = 831;
    int y2 = 899;
    int r2 = 932;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int x1 = -500;
    int y1 = -500;
    int r1 = 999;
    int x2 = 859;
    int y2 = 869;
    int r2 = 930;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int x1 = -500;
    int y1 = -500;
    int r1 = 999;
    int x2 = 878;
    int y2 = 891;
    int r2 = 959;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 35;
    int x2 = 36;
    int y2 = 77;
    int r2 = 50;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 39;
    int x2 = 39;
    int y2 = 80;
    int r2 = 50;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 25;
    int x2 = 48;
    int y2 = 55;
    int r2 = 48;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 51;
    int x2 = 65;
    int y2 = 72;
    int r2 = 46;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 100;
    int x2 = 16;
    int y2 = 63;
    int r2 = 165;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 13;
    int x2 = 20;
    int y2 = 21;
    int r2 = 42;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 15;
    int x2 = 28;
    int y2 = 45;
    int r2 = 68;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 20;
    int x2 = 33;
    int y2 = 56;
    int r2 = 85;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1;
    int x2 = 0;
    int y2 = 0;
    int r2 = 2;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 4;
    int x2 = 0;
    int y2 = 0;
    int r2 = 5;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 999;
    int x2 = 0;
    int y2 = 0;
    int r2 = 999;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int x1 = 100;
    int y1 = 100;
    int r1 = 100;
    int x2 = 101;
    int y2 = 101;
    int r2 = 102;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int x1 = -355716300;
    int y1 = 163119741;
    int r1 = 847113093;
    int x2 = -536650751;
    int y2 = -499390619;
    int r2 = 184198465;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int x1 = 219211669;
    int y1 = 390486837;
    int r1 = 882315502;
    int x2 = -303626215;
    int y2 = 78086028;
    int r2 = 657133588;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int x1 = -1000000000;
    int y1 = -1000000000;
    int r1 = 1000000000;
    int x2 = -999999999;
    int y2 = 1000000000;
    int r2 = 1000000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int x1 = -1000000000;
    int y1 = -1000000000;
    int r1 = 1000000000;
    int x2 = 1000000000;
    int y2 = 999999999;
    int r2 = 1000000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1;
    int x2 = 707106781;
    int y2 = 707106781;
    int r2 = 1000000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int x1 = 100;
    int y1 = 100;
    int r1 = 333333333;
    int x2 = 333333433;
    int y2 = 100;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int x1 = 100;
    int y1 = 100;
    int r1 = 333333333;
    int x2 = 333333434;
    int y2 = 100;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int x1 = 100;
    int y1 = 100;
    int r1 = 333333333;
    int x2 = 333333434;
    int y2 = 101;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 200000000;
    int x2 = 400000000;
    int y2 = 300000000;
    int r2 = 300000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 222222222;
    int x2 = 333333333;
    int y2 = -444444444;
    int r2 = 333333333;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 222222222;
    int x2 = 333333333;
    int y2 = 444444444;
    int r2 = 333333332;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 333333333;
    int x2 = 444444444;
    int y2 = 333333333;
    int r2 = 222222223;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int x1 = -14228535;
    int y1 = -76425759;
    int r1 = 7986393;
    int x2 = -4031571;
    int y2 = -72794719;
    int r2 = 2837771;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int x1 = -93913947;
    int y1 = -88703178;
    int r1 = 3179349;
    int x2 = -88974067;
    int y2 = -88512000;
    int r2 = 1764229;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int x1 = -60179340;
    int y1 = -15542662;
    int r1 = 22168902;
    int x2 = -30888012;
    int y2 = 10684984;
    int r2 = 17148668;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int x1 = -7500586;
    int y1 = -43959237;
    int r1 = 120555;
    int x2 = -7438258;
    int y2 = -43687483;
    int r2 = 158255;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int x1 = -60448292;
    int y1 = -51948352;
    int r1 = 339087;
    int x2 = -59714699;
    int y2 = -51183176;
    int r2 = 720938;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int x1 = -6053433;
    int y1 = -81562905;
    int r1 = 3502877;
    int x2 = 32916044;
    int y2 = -64691541;
    int r2 = 38961967;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int x1 = -45867137;
    int y1 = -53468511;
    int r1 = 79274534;
    int x2 = -42225014;
    int y2 = 53475053;
    int r2 = 27731030;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int x1 = -94711928;
    int y1 = -24777756;
    int r1 = 13046767;
    int x2 = -91612200;
    int y2 = -11791452;
    int r2 = 304352;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int x1 = -92088742;
    int y1 = -85028853;
    int r1 = 52889;
    int x2 = -91361242;
    int y2 = -84416965;
    int r2 = 897722;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int x1 = -3947936;
    int y1 = -504044;
    int r1 = 4376237;
    int x2 = 9624672;
    int y2 = 35729812;
    int r2 = 34316242;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int x1 = -19187663;
    int y1 = -90826427;
    int r1 = 4638011;
    int x2 = -11115550;
    int y2 = -82378043;
    int r2 = 7046775;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int x1 = -28033486;
    int y1 = -54303044;
    int r1 = 1477957;
    int x2 = -26256790;
    int y2 = -51554074;
    int r2 = 1795190;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int x1 = -53596826;
    int y1 = -6250098;
    int r1 = 6310888;
    int x2 = -42235491;
    int y2 = 7403550;
    int r2 = 11451490;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int x1 = -36879953;
    int y1 = -34647451;
    int r1 = 22979307;
    int x2 = -35888936;
    int y2 = 30226205;
    int r2 = 41901919;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int x1 = -61629204;
    int y1 = -74147907;
    int r1 = 6183552;
    int x2 = -38727060;
    int y2 = -73046897;
    int r2 = 16745043;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 10;
    int x2 = 3;
    int y2 = 4;
    int r2 = 5;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 100;
    int x2 = 0;
    int y2 = 50;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int x1 = 5;
    int y1 = 0;
    int r1 = 5;
    int x2 = 0;
    int y2 = 0;
    int r2 = 10;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int x1 = -1000000000;
    int y1 = -1000000000;
    int r1 = 1000000000;
    int x2 = 1000000000;
    int y2 = 1000000000;
    int r2 = 1000000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int x1 = 3;
    int y1 = 3;
    int r1 = 2;
    int x2 = 2;
    int y2 = 2;
    int r2 = 5;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 10;
    int x2 = 1;
    int y2 = 1;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 10;
    int x2 = 0;
    int y2 = 0;
    int r2 = 5;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int x1 = 1000;
    int y1 = -1000000000;
    int r1 = 1000000000;
    int x2 = 1000000000;
    int y2 = 1000000000;
    int r2 = 1000000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 5;
    int x2 = 1;
    int y2 = 0;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 10;
    int x2 = 0;
    int y2 = 5;
    int r2 = 5;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1;
    int x2 = 2;
    int y2 = 0;
    int r2 = 3;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 10;
    int x2 = 1;
    int y2 = 0;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 500000000;
    int x2 = 1000000000;
    int y2 = 0;
    int r2 = 500000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 3;
    int x2 = 0;
    int y2 = 2;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int x1 = -1000000000;
    int y1 = 1000000000;
    int r1 = 1000000000;
    int x2 = -1000000000;
    int y2 = 1000000000;
    int r2 = 1000000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 3;
    int x2 = 1;
    int y2 = 1;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 5;
    int x2 = 3;
    int y2 = 0;
    int r2 = 2;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 2;
    int x2 = 1;
    int y2 = 0;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int x1 = 1;
    int y1 = 1;
    int r1 = 1;
    int x2 = 1;
    int y2 = 1;
    int r2 = 2;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1;
    int x2 = 0;
    int y2 = 0;
    int r2 = 222;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int x1 = 10;
    int y1 = 10;
    int r1 = 1000000;
    int x2 = 10;
    int y2 = 20;
    int r2 = 5;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 100;
    int x2 = 57;
    int y2 = 76;
    int r2 = 5;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int x1 = 3;
    int y1 = 3;
    int r1 = 1;
    int x2 = 6;
    int y2 = 3;
    int r2 = 5;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 3;
    int x2 = 2;
    int y2 = 0;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1;
    int x2 = 0;
    int y2 = 1;
    int r2 = 100;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 4;
    int x2 = 0;
    int y2 = 2;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1;
    int x2 = 0;
    int y2 = 0;
    int r2 = 5;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1000000000;
    int x2 = 1;
    int y2 = 999999999;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int x1 = 1;
    int y1 = 2;
    int r1 = 3;
    int x2 = 4;
    int y2 = 5;
    int r2 = 6;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int x1 = 4;
    int y1 = 2;
    int r1 = 2;
    int x2 = 3;
    int y2 = 2;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 5;
    int x2 = 3;
    int y2 = 4;
    int r2 = 10;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 6;
    int x2 = 3;
    int y2 = 4;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 5;
    int x2 = 0;
    int y2 = 1;
    int r2 = 2;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 13;
    int x2 = 0;
    int y2 = 0;
    int r2 = 37;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 2;
    int x2 = 0;
    int y2 = 1;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int x1 = 300000000;
    int y1 = 400000000;
    int r1 = 200000000;
    int x2 = 0;
    int y2 = 0;
    int r2 = 300000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int x1 = 1;
    int y1 = 1;
    int r1 = 2;
    int x2 = 1;
    int y2 = 1;
    int r2 = 3;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1000000000;
    int x2 = 0;
    int y2 = -100000000;
    int r2 = 900000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int x1 = 1;
    int y1 = 1;
    int r1 = 3;
    int x2 = 2;
    int y2 = 1;
    int r2 = 2;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 4;
    int x2 = 1;
    int y2 = 1;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int x1 = 1000000000;
    int y1 = 1;
    int r1 = 1000000000;
    int x2 = 1000000000;
    int y2 = 2;
    int r2 = 1000000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int x1 = 1;
    int y1 = 1;
    int r1 = 10;
    int x2 = 1;
    int y2 = 1;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1;
    int x2 = 10;
    int y2 = 10;
    int r2 = 100;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 5;
    int x2 = 3;
    int y2 = 0;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1000000000;
    int x2 = 500000000;
    int y2 = 0;
    int r2 = 500000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 5;
    int x2 = 0;
    int y2 = 2;
    int r2 = 3;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1;
    int x2 = 0;
    int y2 = 0;
    int r2 = 10;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int x1 = 1;
    int y1 = 0;
    int r1 = 3;
    int x2 = 2;
    int y2 = 0;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1;
    int x2 = 1;
    int y2 = 0;
    int r2 = 5;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int x1 = 3;
    int y1 = 4;
    int r1 = 3;
    int x2 = 0;
    int y2 = 0;
    int r2 = 8;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int x1 = 0;
    int y1 = 46904;
    int r1 = 46904;
    int x2 = 0;
    int y2 = 93808;
    int r2 = 46905;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 100;
    int x2 = 10;
    int y2 = 10;
    int r2 = 10;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
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
    int x1 = 0;
    int y1 = 0;
    int r1 = 5;
    int x2 = 0;
    int y2 = 999999995;
    int r2 = 1000000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1;
    int x2 = 0;
    int y2 = 0;
    int r2 = 3;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
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
    int x1 = 0;
    int y1 = 0;
    int r1 = 100;
    int x2 = 5;
    int y2 = 0;
    int r2 = 10;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 3;
    int x2 = 0;
    int y2 = 1;
    int r2 = 2;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 7;
    int x2 = 3;
    int y2 = 4;
    int r2 = 2;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 500000000;
    int x2 = 600000000;
    int y2 = 800000000;
    int r2 = 500000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int x1 = 2;
    int y1 = 2;
    int r1 = 1;
    int x2 = 0;
    int y2 = 0;
    int r2 = 8;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int x1 = 1000000000;
    int y1 = 0;
    int r1 = 1000000000;
    int x2 = -1000000000;
    int y2 = 0;
    int r2 = 1000000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int x1 = 1000000000;
    int y1 = 0;
    int r1 = 1000000000;
    int x2 = -1000000000;
    int y2 = 1;
    int r2 = 1000000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 5;
    int x2 = 4;
    int y2 = 0;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 100000001;
    int x2 = 0;
    int y2 = 1;
    int r2 = 100000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 10;
    int x2 = 5;
    int y2 = 1;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 15;
    int x2 = 0;
    int y2 = 10;
    int r2 = 5;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 10;
    int x2 = 0;
    int y2 = 1;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 3;
    int x2 = 1;
    int y2 = 0;
    int r2 = 2;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1;
    int x2 = 4;
    int y2 = 0;
    int r2 = 5;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int x1 = 1;
    int y1 = 0;
    int r1 = 10;
    int x2 = 1;
    int y2 = 9;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int x1 = 1000000000;
    int y1 = 1000000000;
    int r1 = 1000000000;
    int x2 = -1000000000;
    int y2 = -1000000000;
    int r2 = 1000000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int x1 = 0;
    int y1 = 1;
    int r1 = 3;
    int x2 = 0;
    int y2 = 2;
    int r2 = 2;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 2;
    int x2 = 0;
    int y2 = 0;
    int r2 = 3;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 5;
    int x2 = 0;
    int y2 = 3;
    int r2 = 2;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 3;
    int x2 = 0;
    int y2 = 0;
    int r2 = 5;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 10;
    int x2 = 0;
    int y2 = 0;
    int r2 = 100;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 100;
    int x2 = 1;
    int y2 = 1;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int x1 = -1000000000;
    int y1 = 0;
    int r1 = 1000000000;
    int x2 = 1000000000;
    int y2 = 0;
    int r2 = 1000000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int x1 = 500000000;
    int y1 = 500000000;
    int r1 = 999999999;
    int x2 = -500000000;
    int y2 = -500000000;
    int r2 = 999999999;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1;
    int x2 = 1;
    int y2 = 1;
    int r2 = 10;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 10;
    int x2 = 0;
    int y2 = 1;
    int r2 = 2;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1;
    int x2 = 0;
    int y2 = 1;
    int r2 = 10;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int x1 = 999999;
    int y1 = 999999;
    int r1 = 15145;
    int x2 = -999999;
    int y2 = -999999;
    int r2 = 999999;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 100;
    int x2 = 1;
    int y2 = 0;
    int r2 = 200;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1;
    int x2 = 1;
    int y2 = 0;
    int r2 = 2;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int x1 = 3;
    int y1 = 3;
    int r1 = 4;
    int x2 = 5;
    int y2 = 3;
    int r2 = 2;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 500000000;
    int x2 = 1;
    int y2 = 1000000000;
    int r2 = 500000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 5;
    int x2 = 10;
    int y2 = 0;
    int r2 = 20;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int x1 = 1;
    int y1 = 2;
    int r1 = 2;
    int x2 = 1;
    int y2 = 2;
    int r2 = 2;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int x1 = 2;
    int y1 = 2;
    int r1 = 1;
    int x2 = 2;
    int y2 = 4;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int x1 = 1;
    int y1 = 1;
    int r1 = 2;
    int x2 = 2;
    int y2 = 2;
    int r2 = 2;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int x1 = 1;
    int y1 = 1;
    int r1 = 1;
    int x2 = 1;
    int y2 = 2;
    int r2 = 2;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int x1 = 1;
    int y1 = 1;
    int r1 = 1;
    int x2 = 1;
    int y2 = 1;
    int r2 = 1000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 500;
    int x2 = 1;
    int y2 = 0;
    int r2 = 20;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 5;
    int x2 = 1;
    int y2 = 1;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int x1 = -999999999;
    int y1 = 0;
    int r1 = 999999999;
    int x2 = 999999999;
    int y2 = 0;
    int r2 = 1000000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int x1 = 1000000000;
    int y1 = 0;
    int r1 = 1000000000;
    int x2 = -1000000000;
    int y2 = 0;
    int r2 = 100000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1000000;
    int x2 = 500000;
    int y2 = 0;
    int r2 = 500000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 4;
    int x2 = 0;
    int y2 = 2;
    int r2 = 2;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    int x1 = 1;
    int y1 = 1;
    int r1 = 3;
    int x2 = 1;
    int y2 = 1;
    int r2 = 2;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 20;
    int x2 = 10;
    int y2 = 0;
    int r2 = 10;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    int x1 = 1000000000;
    int y1 = 1000000000;
    int r1 = 40000;
    int x2 = 0;
    int y2 = 0;
    int r2 = 5;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    int x1 = 1;
    int y1 = 0;
    int r1 = 5;
    int x2 = 5;
    int y2 = 0;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    int x1 = 0;
    int y1 = 1;
    int r1 = 1;
    int x2 = 0;
    int y2 = 0;
    int r2 = 3;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1;
    int x2 = 5;
    int y2 = 0;
    int r2 = 7;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    int x1 = 12;
    int y1 = 12;
    int r1 = 1;
    int x2 = 12;
    int y2 = 12;
    int r2 = 2;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1;
    int x2 = 3;
    int y2 = 4;
    int r2 = 4;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 7;
    int x2 = 0;
    int y2 = 4;
    int r2 = 3;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 10;
    int x2 = 50;
    int y2 = 50;
    int r2 = 1000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    int x1 = -1;
    int y1 = 0;
    int r1 = 8;
    int x2 = 3;
    int y2 = 3;
    int r2 = 3;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1;
    int x2 = 0;
    int y2 = 1;
    int r2 = 2;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 15;
    int x2 = 2;
    int y2 = 2;
    int r2 = 2;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1;
    int x2 = 1;
    int y2 = 1;
    int r2 = 100;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    int x1 = 1;
    int y1 = 0;
    int r1 = 2;
    int x2 = 3;
    int y2 = 0;
    int r2 = 4;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1;
    int x2 = 0;
    int y2 = 1;
    int r2 = 3;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 5;
    int x2 = 0;
    int y2 = 1;
    int r2 = 4;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    int x1 = 100000;
    int y1 = 100000;
    int r1 = 1;
    int x2 = 0;
    int y2 = 0;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    int x1 = -999999999;
    int y1 = -999999999;
    int r1 = 999999999;
    int x2 = -999999998;
    int y2 = 999999999;
    int r2 = 999999999;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 100000000;
    int x2 = 100000000;
    int y2 = 100000000;
    int r2 = 10000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    int x1 = 0;
    int y1 = 5;
    int r1 = 3;
    int x2 = 0;
    int y2 = 0;
    int r2 = 8;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1;
    int x2 = 65536;
    int y2 = 0;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    int x1 = 1000000000;
    int y1 = 0;
    int r1 = 1000000000;
    int x2 = 1;
    int y2 = 0;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 5;
    int x2 = 0;
    int y2 = 3;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1;
    int x2 = 1;
    int y2 = 0;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 50;
    int x2 = 10;
    int y2 = 10;
    int r2 = 3;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 5;
    int x2 = 0;
    int y2 = 0;
    int r2 = 15;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    int x1 = -400000000;
    int y1 = -400000000;
    int r1 = 1000000000;
    int x2 = 400000000;
    int y2 = 400000000;
    int r2 = 1000000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 4;
    int x2 = 0;
    int y2 = 2;
    int r2 = 7;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1;
    int x2 = 10;
    int y2 = 0;
    int r2 = 12;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 7;
    int x2 = 4;
    int y2 = 0;
    int r2 = 2;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    int x1 = 1;
    int y1 = 1;
    int r1 = 1;
    int x2 = 1;
    int y2 = 1;
    int r2 = 1000000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    int x1 = 0;
    int y1 = 1000000000;
    int r1 = 1;
    int x2 = 0;
    int y2 = -1000000000;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    int x1 = 1000000000;
    int y1 = 1000000000;
    int r1 = 999999999;
    int x2 = -1000000000;
    int y2 = -1000000000;
    int r2 = 999999999;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    int x1 = 100000000;
    int y1 = 100000000;
    int r1 = 133333333;
    int x2 = 100000000;
    int y2 = 999999997;
    int r2 = 457787578;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    int x1 = 0;
    int y1 = -1000000000;
    int r1 = 1000000000;
    int x2 = 0;
    int y2 = 1000000000;
    int r2 = 1000000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    int x1 = 1;
    int y1 = 1;
    int r1 = 100;
    int x2 = 3;
    int y2 = 3;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 3;
    int x2 = 5;
    int y2 = 5;
    int r2 = 100;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    int x1 = 2;
    int y1 = 2;
    int r1 = 1;
    int x2 = 4;
    int y2 = 4;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    int x1 = 1;
    int y1 = 2;
    int r1 = 100000000;
    int x2 = 3;
    int y2 = 4;
    int r2 = 100000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 30;
    int x2 = 0;
    int y2 = 0;
    int r2 = 20;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1;
    int x2 = 2;
    int y2 = 3;
    int r2 = 2;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 5;
    int x2 = 10;
    int y2 = 0;
    int r2 = 15;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 10;
    int x2 = 0;
    int y2 = 0;
    int r2 = 2;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    int x1 = 10;
    int y1 = 10;
    int r1 = 100;
    int x2 = 10;
    int y2 = 11;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    int x1 = 1;
    int y1 = 1;
    int r1 = 3;
    int x2 = 2;
    int y2 = 2;
    int r2 = 3;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    int x1 = 1000000000;
    int y1 = 1000000000;
    int r1 = 546456456;
    int x2 = 0;
    int y2 = 0;
    int r2 = 645645;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    int x1 = 2;
    int y1 = 0;
    int r1 = 1;
    int x2 = 0;
    int y2 = 0;
    int r2 = 3;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    int x1 = 1000000000;
    int y1 = -1000000000;
    int r1 = 1000000000;
    int x2 = -1000000000;
    int y2 = -1000000000;
    int r2 = 1000000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    int x1 = -1000000000;
    int y1 = 0;
    int r1 = 1000000000;
    int x2 = 1000000000;
    int y2 = 1;
    int r2 = 1000000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    int x1 = 1000000000;
    int y1 = 1000000000;
    int r1 = 1000000000;
    int x2 = 1000000000;
    int y2 = 1000000000;
    int r2 = 3;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    int x1 = 0;
    int y1 = 1;
    int r1 = 1;
    int x2 = 0;
    int y2 = 2;
    int r2 = 2;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 17;
    int x2 = 10;
    int y2 = 0;
    int r2 = 7;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    int x1 = 2000;
    int y1 = 2000;
    int r1 = 2;
    int x2 = 2000;
    int y2 = 2001;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    int x1 = 5;
    int y1 = 0;
    int r1 = 15;
    int x2 = 10;
    int y2 = 0;
    int r2 = 10;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 10;
    int x2 = 0;
    int y2 = 8;
    int r2 = 2;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1;
    int x2 = 1;
    int y2 = 0;
    int r2 = 10;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 3;
    int x2 = 1;
    int y2 = 0;
    int r2 = 10;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    int x1 = -300000000;
    int y1 = -300000000;
    int r1 = 1000000000;
    int x2 = 1000000000;
    int y2 = 1000000000;
    int r2 = 1000000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 500000000;
    int x2 = 0;
    int y2 = 499999999;
    int r2 = 1000000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    int x1 = 10;
    int y1 = 10;
    int r1 = 100;
    int x2 = 10;
    int y2 = 10;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    int x1 = -1000000000;
    int y1 = -1000000000;
    int r1 = 4545;
    int x2 = 1000000000;
    int y2 = 1000000000;
    int r2 = 674564565;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 3;
    int x2 = -3;
    int y2 = 0;
    int r2 = 6;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    int x1 = 1000000;
    int y1 = 1000000;
    int r1 = 1000000000;
    int x2 = -1000000;
    int y2 = -1000000;
    int r2 = 1000000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    int x1 = 822202;
    int y1 = -7924022;
    int r1 = 12568291;
    int x2 = 822202;
    int y2 = 9055490;
    int r2 = 29547804;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 4;
    int x2 = 0;
    int y2 = 3;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1;
    int x2 = 0;
    int y2 = 0;
    int r2 = 4;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 4;
    int x2 = 0;
    int y2 = 1;
    int r2 = 2;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test221() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 2;
    int x2 = 499999999;
    int y2 = 374999998;
    int r2 = 625000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 221: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 221: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test222() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1000000;
    int x2 = 0;
    int y2 = 1;
    int r2 = 100;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 222: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 222: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test223() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 10;
    int x2 = 3;
    int y2 = 0;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 223: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 223: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test224() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 3;
    int x2 = 0;
    int y2 = 0;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 224: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 224: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test225() {
    int x1 = 400000000;
    int y1 = 300000000;
    int r1 = 200000000;
    int x2 = 0;
    int y2 = 0;
    int r2 = 300000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 225: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 225: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test226() {
    int x1 = 0;
    int y1 = 8;
    int r1 = 1;
    int x2 = 0;
    int y2 = 4;
    int r2 = 5;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 226: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 226: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test227() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 10;
    int x2 = 0;
    int y2 = 5;
    int r2 = 3;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 227: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 227: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test228() {
    int x1 = 1;
    int y1 = 1;
    int r1 = 3;
    int x2 = 3;
    int y2 = 1;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 228: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 228: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test229() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 15;
    int x2 = 0;
    int y2 = 0;
    int r2 = 5;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 229: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 229: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test230() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 500000000;
    int x2 = 0;
    int y2 = 500000000;
    int r2 = 1000000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 230: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 230: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test231() {
    int x1 = 822202;
    int y1 = -7924022;
    int r1 = 12568291;
    int x2 = 822202;
    int y2 = 9055490;
    int r2 = 29547802;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 231: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 231: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test232() {
    int x1 = 1;
    int y1 = 2;
    int r1 = 3;
    int x2 = 4;
    int y2 = 5;
    int r2 = 1000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 232: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 232: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test233() {
    int x1 = 100000;
    int y1 = 100000;
    int r1 = 3000000;
    int x2 = -100000;
    int y2 = -100000;
    int r2 = 3000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 233: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 233: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test234() {
    int x1 = 2;
    int y1 = 1;
    int r1 = 1;
    int x2 = 1;
    int y2 = 1;
    int r2 = 1000000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 234: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 234: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test235() {
    int x1 = 822202;
    int y1 = -7924022;
    int r1 = 12568291;
    int x2 = 822202;
    int y2 = 9055490;
    int r2 = 29547803;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 235: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 235: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test236() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1;
    int x2 = 4;
    int y2 = 0;
    int r2 = 4;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 236: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 236: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test237() {
    int x1 = 0;
    int y1 = 5;
    int r1 = 4;
    int x2 = 5;
    int y2 = 0;
    int r2 = 4;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 237: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 237: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test238() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 3;
    int x2 = 0;
    int y2 = 0;
    int r2 = 7;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 238: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 238: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test239() {
    int x1 = 76342738;
    int y1 = -3443434;
    int r1 = 23322;
    int x2 = 78348734;
    int y2 = 6;
    int r2 = 654654654;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 239: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 239: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test240() {
    int x1 = -99999998;
    int y1 = 99999997;
    int r1 = 888888888;
    int x2 = -97856845;
    int y2 = 98475621;
    int r2 = 999985678;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 240: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 240: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test241() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1;
    int x2 = 0;
    int y2 = 0;
    int r2 = 100000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 241: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 241: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test242() {
    int x1 = -500000000;
    int y1 = 0;
    int r1 = 500000000;
    int x2 = 500000000;
    int y2 = 0;
    int r2 = 500000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 242: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 242: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test243() {
    int x1 = 1000000000;
    int y1 = 0;
    int r1 = 999999999;
    int x2 = 0;
    int y2 = 0;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 243: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 243: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test244() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 6;
    int x2 = 3;
    int y2 = 0;
    int r2 = 2;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 244: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 244: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test245() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 500000000;
    int x2 = 500;
    int y2 = 0;
    int r2 = 500000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 245: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 245: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test246() {
    int x1 = 1000000000;
    int y1 = 1000000000;
    int r1 = 10000;
    int x2 = 1000000000;
    int y2 = 1000000000;
    int r2 = 100000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 246: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 246: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test247() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 9000;
    int x2 = 10000000;
    int y2 = 0;
    int r2 = 9000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 247: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 247: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test248() {
    int x1 = -999999999;
    int y1 = 0;
    int r1 = 1000000000;
    int x2 = 999999999;
    int y2 = 0;
    int r2 = 1000000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 248: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 248: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test249() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 32768;
    int x2 = 1;
    int y2 = 0;
    int r2 = 32768;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 249: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 249: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test250() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1;
    int x2 = 0;
    int y2 = 5;
    int r2 = 8;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 250: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 250: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test251() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 200;
    int x2 = 1;
    int y2 = 1;
    int r2 = 188;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 251: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 251: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test252() {
    int x1 = 100000000;
    int y1 = 100000000;
    int r1 = 1000000000;
    int x2 = -1000000;
    int y2 = -1000000;
    int r2 = 1000000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 252: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 252: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test253() {
    int x1 = -999;
    int y1 = -999;
    int r1 = 999;
    int x2 = -999;
    int y2 = -499;
    int r2 = 499;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 253: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 253: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test254() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 15;
    int x2 = 10;
    int y2 = 0;
    int r2 = 5;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 254: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 254: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test255() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 50;
    int x2 = 40;
    int y2 = 0;
    int r2 = 20;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 255: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 255: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test256() {
    int x1 = 1;
    int y1 = 7;
    int r1 = 3;
    int x2 = 1;
    int y2 = 8;
    int r2 = 4;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 256: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 256: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test257() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1;
    int x2 = 65536;
    int y2 = 65536;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 257: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 257: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test258() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 10;
    int x2 = 0;
    int y2 = 0;
    int r2 = 1000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 258: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 258: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test259() {
    int x1 = 5;
    int y1 = 0;
    int r1 = 5;
    int x2 = 3;
    int y2 = 0;
    int r2 = 3;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 259: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 259: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test260() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 10000;
    int x2 = 114688;
    int y2 = 0;
    int r2 = 6384;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 260: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 260: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test261() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1;
    int x2 = 2;
    int y2 = 0;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 261: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 261: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test262() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 5;
    int x2 = 0;
    int y2 = 4;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 262: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 262: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test263() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 65000000;
    int x2 = 50000000;
    int y2 = 120000000;
    int r2 = 65000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 263: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 263: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test264() {
    int x1 = 1;
    int y1 = 0;
    int r1 = 1;
    int x2 = 0;
    int y2 = 0;
    int r2 = 2;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 264: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 264: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test265() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 10;
    int x2 = 0;
    int y2 = 2;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 265: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 265: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test266() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 536870912;
    int x2 = 0;
    int y2 = 0;
    int r2 = 268435456;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 266: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 266: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test267() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 32768;
    int x2 = 0;
    int y2 = 32769;
    int r2 = 32768;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 267: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 267: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test268() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1;
    int x2 = -1;
    int y2 = 0;
    int r2 = 2;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 268: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 268: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test269() {
    int x1 = -1000000000;
    int y1 = -1000000000;
    int r1 = 1000000000;
    int x2 = -1000000000;
    int y2 = 1000000000;
    int r2 = 1000000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 269: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 269: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test270() {
    int x1 = -1000000000;
    int y1 = -1000000000;
    int r1 = 1000000000;
    int x2 = 1000000000;
    int y2 = 1000000000;
    int r2 = 999999999;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 270: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 270: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test271() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1;
    int x2 = 0;
    int y2 = 3;
    int r2 = 10;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 271: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 271: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test272() {
    int x1 = 500000000;
    int y1 = 500000000;
    int r1 = 1000000000;
    int x2 = -500000000;
    int y2 = -500000000;
    int r2 = 1000000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 272: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 272: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test273() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 2;
    int x2 = 0;
    int y2 = 0;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 273: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 273: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test274() {
    int x1 = 1;
    int y1 = 2424124;
    int r1 = 1000000000;
    int x2 = 324244;
    int y2 = 323231;
    int r2 = 1000000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 274: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 274: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test275() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 50;
    int x2 = 1;
    int y2 = 100;
    int r2 = 50;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 275: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 275: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test276() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 4;
    int x2 = 0;
    int y2 = 0;
    int r2 = 2;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 276: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 276: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test277() {
    int x1 = 100000000;
    int y1 = 100000000;
    int r1 = 1000;
    int x2 = 0;
    int y2 = 0;
    int r2 = 1000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 277: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 277: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test278() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 5;
    int x2 = 10;
    int y2 = 1;
    int r2 = 5;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 278: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 278: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test279() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1000000000;
    int x2 = 1000000000;
    int y2 = 1000000000;
    int r2 = 1000000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 279: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 279: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test280() {
    int x1 = -1000000000;
    int y1 = -1000000000;
    int r1 = 1000000000;
    int x2 = 1000000000;
    int y2 = -1000000000;
    int r2 = 1000000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 280: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 280: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test281() {
    int x1 = 0;
    int y1 = 1;
    int r1 = 5;
    int x2 = 0;
    int y2 = 3;
    int r2 = 3;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 281: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 281: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test282() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1000000000;
    int x2 = 1;
    int y2 = 1;
    int r2 = 1000000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 282: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 282: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test283() {
    int x1 = -1000000000;
    int y1 = 1;
    int r1 = 1000000000;
    int x2 = 1000000000;
    int y2 = 0;
    int r2 = 1000000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 283: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 283: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test284() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 10;
    int x2 = 0;
    int y2 = 3;
    int r2 = 7;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 284: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 284: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test285() {
    int x1 = 10;
    int y1 = 10;
    int r1 = 1000000000;
    int x2 = 10;
    int y2 = 1000000000;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 285: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 285: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test286() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 100;
    int x2 = 1;
    int y2 = 1;
    int r2 = 5;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 286: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 286: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test287() {
    int x1 = 1000000000;
    int y1 = 1000000000;
    int r1 = 31000;
    int x2 = -1000000000;
    int y2 = -1000000000;
    int r2 = 500;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 287: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 287: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test288() {
    int x1 = -1000000000;
    int y1 = -1000000000;
    int r1 = 1000000000;
    int x2 = -1000000000;
    int y2 = -500000000;
    int r2 = 500000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 288: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 288: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test289() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 10;
    int x2 = 8;
    int y2 = 0;
    int r2 = 2;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 289: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 289: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test290() {
    int x1 = 100000000;
    int y1 = 100000000;
    int r1 = 1000000000;
    int x2 = 0;
    int y2 = 0;
    int r2 = 1000000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 290: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 290: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test291() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 536870913;
    int x2 = 2;
    int y2 = 0;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 291: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 291: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test292() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 10;
    int x2 = 65536;
    int y2 = 0;
    int r2 = 65536;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 292: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 292: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test293() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 12;
    int x2 = 10;
    int y2 = 0;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 293: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 293: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test294() {
    int x1 = 10;
    int y1 = 0;
    int r1 = 1000000000;
    int x2 = -10;
    int y2 = 0;
    int r2 = 1000000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 294: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 294: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test295() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1000000000;
    int x2 = 10;
    int y2 = 0;
    int r2 = 1000000000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 295: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 295: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test296() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1;
    int x2 = 2;
    int y2 = 0;
    int r2 = 4;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 296: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 296: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test297() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 25000;
    int x2 = 40000;
    int y2 = 0;
    int r2 = 25000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 297: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 297: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test298() {
    int x1 = -256271316;
    int y1 = -755583020;
    int r1 = 833127157;
    int x2 = 361016795;
    int y2 = -681554747;
    int r2 = 897464488;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 298: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 298: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test299() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1000000000;
    int x2 = 999999999;
    int y2 = 1;
    int r2 = 1;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 299: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 299: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test300() {
    int x1 = 100000000;
    int y1 = 100000000;
    int r1 = 10;
    int x2 = 0;
    int y2 = 0;
    int r2 = 100000;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 300: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 300: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test301() {
    int x1 = 0;
    int y1 = 3;
    int r1 = 2;
    int x2 = 0;
    int y2 = 0;
    int r2 = 5;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 301: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 301: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test302() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1;
    int x2 = 1;
    int y2 = 0;
    int r2 = 999999999;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 302: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 302: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test303() {
    int x1 = 0;
    int y1 = 0;
    int r1 = 1;
    int x2 = 40000;
    int y2 = 799999998;
    int r2 = 799999998;
    RadarFinder* pObj = new RadarFinder();
    clock_t start = clock();
    int result = pObj->possibleLocations(x1, y1, r1, x2, y2, r2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 303: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 303: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=144400&rd=10673&pm=7766
********************************************************************************
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
using namespace std;
typedef long long LL;
 
struct RadarFinder {
int possibleLocations(int ax1, int ay1, int ar1, int ax2, int ay2, int ar2) {
  LL x1 = ax1, y1=ay1, r1=ar1, x2=ax2, y2=ay2, r2=ar2;
  LL d2 = (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
  if(d2==0) return r1==r2 ? -1 : 0;
  if(d2<(r1-r2)*(r1-r2)) return 0;
  if(d2==(r1-r2)*(r1-r2)) return 1;
  if(d2<(r1+r2)*(r1+r2)) return 2;
  if(d2==(r1+r2)*(r1+r2)) return 1;
  return 0;
}
 
};
 
// Powered by FileEdit
 
// Powered by TomekAI
// Powered by TZTester 1.01 [25-Feb-2003]
 
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/