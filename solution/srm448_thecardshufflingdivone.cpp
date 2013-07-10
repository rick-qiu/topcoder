/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10617
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

class TheCardShufflingDivOne {
public:
    int shuffle(int n, int left, int right);
};

int TheCardShufflingDivOne::shuffle(int n, int left, int right) {
    int ret;
    return ret;
}


int test0() {
    int n = 3;
    int left = 0;
    int right = 0;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
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
    int n = 3;
    int left = 1;
    int right = 1;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 5;
    int left = 0;
    int right = 0;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
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
    int n = 17;
    int left = 12;
    int right = 21;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 5;
    int left = 6;
    int right = 0;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
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
    int n = 3;
    int left = 8;
    int right = 8;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
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
    int n = 4;
    int left = 0;
    int right = 3;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
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
    int n = 48;
    int left = 9;
    int right = 66;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 25;
    int left = 92;
    int right = 51;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 88;
    int left = 27;
    int right = 69;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 66;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 73;
    int left = 18;
    int right = 96;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 45;
    int left = 4;
    int right = 55;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 23;
    int left = 95;
    int right = 58;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 34;
    int left = 35;
    int right = 30;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 27;
    int left = 65;
    int right = 89;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 5;
    int left = 79;
    int right = 75;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 84;
    int left = 49;
    int right = 7;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 61;
    int left = 88;
    int right = 82;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 81;
    int left = 59;
    int right = 99;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 11;
    int left = 43;
    int right = 99;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
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
    int n = 148;
    int left = 317;
    int right = 244;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 113;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 125;
    int left = 429;
    int right = 819;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 388;
    int left = 966;
    int right = 560;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 573;
    int left = 599;
    int right = 410;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 217;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 545;
    int left = 711;
    int right = 713;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 318;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 523;
    int left = 541;
    int right = 350;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 440;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 434;
    int left = 915;
    int right = 369;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 76;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 227;
    int left = 528;
    int right = 616;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 178;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 605;
    int left = 753;
    int right = 294;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 564;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 784;
    int left = 858;
    int right = 166;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 590;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 757148;
    int left = 850833;
    int right = 413055;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 200126;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 971125;
    int left = 597709;
    int right = 567065;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 319142;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 749388;
    int left = 890847;
    int right = 766255;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 512006;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 239573;
    int left = 37691;
    int right = 597006;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 229403;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 615545;
    int left = 51110;
    int right = 289218;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 573794;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 341523;
    int left = 427628;
    int right = 215491;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 253050;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 16434;
    int left = 544122;
    int right = 446450;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 15465;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 90227;
    int left = 426790;
    int right = 752135;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 45406;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 41605;
    int left = 220562;
    int right = 908065;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 32411;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 655784;
    int left = 970659;
    int right = 417541;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 6039;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 1000000;
    int left = 949322;
    int right = 910342;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 257220;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 1000000;
    int left = 991773;
    int right = 965620;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 33667;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 1000000;
    int left = 990803;
    int right = 965933;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 641167;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 999999;
    int left = 951001;
    int right = 913357;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 47064;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 999999;
    int left = 998369;
    int right = 967226;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 791604;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 999999;
    int left = 990852;
    int right = 966291;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 17052;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 1000000;
    int left = 1000000;
    int right = 1000000;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 368436;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 345;
    int left = 6;
    int right = 54;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 999999;
    int left = 287;
    int right = 2987;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 939833;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 999100;
    int left = 0;
    int right = 517222;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 263033;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 1000000;
    int left = 4367;
    int right = 544768;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 66015;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 100000;
    int left = 0;
    int right = 100000;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 9066;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 1000000;
    int left = 21;
    int right = 32;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 666038;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 1000000;
    int left = 1001;
    int right = 9999;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 637626;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 999771;
    int left = 123457;
    int right = 75431;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 594309;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 959564;
    int left = 956314;
    int right = 955622;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 118319;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 1000000;
    int left = 0;
    int right = 0;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 9026;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 2;
    int left = 0;
    int right = 0;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 100;
    int left = 12;
    int right = 23;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 1000000;
    int left = 77777;
    int right = 97896;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 361394;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 1000000;
    int left = 999998;
    int right = 999991;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 341388;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 1000000;
    int left = 2;
    int right = 3;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 447596;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 989992;
    int left = 9881;
    int right = 984082;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 311065;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 3;
    int left = 197;
    int right = 956;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 4;
    int left = 0;
    int right = 0;
    TheCardShufflingDivOne* pObj = new TheCardShufflingDivOne();
    clock_t start = clock();
    int result = pObj->shuffle(n, left, right);
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=14768757&rd=13902&pm=10617
********************************************************************************
#line 74 "TheCardShufflingDivOne.cpp"
#include <vector>                                                
#include <map>                                                   
#include <set>
#include <algorithm>
#include <sstream>
#include <iostream>
#include <cmath>
#include <string>
#include <complex>
using namespace std;
class TheCardShufflingDivOne {
   public:
      int ans[1000005];
      int get(int tot, int num, int left, int right) {
   int rnum = tot / 2, lnum;
   lnum = tot - rnum;
   if (num < rnum - 1) {
      num -= right;
      num %= rnum;
      num += rnum;
      num %= rnum;
      return num * 2 + 1;
   }
   num -= rnum - 1;
   num -= left;
   num %= lnum;
   num += lnum;
   num %= lnum;
   return num * 2;
      }
      int shuffle(int n, int left, int right) {
         int i;
   ans[1] = 0;
   ans[2] = 1;
   for (i = 3; i <= n; i ++)
      ans[i] = get(i, ans[i - 2], left, right);
   return ans[n] + 1;
      }
};
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/