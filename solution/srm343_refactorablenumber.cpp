/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6784
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

class RefactorableNumber {
public:
    int count(int low, int high);
};

int RefactorableNumber::count(int low, int high) {
    int ret;
    return ret;
}


int test0() {
    int low = 1;
    int high = 10;
    RefactorableNumber* pObj = new RefactorableNumber();
    clock_t start = clock();
    int result = pObj->count(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int low = 10;
    int high = 100;
    RefactorableNumber* pObj = new RefactorableNumber();
    clock_t start = clock();
    int result = pObj->count(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int low = 25;
    int high = 35;
    RefactorableNumber* pObj = new RefactorableNumber();
    clock_t start = clock();
    int result = pObj->count(low, high);
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
    int low = 123;
    int high = 4567;
    RefactorableNumber* pObj = new RefactorableNumber();
    clock_t start = clock();
    int result = pObj->count(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 315;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int low = 1;
    int high = 2000000;
    RefactorableNumber* pObj = new RefactorableNumber();
    clock_t start = clock();
    int result = pObj->count(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 85803;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int low = 1;
    int high = 10000;
    RefactorableNumber* pObj = new RefactorableNumber();
    clock_t start = clock();
    int result = pObj->count(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 665;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int low = 10000;
    int high = 100000;
    RefactorableNumber* pObj = new RefactorableNumber();
    clock_t start = clock();
    int result = pObj->count(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 4593;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int low = 1;
    int high = 18;
    RefactorableNumber* pObj = new RefactorableNumber();
    clock_t start = clock();
    int result = pObj->count(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int low = 18;
    int high = 36;
    RefactorableNumber* pObj = new RefactorableNumber();
    clock_t start = clock();
    int result = pObj->count(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int low = 19;
    int high = 35;
    RefactorableNumber* pObj = new RefactorableNumber();
    clock_t start = clock();
    int result = pObj->count(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int low = 100000;
    int high = 2000000;
    RefactorableNumber* pObj = new RefactorableNumber();
    clock_t start = clock();
    int result = pObj->count(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 80546;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int low = 289383;
    int high = 930885;
    RefactorableNumber* pObj = new RefactorableNumber();
    clock_t start = clock();
    int result = pObj->count(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 27735;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int low = 636915;
    int high = 1692777;
    RefactorableNumber* pObj = new RefactorableNumber();
    clock_t start = clock();
    int result = pObj->count(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 44072;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int low = 238335;
    int high = 1747793;
    RefactorableNumber* pObj = new RefactorableNumber();
    clock_t start = clock();
    int result = pObj->count(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 63857;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int low = 1760492;
    int high = 1885384;
    RefactorableNumber* pObj = new RefactorableNumber();
    clock_t start = clock();
    int result = pObj->count(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 5066;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int low = 516649;
    int high = 1641421;
    RefactorableNumber* pObj = new RefactorableNumber();
    clock_t start = clock();
    int result = pObj->count(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 47138;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int low = 490027;
    int high = 1202362;
    RefactorableNumber* pObj = new RefactorableNumber();
    clock_t start = clock();
    int result = pObj->count(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 30243;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int low = 520059;
    int high = 1368690;
    RefactorableNumber* pObj = new RefactorableNumber();
    clock_t start = clock();
    int result = pObj->count(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 35776;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int low = 897763;
    int high = 1513926;
    RefactorableNumber* pObj = new RefactorableNumber();
    clock_t start = clock();
    int result = pObj->count(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 25616;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int low = 383426;
    int high = 1180540;
    RefactorableNumber* pObj = new RefactorableNumber();
    clock_t start = clock();
    int result = pObj->count(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 34021;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int low = 89172;
    int high = 1455736;
    RefactorableNumber* pObj = new RefactorableNumber();
    clock_t start = clock();
    int result = pObj->count(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 58872;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int low = 1005211;
    int high = 1595368;
    RefactorableNumber* pObj = new RefactorableNumber();
    clock_t start = clock();
    int result = pObj->count(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 24428;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int low = 702567;
    int high = 956429;
    RefactorableNumber* pObj = new RefactorableNumber();
    clock_t start = clock();
    int result = pObj->count(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 10746;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int low = 465782;
    int high = 1021530;
    RefactorableNumber* pObj = new RefactorableNumber();
    clock_t start = clock();
    int result = pObj->count(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 23734;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int low = 722862;
    int high = 1665123;
    RefactorableNumber* pObj = new RefactorableNumber();
    clock_t start = clock();
    int result = pObj->count(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 39232;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int low = 703135;
    int high = 1174067;
    RefactorableNumber* pObj = new RefactorableNumber();
    clock_t start = clock();
    int result = pObj->count(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 19828;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int low = 1513929;
    int high = 1979802;
    RefactorableNumber* pObj = new RefactorableNumber();
    clock_t start = clock();
    int result = pObj->count(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 18980;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int low = 1634022;
    int high = 1723058;
    RefactorableNumber* pObj = new RefactorableNumber();
    clock_t start = clock();
    int result = pObj->count(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 3657;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int low = 1133069;
    int high = 1898167;
    RefactorableNumber* pObj = new RefactorableNumber();
    clock_t start = clock();
    int result = pObj->count(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 31409;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int low = 1018456;
    int high = 1961393;
    RefactorableNumber* pObj = new RefactorableNumber();
    clock_t start = clock();
    int result = pObj->count(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 38779;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int low = 175011;
    int high = 478042;
    RefactorableNumber* pObj = new RefactorableNumber();
    clock_t start = clock();
    int result = pObj->count(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 13581;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int low = 1;
    int high = 9;
    RefactorableNumber* pObj = new RefactorableNumber();
    clock_t start = clock();
    int result = pObj->count(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int low = 225;
    int high = 225;
    RefactorableNumber* pObj = new RefactorableNumber();
    clock_t start = clock();
    int result = pObj->count(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int low = 1234567;
    int high = 1234567;
    RefactorableNumber* pObj = new RefactorableNumber();
    clock_t start = clock();
    int result = pObj->count(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int low = 41;
    int high = 41;
    RefactorableNumber* pObj = new RefactorableNumber();
    clock_t start = clock();
    int result = pObj->count(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int low = 1;
    int high = 2;
    RefactorableNumber* pObj = new RefactorableNumber();
    clock_t start = clock();
    int result = pObj->count(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int low = 2865;
    int high = 86457;
    RefactorableNumber* pObj = new RefactorableNumber();
    clock_t start = clock();
    int result = pObj->count(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 4376;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int low = 441;
    int high = 441;
    RefactorableNumber* pObj = new RefactorableNumber();
    clock_t start = clock();
    int result = pObj->count(low, high);
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
    int low = 1;
    int high = 2000000;
    RefactorableNumber* pObj = new RefactorableNumber();
    clock_t start = clock();
    int result = pObj->count(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 85803;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int low = 1;
    int high = 1999699;
    RefactorableNumber* pObj = new RefactorableNumber();
    clock_t start = clock();
    int result = pObj->count(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 85790;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int low = 1500000;
    int high = 2000000;
    RefactorableNumber* pObj = new RefactorableNumber();
    clock_t start = clock();
    int result = pObj->count(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 20362;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int low = 13;
    int high = 1987654;
    RefactorableNumber* pObj = new RefactorableNumber();
    clock_t start = clock();
    int result = pObj->count(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 85298;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=10667&pm=6784
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
 
//typedef long long __int64;
 
const int maxn=2000000;
 
int A[maxn+5];    
 
class RefactorableNumber
{
public:
  int count(int low, int high)
  {
    int i;
    memset(A,0,sizeof(A));
    for (i=1;i<=maxn;i++)
      for (int k=i;k<=maxn;k+=i)
        A[k]++;
    int result=0;
    for (i=low;i<=high;i++)
      if (i%A[i]==0)
        result++;
    return result;
  }
};
 
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/