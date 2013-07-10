/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11778
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

class FoxAndGreed {
public:
    int count(int H, int W, int S);
};

int FoxAndGreed::count(int H, int W, int S) {
    int ret;
    return ret;
}


int test0() {
    int H = 2;
    int W = 2;
    int S = 1;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
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
    int H = 2;
    int W = 2;
    int S = 2;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
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
    int H = 2;
    int W = 2;
    int S = 0;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int H = 47;
    int W = 58;
    int S = 100;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 1301;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int H = 1234;
    int W = 2345;
    int S = 97;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 8894;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int H = 1;
    int W = 2500;
    int S = 100;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 7254;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int H = 1;
    int W = 2499;
    int S = 99;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 3246;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int H = 2500;
    int W = 1;
    int S = 100;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 7254;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int H = 2499;
    int W = 1;
    int S = 99;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 3246;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int H = 1;
    int W = 1;
    int S = 0;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int H = 1;
    int W = 1;
    int S = 1;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int H = 1;
    int W = 1;
    int S = 100;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
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
    int H = 1;
    int W = 1234;
    int S = 0;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
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
    int H = 1234;
    int W = 1;
    int S = 0;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
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
    int H = 13;
    int W = 25;
    int S = 0;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int H = 13;
    int W = 25;
    int S = 1;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 1716;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int H = 1134;
    int W = 2241;
    int S = 1;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 1971;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int H = 1134;
    int W = 2241;
    int S = 0;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int H = 2429;
    int W = 2152;
    int S = 0;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int H = 3;
    int W = 3;
    int S = 0;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int H = 1611;
    int W = 2123;
    int S = 61;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 2230;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int H = 139;
    int W = 967;
    int S = 85;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 7925;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int H = 82;
    int W = 1006;
    int S = 72;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 2353;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int H = 2420;
    int W = 1268;
    int S = 55;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 7599;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int H = 1431;
    int W = 1961;
    int S = 93;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 2064;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int H = 2333;
    int W = 542;
    int S = 27;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 3106;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int H = 1405;
    int W = 2023;
    int S = 40;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 1981;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int H = 1005;
    int W = 339;
    int S = 98;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 8994;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int H = 1130;
    int W = 908;
    int S = 85;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 2023;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int H = 296;
    int W = 1669;
    int S = 74;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 1225;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int H = 872;
    int W = 519;
    int S = 36;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 7051;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int H = 2204;
    int W = 679;
    int S = 9;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 6356;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int H = 1306;
    int W = 850;
    int S = 99;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 7047;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int H = 370;
    int W = 1860;
    int S = 83;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 9749;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int H = 588;
    int W = 2044;
    int S = 67;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 1399;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int H = 1899;
    int W = 2143;
    int S = 75;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 6103;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int H = 770;
    int W = 862;
    int S = 35;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 4226;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int H = 70;
    int W = 1433;
    int S = 27;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 1456;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int H = 1573;
    int W = 2084;
    int S = 77;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 7863;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int H = 273;
    int W = 587;
    int S = 78;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 4121;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int H = 960;
    int W = 600;
    int S = 83;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 4280;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int H = 2434;
    int W = 897;
    int S = 9;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 9372;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int H = 1295;
    int W = 550;
    int S = 80;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 669;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int H = 1866;
    int W = 2148;
    int S = 32;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 9241;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int H = 999;
    int W = 678;
    int S = 76;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 184;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int H = 711;
    int W = 2345;
    int S = 68;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 7021;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int H = 608;
    int W = 1457;
    int S = 1;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 7194;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int H = 1722;
    int W = 2007;
    int S = 100;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 3537;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int H = 1069;
    int W = 631;
    int S = 73;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 2326;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int H = 1087;
    int W = 2344;
    int S = 65;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 4769;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int H = 103;
    int W = 1346;
    int S = 48;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 6147;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int H = 219;
    int W = 1994;
    int S = 93;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 4801;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int H = 1577;
    int W = 1928;
    int S = 99;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 4212;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int H = 961;
    int W = 332;
    int S = 65;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 8791;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int H = 2142;
    int W = 1489;
    int S = 7;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 8693;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int H = 2022;
    int W = 1219;
    int S = 60;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 2497;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int H = 70;
    int W = 1807;
    int S = 46;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 3453;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int H = 306;
    int W = 2171;
    int S = 15;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 1365;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int H = 2403;
    int W = 2018;
    int S = 94;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 3564;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int H = 2300;
    int W = 1292;
    int S = 33;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 2870;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int H = 2313;
    int W = 1447;
    int S = 22;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 3093;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int H = 1826;
    int W = 1544;
    int S = 42;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 9004;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int H = 499;
    int W = 1350;
    int S = 17;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 4815;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int H = 1796;
    int W = 1371;
    int S = 76;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 4708;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int H = 1130;
    int W = 298;
    int S = 21;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 7046;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int H = 826;
    int W = 184;
    int S = 56;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 1726;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int H = 749;
    int W = 373;
    int S = 73;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 3760;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int H = 892;
    int W = 776;
    int S = 18;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 3928;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int H = 1098;
    int W = 472;
    int S = 88;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 8261;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int H = 152;
    int W = 1702;
    int S = 16;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 6676;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int H = 2500;
    int W = 2500;
    int S = 100;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 6038;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int H = 2500;
    int W = 2500;
    int S = 90;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 7464;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int H = 2500;
    int W = 2500;
    int S = 80;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 6857;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int H = 2500;
    int W = 2500;
    int S = 70;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 2498;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int H = 2500;
    int W = 2500;
    int S = 60;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 355;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int H = 2500;
    int W = 2500;
    int S = 50;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 9910;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int H = 2500;
    int W = 2500;
    int S = 40;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 8090;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int H = 2500;
    int W = 2500;
    int S = 30;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 7413;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int H = 2500;
    int W = 2500;
    int S = 20;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 358;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int H = 2500;
    int W = 2500;
    int S = 10;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 2733;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int H = 2500;
    int W = 2500;
    int S = 0;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int H = 2500;
    int W = 2499;
    int S = 100;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 5105;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int H = 2499;
    int W = 2500;
    int S = 100;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 7913;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int H = 2499;
    int W = 2499;
    int S = 99;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 2045;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int H = 2500;
    int W = 2500;
    int S = 99;
    FoxAndGreed* pObj = new FoxAndGreed();
    clock_t start = clock();
    int result = pObj->count(H, W, S);
    clock_t end = clock();
    delete pObj;
    int expected = 4967;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=15037&pm=11778
********************************************************************************
#include <vector> 
#include <list> 
#include <map> 
#include <set> 
#include <deque> 
#include <queue> 
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
#include <cctype> 
#include <string> 
#include <cstring> 
#include <cstdio> 
#include <cmath> 
#include <cstdlib> 
#include <ctime> 
 
using namespace std; 
 
template<class T> inline T euclide(T a,T b,T &x,T &y) 
  {if(a<0){T d=euclide(-a,b,x,y);x=-x;return d;} 
   if(b<0){T d=euclide(a,-b,x,y);y=-y;return d;} 
   if(b==0){x=1;y=0;return a;}else{T d=euclide(b,a%b,x,y);T t=x;x=y;y=t-(a/b)*y;return d;}} 
 
const int MOD=10007; 
 
#define MUL(a,b) ((a)*(b)%MOD) 
#define ADD(a,b) (((a)+(b))%MOD) 
#define SUB(a,b) (((a)-(b))%MOD) 
 
inline void addto(int &a,int b) { a+=b; if (a>=MOD) a-=MOD; } 
 
class FoxAndGreed 
{ 
public: 
  int factorial[10000],factorial_inv[10000]; 
  int f[6000][105],f1[6000][105],f2[6000][105]; 
  int ep[2600*2600]; 
  int get_inv(int a) 
  { 
    int x,y; 
    euclide(a,MOD,x,y); 
    x%=MOD; 
    if (x<0) x+=MOD; 
    return x; 
  } 
  int get_c(int n,int m) 
  { 
    if (n<0 || m<0 || m>n) return 0; 
    return MUL(factorial[n],MUL(factorial_inv[m],factorial_inv[n-m])); 
  } 
  void preprocess(int n,int s) 
  { 
    memset(f,0,sizeof(f)); 
    memset(f1,0,sizeof(f1)); 
    memset(f2,0,sizeof(f2)); 
    f[0][0]=f1[0][0]=f2[0][0]=1; 
    for (int i=0;i<n;i++) for (int p=0;p<=s;p++)  
    { 
      if (f[i][p]) for (int h=0;p+h<=s;h++) addto(f[i+1][p+h],f[i][p]); 
      if (f1[i][p]) for (int h=0;p+h<=s;h++) addto(f1[i+1][p+h],MUL(h+1,f1[i][p])); 
      if (f2[i][p]) for (int h=0;p+h<=s;h++) addto(f2[i+1][p+h],MUL(h,f2[i][p])); 
    } 
  } 
  int count(int n, int m, int s) 
  { 
    for (int i=0;i<2600*2600;i++) 
      ep[i]=(i==0)?1:MUL(ep[i-1],s+1); 
    for (int i=0;i<10000;i++) 
    { 
      factorial[i]=(i==0)?1:MUL(factorial[i-1],i); 
      factorial_inv[i]=get_inv(factorial[i]); 
    } 
    preprocess(max(n,m)+2,s); 
    if (n==1 || m==1) return f[n*m-1][s]; 
    int ret=0; 
    for (int x=0;x<n;x++) for (int y=0;y<m;y++) 
    { 
      if (x==n-1 && y==m-1) continue; 
      if (x==n-1) 
      { 
        int ps=(y+n-1)*2+(m-1-y); 
        int tmp[105]; 
        memset(tmp,0,sizeof(tmp)); 
        for (int s1=0;s1<=s;s1++) for (int s2=0;s1+s2<=s;s2++) 
        { 
          int t=MUL(f1[y][s1],f2[n-1][s2]); 
          t=MUL(t,get_c(x+y-1,y)); 
          addto(tmp[s1+s2],t); 
        } 
        for (int s0=0;s0<=s;s0++) 
        { 
          int t=MUL(tmp[s0],f[m-1-y][s-s0]); 
          addto(ret,MUL(t,ep[n*m-1-ps])); 
        } 
      } 
      if (y==m-1) 
      { 
        int ps=(m-1+x)*2+(n-1-x); 
        int tmp[105]; 
        memset(tmp,0,sizeof(tmp)); 
        for (int s1=0;s1<=s;s1++) for (int s2=0;s1+s2<=s;s2++) 
        { 
          int t=MUL(f1[m-1][s1],f2[x][s2]); 
          t=MUL(t,get_c(x+y-1,x)); 
          addto(tmp[s1+s2],t); 
        } 
        for (int s0=0;s0<=s;s0++) 
        { 
          int t=MUL(tmp[s0],f[n-1-x][s-s0]); 
          addto(ret,MUL(t,ep[n*m-1-ps])); 
        } 
      } 
    } 
    return ret; 
  } 
};

********************************************************************************
*******************************************************************************/