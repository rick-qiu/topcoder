/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11317
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

class AdditionGame {
public:
    int getMaximumPoints(int A, int B, int C, int N);
};

int AdditionGame::getMaximumPoints(int A, int B, int C, int N) {
    int ret;
    return ret;
}


int test0() {
    int A = 3;
    int B = 4;
    int C = 5;
    int N = 3;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int A = 1;
    int B = 1;
    int C = 1;
    int N = 8;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
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
    int A = 3;
    int B = 5;
    int C = 48;
    int N = 40;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1140;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int A = 36;
    int B = 36;
    int C = 36;
    int N = 13;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 446;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int A = 8;
    int B = 2;
    int C = 6;
    int N = 13;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int A = 1;
    int B = 1;
    int C = 1;
    int N = 1;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
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
    int A = 50;
    int B = 50;
    int C = 50;
    int N = 150;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 3825;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int A = 1;
    int B = 1;
    int C = 1;
    int N = 150;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int A = 50;
    int B = 50;
    int C = 50;
    int N = 1;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int A = 36;
    int B = 1;
    int C = 24;
    int N = 8;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 260;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int A = 36;
    int B = 1;
    int C = 24;
    int N = 11;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 341;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int A = 36;
    int B = 1;
    int C = 24;
    int N = 12;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 366;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int A = 36;
    int B = 1;
    int C = 24;
    int N = 13;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 390;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int A = 36;
    int B = 1;
    int C = 24;
    int N = 14;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 414;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int A = 1;
    int B = 1;
    int C = 1;
    int N = 2;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int A = 1;
    int B = 1;
    int C = 1;
    int N = 3;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int A = 1;
    int B = 1;
    int C = 1;
    int N = 4;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int A = 2;
    int B = 1;
    int C = 2;
    int N = 1;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int A = 2;
    int B = 2;
    int C = 1;
    int N = 2;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int A = 1;
    int B = 2;
    int C = 2;
    int N = 3;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int A = 1;
    int B = 2;
    int C = 2;
    int N = 4;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int A = 1;
    int B = 2;
    int C = 2;
    int N = 5;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int A = 8;
    int B = 20;
    int C = 50;
    int N = 76;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1519;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int A = 8;
    int B = 50;
    int C = 20;
    int N = 33;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1124;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int A = 20;
    int B = 8;
    int C = 50;
    int N = 29;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1044;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int A = 20;
    int B = 50;
    int C = 8;
    int N = 47;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1341;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int A = 50;
    int B = 8;
    int C = 20;
    int N = 8;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 372;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int A = 50;
    int B = 20;
    int C = 8;
    int N = 17;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 714;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int A = 23;
    int B = 40;
    int C = 47;
    int N = 16;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 652;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int A = 23;
    int B = 47;
    int C = 40;
    int N = 34;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1219;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int A = 40;
    int B = 23;
    int C = 47;
    int N = 51;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1614;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int A = 40;
    int B = 47;
    int C = 23;
    int N = 34;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1219;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int A = 47;
    int B = 23;
    int C = 40;
    int N = 109;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 2223;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int A = 47;
    int B = 40;
    int C = 23;
    int N = 13;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 542;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int A = 21;
    int B = 35;
    int C = 50;
    int N = 66;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1849;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int A = 21;
    int B = 50;
    int C = 35;
    int N = 53;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1641;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int A = 35;
    int B = 21;
    int C = 50;
    int N = 17;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 715;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int A = 35;
    int B = 50;
    int C = 21;
    int N = 49;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1566;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int A = 50;
    int B = 21;
    int C = 35;
    int N = 5;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 240;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int A = 50;
    int B = 35;
    int C = 21;
    int N = 34;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1229;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int A = 25;
    int B = 46;
    int C = 48;
    int N = 73;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 2206;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int A = 25;
    int B = 48;
    int C = 46;
    int N = 28;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1135;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int A = 46;
    int B = 25;
    int C = 48;
    int N = 26;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1067;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int A = 46;
    int B = 48;
    int C = 25;
    int N = 106;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 2547;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int A = 48;
    int B = 25;
    int C = 46;
    int N = 100;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 2512;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int A = 48;
    int B = 46;
    int C = 25;
    int N = 31;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1233;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int A = 28;
    int B = 38;
    int C = 50;
    int N = 27;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1055;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int A = 28;
    int B = 50;
    int C = 38;
    int N = 22;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 894;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int A = 38;
    int B = 28;
    int C = 50;
    int N = 70;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 2046;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int A = 38;
    int B = 50;
    int C = 28;
    int N = 93;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 2322;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int A = 50;
    int B = 28;
    int C = 38;
    int N = 86;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 2257;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int A = 50;
    int B = 38;
    int C = 28;
    int N = 84;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 2235;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int A = 5;
    int B = 5;
    int C = 12;
    int N = 10;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 78;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int A = 5;
    int B = 12;
    int C = 5;
    int N = 7;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int A = 12;
    int B = 5;
    int C = 5;
    int N = 16;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int A = 12;
    int B = 12;
    int C = 5;
    int N = 4;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int A = 12;
    int B = 5;
    int C = 12;
    int N = 16;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 136;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int A = 5;
    int B = 12;
    int C = 12;
    int N = 8;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int A = 3;
    int B = 3;
    int C = 13;
    int N = 4;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int A = 3;
    int B = 13;
    int C = 3;
    int N = 15;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int A = 13;
    int B = 3;
    int C = 3;
    int N = 11;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 88;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int A = 13;
    int B = 13;
    int C = 3;
    int N = 12;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 126;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int A = 13;
    int B = 3;
    int C = 13;
    int N = 16;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 152;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int A = 3;
    int B = 13;
    int C = 13;
    int N = 15;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 146;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int A = 3;
    int B = 3;
    int C = 27;
    int N = 17;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 323;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int A = 3;
    int B = 27;
    int C = 3;
    int N = 2;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 53;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int A = 27;
    int B = 3;
    int C = 3;
    int N = 4;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 102;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int A = 27;
    int B = 27;
    int C = 3;
    int N = 3;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int A = 27;
    int B = 3;
    int C = 27;
    int N = 4;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 106;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int A = 3;
    int B = 27;
    int C = 27;
    int N = 10;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 250;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int A = 26;
    int B = 26;
    int C = 26;
    int N = 39;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 780;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int A = 26;
    int B = 26;
    int C = 26;
    int N = 40;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 793;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int A = 26;
    int B = 26;
    int C = 26;
    int N = 41;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 806;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int A = 3;
    int B = 4;
    int C = 5;
    int N = 12;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int A = 8;
    int B = 1;
    int C = 19;
    int N = 28;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 227;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int A = 3;
    int B = 13;
    int C = 2;
    int N = 18;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int A = 50;
    int B = 49;
    int C = 47;
    int N = 146;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 3628;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int A = 43;
    int B = 49;
    int C = 44;
    int N = 137;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 3161;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int A = 43;
    int B = 49;
    int C = 44;
    int N = 135;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 3160;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int A = 41;
    int B = 48;
    int C = 39;
    int N = 129;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 2817;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int A = 41;
    int B = 48;
    int C = 39;
    int N = 127;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 2816;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int A = 50;
    int B = 49;
    int C = 50;
    int N = 150;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 3775;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int A = 22;
    int B = 33;
    int C = 41;
    int N = 149;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1675;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int A = 5;
    int B = 4;
    int C = 10;
    int N = 1;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
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
    int A = 1;
    int B = 1;
    int C = 1;
    int N = 10;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int A = 2;
    int B = 3;
    int C = 4;
    int N = 15;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int A = 3;
    int B = 2;
    int C = 1;
    int N = 6;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int A = 2;
    int B = 2;
    int C = 2;
    int N = 20;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int A = 2;
    int B = 2;
    int C = 2;
    int N = 6;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int A = 1;
    int B = 1;
    int C = 1;
    int N = 12;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int A = 2;
    int B = 3;
    int C = 4;
    int N = 3;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int A = 5;
    int B = 4;
    int C = 18;
    int N = 9;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 126;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int A = 1;
    int B = 10;
    int C = 15;
    int N = 100;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 176;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int A = 5;
    int B = 4;
    int C = 1;
    int N = 4;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int A = 1;
    int B = 1;
    int C = 1;
    int N = 6;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int A = 1;
    int B = 3;
    int C = 2;
    int N = 1;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int A = 3;
    int B = 2;
    int C = 1;
    int N = 10;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int A = 5;
    int B = 6;
    int C = 1;
    int N = 6;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int A = 1;
    int B = 1;
    int C = 1;
    int N = 50;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int A = 3;
    int B = 1;
    int C = 2;
    int N = 1;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int A = 5;
    int B = 5;
    int C = 40;
    int N = 40;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 828;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int A = 1;
    int B = 1;
    int C = 1;
    int N = 5;
    AdditionGame* pObj = new AdditionGame();
    clock_t start = clock();
    int result = pObj->getMaximumPoints(A, B, C, N);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22906958&rd=14427&pm=11317
********************************************************************************
#include <iostream>
#include <sstream>
#include <utility>
#include <cstdlib>
#include <cstdio>
#include <cctype>
#include <cmath>
#include <functional>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <list>
#include <map>
#include <set>
using namespace std;
 
#define FOR(i,a,b)  for(int i=(a);i<(b);++i)
#define F(i,a)      FOR(i,0,a)
#define ALL(x)      x.begin(),x.end()
#define PB          push_back
#define S           size()
 
class AdditionGame{
  public:
  int getMaximumPoints(int a, int b, int c, int n) {
 
      int con=0;
 
      for(int k=0;k<n;k++)
      {
      if(a>=b && a>=c && a>=1){con+=a;a--;continue;}
      if(b>=a && b>=c && b>=1){con+=b;b--;continue;}
      if(c>=b && c>=a && c>=1){con+=c;c--;continue;}
        }
 
    return con;
  }
  };

********************************************************************************
*******************************************************************************/