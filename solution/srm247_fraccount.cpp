/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4522
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

class FracCount {
public:
    int position(int numerator, int denominator);
};

int FracCount::position(int numerator, int denominator) {
    int ret;
    return ret;
}


int test0() {
    int numerator = 1;
    int denominator = 2;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int numerator = 5;
    int denominator = 6;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int numerator = 999;
    int denominator = 1000;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 304191;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int numerator = 777;
    int denominator = 778;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 184139;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int numerator = 12;
    int denominator = 625;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 118493;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int numerator = 1;
    int denominator = 111;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 3716;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int numerator = 1;
    int denominator = 512;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 79596;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int numerator = 2;
    int denominator = 889;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 239959;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int numerator = 2;
    int denominator = 3;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
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
    int numerator = 2;
    int denominator = 5;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int numerator = 37;
    int denominator = 75;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 1715;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int numerator = 65;
    int denominator = 72;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 1585;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int numerator = 13;
    int denominator = 15;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int numerator = 81;
    int denominator = 1000;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 303824;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int numerator = 16;
    int denominator = 19;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 117;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int numerator = 1;
    int denominator = 1000;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 303792;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int numerator = 805;
    int denominator = 816;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 202456;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int numerator = 162;
    int denominator = 421;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 53817;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int numerator = 501;
    int denominator = 670;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 136459;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int numerator = 91;
    int denominator = 116;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 4115;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int numerator = 174;
    int denominator = 341;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 35339;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int numerator = 407;
    int denominator = 504;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 77316;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int numerator = 599;
    int denominator = 790;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 189766;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int numerator = 89;
    int denominator = 915;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 254296;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int numerator = 113;
    int denominator = 275;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 22964;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int numerator = 606;
    int denominator = 947;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 272697;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int numerator = 100;
    int denominator = 281;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 23959;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int numerator = 53;
    int denominator = 445;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 60046;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int numerator = 386;
    int denominator = 493;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 74040;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int numerator = 443;
    int denominator = 511;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 79537;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int numerator = 221;
    int denominator = 499;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 75638;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int numerator = 177;
    int denominator = 466;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 65958;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int numerator = 159;
    int denominator = 299;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 27194;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int numerator = 479;
    int denominator = 806;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 197404;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int numerator = 136;
    int denominator = 211;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 13549;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int numerator = 305;
    int denominator = 313;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 29940;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int numerator = 20;
    int denominator = 441;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 58985;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int numerator = 109;
    int denominator = 452;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 62088;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int numerator = 25;
    int denominator = 67;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 1352;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int numerator = 781;
    int denominator = 801;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 195264;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int numerator = 77;
    int denominator = 393;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 46871;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int numerator = 694;
    int denominator = 921;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 257984;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int numerator = 37;
    int denominator = 54;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 894;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int numerator = 104;
    int denominator = 321;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 31301;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int numerator = 2;
    int denominator = 5;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int numerator = 76;
    int denominator = 837;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 212648;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int numerator = 227;
    int denominator = 513;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 79995;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int numerator = 301;
    int denominator = 349;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 37162;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int numerator = 23;
    int denominator = 401;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 48700;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int numerator = 29;
    int denominator = 591;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 105969;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int numerator = 330;
    int denominator = 893;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 242355;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int numerator = 21;
    int denominator = 68;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 1403;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int numerator = 7;
    int denominator = 20;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 122;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int numerator = 79;
    int denominator = 206;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 12895;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int numerator = 516;
    int denominator = 583;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 103496;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int numerator = 209;
    int denominator = 419;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 53350;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int numerator = 172;
    int denominator = 855;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 222030;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int numerator = 183;
    int denominator = 634;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 122141;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int numerator = 79;
    int denominator = 251;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 19102;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int numerator = 233;
    int denominator = 927;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 261011;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int numerator = 227;
    int denominator = 642;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 125252;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int numerator = 467;
    int denominator = 755;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 173342;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int numerator = 5;
    int denominator = 16;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 74;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int numerator = 262;
    int denominator = 945;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 271359;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int numerator = 283;
    int denominator = 726;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 160133;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int numerator = 11;
    int denominator = 14;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int numerator = 999;
    int denominator = 1000;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 304191;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int numerator = 998;
    int denominator = 999;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 303791;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int numerator = 101;
    int denominator = 501;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 76183;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int numerator = 419;
    int denominator = 600;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 109451;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int numerator = 119;
    int denominator = 600;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 109371;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int numerator = 1;
    int denominator = 3;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int numerator = 2;
    int denominator = 13;
    FracCount* pObj = new FracCount();
    clock_t start = clock();
    int result = pObj->position(numerator, denominator);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=296232&rd=7222&pm=4522
********************************************************************************
#include <map>
#include <set>
#include <cmath>
#include <string>
#include <vector>
#include <cstdlib>
#include <sstream>
#include <numeric>
#include <iostream>
#include <algorithm>
 
using namespace std;
 
class FracCount {
  int gcd (int a, int b)
  {
    if (b == 0) return a;
    else return gcd (b, a % b);
  }
  
  public:
  int position(int num, int den) {
    int cnt = 0;
    for (int d = 2; d <= 1000; ++d)
    {
      for (int n = 1; n < d; ++n)
      {
        if (gcd (d, n) == 1) cnt++;
        if (d == den && n == num) return cnt;
      }
    }
    return -1;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/