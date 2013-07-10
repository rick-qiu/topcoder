/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4509
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

class Polyline {
public:
    double length(int a, int b, int x0, int y0, int x1, int y1);
};

double Polyline::length(int a, int b, int x0, int y0, int x1, int y1) {
    double ret;
    return ret;
}


int test0() {
    int a = 4;
    int b = 3;
    int x0 = 1;
    int y0 = 1;
    int x1 = 3;
    int y1 = 2;
    Polyline* pObj = new Polyline();
    clock_t start = clock();
    double result = pObj->length(a, b, x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    double expected = 7.810249675906654;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int a = 4;
    int b = 3;
    int x0 = 1;
    int y0 = 1;
    int x1 = 2;
    int y1 = 2;
    Polyline* pObj = new Polyline();
    clock_t start = clock();
    double result = pObj->length(a, b, x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    double expected = 8.602325267042627;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int a = 4;
    int b = 3;
    int x0 = 1;
    int y0 = 1;
    int x1 = 1;
    int y1 = 2;
    Polyline* pObj = new Polyline();
    clock_t start = clock();
    double result = pObj->length(a, b, x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    double expected = 9.433981132056603;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int a = 50;
    int b = 70;
    int x0 = 20;
    int y0 = 40;
    int x1 = 20;
    int y1 = 40;
    Polyline* pObj = new Polyline();
    clock_t start = clock();
    double result = pObj->length(a, b, x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    double expected = 172.04650534085255;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int a = 98;
    int b = 200;
    int x0 = 78;
    int y0 = 32;
    int x1 = 35;
    int y1 = 174;
    Polyline* pObj = new Polyline();
    clock_t start = clock();
    double result = pObj->length(a, b, x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    double expected = 299.9549966244937;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int a = 2;
    int b = 2;
    int x0 = 1;
    int y0 = 1;
    int x1 = 1;
    int y1 = 1;
    Polyline* pObj = new Polyline();
    clock_t start = clock();
    double result = pObj->length(a, b, x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    double expected = 5.656854249492381;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int a = 2;
    int b = 200;
    int x0 = 1;
    int y0 = 199;
    int x1 = 1;
    int y1 = 187;
    Polyline* pObj = new Polyline();
    clock_t start = clock();
    double result = pObj->length(a, b, x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    double expected = 388.0206180088888;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int a = 200;
    int b = 200;
    int x0 = 182;
    int y0 = 28;
    int x1 = 73;
    int y1 = 33;
    Polyline* pObj = new Polyline();
    clock_t start = clock();
    double result = pObj->length(a, b, x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    double expected = 490.6179776567508;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int a = 139;
    int b = 92;
    int x0 = 83;
    int y0 = 72;
    int x1 = 71;
    int y1 = 3;
    Polyline* pObj = new Polyline();
    clock_t start = clock();
    double result = pObj->length(a, b, x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    double expected = 289.79475495598604;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int a = 87;
    int b = 33;
    int x0 = 1;
    int y0 = 20;
    int x1 = 80;
    int y1 = 27;
    Polyline* pObj = new Polyline();
    clock_t start = clock();
    double result = pObj->length(a, b, x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    double expected = 111.83022847155415;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int a = 100;
    int b = 200;
    int x0 = 50;
    int y0 = 100;
    int x1 = 49;
    int y1 = 101;
    Polyline* pObj = new Polyline();
    clock_t start = clock();
    double result = pObj->length(a, b, x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    double expected = 445.8721789930383;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int a = 3;
    int b = 3;
    int x0 = 1;
    int y0 = 1;
    int x1 = 2;
    int y1 = 2;
    Polyline* pObj = new Polyline();
    clock_t start = clock();
    double result = pObj->length(a, b, x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0710678118654755;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int a = 129;
    int b = 129;
    int x0 = 23;
    int y0 = 24;
    int x1 = 87;
    int y1 = 66;
    Polyline* pObj = new Polyline();
    clock_t start = clock();
    double result = pObj->length(a, b, x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    double expected = 290.33084576048753;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int a = 14;
    int b = 3;
    int x0 = 13;
    int y0 = 1;
    int x1 = 11;
    int y1 = 2;
    Polyline* pObj = new Polyline();
    clock_t start = clock();
    double result = pObj->length(a, b, x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    double expected = 26.476404589747453;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int a = 99;
    int b = 9;
    int x0 = 88;
    int y0 = 8;
    int x1 = 17;
    int y1 = 2;
    Polyline* pObj = new Polyline();
    clock_t start = clock();
    double result = pObj->length(a, b, x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    double expected = 127.56566936288148;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int a = 200;
    int b = 2;
    int x0 = 198;
    int y0 = 1;
    int x1 = 12;
    int y1 = 1;
    Polyline* pObj = new Polyline();
    clock_t start = clock();
    double result = pObj->length(a, b, x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    double expected = 214.03737991294884;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int a = 3;
    int b = 133;
    int x0 = 2;
    int y0 = 20;
    int x1 = 1;
    int y1 = 19;
    Polyline* pObj = new Polyline();
    clock_t start = clock();
    double result = pObj->length(a, b, x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    double expected = 265.04716561397146;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int a = 34;
    int b = 170;
    int x0 = 21;
    int y0 = 18;
    int x1 = 30;
    int y1 = 63;
    Polyline* pObj = new Polyline();
    clock_t start = clock();
    double result = pObj->length(a, b, x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    double expected = 300.8421513019743;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int a = 83;
    int b = 171;
    int x0 = 11;
    int y0 = 129;
    int x1 = 25;
    int y1 = 38;
    Polyline* pObj = new Polyline();
    clock_t start = clock();
    double result = pObj->length(a, b, x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    double expected = 293.43653487594213;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int a = 10;
    int b = 10;
    int x0 = 1;
    int y0 = 4;
    int x1 = 9;
    int y1 = 3;
    Polyline* pObj = new Polyline();
    clock_t start = clock();
    double result = pObj->length(a, b, x0, y0, x1, y1);
    clock_t end = clock();
    delete pObj;
    double expected = 22.47220505424423;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8355516&rd=7219&pm=4509
********************************************************************************
// You will never see how this line looked after 4 challenges failed! 
#include <algorithm> 
#include <math.h> 
using namespace std; 
 
#line 3 "Polyline.cc" 
 
int abs(int x) {return x>0?x:-x;} 
int sqr(int x) {return x*x;} 
 
class Polyline { 
  public: 
  double length(int a, int b, int x0, int y0, int x1, int y1) { 
    // !FDI 
    int v = sqr(-abs(x1-x0)+a+a)+sqr(-abs(y1-y0)+b+b); 
//  printf("%d %d\n", abs(x1-x0)+a+a, abs(y1-y0)+b+b); 
    return sqrt(v); // sqrt(v); 
    } 
  }; 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/