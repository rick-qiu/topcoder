/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12077
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

class RectangularSum {
public:
    long minimalArea(int height, int width, long S);
};

long RectangularSum::minimalArea(int height, int width, long S) {
    long ret;
    return ret;
}


int test0() {
    int height = 2;
    int width = 3;
    long S = 8;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int height = 3;
    int width = 3;
    long S = 10;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int height = 3;
    int width = 3;
    long S = 36;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int height = 25;
    int width = 25;
    long S = 16000;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 32;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int height = 1000000;
    int width = 1000000;
    long S = 1000000000000;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
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
    int height = 6;
    int width = 6;
    long S = 236;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int height = 1000000;
    int width = 1000000;
    long S = 963761198400;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int height = 100000;
    int width = 100000;
    long S = 963761198400;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 99;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int height = 565;
    int width = 1000000;
    long S = 248928394289;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int height = 50000;
    int width = 50000;
    long S = 963761198400;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 390;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int height = 50000;
    int width = 50000;
    long S = 9637611984;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int height = 70000;
    int width = 5904;
    long S = 963761198400;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 2340;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int height = 50000;
    int width = 50000;
    long S = 123123123;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int height = 12;
    int width = 17;
    long S = 4234234223;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int height = 2;
    int width = 3;
    long S = 1;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int height = 2;
    int width = 3;
    long S = 2;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
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
    int height = 2;
    int width = 3;
    long S = 3;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
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
    int height = 2;
    int width = 3;
    long S = 4;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int height = 2;
    int width = 3;
    long S = 5;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
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
    int height = 2;
    int width = 3;
    long S = 6;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int height = 2;
    int width = 3;
    long S = 7;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int height = 2;
    int width = 3;
    long S = 8;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int height = 2;
    int width = 3;
    long S = 9;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int height = 2;
    int width = 3;
    long S = 10;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int height = 2;
    int width = 3;
    long S = 11;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int height = 2;
    int width = 3;
    long S = 12;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int height = 2;
    int width = 3;
    long S = 13;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int height = 2;
    int width = 3;
    long S = 14;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int height = 2;
    int width = 3;
    long S = 15;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int height = 2;
    int width = 3;
    long S = 16;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int height = 42;
    int width = 68;
    long S = 9190;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int height = 1;
    int width = 70;
    long S = 15794;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int height = 79;
    int width = 59;
    long S = 31623;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int height = 65;
    int width = 6;
    long S = 28535;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int height = 82;
    int width = 28;
    long S = 12257;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int height = 92;
    int width = 96;
    long S = 20774;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int height = 28;
    int width = 37;
    long S = 33427;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int height = 5;
    int width = 3;
    long S = 168;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int height = 93;
    int width = 83;
    long S = 25140;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int height = 17;
    int width = 19;
    long S = 20218;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int height = 48;
    int width = 27;
    long S = 16067;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int height = 39;
    int width = 70;
    long S = 22642;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int height = 68;
    int width = 100;
    long S = 23835;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int height = 95;
    int width = 4;
    long S = 24191;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int height = 23;
    int width = 34;
    long S = 18455;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int height = 65;
    int width = 42;
    long S = 10441;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int height = 54;
    int width = 69;
    long S = 29273;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int height = 45;
    int width = 63;
    long S = 35592;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int height = 38;
    int width = 60;
    long S = 11003;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int height = 42;
    int width = 30;
    long S = 2038;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int height = 17;
    int width = 36;
    long S = 22802;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int height = 43;
    int width = 89;
    long S = 33933;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int height = 41;
    int width = 43;
    long S = 21027;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int height = 49;
    int width = 47;
    long S = 26108;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int height = 91;
    int width = 30;
    long S = 27100;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int height = 51;
    int width = 7;
    long S = 31458;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 196;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int height = 94;
    int width = 49;
    long S = 24235;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int height = 24;
    int width = 85;
    long S = 21994;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 28;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int height = 57;
    int width = 41;
    long S = 7303;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int height = 77;
    int width = 32;
    long S = 28772;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int height = 63482;
    int width = 94225;
    long S = 999663028876;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 3121;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int height = 4074;
    int width = 60573;
    long S = 999995109149;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int height = 71118;
    int width = 92081;
    long S = 999999402994;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int height = 32966;
    int width = 61984;
    long S = 999881658478;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 1403;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int height = 29668;
    int width = 7604;
    long S = 999831455710;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int height = 78456;
    int width = 79774;
    long S = 999883247749;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 619;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int height = 67152;
    int width = 41086;
    long S = 999742344217;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int height = 98273;
    int width = 84884;
    long S = 999959126020;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 136;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int height = 79569;
    int width = 81337;
    long S = 999346647970;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 220;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int height = 48181;
    int width = 73202;
    long S = 999913453636;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 428;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int height = 952;
    int width = 69065;
    long S = 999963370784;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 16592;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int height = 13693;
    int width = 54138;
    long S = 999880744094;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 3169;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int height = 80606;
    int width = 73769;
    long S = 999862416538;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 2969;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int height = 64698;
    int width = 60325;
    long S = 999855671355;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int height = 799;
    int width = 98707;
    long S = 999915838336;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 19648;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int height = 83102;
    int width = 32548;
    long S = 999631597030;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 370;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int height = 8963;
    int width = 3875;
    long S = 999952096620;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int height = 69445;
    int width = 48297;
    long S = 999711840601;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int height = 77215;
    int width = 67107;
    long S = 999839796788;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 196;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int height = 19594;
    int width = 83792;
    long S = 999968948890;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 1523;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int height = 37815;
    int width = 37760;
    long S = 999888488605;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 5113;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int height = 18992;
    int width = 67685;
    long S = 999889599484;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 856;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int height = 65921;
    int width = 56739;
    long S = 999999894053;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int height = 72985;
    int width = 65544;
    long S = 999944478896;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 304;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int height = 78792;
    int width = 51128;
    long S = 999782957118;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int height = 96280;
    int width = 95850;
    long S = 999478726436;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 20101;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int height = 54019;
    int width = 63362;
    long S = 999509829722;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 36551;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int height = 52669;
    int width = 92977;
    long S = 999721429058;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int height = 3059;
    int width = 18237;
    long S = 999773871762;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int height = 40032;
    int width = 81727;
    long S = 999772130904;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 488;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int height = 63482;
    int width = 94225;
    long S = 963761198400;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 165;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int height = 98087;
    int width = 95266;
    long S = 963761198400;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 104;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int height = 59349;
    int width = 82488;
    long S = 963761198400;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 198;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int height = 71964;
    int width = 84962;
    long S = 963761198400;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 160;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int height = 32966;
    int width = 61984;
    long S = 963761198400;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 475;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int height = 56294;
    int width = 84435;
    long S = 963761198400;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 204;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int height = 33469;
    int width = 11294;
    long S = 963761198400;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 2550;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int height = 7900;
    int width = 25336;
    long S = 963761198400;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 4830;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int height = 67152;
    int width = 41086;
    long S = 963761198400;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 350;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int height = 64507;
    int width = 60768;
    long S = 963761198400;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 247;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int height = 1251;
    int width = 60603;
    long S = 963761198400;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 12768;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int height = 54945;
    int width = 20814;
    long S = 963761198400;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 850;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int height = 48181;
    int width = 73202;
    long S = 963761198400;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 275;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int height = 65994;
    int width = 32287;
    long S = 963761198400;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 455;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int height = 76007;
    int width = 81365;
    long S = 963761198400;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 156;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int height = 71043;
    int width = 16990;
    long S = 963761198400;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 800;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int height = 80606;
    int width = 73769;
    long S = 963761198400;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 165;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int height = 6167;
    int width = 93917;
    long S = 963761198400;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 1664;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int height = 36800;
    int width = 49453;
    long S = 963761198400;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 532;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int height = 74608;
    int width = 92094;
    long S = 963761198400;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 143;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int height = 83102;
    int width = 32548;
    long S = 963761198400;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 357;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int height = 7002;
    int width = 23351;
    long S = 963761198400;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 5928;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int height = 40251;
    int width = 27202;
    long S = 963761198400;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 884;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int height = 60817;
    int width = 11495;
    long S = 963761198400;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 1380;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int height = 77215;
    int width = 67107;
    long S = 963761198400;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 187;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int height = 30719;
    int width = 90559;
    long S = 963761198400;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 351;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int height = 50663;
    int width = 19910;
    long S = 963761198400;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 960;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int height = 35637;
    int width = 2427;
    long S = 963761198400;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 11200;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int height = 18992;
    int width = 67685;
    long S = 963761198400;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 756;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int height = 27865;
    int width = 2417;
    long S = 963761198400;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 14352;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int height = 1000000;
    int width = 1000000;
    long S = 900000000090;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int height = 2;
    int width = 2;
    long S = 6;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int height = 80000;
    int width = 80000;
    long S = 802241960520;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 130;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int height = 1000;
    int width = 1000;
    long S = 401567166000;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 579462;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int height = 98765;
    int width = 5765;
    long S = 90816827608;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 208;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int height = 1000;
    int width = 1000;
    long S = 321253732800;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 434700;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int height = 999996;
    int width = 999997;
    long S = 999999999993;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int height = 100000;
    int width = 100000;
    long S = 1000000000;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int height = 1000;
    int width = 2000;
    long S = 887674788000;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 516672;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int height = 100000;
    int width = 1000000;
    long S = 963761198400;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int height = 1000000;
    int width = 1;
    long S = 499999500000;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 999999;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int height = 500000;
    int width = 500001;
    long S = 900000000001;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int height = 100000;
    int width = 100000;
    long S = 900000000001;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int height = 3;
    int width = 2;
    long S = 15;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int height = 1000000;
    int width = 1000000;
    long S = 84695000;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int height = 3;
    int width = 1001;
    long S = 4507503;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 3003;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int height = 2;
    int width = 4;
    long S = 11;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int height = 2;
    int width = 2;
    long S = 4;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int height = 1000;
    int width = 1000;
    long S = 499999500000;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int height = 5;
    int width = 1;
    long S = 10;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int height = 1;
    int width = 1000000;
    long S = 5000050000;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 6875;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int height = 213214;
    int width = 321432;
    long S = 900000000010;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 20;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int height = 1;
    int width = 1;
    long S = 843291048600;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int height = 7;
    int width = 7;
    long S = 468;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int height = 1000000;
    int width = 2;
    long S = 864071988000;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 551616;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int height = 997920;
    int width = 997920;
    long S = 963761198400;
    RectangularSum* pObj = new RectangularSum();
    clock_t start = clock();
    long result = pObj->minimalArea(height, width, S);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22840511&rd=14739&pm=12077
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
 
typedef long long int64;
 
class RectangularSum {
public:
  long long minimalArea(int height, int width, long long S) {
    int n = height, m = width;
 
    int64 ans = LONG_LONG_MAX;
 
    for (int nRow = 1; nRow <= n; ++nRow) {
      for (int nCol = 1; nCol <= width; ++nCol) {
        int64 add = 1LL * nRow * (nRow - 1) / 2 * nCol * width + 1LL * nRow * (nCol) * (nCol - 1) / 2;
        if (add > S)
          break;
        int64 rem = S - add;
        if (rem % (1LL * nRow * nCol) != 0)
          continue;
        int64 val = rem / nRow / nCol;
        int64 r = val / width, c = val % width;
        if (r + nRow <= n && c + nCol <= m) {
          ans = min(ans, 1LL * nRow * nCol);
        }
      }
    }
 
    if (ans == LONG_LONG_MAX)
      ans = -1;
    return ans;
  }
};
 
 
//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/