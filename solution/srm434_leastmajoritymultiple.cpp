/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10267
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

class LeastMajorityMultiple {
public:
    int leastMajorityMultiple(int a, int b, int c, int d, int e);
};

int LeastMajorityMultiple::leastMajorityMultiple(int a, int b, int c, int d, int e) {
    int ret;
    return ret;
}


int test0() {
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;
    int e = 5;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
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
    int a = 7;
    int b = 8;
    int c = 4;
    int d = 6;
    int e = 5;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int a = 30;
    int b = 42;
    int c = 70;
    int d = 35;
    int e = 90;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 210;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int a = 30;
    int b = 45;
    int c = 23;
    int d = 26;
    int e = 56;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 1170;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int a = 3;
    int b = 14;
    int c = 15;
    int d = 92;
    int e = 65;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 195;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int a = 10;
    int b = 23;
    int c = 48;
    int d = 77;
    int e = 91;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 5520;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int a = 11;
    int b = 7;
    int c = 5;
    int d = 3;
    int e = 2;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int a = 83;
    int b = 89;
    int c = 97;
    int d = 79;
    int e = 73;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 478661;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int a = 100;
    int b = 99;
    int c = 98;
    int d = 97;
    int e = 96;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 79200;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int a = 56;
    int b = 2;
    int c = 28;
    int d = 7;
    int e = 8;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int a = 99;
    int b = 77;
    int c = 88;
    int d = 66;
    int e = 55;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 792;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int a = 100;
    int b = 99;
    int c = 97;
    int d = 89;
    int e = 91;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 785603;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int a = 99;
    int b = 89;
    int c = 100;
    int d = 91;
    int e = 97;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 785603;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int a = 99;
    int b = 89;
    int c = 91;
    int d = 100;
    int e = 97;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 785603;
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
    int b = 89;
    int c = 91;
    int d = 97;
    int e = 100;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 785603;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int a = 89;
    int b = 99;
    int c = 100;
    int d = 91;
    int e = 97;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 785603;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int a = 89;
    int b = 99;
    int c = 91;
    int d = 100;
    int e = 97;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 785603;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int a = 89;
    int b = 99;
    int c = 91;
    int d = 97;
    int e = 100;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 785603;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int a = 89;
    int b = 91;
    int c = 99;
    int d = 100;
    int e = 97;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 785603;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int a = 89;
    int b = 91;
    int c = 99;
    int d = 97;
    int e = 100;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 785603;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int a = 89;
    int b = 91;
    int c = 97;
    int d = 99;
    int e = 100;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 785603;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int a = 30;
    int b = 29;
    int c = 60;
    int d = 23;
    int e = 75;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 300;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int a = 47;
    int b = 43;
    int c = 50;
    int d = 41;
    int e = 49;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 82861;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int a = 98;
    int b = 94;
    int c = 82;
    int d = 86;
    int e = 100;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 165722;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int a = 30;
    int b = 70;
    int c = 55;
    int d = 44;
    int e = 84;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 420;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int a = 64;
    int b = 96;
    int c = 36;
    int d = 84;
    int e = 48;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 192;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int a = 72;
    int b = 99;
    int c = 44;
    int d = 51;
    int e = 39;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 792;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int a = 98;
    int b = 52;
    int c = 74;
    int d = 76;
    int e = 89;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 36556;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int a = 89;
    int b = 78;
    int c = 100;
    int d = 1;
    int e = 99;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 2574;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int a = 88;
    int b = 77;
    int c = 3;
    int d = 44;
    int e = 55;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 264;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int a = 90;
    int b = 80;
    int c = 70;
    int d = 85;
    int e = 11;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 5040;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int a = 6;
    int b = 8;
    int c = 11;
    int d = 2;
    int e = 4;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int a = 79;
    int b = 74;
    int c = 34;
    int d = 42;
    int e = 55;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 26418;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int a = 29;
    int b = 37;
    int c = 66;
    int d = 63;
    int e = 62;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 40194;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int a = 75;
    int b = 76;
    int c = 53;
    int d = 98;
    int e = 46;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 85652;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int a = 31;
    int b = 41;
    int c = 88;
    int d = 71;
    int e = 94;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 90241;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int a = 88;
    int b = 47;
    int c = 97;
    int d = 70;
    int e = 86;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 132440;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int a = 62;
    int b = 96;
    int c = 59;
    int d = 95;
    int e = 67;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 175584;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int a = 61;
    int b = 46;
    int c = 71;
    int d = 67;
    int e = 83;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 188002;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int a = 92;
    int b = 51;
    int c = 71;
    int d = 89;
    int e = 82;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 192372;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int a = 73;
    int b = 43;
    int c = 89;
    int d = 76;
    int e = 91;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 238564;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int a = 74;
    int b = 97;
    int c = 59;
    int d = 83;
    int e = 87;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 362378;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int a = 99;
    int b = 71;
    int c = 98;
    int d = 65;
    int e = 83;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 383045;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int a = 89;
    int b = 93;
    int c = 83;
    int d = 59;
    int e = 82;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 401554;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int a = 94;
    int b = 99;
    int c = 53;
    int d = 83;
    int e = 95;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 413506;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int a = 89;
    int b = 97;
    int c = 94;
    int d = 93;
    int e = 100;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 418300;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int a = 89;
    int b = 79;
    int c = 67;
    int d = 98;
    int e = 95;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 471077;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int a = 85;
    int b = 69;
    int c = 97;
    int d = 82;
    int e = 89;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 480930;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int a = 79;
    int b = 85;
    int c = 82;
    int d = 97;
    int e = 77;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 498806;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int a = 89;
    int b = 77;
    int c = 97;
    int d = 83;
    int e = 79;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 504889;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int a = 89;
    int b = 97;
    int c = 77;
    int d = 86;
    int e = 95;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 589358;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int a = 89;
    int b = 91;
    int c = 83;
    int d = 93;
    int e = 92;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 672217;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int a = 89;
    int b = 87;
    int c = 92;
    int d = 91;
    int e = 97;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 704613;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int a = 91;
    int b = 92;
    int c = 97;
    int d = 95;
    int e = 89;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 745108;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int a = 91;
    int b = 89;
    int c = 93;
    int d = 97;
    int e = 95;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 753207;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int a = 100;
    int b = 89;
    int c = 99;
    int d = 91;
    int e = 97;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 785603;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int a = 94;
    int b = 95;
    int c = 99;
    int d = 91;
    int e = 97;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 812630;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int a = 98;
    int b = 89;
    int c = 97;
    int d = 99;
    int e = 95;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 820135;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int a = 22;
    int b = 10;
    int c = 18;
    int d = 67;
    int e = 48;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 720;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int a = 56;
    int b = 38;
    int c = 3;
    int d = 12;
    int e = 67;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 168;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int a = 68;
    int b = 4;
    int c = 17;
    int d = 43;
    int e = 62;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 68;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int a = 4;
    int b = 7;
    int c = 37;
    int d = 8;
    int e = 67;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int a = 82;
    int b = 12;
    int c = 14;
    int d = 24;
    int e = 16;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int a = 1;
    int b = 75;
    int c = 5;
    int d = 55;
    int e = 10;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int a = 30;
    int b = 69;
    int c = 2;
    int d = 4;
    int e = 1;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int a = 61;
    int b = 82;
    int c = 72;
    int d = 93;
    int e = 97;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 91512;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int a = 77;
    int b = 79;
    int c = 57;
    int d = 59;
    int e = 97;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 258951;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int a = 7;
    int b = 1;
    int c = 2;
    int d = 3;
    int e = 8;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int a = 100;
    int b = 99;
    int c = 56;
    int d = 23;
    int e = 1;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 1288;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int a = 2;
    int b = 3;
    int c = 99;
    int d = 4;
    int e = 5;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int a = 73;
    int b = 79;
    int c = 83;
    int d = 89;
    int e = 97;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 478661;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int a = 1;
    int b = 64;
    int c = 13;
    int d = 24;
    int e = 94;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 192;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int a = 2;
    int b = 4;
    int c = 8;
    int d = 16;
    int e = 32;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int a = 2;
    int b = 7;
    int c = 37;
    int d = 40;
    int e = 80;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int a = 1;
    int b = 3;
    int c = 7;
    int d = 14;
    int e = 21;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int a = 97;
    int b = 91;
    int c = 89;
    int d = 83;
    int e = 79;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 583573;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int a = 77;
    int b = 91;
    int c = 87;
    int d = 1;
    int e = 2;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 154;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int a = 12;
    int b = 3;
    int c = 4;
    int d = 1;
    int e = 2;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int a = 97;
    int b = 89;
    int c = 83;
    int d = 99;
    int e = 79;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 583573;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int a = 97;
    int b = 89;
    int c = 83;
    int d = 79;
    int e = 73;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 478661;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int a = 100;
    int b = 12;
    int c = 65;
    int d = 99;
    int e = 13;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 780;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int a = 91;
    int b = 92;
    int c = 93;
    int d = 94;
    int e = 95;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 393484;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int a = 100;
    int b = 1;
    int c = 2;
    int d = 3;
    int e = 4;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int a = 1;
    int b = 2;
    int c = 7;
    int d = 9;
    int e = 10;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int a = 1;
    int b = 17;
    int c = 2;
    int d = 3;
    int e = 19;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int a = 5;
    int b = 4;
    int c = 3;
    int d = 2;
    int e = 1;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int a = 3;
    int b = 5;
    int c = 4;
    int d = 7;
    int e = 15;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int a = 10;
    int b = 14;
    int c = 15;
    int d = 28;
    int e = 42;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int a = 1;
    int b = 2;
    int c = 10;
    int d = 3;
    int e = 4;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int a = 3;
    int b = 5;
    int c = 7;
    int d = 11;
    int e = 13;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 105;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int a = 5;
    int b = 10;
    int c = 20;
    int d = 97;
    int e = 99;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int a = 11;
    int b = 7;
    int c = 4;
    int d = 2;
    int e = 1;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int a = 98;
    int b = 76;
    int c = 88;
    int d = 69;
    int e = 99;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 15048;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int a = 90;
    int b = 91;
    int c = 92;
    int d = 93;
    int e = 94;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 128340;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int a = 95;
    int b = 96;
    int c = 97;
    int d = 98;
    int e = 99;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 155232;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int a = 97;
    int b = 89;
    int c = 1;
    int d = 2;
    int e = 3;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int a = 2;
    int b = 3;
    int c = 90;
    int d = 95;
    int e = 5;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int a = 5;
    int b = 10;
    int c = 15;
    int d = 20;
    int e = 25;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int a = 4;
    int b = 3;
    int c = 2;
    int d = 100;
    int e = 1;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int a = 99;
    int b = 100;
    int c = 1;
    int d = 2;
    int e = 4;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int a = 3;
    int b = 1;
    int c = 5;
    int d = 4;
    int e = 2;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int a = 100;
    int b = 99;
    int c = 98;
    int d = 97;
    int e = 32;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 39200;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int a = 13;
    int b = 2;
    int c = 4;
    int d = 1;
    int e = 3;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int a = 99;
    int b = 100;
    int c = 97;
    int d = 89;
    int e = 91;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 785603;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int a = 71;
    int b = 73;
    int c = 59;
    int d = 61;
    int e = 99;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 255529;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int a = 10;
    int b = 11;
    int c = 13;
    int d = 25;
    int e = 30;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 150;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int a = 96;
    int b = 97;
    int c = 98;
    int d = 99;
    int e = 100;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 79200;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int a = 95;
    int b = 97;
    int c = 99;
    int d = 91;
    int e = 98;
    LeastMajorityMultiple* pObj = new LeastMajorityMultiple();
    clock_t start = clock();
    int result = pObj->leastMajorityMultiple(a, b, c, d, e);
    clock_t end = clock();
    delete pObj;
    int expected = 121030;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=21684580&rd=13696&pm=10267
********************************************************************************
#include <algorithm>
#include <numeric>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cassert>
#include <cmath>
#include <complex>
#include <stack>
#include "time.h"
using namespace std;
#define SZ(x) (int)x.size()
#define FOR(i,x,y) for(int i=(int)(x);i<=(int)(y);++i)
#define REP(i,n) FOR(i,0,n-1)
#define FORD(i,x,y) for(int i=(int)(x);i>=(int)(y);--i)
#define ALL(a) (a).begin(),(a).end()
#define FORE(i,t) for(i=t.begin();i!=t.end();++i)
typedef vector<int> VI;
typedef vector<string> VS;
#define prt if(1)printf
 
struct LeastMajorityMultiple {
  int leastMajorityMultiple(int a, int b, int c, int d, int e) { REP(i,1)prt("%s","");
    int x = 1;
    while(1) {
      int cnt = 0;
      cnt += (x % a == 0);
      cnt += (x % b == 0);
      cnt += (x % c == 0);
      cnt += (x % d == 0);
      cnt += (x % e == 0);
      if (cnt >= 3) return x;
      ++x;
    }    
    return 100;
  }
};
 
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/