/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10574
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

class SoldierLabeling {
public:
    int count(int n, int lowerBound, int upperBound);
};

int SoldierLabeling::count(int n, int lowerBound, int upperBound) {
    int ret;
    return ret;
}


int test0() {
    int n = 100;
    int lowerBound = 2;
    int upperBound = 2;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 31;
    int lowerBound = 2;
    int upperBound = 3;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 1;
    int lowerBound = 2;
    int upperBound = 8;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
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
    int n = 10000000;
    int lowerBound = 8;
    int upperBound = 8;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 2718317;
    int lowerBound = 3;
    int upperBound = 7;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 2718218;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 10000000;
    int lowerBound = 1;
    int upperBound = 8;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 10000000;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 9999999;
    int lowerBound = 7;
    int upperBound = 8;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 9000000;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 42;
    int lowerBound = 2;
    int upperBound = 2;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 4;
    int lowerBound = 1;
    int upperBound = 2;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 4560;
    int lowerBound = 3;
    int upperBound = 5;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 4461;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 596427;
    int lowerBound = 1;
    int upperBound = 7;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 596427;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 2;
    int lowerBound = 1;
    int upperBound = 2;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 35631;
    int lowerBound = 2;
    int upperBound = 6;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 35622;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 8319;
    int lowerBound = 2;
    int upperBound = 4;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 8310;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 7;
    int lowerBound = 1;
    int upperBound = 2;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 49;
    int lowerBound = 2;
    int upperBound = 3;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 44063;
    int lowerBound = 4;
    int upperBound = 6;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 43064;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 8;
    int lowerBound = 1;
    int upperBound = 2;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 59;
    int lowerBound = 3;
    int upperBound = 3;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 4351423;
    int lowerBound = 4;
    int upperBound = 7;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 4350424;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 75291;
    int lowerBound = 5;
    int upperBound = 6;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 65292;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 78363;
    int lowerBound = 2;
    int upperBound = 5;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 78354;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 950193;
    int lowerBound = 4;
    int upperBound = 4;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 9000;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 790027;
    int lowerBound = 2;
    int upperBound = 3;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 990;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 60078;
    int lowerBound = 1;
    int upperBound = 5;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 60078;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 31;
    int lowerBound = 2;
    int upperBound = 2;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 2349;
    int lowerBound = 4;
    int upperBound = 4;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 1350;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 949;
    int lowerBound = 1;
    int upperBound = 4;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 949;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 538;
    int lowerBound = 3;
    int upperBound = 4;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 439;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 2763;
    int lowerBound = 2;
    int upperBound = 5;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 2754;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 3562947;
    int lowerBound = 5;
    int upperBound = 8;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 3552948;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 6028964;
    int lowerBound = 6;
    int upperBound = 7;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 5928965;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 28;
    int lowerBound = 1;
    int upperBound = 3;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 550516;
    int lowerBound = 1;
    int upperBound = 5;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 99999;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 9780322;
    int lowerBound = 5;
    int upperBound = 7;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 9770323;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 45516;
    int lowerBound = 1;
    int upperBound = 2;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 5645825;
    int lowerBound = 2;
    int upperBound = 4;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 9990;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 52;
    int lowerBound = 3;
    int upperBound = 3;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 9;
    int lowerBound = 1;
    int upperBound = 1;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 3171926;
    int lowerBound = 1;
    int upperBound = 5;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 99999;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 2771431;
    int lowerBound = 1;
    int upperBound = 1;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 7;
    int lowerBound = 1;
    int upperBound = 1;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 10;
    int lowerBound = 3;
    int upperBound = 3;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 8242164;
    int lowerBound = 5;
    int upperBound = 8;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 8232165;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 5323;
    int lowerBound = 2;
    int upperBound = 4;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 5314;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 2554198;
    int lowerBound = 1;
    int upperBound = 8;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 2554198;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 79379;
    int lowerBound = 1;
    int upperBound = 6;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 79379;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 427;
    int lowerBound = 3;
    int upperBound = 3;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 328;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 7;
    int lowerBound = 1;
    int upperBound = 1;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 915;
    int lowerBound = 1;
    int upperBound = 4;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 915;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 421;
    int lowerBound = 3;
    int upperBound = 4;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 322;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 3;
    int lowerBound = 2;
    int upperBound = 2;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 9496898;
    int lowerBound = 4;
    int upperBound = 6;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 999000;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 8;
    int lowerBound = 2;
    int upperBound = 2;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 6430534;
    int lowerBound = 1;
    int upperBound = 6;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 999999;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 234;
    int lowerBound = 1;
    int upperBound = 1;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 828718;
    int lowerBound = 4;
    int upperBound = 7;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 827719;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 10000000;
    int lowerBound = 2;
    int upperBound = 8;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 9999991;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 10000000;
    int lowerBound = 1;
    int upperBound = 1;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 1;
    int lowerBound = 1;
    int upperBound = 1;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 9999999;
    int lowerBound = 1;
    int upperBound = 7;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 9999999;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 10;
    int lowerBound = 1;
    int upperBound = 1;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 10000;
    int lowerBound = 2;
    int upperBound = 2;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 990;
    int lowerBound = 1;
    int upperBound = 4;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 990;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 999999;
    int lowerBound = 3;
    int upperBound = 4;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 9900;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int n = 100000;
    int lowerBound = 1;
    int upperBound = 1;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int n = 1114;
    int lowerBound = 1;
    int upperBound = 1;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int n = 10000000;
    int lowerBound = 5;
    int upperBound = 5;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 90000;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int n = 9976876;
    int lowerBound = 3;
    int upperBound = 7;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 9976777;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int n = 152356;
    int lowerBound = 2;
    int upperBound = 3;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 990;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int n = 1;
    int lowerBound = 2;
    int upperBound = 3;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
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
    int n = 1000;
    int lowerBound = 2;
    int upperBound = 2;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int n = 999;
    int lowerBound = 1;
    int upperBound = 1;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int n = 2718317;
    int lowerBound = 1;
    int upperBound = 1;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int n = 95;
    int lowerBound = 2;
    int upperBound = 2;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 86;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int n = 99;
    int lowerBound = 3;
    int upperBound = 7;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
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
    int n = 15;
    int lowerBound = 1;
    int upperBound = 2;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int n = 10000000;
    int lowerBound = 4;
    int upperBound = 8;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 9999001;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int n = 10000000;
    int lowerBound = 1;
    int upperBound = 3;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 999;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int n = 8;
    int lowerBound = 1;
    int upperBound = 1;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int n = 500;
    int lowerBound = 2;
    int upperBound = 4;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 491;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int n = 10000;
    int lowerBound = 2;
    int upperBound = 3;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 990;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int n = 1;
    int lowerBound = 5;
    int upperBound = 5;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int n = 4;
    int lowerBound = 2;
    int upperBound = 8;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int n = 11;
    int lowerBound = 2;
    int upperBound = 2;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int n = 40;
    int lowerBound = 1;
    int upperBound = 1;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int n = 1;
    int lowerBound = 2;
    int upperBound = 2;
    SoldierLabeling* pObj = new SoldierLabeling();
    clock_t start = clock();
    int result = pObj->count(n, lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22699948&rd=13900&pm=10574
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
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
 
class SoldierLabeling { 
        public: 
        int count(int n, int l, int u) { 
      int ret = 0;
      for (int i=1; i<=n; i++) {
        int length = 0, k = i;
        while (k>0) {
          length++;
          k /= 10;
        }
        if (length>=l && length<=u) ret++;
      }
      return ret;          
        } 
        
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/