/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12189
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

class MuddyRoad2 {
public:
    int theCount(int N, int muddyCount);
};

int MuddyRoad2::theCount(int N, int muddyCount) {
    int ret;
    return ret;
}


int test0() {
    int N = 5;
    int muddyCount = 1;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
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
    int N = 5;
    int muddyCount = 2;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 10;
    int muddyCount = 4;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 65;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 314;
    int muddyCount = 78;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 498142902;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 555;
    int muddyCount = 222;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 541606281;
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
    int muddyCount = 0;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 3;
    int muddyCount = 0;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
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
    int N = 3;
    int muddyCount = 1;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 4;
    int muddyCount = 0;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 4;
    int muddyCount = 1;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
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
    int N = 4;
    int muddyCount = 2;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 5;
    int muddyCount = 0;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 5;
    int muddyCount = 3;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 555;
    int muddyCount = 0;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 555;
    int muddyCount = 1;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 368;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 555;
    int muddyCount = 2;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 101568;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 555;
    int muddyCount = 553;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 555;
    int muddyCount = 552;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 553;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 555;
    int muddyCount = 551;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 152628;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 551;
    int muddyCount = 44;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 370263114;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 550;
    int muddyCount = 32;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 191831629;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 552;
    int muddyCount = 408;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 367514370;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 550;
    int muddyCount = 155;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 206394093;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 552;
    int muddyCount = 490;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 79384035;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 550;
    int muddyCount = 100;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 214249245;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 553;
    int muddyCount = 449;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 189651465;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 552;
    int muddyCount = 28;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 388963015;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 555;
    int muddyCount = 79;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 275324190;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 555;
    int muddyCount = 497;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 121006185;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 551;
    int muddyCount = 300;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 433110435;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 553;
    int muddyCount = 481;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 148498515;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 552;
    int muddyCount = 404;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 469165365;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 554;
    int muddyCount = 145;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 260141345;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 553;
    int muddyCount = 155;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 438163677;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 555;
    int muddyCount = 130;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 263039908;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 555;
    int muddyCount = 248;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 257269323;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 551;
    int muddyCount = 133;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 97420847;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 552;
    int muddyCount = 504;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 258794445;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 555;
    int muddyCount = 179;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 398531700;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 185;
    int muddyCount = 45;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 76442085;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 263;
    int muddyCount = 85;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 496249136;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 11;
    int muddyCount = 0;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 431;
    int muddyCount = 426;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 13067054;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 313;
    int muddyCount = 18;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 449909475;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 389;
    int muddyCount = 179;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 96532467;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 190;
    int muddyCount = 104;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 182989420;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 420;
    int muddyCount = 103;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 476477145;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 210;
    int muddyCount = 73;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 376235647;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 427;
    int muddyCount = 273;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 228160755;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 202;
    int muddyCount = 137;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 267944565;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 165;
    int muddyCount = 59;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 40455450;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 190;
    int muddyCount = 65;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 202196919;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 26;
    int muddyCount = 15;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 1307504;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 536;
    int muddyCount = 374;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 216998280;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 89;
    int muddyCount = 19;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 236601030;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 438;
    int muddyCount = 311;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 488030553;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 123;
    int muddyCount = 96;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 472504689;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 500;
    int muddyCount = 4;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 522246270;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 468;
    int muddyCount = 2;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 72075;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 551;
    int muddyCount = 537;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 33869106;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 254;
    int muddyCount = 216;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 55183095;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 58;
    int muddyCount = 6;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 30867648;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 293;
    int muddyCount = 207;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 201267795;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 481;
    int muddyCount = 8;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 553652025;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 16;
    int muddyCount = 3;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 304;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 307;
    int muddyCount = 32;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 205435426;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 165;
    int muddyCount = 124;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 168511185;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 451;
    int muddyCount = 17;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 534049564;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 360;
    int muddyCount = 203;
    MuddyRoad2* pObj = new MuddyRoad2();
    clock_t start = clock();
    int result = pObj->theCount(N, muddyCount);
    clock_t end = clock();
    delete pObj;
    int expected = 222879393;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23004516&rd=15177&pm=12189
********************************************************************************
#include <cstdio> 
#include <iostream> 
#include <cstring> 
#include <cstdlib> 
#include <cmath> 
#include <set> 
#include <algorithm> 
#include <map> 
#include <bitset> 
#include <vector> 
#include <ctime> 
 
#define maxlongint 2147483647 
 
using namespace std; 
const int bigp=555555555; 
 
int f[559][559][3][3]; 
 
class MuddyRoad2 { 
public: 
   int theCount( int n, int kv ) { 
       int sc; 
       memset(f,0,sizeof(f)); 
       f[1][0][1][2]=1; 
       for (int i=1;i<n;i++) 
           for (int j=0;j<=kv;j++) 
               for (int i1=0;i1<=2;i1++) 
                   for (int j1=0;j1<=2;j1++) 
                        if (f[i][j][i1][j1]!=0) 
                        { 
                            //next 0 
                            sc=0; 
                            if (i1==1) sc++; 
                            if (j1==1) sc++; 
                            f[i+1][j][sc%2][i1]=(f[i+1][j][sc%2][i1]+f[i][j][i1][j1])%bigp; 
                            //next 1 
                            f[i+1][j+1][2][i1]=(f[i+1][j+1][2][i1]+f[i][j][i1][j1])%bigp; 
                        } 
       return (f[n][kv][0][0]+f[n][kv][0][1]+f[n][kv][0][2])%bigp; 
   } 
}; 
 
 
 
// Powered by FileEdit
// Powered by moj 4.17 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/