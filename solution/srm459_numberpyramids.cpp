/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10683
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

class NumberPyramids {
public:
    int count(int baseLength, int top);
};

int NumberPyramids::count(int baseLength, int top) {
    int ret;
    return ret;
}


int test0() {
    int baseLength = 3;
    int top = 5;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
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
    int baseLength = 5;
    int top = 16;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
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
    int baseLength = 4;
    int top = 15;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int baseLength = 15;
    int top = 31556;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 74280915;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int baseLength = 150;
    int top = 500;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int baseLength = 2;
    int top = 1;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int baseLength = 2;
    int top = 2;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int baseLength = 2;
    int top = 31;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int baseLength = 2;
    int top = 99921;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 99920;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int baseLength = 2;
    int top = 1000000;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 999999;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int baseLength = 3;
    int top = 3;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
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
    int baseLength = 3;
    int top = 4;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int baseLength = 3;
    int top = 11;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int baseLength = 3;
    int top = 6114;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 9339136;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int baseLength = 4;
    int top = 1;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
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
    int baseLength = 4;
    int top = 6;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
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
    int baseLength = 4;
    int top = 8;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
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
    int baseLength = 4;
    int top = 600000;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 964500728;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int baseLength = 4;
    int top = 600001;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 964200549;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int baseLength = 4;
    int top = 878909;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 919;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int baseLength = 5;
    int top = 1;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int baseLength = 5;
    int top = 17;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int baseLength = 5;
    int top = 26;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int baseLength = 5;
    int top = 663;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 79881120;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int baseLength = 5;
    int top = 20912;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 201215843;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int baseLength = 5;
    int top = 230319;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 155695707;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int baseLength = 5;
    int top = 233336;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 28102304;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int baseLength = 5;
    int top = 892319;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 305826445;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int baseLength = 5;
    int top = 1000000;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 541033786;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int baseLength = 6;
    int top = 38;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int baseLength = 6;
    int top = 46990;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 1489;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int baseLength = 6;
    int top = 96177;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 999999968;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int baseLength = 7;
    int top = 221232;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 995;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int baseLength = 7;
    int top = 221233;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 63045094;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int baseLength = 7;
    int top = 221234;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 480190354;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int baseLength = 8;
    int top = 128;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int baseLength = 8;
    int top = 129;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int baseLength = 8;
    int top = 745;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 502606384;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int baseLength = 8;
    int top = 8456;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 588866907;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int baseLength = 8;
    int top = 909201;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 606368952;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int baseLength = 8;
    int top = 997231;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 518871768;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int baseLength = 8;
    int top = 1000000;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 957757377;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int baseLength = 9;
    int top = 261348;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 176;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int baseLength = 9;
    int top = 800455;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 46210630;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int baseLength = 9;
    int top = 821882;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 591474169;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int baseLength = 10;
    int top = 900;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 3065245;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int baseLength = 10;
    int top = 9000;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 237517869;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int baseLength = 10;
    int top = 900000;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 160724396;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int baseLength = 10;
    int top = 982217;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 54835737;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int baseLength = 10;
    int top = 1000000;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 249398805;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int baseLength = 11;
    int top = 2100;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 650490618;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int baseLength = 11;
    int top = 62149;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 112922875;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int baseLength = 12;
    int top = 234700;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 649632950;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int baseLength = 12;
    int top = 995458;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 215;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int baseLength = 13;
    int top = 7271;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 857222592;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int baseLength = 13;
    int top = 12859;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 995324611;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int baseLength = 13;
    int top = 99218;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 133737713;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int baseLength = 13;
    int top = 100000;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 102817532;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int baseLength = 13;
    int top = 881233;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 698094460;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int baseLength = 13;
    int top = 1000000;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 988435748;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int baseLength = 14;
    int top = 218;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
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
    int baseLength = 14;
    int top = 3157;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
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
    int baseLength = 14;
    int top = 777459;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 97961327;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int baseLength = 14;
    int top = 909909;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 12791298;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int baseLength = 14;
    int top = 999998;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 178936545;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int baseLength = 15;
    int top = 66218;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 729885187;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int baseLength = 15;
    int top = 126694;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 30567351;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int baseLength = 15;
    int top = 606216;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 561886284;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int baseLength = 16;
    int top = 49612;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 228423174;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int baseLength = 16;
    int top = 77777;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 712432757;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int baseLength = 16;
    int top = 612899;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 971102494;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int baseLength = 17;
    int top = 65534;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int baseLength = 17;
    int top = 65535;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int baseLength = 17;
    int top = 65536;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int baseLength = 17;
    int top = 666666;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 112553535;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int baseLength = 17;
    int top = 862196;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 583103723;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int baseLength = 17;
    int top = 1000000;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 676430199;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int baseLength = 18;
    int top = 90521;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
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
    int baseLength = 18;
    int top = 877049;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 999999843;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int baseLength = 18;
    int top = 956903;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 752034524;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int baseLength = 19;
    int top = 671238;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 258044316;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int baseLength = 19;
    int top = 739033;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 453899991;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int baseLength = 19;
    int top = 991000;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 90063078;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int baseLength = 19;
    int top = 1000000;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 497295279;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int baseLength = 20;
    int top = 3313;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int baseLength = 20;
    int top = 524287;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int baseLength = 20;
    int top = 524288;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
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
    int baseLength = 20;
    int top = 531000;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 606695;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int baseLength = 20;
    int top = 700000;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 20981017;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int baseLength = 20;
    int top = 832966;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 252176906;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int baseLength = 20;
    int top = 928156;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 133045640;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int baseLength = 20;
    int top = 959712;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 900986492;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int baseLength = 20;
    int top = 991727;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 817719810;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int baseLength = 20;
    int top = 999999;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 293463623;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int baseLength = 20;
    int top = 1000000;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 503596690;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int baseLength = 21;
    int top = 1000000;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int baseLength = 22;
    int top = 251;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
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
    int baseLength = 22;
    int top = 885655;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
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
    int baseLength = 23;
    int top = 251875;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
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
    int baseLength = 25;
    int top = 997592;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int baseLength = 26;
    int top = 1000000;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int baseLength = 27;
    int top = 1000000;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
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
    int baseLength = 28;
    int top = 905285;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
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
    int baseLength = 28;
    int top = 1000000;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
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
    int baseLength = 29;
    int top = 1000000;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int baseLength = 30;
    int top = 882568;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int baseLength = 30;
    int top = 1000000;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
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
    int baseLength = 31;
    int top = 1000000;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int baseLength = 32;
    int top = 1000000;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
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
    int baseLength = 33;
    int top = 1000000;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
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
    int baseLength = 71;
    int top = 1;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int baseLength = 89;
    int top = 7;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int baseLength = 217;
    int top = 61;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int baseLength = 217;
    int top = 969257;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
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
    int baseLength = 1002;
    int top = 92925;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int baseLength = 15852;
    int top = 1000000;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
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
    int baseLength = 34744;
    int top = 963081;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int baseLength = 70066;
    int top = 618081;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int baseLength = 418145;
    int top = 598281;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
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
    int baseLength = 572551;
    int top = 946971;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int baseLength = 597232;
    int top = 662821;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
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
    int baseLength = 645043;
    int top = 380891;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int baseLength = 696406;
    int top = 864131;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int baseLength = 717129;
    int top = 618561;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int baseLength = 999999;
    int top = 15215;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
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
    int baseLength = 1000000;
    int top = 768276;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int baseLength = 1000000;
    int top = 1000000;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
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
    int baseLength = 3;
    int top = 1000000;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 998997760;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int baseLength = 4;
    int top = 1000000;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 130353854;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int baseLength = 6;
    int top = 1000000;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 866729335;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int baseLength = 7;
    int top = 1000000;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 943949925;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int baseLength = 9;
    int top = 1000000;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 267893633;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int baseLength = 11;
    int top = 1000000;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 608237055;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int baseLength = 12;
    int top = 1000000;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 989024786;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int baseLength = 14;
    int top = 1000000;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 661570834;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int baseLength = 15;
    int top = 1000000;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 388830591;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int baseLength = 16;
    int top = 1000000;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 926227824;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int baseLength = 18;
    int top = 1000000;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 378681417;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int baseLength = 20;
    int top = 924288;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 453121764;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int baseLength = 19;
    int top = 524288;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 922026758;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int baseLength = 19;
    int top = 999999;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 781161529;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int baseLength = 1000000;
    int top = 15;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
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
    int baseLength = 999900;
    int top = 999941;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int baseLength = 17;
    int top = 100000;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 502869195;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int baseLength = 20;
    int top = 999997;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 873197498;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int baseLength = 22;
    int top = 999999;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int baseLength = 33;
    int top = 59279;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
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
    int baseLength = 9;
    int top = 999998;
    NumberPyramids* pObj = new NumberPyramids();
    clock_t start = clock();
    int result = pObj->count(baseLength, top);
    clock_t end = clock();
    delete pObj;
    int expected = 674956729;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22263204&rd=14145&pm=10683
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
 
class NumberPyramids {
public:
  int count(int, int);
};
 
const int md = 1000000009;
 
int f[1111111];
 
int NumberPyramids::count(int b, int top) {
  if (b > 20) return 0;
  if ((1 << (b-1)) > top) return 0;
  int i, j, c[30][30];
  memset(c,0,sizeof(c));
  for (i=0;i<=b;i++) c[i][0] = 1;
  for (i=1;i<=b;i++)
    for (j=1;j<=i;j++) c[i][j] = c[i-1][j-1]+c[i-1][j];
  memset(f,0,sizeof(f));
  f[0] = 1;
  for (i=0;i<b;i++) {
    int x = c[b-1][i];
    for (j=top;j>=0;j--)
      if (j >= x) f[j] = f[j-x];
      else f[j] = 0;
    for (j=0;j<=top-x;j++) {
      f[j+x] += f[j];
      if (f[j+x] >= md) f[j+x] -= md;
    }
  }
  return f[top];
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/