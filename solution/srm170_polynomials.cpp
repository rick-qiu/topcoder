/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1852
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

class Polynomials {
public:
    long integralPoints(int ymax, int xmax, string equation);
};

long Polynomials::integralPoints(int ymax, int xmax, string equation) {
    long ret;
    return ret;
}


int test0() {
    int ymax = 5;
    int xmax = 5;
    string equation = "1y^1=1x^1";
    Polynomials* pObj = new Polynomials();
    clock_t start = clock();
    long result = pObj->integralPoints(ymax, xmax, equation);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int ymax = 65;
    int xmax = 34;
    string equation = "1y^2=1x^3";
    Polynomials* pObj = new Polynomials();
    clock_t start = clock();
    long result = pObj->integralPoints(ymax, xmax, equation);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int ymax = 1000000;
    int xmax = 1000000;
    string equation = "1=1x^2";
    Polynomials* pObj = new Polynomials();
    clock_t start = clock();
    long result = pObj->integralPoints(ymax, xmax, equation);
    clock_t end = clock();
    delete pObj;
    long expected = 1000001;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int ymax = 1000000;
    int xmax = 1000000;
    string equation = "1=1";
    Polynomials* pObj = new Polynomials();
    clock_t start = clock();
    long result = pObj->integralPoints(ymax, xmax, equation);
    clock_t end = clock();
    delete pObj;
    long expected = 1000002000001;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int ymax = 15873;
    int xmax = 918882;
    string equation = "0=1";
    Polynomials* pObj = new Polynomials();
    clock_t start = clock();
    long result = pObj->integralPoints(ymax, xmax, equation);
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
    int ymax = 55000;
    int xmax = 15982;
    string equation = "1y^4+1y^2=5+9+6";
    Polynomials* pObj = new Polynomials();
    clock_t start = clock();
    long result = pObj->integralPoints(ymax, xmax, equation);
    clock_t end = clock();
    delete pObj;
    long expected = 15983;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int ymax = 1000000;
    int xmax = 1000000;
    string equation = "1y^2=1";
    Polynomials* pObj = new Polynomials();
    clock_t start = clock();
    long result = pObj->integralPoints(ymax, xmax, equation);
    clock_t end = clock();
    delete pObj;
    long expected = 1000001;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int ymax = 127;
    int xmax = 180;
    string equation = "1y^9+1y^8+1y^7+1y^6=1x^5+1x^4+1x^3+1x^2";
    Polynomials* pObj = new Polynomials();
    clock_t start = clock();
    long result = pObj->integralPoints(ymax, xmax, equation);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int ymax = 1000000;
    int xmax = 1000000;
    string equation = "1y^1=1x^2";
    Polynomials* pObj = new Polynomials();
    clock_t start = clock();
    long result = pObj->integralPoints(ymax, xmax, equation);
    clock_t end = clock();
    delete pObj;
    long expected = 1001;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int ymax = 999999;
    int xmax = 999999;
    string equation = "1y^3+2=2x^2+1";
    Polynomials* pObj = new Polynomials();
    clock_t start = clock();
    long result = pObj->integralPoints(ymax, xmax, equation);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int ymax = 1000000;
    int xmax = 1000000;
    string equation = "1y^3+1y^2+1y^1+8+4=1x^3+2x^2+1x^1+6+9+5";
    Polynomials* pObj = new Polynomials();
    clock_t start = clock();
    long result = pObj->integralPoints(ymax, xmax, equation);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int ymax = 1000000;
    int xmax = 1000000;
    string equation = "1y^2=1x^2";
    Polynomials* pObj = new Polynomials();
    clock_t start = clock();
    long result = pObj->integralPoints(ymax, xmax, equation);
    clock_t end = clock();
    delete pObj;
    long expected = 1000001;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int ymax = 1000000;
    int xmax = 1000000;
    string equation = "9y^2+4+9+9+9+9y^1+4y^3=9x^3+9x^2+9x^1+9";
    Polynomials* pObj = new Polynomials();
    clock_t start = clock();
    long result = pObj->integralPoints(ymax, xmax, equation);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int ymax = 38752;
    int xmax = 51085;
    string equation = "1+2+3+4+5+6+7+8+9+8+7+6+5+4+3+2+1=1x^4";
    Polynomials* pObj = new Polynomials();
    clock_t start = clock();
    long result = pObj->integralPoints(ymax, xmax, equation);
    clock_t end = clock();
    delete pObj;
    long expected = 38753;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int ymax = 19577;
    int xmax = 29754;
    string equation = "3y^4=2x^2+3";
    Polynomials* pObj = new Polynomials();
    clock_t start = clock();
    long result = pObj->integralPoints(ymax, xmax, equation);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int ymax = 737819;
    int xmax = 579787;
    string equation = "8y^3=1x^3+6x^3+0+0x^1";
    Polynomials* pObj = new Polynomials();
    clock_t start = clock();
    long result = pObj->integralPoints(ymax, xmax, equation);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int ymax = 1074;
    int xmax = 127;
    string equation = "4y^1+0y^7+6y^6=1x^9+4x^2+9x^3";
    Polynomials* pObj = new Polynomials();
    clock_t start = clock();
    long result = pObj->integralPoints(ymax, xmax, equation);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int ymax = 396;
    int xmax = 4000;
    string equation = "6y^7=0x^7+9x^5";
    Polynomials* pObj = new Polynomials();
    clock_t start = clock();
    long result = pObj->integralPoints(ymax, xmax, equation);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int ymax = 768130;
    int xmax = 730570;
    string equation = "3y^3+6=7x^3+0+2x^1+4x^2+1x^1+6+5x^1+9x^2+4x^2";
    Polynomials* pObj = new Polynomials();
    clock_t start = clock();
    long result = pObj->integralPoints(ymax, xmax, equation);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int ymax = 601298;
    int xmax = 393054;
    string equation = "9y^1+4+6=8x^3+6+3x^1+5x^1+8+4x^1+4x^3";
    Polynomials* pObj = new Polynomials();
    clock_t start = clock();
    long result = pObj->integralPoints(ymax, xmax, equation);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int ymax = 41272;
    int xmax = 313026;
    string equation = "6=1x^2+0x^1+7x^1";
    Polynomials* pObj = new Polynomials();
    clock_t start = clock();
    long result = pObj->integralPoints(ymax, xmax, equation);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int ymax = 459028;
    int xmax = 179844;
    string equation = "8y^3+2+7y^3+1=6x^1+9x^1+7x^3+3x^1";
    Polynomials* pObj = new Polynomials();
    clock_t start = clock();
    long result = pObj->integralPoints(ymax, xmax, equation);
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
    int ymax = 193321;
    int xmax = 298119;
    string equation = "2y^2+6+9y^3+9+4+4y^2=0x^3+7x^2+2";
    Polynomials* pObj = new Polynomials();
    clock_t start = clock();
    long result = pObj->integralPoints(ymax, xmax, equation);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int ymax = 844769;
    int xmax = 630308;
    string equation = "4y^1=2x^3+6+1x^3+5x^1+9+9x^2+0+4";
    Polynomials* pObj = new Polynomials();
    clock_t start = clock();
    long result = pObj->integralPoints(ymax, xmax, equation);
    clock_t end = clock();
    delete pObj;
    long expected = 52;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int ymax = 913968;
    int xmax = 79854;
    string equation = "4+9+9y^3=9x^2+2x^3+9x^3+7x^1+9x^3+4x^2+8x^1+6x^1";
    Polynomials* pObj = new Polynomials();
    clock_t start = clock();
    long result = pObj->integralPoints(ymax, xmax, equation);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int ymax = 195594;
    int xmax = 720962;
    string equation = "0y^3+0+5y^2=8x^2+9x^2+9x^1+6+9x^3+4x^2+4x^3+5x^3";
    Polynomials* pObj = new Polynomials();
    clock_t start = clock();
    long result = pObj->integralPoints(ymax, xmax, equation);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int ymax = 838804;
    int xmax = 553012;
    string equation = "1y^2=6x^3+0+7x^2+6";
    Polynomials* pObj = new Polynomials();
    clock_t start = clock();
    long result = pObj->integralPoints(ymax, xmax, equation);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int ymax = 208291;
    int xmax = 751108;
    string equation = "8y^1=5x^2";
    Polynomials* pObj = new Polynomials();
    clock_t start = clock();
    long result = pObj->integralPoints(ymax, xmax, equation);
    clock_t end = clock();
    delete pObj;
    long expected = 145;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int ymax = 133939;
    int xmax = 993645;
    string equation = "8y^1+3y^2=8x^3+5x^1+6x^1+0x^2";
    Polynomials* pObj = new Polynomials();
    clock_t start = clock();
    long result = pObj->integralPoints(ymax, xmax, equation);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int ymax = 627417;
    int xmax = 759268;
    string equation = "7y^2+5y^1+0y^3+5+5y^3+4y^3+4y^2=8x^1";
    Polynomials* pObj = new Polynomials();
    clock_t start = clock();
    long result = pObj->integralPoints(ymax, xmax, equation);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int ymax = 294538;
    int xmax = 499256;
    string equation = "7y^2+2y^3+8y^2=5x^1+5x^2+6x^2+4";
    Polynomials* pObj = new Polynomials();
    clock_t start = clock();
    long result = pObj->integralPoints(ymax, xmax, equation);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int ymax = 138729;
    int xmax = 873811;
    string equation = "1y^3+2+1y^3+6y^3+3y^3+5+1+1y^1=0x^2+4+3x^1+7x^3";
    Polynomials* pObj = new Polynomials();
    clock_t start = clock();
    long result = pObj->integralPoints(ymax, xmax, equation);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int ymax = 507354;
    int xmax = 617359;
    string equation = "7+6y^1+2y^1=0x^2+1x^2+1+0x^1+5+2x^2+8x^2";
    Polynomials* pObj = new Polynomials();
    clock_t start = clock();
    long result = pObj->integralPoints(ymax, xmax, equation);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int ymax = 676517;
    int xmax = 838116;
    string equation = "5y^2+6y^2+4y^1+4y^2+0y^2+4+7y^1+3y^3=5x^2";
    Polynomials* pObj = new Polynomials();
    clock_t start = clock();
    long result = pObj->integralPoints(ymax, xmax, equation);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int ymax = 344471;
    int xmax = 705234;
    string equation = "9y^2+2+1y^3=0x^3";
    Polynomials* pObj = new Polynomials();
    clock_t start = clock();
    long result = pObj->integralPoints(ymax, xmax, equation);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int ymax = 773891;
    int xmax = 891898;
    string equation = "3y^2+2+3y^1=0x^2+9x^3+4x^3";
    Polynomials* pObj = new Polynomials();
    clock_t start = clock();
    long result = pObj->integralPoints(ymax, xmax, equation);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int ymax = 697433;
    int xmax = 579886;
    string equation = "3y^3+8y^2=1x^2+7+3x^3+2x^3+6x^3";
    Polynomials* pObj = new Polynomials();
    clock_t start = clock();
    long result = pObj->integralPoints(ymax, xmax, equation);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int ymax = 843297;
    int xmax = 86446;
    string equation = "8y^2+8y^3+4+3y^1=2x^3+9x^1+1x^1+9x^2";
    Polynomials* pObj = new Polynomials();
    clock_t start = clock();
    long result = pObj->integralPoints(ymax, xmax, equation);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int ymax = 1000000;
    int xmax = 1000000;
    string equation = "1=1";
    Polynomials* pObj = new Polynomials();
    clock_t start = clock();
    long result = pObj->integralPoints(ymax, xmax, equation);
    clock_t end = clock();
    delete pObj;
    long expected = 1000002000001;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int ymax = 1000000;
    int xmax = 1000000;
    string equation = "1+1=2";
    Polynomials* pObj = new Polynomials();
    clock_t start = clock();
    long result = pObj->integralPoints(ymax, xmax, equation);
    clock_t end = clock();
    delete pObj;
    long expected = 1000002000001;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int ymax = 1000000;
    int xmax = 1000000;
    string equation = "2+2=4";
    Polynomials* pObj = new Polynomials();
    clock_t start = clock();
    long result = pObj->integralPoints(ymax, xmax, equation);
    clock_t end = clock();
    delete pObj;
    long expected = 1000002000001;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int ymax = 1000000;
    int xmax = 1000000;
    string equation = "0y^3=0x^1";
    Polynomials* pObj = new Polynomials();
    clock_t start = clock();
    long result = pObj->integralPoints(ymax, xmax, equation);
    clock_t end = clock();
    delete pObj;
    long expected = 1000002000001;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int ymax = 1000000;
    int xmax = 1000000;
    string equation = "2y^1=1x^1";
    Polynomials* pObj = new Polynomials();
    clock_t start = clock();
    long result = pObj->integralPoints(ymax, xmax, equation);
    clock_t end = clock();
    delete pObj;
    long expected = 500001;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int ymax = 1000000;
    int xmax = 1000000;
    string equation = "1y^1=2x^1";
    Polynomials* pObj = new Polynomials();
    clock_t start = clock();
    long result = pObj->integralPoints(ymax, xmax, equation);
    clock_t end = clock();
    delete pObj;
    long expected = 500001;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=144400&rd=4655&pm=1852
********************************************************************************
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
 
#define REP(i,n) for(int i=0;i<(n);++i)
#define FOR(i,a,b) for(int i=(a);i<=(b);++i)
#define FORD(i,a,b) for(int i=(a);i>=(b);--i)
#define FOREACH(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();++i)
typedef long long LL;
const int INF = 1000000000;
typedef vector<int> VI;
template<class T> inline int size(const T&c) { return c.size(); }
 
char buf1[1000];
 
string i2s(int x) {
  sprintf(buf1,"%d",x);
  return buf1;
}
 
int poz;
string equation;
LL xmax, ymax;
 
LL a[10],b[10];
LL *c;
int stx, sty;
 
void parse() {
  for(;;) {
    int x = equation[poz++]-'0';
    int p=0;
    if(equation[poz]=='x' || equation[poz]=='y') {
      ++poz; ++poz;
      p = equation[poz++]-'0';
    }
    c[p]+=x;
    if(equation[poz]!='+') break;
    ++poz;
  }
}
 
LL calc(LL *aa, LL x,int st) {
  LL r=0,xx=1;
  FOR(i,0,st) {
    r+=aa[i]*xx;
    xx*=x;
  }
  return r;
}
 
struct Polynomials {
  // MAIN
  long long integralPoints(int ym, int xm, string eq) {
    xmax = xm; ymax = ym; equation = eq+'=';
    REP(i,10) a[i]=b[i]=0;
    poz = 0;
    c=b;
    parse(); ++ poz;
    c=a; parse();
    LL mult=1;
    stx = sty=0;
    REP(i,10) {
      if(a[i]!=0) stx=i;
      if(b[i]!=0) sty=i;
    }
    if(stx==0) { mult*=(xmax+1); xmax=0; }
    if(sty==0) { mult*=(ymax+1); ymax=0; }
    LL x=0,y=0;
    LL res=0;
    while(x<=xmax && y<=ymax) {
      LL xx = calc(a,x,stx);
      LL yy = calc(b,y,sty);
      if(xx==yy) { ++res; ++x; ++y; }
      else if(xx<yy) ++x;
      else ++y;
    }
    return res*mult;
  }
  
 
 
};
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/