/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6067
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

class LastMarble {
public:
    double winningChance(int red, int blue, int removed);
};

double LastMarble::winningChance(int red, int blue, int removed) {
    double ret;
    return ret;
}


int test0() {
    int red = 1;
    int blue = 1;
    int removed = 0;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int red = 1;
    int blue = 2;
    int removed = 0;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int red = 2;
    int blue = 1;
    int removed = 0;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6666666666666666;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int red = 2;
    int blue = 2;
    int removed = 1;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int red = 2;
    int blue = 2;
    int removed = 0;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int red = 2;
    int blue = 3;
    int removed = 1;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int red = 100;
    int blue = 80;
    int removed = 43;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4216037078891402;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int red = 62;
    int blue = 100;
    int removed = 61;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4994504504862716;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int red = 13;
    int blue = 54;
    int removed = 12;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5000024219602255;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int red = 82;
    int blue = 11;
    int removed = 8;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.11817521401399665;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int red = 9;
    int blue = 88;
    int removed = 7;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5000002259107094;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int red = 13;
    int blue = 13;
    int removed = 10;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5386014268407592;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int red = 85;
    int blue = 81;
    int removed = 4;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5764413967652542;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int red = 64;
    int blue = 22;
    int removed = 7;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7472351111929894;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int red = 65;
    int blue = 83;
    int removed = 20;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5185751124455752;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int red = 96;
    int blue = 12;
    int removed = 10;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8889741569425456;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int red = 86;
    int blue = 31;
    int removed = 3;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7421302778328819;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int red = 24;
    int blue = 57;
    int removed = 23;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5000522970849155;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int red = 97;
    int blue = 75;
    int removed = 73;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5845540351942131;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int red = 51;
    int blue = 9;
    int removed = 0;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8524317274632858;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int red = 86;
    int blue = 59;
    int removed = 55;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6091897261664498;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int red = 80;
    int blue = 100;
    int removed = 46;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5121978695297171;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int red = 78;
    int blue = 44;
    int removed = 31;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6497194757614986;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int red = 41;
    int blue = 11;
    int removed = 5;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7896418621330925;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int red = 40;
    int blue = 29;
    int removed = 9;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6036529019611552;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int red = 16;
    int blue = 56;
    int removed = 2;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5061612336024184;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int red = 83;
    int blue = 91;
    int removed = 66;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5218310463315513;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int red = 20;
    int blue = 20;
    int removed = 7;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.44732431189847655;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int red = 95;
    int blue = 5;
    int removed = 50;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9500012618293173;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int red = 57;
    int blue = 43;
    int removed = 32;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5897527114919747;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int red = 98;
    int blue = 99;
    int removed = 9;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5549408716962372;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int red = 100;
    int blue = 99;
    int removed = 55;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.538811607390127;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int red = 11;
    int blue = 6;
    int removed = 3;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6585326438267612;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int red = 100;
    int blue = 99;
    int removed = 50;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.46051427662540095;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int red = 100;
    int blue = 100;
    int removed = 1;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5991135714248399;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int red = 100;
    int blue = 91;
    int removed = 47;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5538946523677721;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int red = 99;
    int blue = 99;
    int removed = 67;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5358956739211858;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int red = 97;
    int blue = 99;
    int removed = 31;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.46114625866018377;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int red = 92;
    int blue = 47;
    int removed = 32;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6701217445821144;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int red = 64;
    int blue = 72;
    int removed = 19;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.46922254012169823;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int red = 99;
    int blue = 97;
    int removed = 45;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5417278743133329;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int red = 2;
    int blue = 1;
    int removed = 1;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6666666666666666;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int red = 100;
    int blue = 90;
    int removed = 50;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5556434375451796;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int red = 89;
    int blue = 97;
    int removed = 7;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5490389082233603;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int red = 97;
    int blue = 45;
    int removed = 90;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6895963308978859;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int red = 99;
    int blue = 99;
    int removed = 55;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5371934243880638;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int red = 83;
    int blue = 65;
    int removed = 70;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5818289225880415;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int red = 80;
    int blue = 90;
    int removed = 30;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5265547855427535;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int red = 34;
    int blue = 24;
    int removed = 4;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6185907036904856;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int red = 100;
    int blue = 95;
    int removed = 99;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.543295133829118;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int red = 100;
    int blue = 99;
    int removed = 23;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5458414709117274;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int red = 89;
    int blue = 45;
    int removed = 67;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6721964691215772;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int red = 43;
    int blue = 23;
    int removed = 12;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6606590541851276;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int red = 100;
    int blue = 100;
    int removed = 99;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.46611076490934306;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int red = 98;
    int blue = 99;
    int removed = 97;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.532127978872529;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int red = 100;
    int blue = 97;
    int removed = 53;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5423598480282926;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int red = 100;
    int blue = 100;
    int removed = 67;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.46407275859308333;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int red = 100;
    int blue = 85;
    int removed = 95;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5652234349709567;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int red = 98;
    int blue = 95;
    int removed = 47;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5431138786479115;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int red = 100;
    int blue = 97;
    int removed = 41;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.544132855739659;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int red = 99;
    int blue = 100;
    int removed = 93;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5323520244419836;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int red = 100;
    int blue = 100;
    int removed = 20;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5461277302537406;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int red = 100;
    int blue = 95;
    int removed = 90;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4564560792013996;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int red = 100;
    int blue = 80;
    int removed = 35;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4208854408462597;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int red = 10;
    int blue = 15;
    int removed = 4;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.47801674029295527;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int red = 100;
    int blue = 100;
    int removed = 50;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5379240275007613;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int red = 95;
    int blue = 92;
    int removed = 76;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5405565613774832;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int red = 25;
    int blue = 5;
    int removed = 9;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16649123545675287;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int red = 100;
    int blue = 17;
    int removed = 96;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.14501501783998333;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int red = 89;
    int blue = 79;
    int removed = 53;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5576735547339124;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int red = 100;
    int blue = 1;
    int removed = 99;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9900990099009901;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int red = 32;
    int blue = 25;
    int removed = 9;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5895628928952114;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int red = 100;
    int blue = 99;
    int removed = 30;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.45633154203507437;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int red = 100;
    int blue = 99;
    int removed = 15;
    LastMarble* pObj = new LastMarble();
    clock_t start = clock();
    double result = pObj->winningChance(red, blue, removed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5506563357381343;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=144400&rd=10673&pm=6067
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
#define REP(i,n) for(int _n=n, i=0;i<_n;++i)
 
int removed;
double cache[128][128][2];
 
double calc(int red, int blue, int lr) { // lr=1=me
  double &res = cache[red][blue][lr];
  if(res > -0.5) return res;
  if(red+blue==removed) { res= lr ? 0 : 1; return res; }
  res = 0;
  {
    double p = double(red) / (red+blue);
    double v = 0;
    if(blue>0) v += (1-p) * (1-calc(red,blue-1,!lr));
    if(red>0) v += p * (1-calc(red-1,blue,0));
    res = max(res,v);
  }
  if(red+blue>=removed+2) {
    double p0 = double(blue)*(blue-1) / (red+blue) / (red+blue-1);
    double p1 = double(blue)*(2*red) / (red+blue) / (red+blue-1);
    double p2 = double(red)*(red-1) / (red+blue) / (red+blue-1);
    double v=0;
    if(p0>0) v += p0*(1-calc(red,blue-2,!lr));
    if(p1>0) v += p1*(1-calc(red-1,blue-1,0));
    if(p2>0) v += p2*(1-calc(red-2,blue,0));
    res = max(res,v);
  }
  if(red+blue>=removed+3) {
    double denom = double(red+blue) * (red+blue-1) * (red+blue-2);
    double p0 = double(blue)*(blue-1)*(blue-2) / denom;
    double p1 = double(blue)*(blue-1)*(3*red) / denom;
    double p2 = double(red)*(red-1)*(3*blue) / denom;
    double p3 = double(red)*(red-1)*(red-2) / denom;
    double v=0;
    if(p0>0) v += p0*(1-calc(red,blue-3,!lr));
    if(p1>0) v += p1*(1-calc(red-1,blue-2,0));
    if(p2>0) v += p2*(1-calc(red-2,blue-1,0));
    if(p3>0) v += p3*(1-calc(red-3,blue,0));
    res = max(res,v);
  }
  return res;
}
 
struct LastMarble {
double winningChance(int red, int blue, int removed1) {
  removed = removed1;
  REP(i,128) REP(j,128) REP(k,2) cache[i][j][k]=-1;
  return calc(red,blue,0);
}
 
};
 
// Powered by FileEdit
 
// Powered by TomekAI
// Powered by TZTester 1.01 [25-Feb-2003]
 
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/