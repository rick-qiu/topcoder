/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11435
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

class YetAnotherORProblem2 {
public:
    int countSequences(int N, int R);
};

int YetAnotherORProblem2::countSequences(int N, int R) {
    int ret;
    return ret;
}


int test0() {
    int N = 2;
    int R = 2;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 2;
    int R = 3;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 3;
    int R = 3;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 7;
    int R = 1023;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 73741815;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 2;
    int R = 1;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 2;
    int R = 1024;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 61097;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 2;
    int R = 15000;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 4628299;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 2;
    int R = 8192;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 1610707;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 2;
    int R = 8191;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 1594323;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 2;
    int R = 12414;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 3859991;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 3;
    int R = 1;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 3;
    int R = 7;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 3;
    int R = 81;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 11980;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 3;
    int R = 597;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 670708;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 3;
    int R = 4235;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 30295792;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 3;
    int R = 11111;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 208187968;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 3;
    int R = 14336;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 256383985;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 10;
    int R = 14336;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 713476067;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 10;
    int R = 14335;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 713485067;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 10;
    int R = 8192;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 710933233;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 10;
    int R = 15000;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 604862946;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 10;
    int R = 14889;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 122153261;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 10;
    int R = 14999;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 504862946;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 4;
    int R = 2;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 4;
    int R = 412;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 1840049;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 4;
    int R = 777;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 8797045;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 4;
    int R = 1000;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 9762149;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 4;
    int R = 10000;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 331991665;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 5;
    int R = 5;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 186;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 5;
    int R = 2048;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 606937681;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 5;
    int R = 2166;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 236906422;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 5;
    int R = 4842;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 524164130;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 5;
    int R = 11555;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 153919913;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 6;
    int R = 1;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 6;
    int R = 124;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 823465;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 6;
    int R = 8000;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 881512537;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 6;
    int R = 8001;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 881792473;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 6;
    int R = 8190;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 889009537;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 6;
    int R = 8134;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 888746881;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 6;
    int R = 14123;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 300553945;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 7;
    int R = 9;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 3256;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 7;
    int R = 898;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 66473638;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 7;
    int R = 1900;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 575048607;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 7;
    int R = 2011;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 589702008;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 7;
    int R = 3093;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 991581192;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 7;
    int R = 8900;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 987061820;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 7;
    int R = 9999;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 721994547;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 7;
    int R = 15000;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 536763508;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 8;
    int R = 7;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 729;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 8;
    int R = 8;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 4825;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 8;
    int R = 13;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 6489;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 8;
    int R = 422;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 382371713;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 8;
    int R = 4774;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 38236942;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 8;
    int R = 9041;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 696657728;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 8;
    int R = 14336;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 463250579;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 8;
    int R = 14136;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 164677824;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 8;
    int R = 14333;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 743773888;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 8;
    int R = 14408;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 362174879;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 8;
    int R = 14493;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 949082868;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 8;
    int R = 15000;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 621910852;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 9;
    int R = 6;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 991;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 9;
    int R = 99;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 9756100;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 9;
    int R = 999;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 999828919;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 9;
    int R = 9999;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 928944134;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 9;
    int R = 8092;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 982796158;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 9;
    int R = 14599;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 145822809;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 9;
    int R = 14995;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 401807800;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 9;
    int R = 15000;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 497998621;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 10;
    int R = 13533;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 948229035;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 10;
    int R = 13900;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 694816363;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 10;
    int R = 14208;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 764767976;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 10;
    int R = 12954;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 660459545;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 9;
    int R = 12954;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 575289095;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 10;
    int R = 13478;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 39129197;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 9;
    int R = 14444;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 888515420;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int N = 2;
    int R = 10;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int N = 10;
    int R = 12345;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 846521329;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int N = 9;
    int R = 14297;
    YetAnotherORProblem2* pObj = new YetAnotherORProblem2();
    clock_t start = clock();
    int result = pObj->countSequences(N, R);
    clock_t end = clock();
    delete pObj;
    int expected = 990869599;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=23001116&rd=14437&pm=11435
********************************************************************************
#include <iostream> 
#include <algorithm> 
#include <vector> 
#include <string> 
 
using namespace std; 
 
const int md = 1000000009; 
 
int f[11][32768]; 
 
class YetAnotherORProblem2 
{ 
public: 
  int countSequences(int N, int R) 
  { 
    memset(f, 0, sizeof(f)); 
    for (int i = 0; i <= R; i ++) 
      f[0][i] = 1; 
    for (int i = 1; i < N; i ++) 
      for (int j = 0; j < 32768; j ++) 
      { 
        int y = j; 
        f[i][j] = (f[i][j] + f[i-1][j]) % md; 
        for (int z = y & (-y); z != 0; z = ((z | (~y)) +1) & y) 
          if (z <= R) 
            f[i][j] = (f[i][j] + f[i-1][j-z]) % md; 
      } 
    int ans = 0; 
    for (int i = 0; i < 32768; i ++) 
      ans = (ans + f[N-1][i]) % md; 
    return ans; 
  } 
};

********************************************************************************
*******************************************************************************/