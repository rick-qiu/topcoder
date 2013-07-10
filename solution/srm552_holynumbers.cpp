/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12145
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

class HolyNumbers {
public:
    long count(long upTo, int maximalPrime);
};

long HolyNumbers::count(long upTo, int maximalPrime) {
    long ret;
    return ret;
}


int test0() {
    long upTo = 10;
    int maximalPrime = 100;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    long upTo = 10;
    int maximalPrime = 3;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
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
    long upTo = 10000000000;
    int maximalPrime = 1000000;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 3336332555;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    long upTo = 1;
    int maximalPrime = 1;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    long upTo = 2;
    int maximalPrime = 2;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    long upTo = 123;
    int maximalPrime = 12;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 32;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    long upTo = 10000000000;
    int maximalPrime = 100;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 1746758;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    long upTo = 123;
    int maximalPrime = 456;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 88;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    long upTo = 123456789;
    int maximalPrime = 12345;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 25994500;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    long upTo = 10000000000;
    int maximalPrime = 1;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    long upTo = 1;
    int maximalPrime = 1000000;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    long upTo = 5241113320;
    int maximalPrime = 512431;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 1668827996;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    long upTo = 6746828174;
    int maximalPrime = 968291;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 2320613033;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    long upTo = 8399637274;
    int maximalPrime = 641448;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 2653336377;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    long upTo = 5221324628;
    int maximalPrime = 383675;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 1581239056;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    long upTo = 4864723792;
    int maximalPrime = 743649;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 1656019874;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    long upTo = 740878;
    int maximalPrime = 6077;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 279946;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    long upTo = 572774;
    int maximalPrime = 9198;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 242951;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    long upTo = 251889;
    int maximalPrime = 7160;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 113632;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    long upTo = 367905;
    int maximalPrime = 5948;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 152097;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    long upTo = 759462;
    int maximalPrime = 1352;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 184730;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    long upTo = 359790;
    int maximalPrime = 3787;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 135545;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    long upTo = 679180;
    int maximalPrime = 2392;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 205763;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    long upTo = 90807;
    int maximalPrime = 3981;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 42037;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    long upTo = 901147;
    int maximalPrime = 4135;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 303109;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    long upTo = 793177;
    int maximalPrime = 6954;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 305646;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    long upTo = 4063067882;
    int maximalPrime = 3632;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 229286987;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    long upTo = 146;
    int maximalPrime = 171;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 106;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    long upTo = 2;
    int maximalPrime = 52775;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    long upTo = 574415810;
    int maximalPrime = 11;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 1700;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    long upTo = 560011;
    int maximalPrime = 625552;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 394518;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    long upTo = 1799455;
    int maximalPrime = 9;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 315;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    long upTo = 14639;
    int maximalPrime = 577;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 5816;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    long upTo = 787;
    int maximalPrime = 3;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    long upTo = 5014;
    int maximalPrime = 11842;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 3540;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    long upTo = 50;
    int maximalPrime = 2557;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 36;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    long upTo = 24252681;
    int maximalPrime = 3279;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 4098988;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    long upTo = 4226;
    int maximalPrime = 3;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 22;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    long upTo = 149;
    int maximalPrime = 54228;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 107;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    long upTo = 2835404662;
    int maximalPrime = 133504;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 742041902;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    long upTo = 5836;
    int maximalPrime = 3;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 23;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    long upTo = 55675284;
    int maximalPrime = 151831;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 22686774;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    long upTo = 25465;
    int maximalPrime = 469;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 8541;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    long upTo = 1481959;
    int maximalPrime = 2611;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 401004;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    long upTo = 423246;
    int maximalPrime = 30471;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 224669;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    long upTo = 1307008;
    int maximalPrime = 3;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 49;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    long upTo = 2120876497;
    int maximalPrime = 11;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 2093;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    long upTo = 1531259442;
    int maximalPrime = 365;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 11331396;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    long upTo = 6477;
    int maximalPrime = 148;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 1857;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    long upTo = 974872;
    int maximalPrime = 6;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 131;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    long upTo = 1146835;
    int maximalPrime = 11;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 525;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    long upTo = 2524812301;
    int maximalPrime = 18;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 7631;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    long upTo = 7;
    int maximalPrime = 1398;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    long upTo = 17657696;
    int maximalPrime = 93;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 107200;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    long upTo = 2708044;
    int maximalPrime = 789;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 368224;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    long upTo = 979;
    int maximalPrime = 24183;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 691;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    long upTo = 464;
    int maximalPrime = 2;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    long upTo = 1169;
    int maximalPrime = 9;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 57;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    long upTo = 62020404;
    int maximalPrime = 411;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 1863966;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    long upTo = 34;
    int maximalPrime = 5272;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 26;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    long upTo = 100204676;
    int maximalPrime = 68;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 118104;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    long upTo = 78491;
    int maximalPrime = 626239;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 55305;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    long upTo = 7036;
    int maximalPrime = 3599;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 4556;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    long upTo = 10;
    int maximalPrime = 3885;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    long upTo = 216;
    int maximalPrime = 45;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 101;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    long upTo = 2275879360;
    int maximalPrime = 2239;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 104818111;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    long upTo = 478379;
    int maximalPrime = 172269;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 307353;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    long upTo = 3;
    int maximalPrime = 327;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    long upTo = 2427747145;
    int maximalPrime = 1137;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 61545737;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    long upTo = 147;
    int maximalPrime = 130230;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 106;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    long upTo = 1238;
    int maximalPrime = 35;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 256;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    long upTo = 57461072;
    int maximalPrime = 2;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 14;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    long upTo = 163;
    int maximalPrime = 36;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 74;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    long upTo = 15;
    int maximalPrime = 589;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    long upTo = 228673;
    int maximalPrime = 87384;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 146932;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    long upTo = 2611634;
    int maximalPrime = 28228;
    HolyNumbers* pObj = new HolyNumbers();
    clock_t start = clock();
    long result = pObj->count(upTo, maximalPrime);
    clock_t end = clock();
    delete pObj;
    long expected = 1125276;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22675302&rd=15174&pm=12145
********************************************************************************
#include<vector> 
#include<string> 
#include<algorithm> 
#include<cmath> 
#include<utility> 
#include<set> 
#include<queue> 
#include<map> 
#include<cstdlib> 
#include<cstdio> 
#include<cstring> 
#include<iostream> 
#include<sstream> 
#include<climits> 
#include<sys/time.h> 
using namespace std; 
 
#define REP(i,a,b) for(i=a;i<b;i++) 
#define rep(i,n) REP(i,0,n) 
 
#define ll long long 
 
int getPrime(int n,int p[]){int i,j,n2=n/2;rep(i,n2)p[i]=1;for(i=3;i*i<n;i+=2)if(p[i>>1])for(j=(i*i)>>1;j<n2;j+=i)p[j]=0;j=1;p[0]=2;REP(i,1,n2)if(p[i])p[j++]=i*2+1;return j;} 
int p[1100000], ps; ll p2[1100000], p3[1100000]; 
int bef[1100000]; 
 
ll res, n; 
 
void solve(int depth, ll now){ 
  ll k; 
 
/*  printf("%d (%d) %lld\n",depth,p[depth],now);*/ 
 
  if(depth == ps){ /*puts("PLUS");*/ res++; return; } 
 
  if(now * p2[depth] > n || now * (double)p2[depth] > n + 100000){ 
    k = n / now; 
    if(k > 1000010) k = 1000010; 
/*    printf("bef depth %d %d\n",bef[k],depth);*/ 
    if(bef[k] >= depth){ 
      res += bef[k] - depth + 1; 
/*      printf("ADD %d\n",bef[k] - depth + 1);*/ 
    } 
    res++; /*puts("PLUS");*/ 
    return; 
  } 
 
  solve(depth+1, now); 
   
  now *= p[depth]; 
  for(;;){ 
    solve(depth+1, now); 
    if(now * p2[depth] > n || now * (double)p2[depth] > n + 100000) break; 
    now *= p2[depth]; 
  } 
} 
 
class HolyNumbers { 
public: 
ll count(ll upTo, int maximalPrime) { 
  int i,j,k; 
 
  ps = getPrime(maximalPrime + 10, p); 
  while(ps > 0 && p[ps-1] > maximalPrime) ps--; 
 
  rep(i,ps) p2[i] = p[i] * (ll)p[i]; 
  rep(i,ps) p3[i] = p2[i] * p[i]; 
 
  rep(i,1001000) bef[i] = -1; 
  rep(i,ps) bef[p[i]] = i; 
  REP(i,1,1001000) if(bef[i]==-1) bef[i] = bef[i-1]; 
 
  n = upTo; 
  res = 0; 
 
  solve(0, 1); 
 
  return res; 
} 
 
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/