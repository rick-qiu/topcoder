/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11549
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

class SmallBricks31 {
public:
    int countWays(int w, int h);
};

int SmallBricks31::countWays(int w, int h) {
    int ret;
    return ret;
}


int test0() {
    int w = 1;
    int h = 1;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
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
    int w = 1;
    int h = 2;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
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
    int w = 1;
    int h = 3;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int w = 1;
    int h = 3;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int w = 1;
    int h = 5;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int w = 1;
    int h = 6;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int w = 1;
    int h = 7;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int w = 1;
    int h = 8;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int w = 1;
    int h = 9;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int w = 1;
    int h = 10;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int w = 2;
    int h = 1;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int w = 2;
    int h = 2;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int w = 2;
    int h = 3;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int w = 2;
    int h = 4;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 83;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int w = 2;
    int h = 5;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 177;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int w = 2;
    int h = 6;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 367;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int w = 2;
    int h = 7;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 749;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int w = 2;
    int h = 8;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 1515;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int w = 2;
    int h = 9;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 3049;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int w = 2;
    int h = 10;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 6119;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int w = 3;
    int h = 1;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int w = 3;
    int h = 2;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
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
    int w = 3;
    int h = 3;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 429;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int w = 3;
    int h = 4;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 1991;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int w = 3;
    int h = 5;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 8864;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int w = 3;
    int h = 6;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 38737;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int w = 3;
    int h = 7;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 167869;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int w = 3;
    int h = 8;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 724680;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int w = 3;
    int h = 9;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 3122877;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int w = 3;
    int h = 10;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 13446503;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int w = 4;
    int h = 1;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int w = 4;
    int h = 2;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 436;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int w = 4;
    int h = 3;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 4266;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int w = 4;
    int h = 4;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 36913;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int w = 4;
    int h = 5;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 301887;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int w = 4;
    int h = 6;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 2400844;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int w = 4;
    int h = 7;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 18816786;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int w = 4;
    int h = 8;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 146324359;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int w = 4;
    int h = 9;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 132976888;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int w = 4;
    int h = 10;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 751733376;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int w = 5;
    int h = 1;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int w = 5;
    int h = 2;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 2300;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int w = 5;
    int h = 3;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 44157;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int w = 5;
    int h = 4;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 739194;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int w = 5;
    int h = 5;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 11676046;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int w = 5;
    int h = 6;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 179653089;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int w = 5;
    int h = 7;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 730115178;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int w = 5;
    int h = 8;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 237973525;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int w = 5;
    int h = 9;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 21034400;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int w = 5;
    int h = 10;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 82403180;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int w = 6;
    int h = 1;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 214;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int w = 6;
    int h = 2;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 12152;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int w = 6;
    int h = 3;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 457949;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int w = 6;
    int h = 4;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 14817059;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int w = 6;
    int h = 5;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 450472846;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int w = 6;
    int h = 6;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 324032071;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int w = 6;
    int h = 7;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 24861902;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int w = 6;
    int h = 8;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 170708663;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int w = 6;
    int h = 9;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 587048789;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int w = 6;
    int h = 10;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 81051310;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int w = 7;
    int h = 1;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 545;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int w = 7;
    int h = 2;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 64063;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int w = 7;
    int h = 3;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 4723781;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int w = 7;
    int h = 4;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 294027079;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int w = 7;
    int h = 5;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 107928446;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int w = 7;
    int h = 6;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 839339396;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int w = 7;
    int h = 7;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 761082424;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int w = 7;
    int h = 8;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 728312256;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int w = 7;
    int h = 9;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 9546377;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int w = 7;
    int h = 10;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 648669217;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int w = 8;
    int h = 1;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 1388;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int w = 8;
    int h = 2;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 337944;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int w = 8;
    int h = 3;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 48819580;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int w = 8;
    int h = 4;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 858831727;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int w = 8;
    int h = 5;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 504677840;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int w = 8;
    int h = 6;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 381017248;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int w = 8;
    int h = 7;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 831713243;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int w = 8;
    int h = 8;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 583941925;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int w = 8;
    int h = 9;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 536794181;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int w = 8;
    int h = 10;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 933406633;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int w = 9;
    int h = 1;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 3535;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int w = 9;
    int h = 2;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 1782740;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int w = 9;
    int h = 3;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 504494117;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int w = 9;
    int h = 4;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 697109537;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int w = 9;
    int h = 5;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 868971794;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int w = 9;
    int h = 6;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 379952655;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int w = 9;
    int h = 7;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 791371725;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int w = 9;
    int h = 8;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 365989229;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int w = 9;
    int h = 9;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 82390183;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int w = 9;
    int h = 10;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 281959639;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int w = 10;
    int h = 1;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 9003;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int w = 10;
    int h = 2;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 9403676;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int w = 10;
    int h = 3;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 212349446;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int w = 10;
    int h = 4;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 517627099;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int w = 10;
    int h = 5;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 951030965;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int w = 10;
    int h = 6;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 147316164;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int w = 10;
    int h = 7;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 468172153;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int w = 10;
    int h = 8;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 554967316;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int w = 10;
    int h = 9;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 28066586;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int w = 10;
    int h = 10;
    SmallBricks31* pObj = new SmallBricks31();
    clock_t start = clock();
    int result = pObj->countWays(w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 951846687;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22827547&rd=14548&pm=11549
********************************************************************************
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <bitset>
#include <algorithm>
#include <sstream>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <string>
#include <cstring>
 
using namespace std;
 
#define LL long long
#define LLU unsigned long long
#define sz(s) s.size()
#define clr(f, t) memset(f, t, sizeof(f))
#define all(x) (x).begin(), (x).end()
#define X first
#define Y second
#define MP(x, y) make_pair(x, y)
#define PB(x) push_back(x)
#define FR(i, a, b) for (int i(a), _b(b); i < _b; ++i)
#define FD(i, a, b) for (int i(a), _b(b); i >= _b; --i)
 
typedef pair < int, int > PII;
 
int toInt(string s){ istringstream sin(s); int t; sin>>t; return t;}
template<class T> string toString(T x){ ostringstream sout; sout<<x; return sout.str(); }
 
#define N 10
#define MOD 1000000007
 
int dp[N + 1][1 << N];
 
class SmallBricks31 {
public:
  int w, h, m;
  void dfs(int i, int k, int ns, int ps) {
    if (k == w) {
      if (!ns) return;
      dp[i + 1][ns] += dp[i][ps];
      if (dp[i + 1][ns] >= MOD) dp[i + 1][ns] -= MOD;
      return;
    }
    dfs(i, k + 1, ns, ps);
    if (ps >> k & 1)
      dfs(i, k + 1, ns | (1 << k), ps);
    if (k + 1 < w && (ps >> k & 1) && (ps >> (k + 1) & 1))
      dfs(i, k + 2, ns | (1 << k) | (1 << (k + 1)), ps);
    if (k + 2 < w && (ps >> k & 1) && (ps >> (k + 2) & 1))
      dfs(i, k + 3, ns | (1 << k) | (1 << (k + 1)) | (1 << (k + 2)), ps);
  }
    int countWays(int _w, int _h) {
      w = _w; h = _h;
      m = 1 << w;
      clr(dp, 0);
      dp[0][m - 1] = 1;
      FR(i, 0, h) FR(j, 0, m) if (dp[i][j])
        dfs(i, 0, 0, j);
      int ret = 0;
      FR(i, 0, h + 1) FR(j, 0, m) if (dp[i][j]) {
        ret += dp[i][j];
        if (ret >= MOD) ret -= MOD;
      }
        return ret;
    }
    
 
};
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/