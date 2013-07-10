/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10239
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

class SuperSum {
public:
    int calculate(int k, int n);
};

int SuperSum::calculate(int k, int n) {
    int ret;
    return ret;
}


int test0() {
    int k = 1;
    int n = 3;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
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
    int k = 2;
    int n = 3;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int k = 4;
    int n = 10;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2002;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int k = 10;
    int n = 35;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 150595840;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int k = 50;
    int n = 1000000000;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
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
    int k = 50;
    int n = 536870911;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 604374384;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int k = 1;
    int n = 1;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
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
    int k = 23;
    int n = 1;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int k = 50;
    int n = 1;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int k = 2;
    int n = 942673158;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 476373970;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int k = 30;
    int n = 300218439;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 826668794;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int k = 24;
    int n = 995242181;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 986028885;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int k = 37;
    int n = 287457099;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 116059974;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int k = 29;
    int n = 855370135;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 696112017;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int k = 25;
    int n = 447214090;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 223110704;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int k = 18;
    int n = 447953543;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 290387742;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int k = 28;
    int n = 64826618;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 223109585;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int k = 6;
    int n = 243778003;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 503960484;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int k = 24;
    int n = 857954777;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 206147394;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int k = 48;
    int n = 522907414;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 506470000;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int k = 16;
    int n = 936435578;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 831099133;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int k = 23;
    int n = 908839793;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 208206642;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int k = 38;
    int n = 314370829;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 660609756;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int k = 27;
    int n = 287825870;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 163370456;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int k = 28;
    int n = 540424322;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 499401678;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int k = 41;
    int n = 489010739;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 683530101;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int k = 39;
    int n = 961479942;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 213385636;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int k = 22;
    int n = 626422230;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 480026326;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int k = 17;
    int n = 622633395;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 692478064;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int k = 25;
    int n = 494762552;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 380861548;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int k = 44;
    int n = 510566469;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 331481604;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int k = 23;
    int n = 335936101;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 363328533;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int k = 46;
    int n = 478459937;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 417638533;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int k = 30;
    int n = 684727825;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 755859442;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int k = 28;
    int n = 372858471;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 968949522;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int k = 38;
    int n = 799406312;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 25577541;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int k = 34;
    int n = 491608220;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 924976255;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int k = 30;
    int n = 382701630;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 786772275;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int k = 28;
    int n = 619212432;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 745892991;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int k = 50;
    int n = 727215824;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 701769601;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int k = 38;
    int n = 587180079;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 124551017;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int k = 40;
    int n = 840157131;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 457408577;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int k = 28;
    int n = 820399816;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 265493402;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int k = 39;
    int n = 692595081;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 72937484;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int k = 25;
    int n = 657106863;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 272814660;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int k = 31;
    int n = 768602901;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 463388295;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int k = 28;
    int n = 587123245;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 748516979;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int k = 26;
    int n = 555092218;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 555490779;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int k = 44;
    int n = 660921777;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 762425927;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int k = 25;
    int n = 849102920;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 364378679;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int k = 26;
    int n = 974643542;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3612577;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int k = 32;
    int n = 681193967;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 194344069;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int k = 49;
    int n = 830727997;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 786187896;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int k = 39;
    int n = 951759070;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 633096638;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int k = 49;
    int n = 934727566;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 278018569;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int k = 3;
    int n = 906193706;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 615188860;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int k = 47;
    int n = 994797443;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 147480236;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int k = 6;
    int n = 900821360;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 885909623;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int k = 36;
    int n = 910801107;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 698857930;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int k = 28;
    int n = 937871575;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 857940348;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int k = 4;
    int n = 930273759;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 696917071;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int k = 28;
    int n = 966104095;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 633102118;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int k = 45;
    int n = 950430057;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 795548554;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int k = 2;
    int n = 939408767;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 178119175;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int k = 44;
    int n = 988343832;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 392592742;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int k = 3;
    int n = 935661721;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 962657968;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int k = 48;
    int n = 936731699;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 626430046;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int k = 45;
    int n = 991724535;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 847627269;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int k = 1;
    int n = 908786277;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 195529781;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int k = 50;
    int n = 999999956;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000006;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int k = 50;
    int n = 999999955;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 999999955;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int k = 48;
    int n = 999999956;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 999998732;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int k = 50;
    int n = 999999999;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
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
    int k = 49;
    int n = 999999998;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int k = 47;
    int n = 975432147;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 917366087;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int k = 47;
    int n = 1000000000;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
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
    int k = 50;
    int n = 599999953;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 408657633;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int k = 48;
    int n = 12412424;
    SuperSum* pObj = new SuperSum();
    clock_t start = clock();
    int result = pObj->calculate(k, n);
    clock_t end = clock();
    delete pObj;
    int expected = 32514911;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22747741&rd=14151&pm=10239
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
 
const int mod=1000000007;
 
long long power(int n,int m)
{
  long long res=1;
  for (;m;m/=2)
  {
    if (m&1) res=res*n%mod;
    n=(long long)n*n%mod;
  }
  return res;
}
 
class SuperSum {
public:
  int calculate(int k, int n) 
  {
    long long res=1;
    for (int i=n+k;i>=n;i--)
      res=res*i%mod;
    cout << res << endl;
    
    for (int i=1;i<=k+1;i++)
      res=res*power(i,mod-2)%mod;
    return (int)res;
 
  }
};
 
 
 
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/