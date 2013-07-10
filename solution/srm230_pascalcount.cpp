/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3564
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

class PascalCount {
public:
    int howMany(int i, int d);
};

int PascalCount::howMany(int i, int d) {
    int ret;
    return ret;
}


int test0() {
    int i = 3;
    int d = 3;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
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
    int i = 3;
    int d = 4;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int i = 4;
    int d = 2;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int i = 4;
    int d = 6;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int i = 5000000;
    int d = 6;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 4999315;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int i = 5000000;
    int d = 2;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 4999745;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int i = 5000000;
    int d = 3;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 4999569;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int i = 5000000;
    int d = 4;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 4998977;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int i = 5000000;
    int d = 5;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 4999956;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int i = 0;
    int d = 3;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int i = 2500000;
    int d = 2;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 2499745;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int i = 2500000;
    int d = 3;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 2499425;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int i = 2500000;
    int d = 4;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 2498977;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int i = 2500000;
    int d = 5;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 2499989;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int i = 2500000;
    int d = 6;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 2499173;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int i = 3333333;
    int d = 2;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 3325142;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int i = 3333333;
    int d = 3;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 3332470;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int i = 3333333;
    int d = 4;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 3296470;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int i = 3333333;
    int d = 5;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 3284182;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int i = 3333333;
    int d = 6;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 3324286;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int i = 101;
    int d = 2;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 86;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int i = 101;
    int d = 3;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int i = 101;
    int d = 4;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int i = 101;
    int d = 5;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 92;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int i = 101;
    int d = 6;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int i = 1671174;
    int d = 3;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 1670743;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int i = 2545758;
    int d = 4;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 2529375;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int i = 1741859;
    int d = 5;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 1696860;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int i = 4852974;
    int d = 5;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 4690975;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int i = 1743118;
    int d = 5;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 1599119;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int i = 718439;
    int d = 5;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 684690;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int i = 2199093;
    int d = 2;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 2198070;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int i = 3675517;
    int d = 2;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 3671422;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int i = 552351;
    int d = 5;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 550432;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int i = 2298594;
    int d = 5;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 2269795;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int i = 3556885;
    int d = 6;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 3555004;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int i = 2456621;
    int d = 4;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 2440238;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int i = 28977;
    int d = 6;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 28640;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int i = 3056625;
    int d = 3;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 3050794;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int i = 2892268;
    int d = 6;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 2886065;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int i = 3249155;
    int d = 5;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 3233796;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int i = 3969917;
    int d = 2;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 3953534;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int i = 4599836;
    int d = 5;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 4484637;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int i = 2774631;
    int d = 4;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 2756200;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int i = 3044694;
    int d = 6;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 3031339;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int i = 1626425;
    int d = 6;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 1623488;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int i = 2541633;
    int d = 4;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 2540738;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int i = 3788324;
    int d = 2;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 3786277;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int i = 206421;
    int d = 6;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 205532;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int i = 3951827;
    int d = 2;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 3947732;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int i = 1378788;
    int d = 4;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 1376741;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int i = 1326812;
    int d = 3;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 1325085;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int i = 2502673;
    int d = 3;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 2501522;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int i = 4794629;
    int d = 3;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 4788798;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int i = 4924436;
    int d = 2;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 4924181;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int i = 5000000;
    int d = 6;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 4999315;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int i = 500000;
    int d = 3;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 484449;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int i = 5000000;
    int d = 4;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 4998977;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int i = 5000000;
    int d = 2;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 4999745;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int i = 5000000;
    int d = 5;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 4999956;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int i = 500000;
    int d = 4;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 499617;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int i = 4987451;
    int d = 6;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 4983884;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int i = 4999999;
    int d = 6;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 4991552;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int i = 4983214;
    int d = 4;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 4979119;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int i = 500000;
    int d = 6;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 484329;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int i = 50000;
    int d = 5;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 49993;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int i = 3489965;
    int d = 6;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 3449640;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int i = 100000;
    int d = 6;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 99507;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int i = 3;
    int d = 6;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int i = 4987451;
    int d = 4;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 4980284;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int i = 4;
    int d = 6;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int i = 12;
    int d = 4;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int i = 8;
    int d = 5;
    PascalCount* pObj = new PascalCount();
    clock_t start = clock();
    int result = pObj->howMany(i, d);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=272072&rd=6519&pm=3564
********************************************************************************
#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <functional> 
#include <numeric> 
#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
#include <queue> 
using namespace std; 
typedef vector<int> VI;  typedef vector<vector<int> > VVI; 
typedef vector<string> VS;  typedef vector<vector<string> > VVS; 
typedef signed long long i64;  typedef unsigned long long u64; 
 
int f2[5000001]; 
int f3[5000001]; 
int f5[5000001]; 
 
class PascalCount { 
public: 
int howMany(int i, int d) { 
  int j, k, x, y, z, n; 
  int ret = 0; 
 
  for( j = 1; j <= 5000000; j++ ) f2[j] = j/2 + f2[j/2]; 
  for( j = 1; j <= 5000000; j++ ) f3[j] = j/3 + f3[j/3]; 
  for( j = 1; j <= 5000000; j++ ) f5[j] = j/5 + f5[j/5]; 
  for( j = 0; j <= i; j++ ) { 
    int n2 = f2[i] - f2[j] - f2[i-j]; 
    int n3 = f3[i] - f3[j] - f3[i-j]; 
    int n5 = f5[i] - f5[j] - f5[i-j]; 
    if( d == 2 && n2 ) ret++; 
    if( d == 3 && n3 ) ret++; 
    if( d == 4 && n2 >= 2 ) ret++; 
    if( d == 5 && n5 ) ret++; 
    if( d == 6 && n2 && n3 ) ret++; 
  } 
  return ret; 
} 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/