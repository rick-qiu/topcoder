/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4787
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

class ConvexHull {
public:
    int intHull(int m, int n);
};

int ConvexHull::intHull(int m, int n) {
    int ret;
    return ret;
}


int test0() {
    int m = 3;
    int n = 3;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int m = 3;
    int n = 50;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int m = 4;
    int n = 4;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int m = 4;
    int n = 5;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int m = 50;
    int n = 200;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 74;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int m = 200;
    int n = 3;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int m = 200;
    int n = 5;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int m = 200;
    int n = 10;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int m = 200;
    int n = 20;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int m = 200;
    int n = 30;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int m = 200;
    int n = 40;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 68;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int m = 200;
    int n = 50;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 74;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int m = 60;
    int n = 200;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int m = 70;
    int n = 200;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int m = 100;
    int n = 200;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 95;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int m = 200;
    int n = 200;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 121;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int m = 151;
    int n = 163;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 103;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int m = 163;
    int n = 128;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 97;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int m = 150;
    int n = 184;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 107;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int m = 37;
    int n = 45;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int m = 84;
    int n = 130;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 78;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int m = 66;
    int n = 128;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 71;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int m = 157;
    int n = 145;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int m = 159;
    int n = 193;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 111;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int m = 144;
    int n = 18;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int m = 180;
    int n = 131;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 101;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int m = 149;
    int n = 57;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 71;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int m = 192;
    int n = 133;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 104;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int m = 53;
    int n = 22;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int m = 100;
    int n = 75;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 69;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int m = 167;
    int n = 81;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int m = 124;
    int n = 98;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int m = 76;
    int n = 93;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 68;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int m = 25;
    int n = 68;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int m = 73;
    int n = 96;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int m = 185;
    int n = 52;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 74;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int m = 78;
    int n = 176;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int m = 7;
    int n = 192;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int m = 153;
    int n = 124;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 94;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int m = 195;
    int n = 20;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int m = 182;
    int n = 128;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 101;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int m = 106;
    int n = 70;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 69;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int m = 144;
    int n = 28;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 53;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int m = 26;
    int n = 176;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int m = 49;
    int n = 82;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int m = 50;
    int n = 179;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int m = 55;
    int n = 57;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int m = 160;
    int n = 114;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 93;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int m = 151;
    int n = 93;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 85;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int m = 16;
    int n = 154;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int m = 11;
    int n = 72;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int m = 194;
    int n = 52;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 75;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int m = 91;
    int n = 28;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int m = 115;
    int n = 32;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 53;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int m = 117;
    int n = 21;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int m = 23;
    int n = 24;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int m = 99;
    int n = 130;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 83;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int m = 6;
    int n = 62;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int m = 121;
    int n = 80;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 75;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int m = 142;
    int n = 26;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int m = 164;
    int n = 45;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int m = 194;
    int n = 88;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int m = 93;
    int n = 62;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int m = 89;
    int n = 115;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 76;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int m = 168;
    int n = 96;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 89;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int m = 81;
    int n = 87;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 68;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int m = 197;
    int n = 168;
    ConvexHull* pObj = new ConvexHull();
    clock_t start = clock();
    int result = pObj->intHull(m, n);
    clock_t end = clock();
    delete pObj;
    int expected = 113;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7462740&rd=8068&pm=4787
********************************************************************************
#include <string>
#include <vector>
#include <cmath>
#include <cctype>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <utility>
#include <numeric>
#include <complex>
 
using namespace std;
 
int gcd(int a, int b)
{
  if (a < 0) a = -a;
  if (b < 0) b = -b;
  int tmp;
  while (a != 0)
    {
      tmp = a;
      a = b % a;
      b = tmp;
    }
  return b;
}
 
int best[201][201];
 
int check(int a, int b)
{
  if (a <= 0 || b <= 0) return 0;
  int ans = 0;
  int half[201][201];
  for (int i = 0; i <= a; i++)
    for (int j = 0; j <= a; j++)
      {
  half[i][j] = 0;
  for (int k = 0; k <= b; k++)
    half[i][j] >?= best[a-i][k] + best[b-k][j];
      }
  for (int i = 0; i <= a; i++)
    for (int j = 0; j <= a; j++)
      ans >?= half[i][j] + half[j][i];
  return ans;
}
 
class ConvexHull {
  public:
  int intHull(int m, int n) {
 
    for (int i = 0; i <= 50; i++)
      for (int j = 1; j <= 50; j++)
        if (gcd(i, j) == 1)
    {
      int nbest[201][201];
      for (int x = 0; x < 201; x++)
        for (int y = 0; y < 201; y++)
          nbest[x][y] = best[x][y];
      for (int k = 1; k*i <= 200 && k*j <= 200; k++)
        {
          int dx = k*i, dy = k*j;
          for (int x = 200-dx; x >= 0; x--)
      for (int y = 200-dy; y >= 0; y--)
        nbest[x+dx][y+dy] >?= best[x][y] + 1;
        }
      for (int x = 0; x < 201; x++)
        for (int y = 0; y < 201; y++)
          best[x][y] = nbest[x][y];
    }
    for (int j = 1; j <= 200; j++)
      best[0][j] = 1;
 
    //cout << best[3][2] << endl;
    //cout << best[0][0] << endl;
    
    int ans = 0;
    for (int a = m-5; a <= m; a++)
      for (int b = n-5; b <= n; b++)
        ans >?= check(a, b);
 
    return ans;
    
  }
};
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/