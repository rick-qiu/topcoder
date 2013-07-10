/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11343
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

class GeometricProgressions {
public:
    int count(int b1, int q1, int n1, int b2, int q2, int n2);
};

int GeometricProgressions::count(int b1, int q1, int n1, int b2, int q2, int n2) {
    int ret;
    return ret;
}


int test0() {
    int b1 = 3;
    int q1 = 2;
    int n1 = 5;
    int b2 = 6;
    int q2 = 2;
    int n2 = 5;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
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
    int b1 = 3;
    int q1 = 2;
    int n1 = 5;
    int b2 = 2;
    int q2 = 3;
    int n2 = 5;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int b1 = 1;
    int q1 = 1;
    int n1 = 1;
    int b2 = 0;
    int q2 = 0;
    int n2 = 1;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int b1 = 3;
    int q1 = 4;
    int n1 = 100500;
    int b2 = 48;
    int q2 = 1024;
    int n2 = 1000;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 100500;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int b1 = 15724;
    int q1 = 19169;
    int n1 = 26501;
    int b2 = 6334;
    int q2 = 18467;
    int n2 = 42;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 26543;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int b1 = 28145;
    int q1 = 5705;
    int n1 = 24465;
    int b2 = 26962;
    int q2 = 29358;
    int n2 = 11479;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 35944;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int b1 = 11942;
    int q1 = 2995;
    int n1 = 492;
    int b2 = 9961;
    int q2 = 16827;
    int n2 = 23282;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 23774;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int b1 = 153;
    int q1 = 3902;
    int n1 = 14605;
    int b2 = 32391;
    int q2 = 5436;
    int n2 = 4828;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 19433;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int b1 = 19895;
    int q1 = 19718;
    int n1 = 18717;
    int b2 = 17421;
    int q2 = 12382;
    int n2 = 293;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 19010;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int b1 = 19912;
    int q1 = 1869;
    int n1 = 11539;
    int b2 = 14771;
    int q2 = 21726;
    int n2 = 5448;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 16987;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int b1 = 23811;
    int q1 = 28703;
    int n1 = 9895;
    int b2 = 17035;
    int q2 = 26299;
    int n2 = 25668;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 35563;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int b1 = 7711;
    int q1 = 15141;
    int n1 = 4665;
    int b2 = 17673;
    int q2 = 30333;
    int n2 = 31323;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 35988;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int b1 = 32757;
    int q1 = 32662;
    int n1 = 27645;
    int b2 = 25547;
    int q2 = 6868;
    int n2 = 28254;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 55899;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int b1 = 778;
    int q1 = 27529;
    int n1 = 9742;
    int b2 = 8723;
    int q2 = 12859;
    int n2 = 20038;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 29780;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int b1 = 6;
    int q1 = 8;
    int n1 = 1843;
    int b2 = 0;
    int q2 = 5;
    int n2 = 12317;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 1844;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int b1 = 5;
    int q1 = 6;
    int n1 = 22649;
    int b2 = 4;
    int q2 = 2;
    int n2 = 9041;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 31690;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int b1 = 1;
    int q1 = 6;
    int n1 = 15351;
    int b2 = 0;
    int q2 = 9;
    int n2 = 15891;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 15352;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int b1 = 4;
    int q1 = 4;
    int n1 = 12624;
    int b2 = 9;
    int q2 = 8;
    int n2 = 24394;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 37018;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int b1 = 8;
    int q1 = 1;
    int n1 = 7377;
    int b2 = 6;
    int q2 = 0;
    int n2 = 18757;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int b1 = 8;
    int q1 = 7;
    int n1 = 11324;
    int b2 = 6;
    int q2 = 9;
    int n2 = 16945;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 28269;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int b1 = 5;
    int q1 = 3;
    int n1 = 16542;
    int b2 = 9;
    int q2 = 2;
    int n2 = 16119;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 32661;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int b1 = 6;
    int q1 = 7;
    int n1 = 9931;
    int b2 = 4;
    int q2 = 8;
    int n2 = 4640;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 14571;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int b1 = 2;
    int q1 = 4;
    int n1 = 28746;
    int b2 = 1;
    int q2 = 6;
    int n2 = 31674;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 60420;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int b1 = 2;
    int q1 = 7;
    int n1 = 15574;
    int b2 = 7;
    int q2 = 9;
    int n2 = 6271;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 21845;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int b1 = 7;
    int q1 = 5;
    int n1 = 18637;
    int b2 = 1;
    int q2 = 0;
    int n2 = 23987;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 18639;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int b1 = 0;
    int q1 = 0;
    int n1 = 12053;
    int b2 = 1;
    int q2 = 4;
    int n2 = 23656;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 23657;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int b1 = 1;
    int q1 = 7;
    int n1 = 3431;
    int b2 = 6;
    int q2 = 4;
    int n2 = 16942;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 20373;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int b1 = 3;
    int q1 = 3;
    int n1 = 12288;
    int b2 = 7;
    int q2 = 7;
    int n2 = 18008;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 30296;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int b1 = 8;
    int q1 = 1;
    int n1 = 9759;
    int b2 = 9;
    int q2 = 9;
    int n2 = 14946;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 14947;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int b1 = 8;
    int q1 = 3;
    int n1 = 13031;
    int b2 = 6;
    int q2 = 6;
    int n2 = 6423;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 19453;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int b1 = 9;
    int q1 = 0;
    int n1 = 1656;
    int b2 = 2;
    int q2 = 1;
    int n2 = 901;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int b1 = 1;
    int q1 = 5;
    int n1 = 6484;
    int b2 = 8;
    int q2 = 7;
    int n2 = 27625;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 34109;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int b1 = 0;
    int q1 = 4;
    int n1 = 30837;
    int b2 = 1;
    int q2 = 0;
    int n2 = 3603;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
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
    int b1 = 4;
    int q1 = 8;
    int n1 = 23200;
    int b2 = 8;
    int q2 = 1;
    int n2 = 4597;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 23201;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int b1 = 938;
    int q1 = 6418;
    int n1 = 2000;
    int b2 = 53;
    int q2 = 4734;
    int n2 = 8282;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 10282;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int b1 = 893;
    int q1 = 3728;
    int n1 = 468;
    int b2 = 127;
    int q2 = 3788;
    int n2 = 6901;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 7369;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int b1 = 617;
    int q1 = 4310;
    int n1 = 2422;
    int b2 = 807;
    int q2 = 2483;
    int n2 = 24649;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 27071;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int b1 = 451;
    int q1 = 8935;
    int n1 = 7617;
    int b2 = 309;
    int q2 = 9514;
    int n2 = 22814;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 30431;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int b1 = 303;
    int q1 = 2798;
    int n1 = 31557;
    int b2 = 519;
    int q2 = 5249;
    int n2 = 20601;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 52158;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int b1 = 702;
    int q1 = 4989;
    int n1 = 32610;
    int b2 = 844;
    int q2 = 1008;
    int n2 = 6225;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 38835;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int b1 = 587;
    int q1 = 523;
    int n1 = 14344;
    int b2 = 93;
    int q2 = 485;
    int n2 = 3196;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 17540;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int b1 = 618;
    int q1 = 3458;
    int n1 = 25201;
    int b2 = 448;
    int q2 = 9503;
    int n2 = 29315;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 54516;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int b1 = 798;
    int q1 = 9589;
    int n1 = 15282;
    int b2 = 798;
    int q2 = 9796;
    int n2 = 20581;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 35862;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int b1 = 292;
    int q1 = 8538;
    int n1 = 23623;
    int b2 = 472;
    int q2 = 7157;
    int n2 = 28010;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 51633;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int b1 = 191;
    int q1 = 7958;
    int n1 = 29658;
    int b2 = 190;
    int q2 = 4179;
    int n2 = 6039;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 35697;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int b1 = 634;
    int q1 = 6202;
    int n1 = 11512;
    int b2 = 156;
    int q2 = 2888;
    int n2 = 19816;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 31328;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int b1 = 886;
    int q1 = 6362;
    int n1 = 22647;
    int b2 = 328;
    int q2 = 55;
    int n2 = 24273;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 46920;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int b1 = 416;
    int q1 = 3844;
    int n1 = 20143;
    int b2 = 869;
    int q2 = 8433;
    int n2 = 18876;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 39019;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int b1 = 699;
    int q1 = 21;
    int n1 = 18652;
    int b2 = 322;
    int q2 = 1998;
    int n2 = 21882;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 40534;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int b1 = 712;
    int q1 = 5075;
    int n1 = 24390;
    int b2 = 892;
    int q2 = 8476;
    int n2 = 3558;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 27948;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int b1 = 688;
    int q1 = 7861;
    int n1 = 26870;
    int b2 = 3;
    int q2 = 2510;
    int n2 = 2601;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 29471;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int b1 = 585;
    int q1 = 5002;
    int n1 = 16424;
    int b2 = 255;
    int q2 = 9789;
    int n2 = 13402;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 29826;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int b1 = 757;
    int q1 = 8617;
    int n1 = 31427;
    int b2 = 88;
    int q2 = 285;
    int n2 = 24183;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 55610;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int b1 = 189;
    int q1 = 5721;
    int n1 = 2155;
    int b2 = 169;
    int q2 = 932;
    int n2 = 9833;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 11988;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int b1 = 555;
    int q1 = 1425;
    int n1 = 100408;
    int b2 = 368;
    int q2 = 1329;
    int n2 = 100424;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 200832;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int b1 = 60;
    int q1 = 145;
    int n1 = 100488;
    int b2 = 441;
    int q2 = 6549;
    int n2 = 100466;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 200954;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int b1 = 996;
    int q1 = 6279;
    int n1 = 100477;
    int b2 = 139;
    int q2 = 3753;
    int n2 = 100482;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 200959;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int b1 = 949;
    int q1 = 9866;
    int n1 = 100463;
    int b2 = 549;
    int q2 = 2529;
    int n2 = 100413;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 200876;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int b1 = 105;
    int q1 = 8286;
    int n1 = 100484;
    int b2 = 297;
    int q2 = 3195;
    int n2 = 100407;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 200891;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int b1 = 701;
    int q1 = 8114;
    int n1 = 100466;
    int b2 = 455;
    int q2 = 6282;
    int n2 = 100412;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 200878;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int b1 = 355;
    int q1 = 4313;
    int n1 = 100437;
    int b2 = 786;
    int q2 = 671;
    int n2 = 100484;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 200921;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int b1 = 945;
    int q1 = 1832;
    int n1 = 100492;
    int b2 = 912;
    int q2 = 53;
    int n2 = 100415;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 200907;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int b1 = 982;
    int q1 = 3646;
    int n1 = 100442;
    int b2 = 321;
    int q2 = 7756;
    int n2 = 100487;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 200929;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int b1 = 161;
    int q1 = 7129;
    int n1 = 100478;
    int b2 = 196;
    int q2 = 4144;
    int n2 = 100419;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 200897;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int b1 = 659;
    int q1 = 2044;
    int n1 = 100434;
    int b2 = 173;
    int q2 = 450;
    int n2 = 100465;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 200899;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int b1 = 510;
    int q1 = 6154;
    int n1 = 100476;
    int b2 = 253;
    int q2 = 6439;
    int n2 = 100408;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 200884;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int b1 = 22;
    int q1 = 4474;
    int n1 = 100487;
    int b2 = 186;
    int q2 = 649;
    int n2 = 100455;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 200942;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int b1 = 391;
    int q1 = 7958;
    int n1 = 100495;
    int b2 = 787;
    int q2 = 4018;
    int n2 = 100432;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 200927;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int b1 = 824;
    int q1 = 9314;
    int n1 = 100486;
    int b2 = 477;
    int q2 = 3625;
    int n2 = 100498;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 200984;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int b1 = 70;
    int q1 = 1833;
    int n1 = 100441;
    int b2 = 372;
    int q2 = 5874;
    int n2 = 100466;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 200907;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int b1 = 270;
    int q1 = 7773;
    int n1 = 100423;
    int b2 = 518;
    int q2 = 8297;
    int n2 = 100413;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 200836;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int b1 = 480;
    int q1 = 3102;
    int n1 = 100415;
    int b2 = 192;
    int q2 = 2668;
    int n2 = 100437;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 200852;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int b1 = 625;
    int q1 = 527;
    int n1 = 100401;
    int b2 = 802;
    int q2 = 7627;
    int n2 = 100487;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 200888;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int b1 = 181;
    int q1 = 3061;
    int n1 = 100428;
    int b2 = 23;
    int q2 = 1924;
    int n2 = 100457;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 200885;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int b1 = 64361782;
    int q1 = 278265998;
    int n1 = 13032;
    int b2 = 404190149;
    int q2 = 398909281;
    int n2 = 31004;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 44036;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int b1 = 7731313;
    int q1 = 467628530;
    int n1 = 30975;
    int b2 = 273962893;
    int q2 = 258886387;
    int n2 = 13065;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 44040;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int b1 = 88331384;
    int q1 = 4601214;
    int n1 = 12551;
    int b2 = 152935541;
    int q2 = 344122576;
    int n2 = 19712;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 32263;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int b1 = 153311297;
    int q1 = 69235394;
    int n1 = 26303;
    int b2 = 210891650;
    int q2 = 69658576;
    int n2 = 28020;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 54323;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int b1 = 17776006;
    int q1 = 91768487;
    int n1 = 23153;
    int b2 = 432729471;
    int q2 = 335060730;
    int n2 = 23852;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 47005;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int b1 = 234755061;
    int q1 = 394647782;
    int n1 = 30228;
    int b2 = 165691496;
    int q2 = 155909546;
    int n2 = 9011;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 39239;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int b1 = 184483000;
    int q1 = 86041627;
    int n1 = 14475;
    int b2 = 114291593;
    int q2 = 59903613;
    int n2 = 7883;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 22358;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int b1 = 334102285;
    int q1 = 122467277;
    int n1 = 24597;
    int b2 = 490274939;
    int q2 = 434550262;
    int n2 = 25424;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 50021;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int b1 = 210101195;
    int q1 = 450663219;
    int n1 = 20327;
    int b2 = 265950118;
    int q2 = 270669882;
    int n2 = 1265;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 21592;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int b1 = 111530245;
    int q1 = 161894771;
    int n1 = 21764;
    int b2 = 489059820;
    int q2 = 205197150;
    int n2 = 21154;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 42918;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int b1 = 353874983;
    int q1 = 376079536;
    int n1 = 13008;
    int b2 = 76004269;
    int q2 = 80438542;
    int n2 = 30901;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 43909;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int b1 = 148862018;
    int q1 = 191845671;
    int n1 = 5109;
    int b2 = 76159309;
    int q2 = 418139037;
    int n2 = 2304;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 7413;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int b1 = 420609636;
    int q1 = 19473952;
    int n1 = 6541;
    int b2 = 397338317;
    int q2 = 234933697;
    int n2 = 14461;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 21002;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int b1 = 279393325;
    int q1 = 53290125;
    int n1 = 23217;
    int b2 = 474665036;
    int q2 = 461759623;
    int n2 = 6073;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 29290;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int b1 = 416729352;
    int q1 = 470499968;
    int n1 = 13023;
    int b2 = 462114144;
    int q2 = 262567997;
    int n2 = 29338;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 42361;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int b1 = 230625183;
    int q1 = 214934244;
    int n1 = 4566;
    int b2 = 290683301;
    int q2 = 287799911;
    int n2 = 11586;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 16152;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int b1 = 238331539;
    int q1 = 203117345;
    int n1 = 16973;
    int b2 = 474330366;
    int q2 = 55814400;
    int n2 = 12054;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 29027;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int b1 = 72865406;
    int q1 = 153203338;
    int n1 = 22849;
    int b2 = 381265747;
    int q2 = 81363855;
    int n2 = 2608;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 25457;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int b1 = 53312702;
    int q1 = 105563598;
    int n1 = 17826;
    int b2 = 161115859;
    int q2 = 213375189;
    int n2 = 23755;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 41581;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int b1 = 53667750;
    int q1 = 399552958;
    int n1 = 22702;
    int b2 = 70119943;
    int q2 = 41489194;
    int n2 = 15206;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 37908;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int b1 = 1112;
    int q1 = 2;
    int n1 = 6963;
    int b2 = 1112;
    int q2 = 2;
    int n2 = 1994;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 6963;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int b1 = 2700;
    int q1 = 8;
    int n1 = 24856;
    int b2 = 2400;
    int q2 = 3;
    int n2 = 14414;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 39269;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int b1 = 611;
    int q1 = 8;
    int n1 = 1753;
    int b2 = 2444;
    int q2 = 4;
    int n2 = 30878;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 31755;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int b1 = 16152;
    int q1 = 8;
    int n1 = 20073;
    int b2 = 5384;
    int q2 = 24;
    int n2 = 10041;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 30113;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int b1 = 17;
    int q1 = 8;
    int n1 = 13170;
    int b2 = 136;
    int q2 = 216;
    int n2 = 14933;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 28102;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int b1 = 1464;
    int q1 = 9;
    int n1 = 2590;
    int b2 = 1464;
    int q2 = 9;
    int n2 = 28686;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 28686;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int b1 = 22592;
    int q1 = 27;
    int n1 = 22045;
    int b2 = 353;
    int q2 = 4;
    int n2 = 19315;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 41359;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int b1 = 3795;
    int q1 = 3;
    int n1 = 12182;
    int b2 = 759;
    int q2 = 5;
    int n2 = 11193;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 23374;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int b1 = 4650;
    int q1 = 3;
    int n1 = 17550;
    int b2 = 2325;
    int q2 = 6;
    int n2 = 20609;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 38158;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int b1 = 10032;
    int q1 = 4;
    int n1 = 31241;
    int b2 = 2508;
    int q2 = 4;
    int n2 = 6468;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 31242;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int b1 = 601;
    int q1 = 16;
    int n1 = 8214;
    int b2 = 38464;
    int q2 = 24;
    int n2 = 6078;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 14292;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int b1 = 601;
    int q1 = 16;
    int n1 = 26429;
    int b2 = 9616;
    int q2 = 6;
    int n2 = 23393;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 49821;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int b1 = 75;
    int q1 = 5;
    int n1 = 6288;
    int b2 = 1800;
    int q2 = 5;
    int n2 = 18787;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 25075;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int b1 = 108648;
    int q1 = 24;
    int n1 = 2364;
    int b2 = 12072;
    int q2 = 36;
    int n2 = 21222;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 23586;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int b1 = 105624;
    int q1 = 6;
    int n1 = 7620;
    int b2 = 17604;
    int q2 = 216;
    int n2 = 18241;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 23321;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int b1 = 5346;
    int q1 = 9999;
    int n1 = 75617;
    int b2 = 5346;
    int q2 = 1000;
    int n2 = 2252;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 77868;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int b1 = 495;
    int q1 = 100000;
    int n1 = 63296;
    int b2 = 5000;
    int q2 = 9999;
    int n2 = 34269;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 97565;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int b1 = 4653;
    int q1 = 100000;
    int n1 = 53594;
    int b2 = 469953;
    int q2 = 9999;
    int n2 = 8917;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 62511;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int b1 = 2277;
    int q1 = 10;
    int n1 = 52640;
    int b2 = 2300000;
    int q2 = 10;
    int n2 = 86141;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 138781;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int b1 = 5742;
    int q1 = 100000;
    int n1 = 41957;
    int b2 = 58000000;
    int q2 = 1000;
    int n2 = 25563;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 67520;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int b1 = 9000;
    int q1 = 100000;
    int n1 = 69738;
    int b2 = 9000;
    int q2 = 10;
    int n2 = 55623;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 114236;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int b1 = 28000;
    int q1 = 9999;
    int n1 = 84972;
    int b2 = 279972;
    int q2 = 10;
    int n2 = 28807;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 113778;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int b1 = 62000;
    int q1 = 1000;
    int n1 = 85713;
    int b2 = 6200000;
    int q2 = 1000;
    int n2 = 75266;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 160979;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int b1 = 13000;
    int q1 = 99;
    int n1 = 10584;
    int b2 = 13000000;
    int q2 = 9999;
    int n2 = 43275;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 53859;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int b1 = 499950;
    int q1 = 100000;
    int n1 = 88;
    int b2 = 499950;
    int q2 = 10;
    int n2 = 16699;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 16699;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int b1 = 529947;
    int q1 = 1000;
    int n1 = 37915;
    int b2 = 5300000;
    int q2 = 9999;
    int n2 = 8834;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 46749;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int b1 = 89991;
    int q1 = 9999;
    int n1 = 4768;
    int b2 = 9000000;
    int q2 = 100000;
    int n2 = 14049;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 18817;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int b1 = 200000;
    int q1 = 9999;
    int n1 = 5279;
    int b2 = 200000;
    int q2 = 10;
    int n2 = 63668;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 68946;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int b1 = 6400000;
    int q1 = 9999;
    int n1 = 23852;
    int b2 = 64000000;
    int q2 = 99;
    int n2 = 2076;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 25928;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int b1 = 33000000;
    int q1 = 10;
    int n1 = 81207;
    int b2 = 33000000;
    int q2 = 10;
    int n2 = 2250;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 81207;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int b1 = 10976;
    int q1 = 2744;
    int n1 = 45557;
    int b2 = 10976;
    int q2 = 2744;
    int n2 = 96680;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 96680;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int b1 = 7448;
    int q1 = 196;
    int n1 = 47246;
    int b2 = 104272;
    int q2 = 14;
    int n2 = 33675;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 64084;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int b1 = 117992;
    int q1 = 2744;
    int n1 = 14835;
    int b2 = 117992;
    int q2 = 196;
    int n2 = 74301;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 81718;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int b1 = 8820;
    int q1 = 2744;
    int n1 = 63077;
    int b2 = 8820;
    int q2 = 2744;
    int n2 = 76235;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 76235;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int b1 = 10780;
    int q1 = 2744;
    int n1 = 55754;
    int b2 = 150920;
    int q2 = 196;
    int n2 = 28491;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 74748;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int b1 = 178360;
    int q1 = 14;
    int n1 = 53742;
    int b2 = 178360;
    int q2 = 2744;
    int n2 = 24228;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 60056;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int b1 = 1008;
    int q1 = 24;
    int n1 = 61280;
    int b2 = 1008;
    int q2 = 624;
    int n2 = 75218;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 136497;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int b1 = 144;
    int q1 = 624;
    int n1 = 20117;
    int b2 = 744;
    int q2 = 3125;
    int n2 = 97215;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 117332;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int b1 = 624;
    int q1 = 124;
    int n1 = 49697;
    int b2 = 16224;
    int q2 = 5;
    int n2 = 90283;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 139980;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int b1 = 864;
    int q1 = 24;
    int n1 = 17984;
    int b2 = 112500;
    int q2 = 24;
    int n2 = 92447;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 110431;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int b1 = 1344;
    int q1 = 124;
    int n1 = 61448;
    int b2 = 874944;
    int q2 = 24;
    int n2 = 92520;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 153968;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int b1 = 6820;
    int q1 = 5;
    int n1 = 53526;
    int b2 = 6820;
    int q2 = 24;
    int n2 = 54693;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 108218;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int b1 = 3100;
    int q1 = 24;
    int n1 = 59073;
    int b2 = 15600;
    int q2 = 124;
    int n2 = 12562;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 71635;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int b1 = 6200;
    int q1 = 124;
    int n1 = 31062;
    int b2 = 156250;
    int q2 = 3125;
    int n2 = 32684;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 63746;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int b1 = 1984;
    int q1 = 124;
    int n1 = 66702;
    int b2 = 249984;
    int q2 = 624;
    int n2 = 21792;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 88494;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int b1 = 33696;
    int q1 = 624;
    int n1 = 42772;
    int b2 = 33696;
    int q2 = 3125;
    int n2 = 78913;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 121684;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int b1 = 29952;
    int q1 = 3125;
    int n1 = 81331;
    int b2 = 150000;
    int q2 = 124;
    int n2 = 12644;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 93975;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int b1 = 17472;
    int q1 = 5;
    int n1 = 50578;
    int b2 = 437472;
    int q2 = 5;
    int n2 = 63960;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 114538;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int b1 = 156250;
    int q1 = 5;
    int n1 = 35714;
    int b2 = 156250;
    int q2 = 24;
    int n2 = 45797;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 81510;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int b1 = 237500;
    int q1 = 624;
    int n1 = 10688;
    int b2 = 1187424;
    int q2 = 3125;
    int n2 = 44712;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 55400;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int b1 = 1390536;
    int q1 = 624;
    int n1 = 92028;
    int b2 = 1390536;
    int q2 = 124;
    int n2 = 40965;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 132992;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int b1 = 499999999;
    int q1 = 0;
    int n1 = 100500;
    int b2 = 500000000;
    int q2 = 500000000;
    int n2 = 100500;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 100502;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int b1 = 499999999;
    int q1 = 0;
    int n1 = 100500;
    int b2 = 500000000;
    int q2 = 0;
    int n2 = 100500;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int b1 = 499999999;
    int q1 = 1;
    int n1 = 100500;
    int b2 = 500000000;
    int q2 = 500000000;
    int n2 = 100500;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 100501;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int b1 = 499999999;
    int q1 = 1;
    int n1 = 100500;
    int b2 = 500000000;
    int q2 = 1;
    int n2 = 100500;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int b1 = 500000000;
    int q1 = 1;
    int n1 = 100500;
    int b2 = 500000000;
    int q2 = 500000000;
    int n2 = 100500;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 100500;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int b1 = 500000000;
    int q1 = 1;
    int n1 = 100500;
    int b2 = 500000000;
    int q2 = 1;
    int n2 = 100500;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    int b1 = 499999999;
    int q1 = 499999999;
    int n1 = 100500;
    int b2 = 500000000;
    int q2 = 500000000;
    int n2 = 100500;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 201000;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    int b1 = 499999998;
    int q1 = 500000000;
    int n1 = 100500;
    int b2 = 499999999;
    int q2 = 499999999;
    int n2 = 100500;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 201000;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    int b1 = 446185740;
    int q1 = 410498683;
    int n1 = 100500;
    int b2 = 268953270;
    int q2 = 164601714;
    int n2 = 100500;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 201000;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    int b1 = 1;
    int q1 = 274684395;
    int n1 = 100500;
    int b2 = 251020324;
    int q2 = 255002404;
    int n2 = 100500;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 201000;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    int b1 = 1;
    int q1 = 493335308;
    int n1 = 100500;
    int b2 = 90742056;
    int q2 = 43867919;
    int n2 = 100500;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 201000;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    int b1 = 1000007;
    int q1 = 1000007;
    int n1 = 100500;
    int b2 = 1000009;
    int q2 = 1000009;
    int n2 = 100000;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 200500;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    int b1 = 33554430;
    int q1 = 33554432;
    int n1 = 100500;
    int b2 = 33554431;
    int q2 = 33554432;
    int n2 = 100500;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 201000;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    int b1 = 4194304;
    int q1 = 4194304;
    int n1 = 100500;
    int b2 = 4194303;
    int q2 = 4194304;
    int n2 = 100500;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 201000;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    int b1 = 4194304;
    int q1 = 4194304;
    int n1 = 100500;
    int b2 = 4194304;
    int q2 = 4194304;
    int n2 = 100500;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 100500;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    int b1 = 11;
    int q1 = 0;
    int n1 = 100500;
    int b2 = 15;
    int q2 = 61;
    int n2 = 10516;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 10518;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    int b1 = 11;
    int q1 = 1;
    int n1 = 11021;
    int b2 = 54;
    int q2 = 84;
    int n2 = 15468;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 15469;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    int b1 = 65415;
    int q1 = 46845;
    int n1 = 46515;
    int b2 = 54684;
    int q2 = 0;
    int n2 = 46558;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 46517;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    int b1 = 7;
    int q1 = 4;
    int n1 = 5;
    int b2 = 8;
    int q2 = 0;
    int n2 = 1;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    int b1 = 12;
    int q1 = 0;
    int n1 = 1;
    int b2 = 42;
    int q2 = 31;
    int n2 = 1;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    int b1 = 1;
    int q1 = 247256567;
    int n1 = 100500;
    int b2 = 33883938;
    int q2 = 19096233;
    int n2 = 100500;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 201000;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    int b1 = 15;
    int q1 = 5;
    int n1 = 20;
    int b2 = 3;
    int q2 = 25;
    int n2 = 50;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    int b1 = 3;
    int q1 = 4;
    int n1 = 100500;
    int b2 = 48;
    int q2 = 102499;
    int n2 = 100000;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 200499;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    int b1 = 500000000;
    int q1 = 500000000;
    int n1 = 100500;
    int b2 = 500000000;
    int q2 = 500000000;
    int n2 = 100500;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 100500;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    int b1 = 499999999;
    int q1 = 499999999;
    int n1 = 100500;
    int b2 = 499999997;
    int q2 = 499999997;
    int n2 = 100500;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 201000;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    int b1 = 8;
    int q1 = 4;
    int n1 = 10500;
    int b2 = 16;
    int q2 = 64;
    int n2 = 10500;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 21000;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    int b1 = 500000000;
    int q1 = 500000000;
    int n1 = 100000;
    int b2 = 500000000;
    int q2 = 500000000;
    int n2 = 100000;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 100000;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    int b1 = 9;
    int q1 = 108;
    int n1 = 10300;
    int b2 = 36;
    int q2 = 4;
    int n2 = 1100;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 11400;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    int b1 = 500000000;
    int q1 = 500000000;
    int n1 = 45;
    int b2 = 35;
    int q2 = 67;
    int n2 = 78;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 123;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    int b1 = 100000000;
    int q1 = 200000000;
    int n1 = 10500;
    int b2 = 300000000;
    int q2 = 150000000;
    int n2 = 10400;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 20900;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    int b1 = 500000000;
    int q1 = 500000000;
    int n1 = 13333;
    int b2 = 500000000;
    int q2 = 500000000;
    int n2 = 13333;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 13333;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    int b1 = 499999999;
    int q1 = 99999999;
    int n1 = 99;
    int b2 = 499292939;
    int q2 = 391989849;
    int n2 = 30;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 129;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    int b1 = 510510;
    int q1 = 510510;
    int n1 = 100500;
    int b2 = 485100;
    int q2 = 485100;
    int n2 = 100500;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 201000;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    int b1 = 499999999;
    int q1 = 499999977;
    int n1 = 100500;
    int b2 = 499999799;
    int q2 = 499999997;
    int n2 = 100500;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 201000;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    int b1 = 30;
    int q1 = 30;
    int n1 = 100000;
    int b2 = 6;
    int q2 = 150;
    int n2 = 100000;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 199999;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    int b1 = 1000000;
    int q1 = 1000000;
    int n1 = 100500;
    int b2 = 1000000;
    int q2 = 1000000;
    int n2 = 100500;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 100500;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    int b1 = 400000000;
    int q1 = 400000000;
    int n1 = 99;
    int b2 = 400000000;
    int q2 = 400000000;
    int n2 = 400;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 400;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    int b1 = 400;
    int q1 = 210;
    int n1 = 100500;
    int b2 = 2;
    int q2 = 210;
    int n2 = 100500;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 201000;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    int b1 = 499999999;
    int q1 = 499999999;
    int n1 = 100000;
    int b2 = 499999999;
    int q2 = 499999999;
    int n2 = 100000;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 100000;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    int b1 = 500000000;
    int q1 = 500000000;
    int n1 = 100500;
    int b2 = 499999999;
    int q2 = 500000000;
    int n2 = 100500;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 201000;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    int b1 = 0;
    int q1 = 0;
    int n1 = 100300;
    int b2 = 0;
    int q2 = 0;
    int n2 = 100300;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    int b1 = 30;
    int q1 = 77;
    int n1 = 10000;
    int b2 = 33;
    int q2 = 70;
    int n2 = 500;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 10499;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    int b1 = 499999997;
    int q1 = 499999999;
    int n1 = 100489;
    int b2 = 499999999;
    int q2 = 499999997;
    int n2 = 100499;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 200987;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    int b1 = 400000000;
    int q1 = 400000000;
    int n1 = 100000;
    int b2 = 400004235;
    int q2 = 213421323;
    int n2 = 100001;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 200001;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    int b1 = 500000000;
    int q1 = 50000000;
    int n1 = 10050;
    int b2 = 3650;
    int q2 = 100000000;
    int n2 = 65;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 10115;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    int b1 = 483229421;
    int q1 = 483228817;
    int n1 = 100500;
    int b2 = 483231491;
    int q2 = 483229387;
    int n2 = 100500;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 201000;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    int b1 = 12;
    int q1 = 1581;
    int n1 = 100400;
    int b2 = 151;
    int q2 = 3;
    int n2 = 100100;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 200500;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    int b1 = 500000000;
    int q1 = 499999999;
    int n1 = 100500;
    int b2 = 498765432;
    int q2 = 499999998;
    int n2 = 100500;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 201000;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    int b1 = 477777777;
    int q1 = 50000000;
    int n1 = 100500;
    int b2 = 5000000;
    int q2 = 477777777;
    int n2 = 100000;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 200500;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    int b1 = 499999999;
    int q1 = 498765432;
    int n1 = 100500;
    int b2 = 412345678;
    int q2 = 398765421;
    int n2 = 100500;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 201000;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    int b1 = 12;
    int q1 = 53;
    int n1 = 1005;
    int b2 = 12;
    int q2 = 106;
    int n2 = 100500;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 101504;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    int b1 = 500000000;
    int q1 = 500000000;
    int n1 = 100500;
    int b2 = 49999999;
    int q2 = 49999999;
    int n2 = 100499;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 200999;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    int b1 = 200;
    int q1 = 20000;
    int n1 = 100500;
    int b2 = 197;
    int q2 = 15478;
    int n2 = 100500;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 201000;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    int b1 = 478296791;
    int q1 = 18234627;
    int n1 = 100500;
    int b2 = 478296787;
    int q2 = 12415135;
    int n2 = 100500;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 201000;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    int b1 = 3;
    int q1 = 4;
    int n1 = 100500;
    int b2 = 48;
    int q2 = 1024;
    int n2 = 100500;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 180900;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    int b1 = 500000000;
    int q1 = 455454545;
    int n1 = 100000;
    int b2 = 445448488;
    int q2 = 465656644;
    int n2 = 100000;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 200000;
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    int b1 = 1;
    int q1 = 0;
    int n1 = 1;
    int b2 = 2;
    int q2 = 0;
    int n2 = 1;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    int b1 = 100;
    int q1 = 10000000;
    int n1 = 12356;
    int b2 = 957813;
    int q2 = 97626322;
    int n2 = 10953;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 23309;
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    int b1 = 1;
    int q1 = 1;
    int n1 = 1;
    int b2 = 1;
    int q2 = 0;
    int n2 = 1;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    int b1 = 1;
    int q1 = 1000000;
    int n1 = 100500;
    int b2 = 1;
    int q2 = 1000;
    int n2 = 100500;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 150750;
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    int b1 = 17;
    int q1 = 2;
    int n1 = 100499;
    int b2 = 19;
    int q2 = 7;
    int n2 = 100245;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 200744;
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    int b1 = 500000000;
    int q1 = 500000000;
    int n1 = 100500;
    int b2 = 499999999;
    int q2 = 499999999;
    int n2 = 100500;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 201000;
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    int b1 = 6;
    int q1 = 6;
    int n1 = 100500;
    int b2 = 4;
    int q2 = 4;
    int n2 = 100500;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 201000;
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    int b1 = 0;
    int q1 = 1;
    int n1 = 100500;
    int b2 = 2;
    int q2 = 0;
    int n2 = 100500;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    int b1 = 1;
    int q1 = 1;
    int n1 = 10000;
    int b2 = 1;
    int q2 = 1;
    int n2 = 99999;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    int b1 = 8;
    int q1 = 1;
    int n1 = 100;
    int b2 = 8;
    int q2 = 1;
    int n2 = 200;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    int b1 = 3;
    int q1 = 3;
    int n1 = 50000;
    int b2 = 2;
    int q2 = 2;
    int n2 = 50000;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 100000;
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    int b1 = 498792878;
    int q1 = 298191928;
    int n1 = 100000;
    int b2 = 222828721;
    int q2 = 9878282;
    int n2 = 100098;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 200098;
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    int b1 = 499999999;
    int q1 = 499999999;
    int n1 = 100500;
    int b2 = 499999999;
    int q2 = 399999999;
    int n2 = 100500;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 200999;
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    int b1 = 1;
    int q1 = 1;
    int n1 = 10000;
    int b2 = 1;
    int q2 = 1;
    int n2 = 9000;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    int b1 = 200;
    int q1 = 500000000;
    int n1 = 100500;
    int b2 = 197;
    int q2 = 490000000;
    int n2 = 100500;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 201000;
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    int b1 = 2;
    int q1 = 16;
    int n1 = 100500;
    int b2 = 64;
    int q2 = 2;
    int n2 = 100500;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 175875;
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    int b1 = 1;
    int q1 = 4;
    int n1 = 100500;
    int b2 = 1;
    int q2 = 4;
    int n2 = 100500;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 100500;
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    int b1 = 499000011;
    int q1 = 499000011;
    int n1 = 100000;
    int b2 = 499000013;
    int q2 = 499000013;
    int n2 = 100100;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 200100;
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    int b1 = 495104921;
    int q1 = 500000000;
    int n1 = 100500;
    int b2 = 495104551;
    int q2 = 376554347;
    int n2 = 100123;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 200623;
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    int b1 = 500000000;
    int q1 = 99999999;
    int n1 = 100500;
    int b2 = 500000000;
    int q2 = 99992399;
    int n2 = 100400;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 200899;
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test221() {
    int b1 = 500000000;
    int q1 = 500000000;
    int n1 = 100000;
    int b2 = 499999999;
    int q2 = 500000000;
    int n2 = 99999;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 199999;
    if(result == expected) {
        cout << "Test Case 221: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 221: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test222() {
    int b1 = 0;
    int q1 = 2;
    int n1 = 10;
    int b2 = 0;
    int q2 = 3;
    int n2 = 20;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 222: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 222: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test223() {
    int b1 = 1;
    int q1 = 0;
    int n1 = 1000;
    int b2 = 10;
    int q2 = 0;
    int n2 = 1200;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 223: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 223: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test224() {
    int b1 = 151581151;
    int q1 = 89;
    int n1 = 100500;
    int b2 = 141362197;
    int q2 = 83;
    int n2 = 100500;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 201000;
    if(result == expected) {
        cout << "Test Case 224: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 224: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test225() {
    int b1 = 0;
    int q1 = 100500;
    int n1 = 100500;
    int b2 = 0;
    int q2 = 100500;
    int n2 = 100500;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
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
    int b1 = 3;
    int q1 = 1;
    int n1 = 100217;
    int b2 = 5;
    int q2 = 1;
    int n2 = 100207;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 226: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 226: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test227() {
    int b1 = 1;
    int q1 = 0;
    int n1 = 100500;
    int b2 = 1;
    int q2 = 1;
    int n2 = 100499;
    GeometricProgressions* pObj = new GeometricProgressions();
    clock_t start = clock();
    int result = pObj->count(b1, q1, n1, b2, q2, n2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 227: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 227: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22856247&rd=14429&pm=11343
********************************************************************************
#include <iostream>
#include <set>
#define mp make_pair 
using namespace std;
class GeometricProgressions {
  public : int count(int b1, int q1, int n1, int b2, int q2, int n2) {
    long long a1 = b1, a2 = b1, mod1 = 1000000007, mod2 = 1000000009;
    set < pair < long long, long long > > s;
    while(n1--) {
      s.insert(mp(a1, a2));
      a1 *= q1;
      a2 *= q1;
      a1 %= mod1;
      a2 %= mod2;
    }
    a1 = b2; a2 = b2;
    while(n2--) {
      s.insert(mp(a1, a2));
      a1 *= q2;
      a2 *= q2;
      a1 %= mod1;
      a2 %= mod2;
    }
    return (int)s.size();
  }
};

********************************************************************************
*******************************************************************************/