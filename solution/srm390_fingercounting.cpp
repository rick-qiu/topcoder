/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8300
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

class FingerCounting {
public:
    int maxNumber(int weakFinger, int maxCount);
};

int FingerCounting::maxNumber(int weakFinger, int maxCount) {
    int ret;
    return ret;
}


int test0() {
    int weakFinger = 2;
    int maxCount = 3;
    FingerCounting* pObj = new FingerCounting();
    clock_t start = clock();
    int result = pObj->maxNumber(weakFinger, maxCount);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int weakFinger = 1;
    int maxCount = 0;
    FingerCounting* pObj = new FingerCounting();
    clock_t start = clock();
    int result = pObj->maxNumber(weakFinger, maxCount);
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
    int weakFinger = 5;
    int maxCount = 0;
    FingerCounting* pObj = new FingerCounting();
    clock_t start = clock();
    int result = pObj->maxNumber(weakFinger, maxCount);
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
    int weakFinger = 2;
    int maxCount = 48;
    FingerCounting* pObj = new FingerCounting();
    clock_t start = clock();
    int result = pObj->maxNumber(weakFinger, maxCount);
    clock_t end = clock();
    delete pObj;
    int expected = 193;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int weakFinger = 5;
    int maxCount = 973;
    FingerCounting* pObj = new FingerCounting();
    clock_t start = clock();
    int result = pObj->maxNumber(weakFinger, maxCount);
    clock_t end = clock();
    delete pObj;
    int expected = 7788;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int weakFinger = 3;
    int maxCount = 99999;
    FingerCounting* pObj = new FingerCounting();
    clock_t start = clock();
    int result = pObj->maxNumber(weakFinger, maxCount);
    clock_t end = clock();
    delete pObj;
    int expected = 399998;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int weakFinger = 2;
    int maxCount = 0;
    FingerCounting* pObj = new FingerCounting();
    clock_t start = clock();
    int result = pObj->maxNumber(weakFinger, maxCount);
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
    int weakFinger = 3;
    int maxCount = 0;
    FingerCounting* pObj = new FingerCounting();
    clock_t start = clock();
    int result = pObj->maxNumber(weakFinger, maxCount);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int weakFinger = 4;
    int maxCount = 0;
    FingerCounting* pObj = new FingerCounting();
    clock_t start = clock();
    int result = pObj->maxNumber(weakFinger, maxCount);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int weakFinger = 1;
    int maxCount = 1;
    FingerCounting* pObj = new FingerCounting();
    clock_t start = clock();
    int result = pObj->maxNumber(weakFinger, maxCount);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int weakFinger = 2;
    int maxCount = 1;
    FingerCounting* pObj = new FingerCounting();
    clock_t start = clock();
    int result = pObj->maxNumber(weakFinger, maxCount);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int weakFinger = 3;
    int maxCount = 1;
    FingerCounting* pObj = new FingerCounting();
    clock_t start = clock();
    int result = pObj->maxNumber(weakFinger, maxCount);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int weakFinger = 4;
    int maxCount = 1;
    FingerCounting* pObj = new FingerCounting();
    clock_t start = clock();
    int result = pObj->maxNumber(weakFinger, maxCount);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int weakFinger = 5;
    int maxCount = 1;
    FingerCounting* pObj = new FingerCounting();
    clock_t start = clock();
    int result = pObj->maxNumber(weakFinger, maxCount);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int weakFinger = 1;
    int maxCount = 45326;
    FingerCounting* pObj = new FingerCounting();
    clock_t start = clock();
    int result = pObj->maxNumber(weakFinger, maxCount);
    clock_t end = clock();
    delete pObj;
    int expected = 362608;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int weakFinger = 2;
    int maxCount = 56912;
    FingerCounting* pObj = new FingerCounting();
    clock_t start = clock();
    int result = pObj->maxNumber(weakFinger, maxCount);
    clock_t end = clock();
    delete pObj;
    int expected = 227649;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int weakFinger = 3;
    int maxCount = 11223;
    FingerCounting* pObj = new FingerCounting();
    clock_t start = clock();
    int result = pObj->maxNumber(weakFinger, maxCount);
    clock_t end = clock();
    delete pObj;
    int expected = 44894;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int weakFinger = 4;
    int maxCount = 53276;
    FingerCounting* pObj = new FingerCounting();
    clock_t start = clock();
    int result = pObj->maxNumber(weakFinger, maxCount);
    clock_t end = clock();
    delete pObj;
    int expected = 213107;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int weakFinger = 5;
    int maxCount = 327;
    FingerCounting* pObj = new FingerCounting();
    clock_t start = clock();
    int result = pObj->maxNumber(weakFinger, maxCount);
    clock_t end = clock();
    delete pObj;
    int expected = 2620;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int weakFinger = 1;
    int maxCount = 9325;
    FingerCounting* pObj = new FingerCounting();
    clock_t start = clock();
    int result = pObj->maxNumber(weakFinger, maxCount);
    clock_t end = clock();
    delete pObj;
    int expected = 74600;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int weakFinger = 2;
    int maxCount = 7332;
    FingerCounting* pObj = new FingerCounting();
    clock_t start = clock();
    int result = pObj->maxNumber(weakFinger, maxCount);
    clock_t end = clock();
    delete pObj;
    int expected = 29329;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int weakFinger = 3;
    int maxCount = 9125;
    FingerCounting* pObj = new FingerCounting();
    clock_t start = clock();
    int result = pObj->maxNumber(weakFinger, maxCount);
    clock_t end = clock();
    delete pObj;
    int expected = 36502;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int weakFinger = 4;
    int maxCount = 6326;
    FingerCounting* pObj = new FingerCounting();
    clock_t start = clock();
    int result = pObj->maxNumber(weakFinger, maxCount);
    clock_t end = clock();
    delete pObj;
    int expected = 25307;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int weakFinger = 5;
    int maxCount = 77889;
    FingerCounting* pObj = new FingerCounting();
    clock_t start = clock();
    int result = pObj->maxNumber(weakFinger, maxCount);
    clock_t end = clock();
    delete pObj;
    int expected = 623116;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int weakFinger = 1;
    int maxCount = 19192;
    FingerCounting* pObj = new FingerCounting();
    clock_t start = clock();
    int result = pObj->maxNumber(weakFinger, maxCount);
    clock_t end = clock();
    delete pObj;
    int expected = 153536;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int weakFinger = 2;
    int maxCount = 46533;
    FingerCounting* pObj = new FingerCounting();
    clock_t start = clock();
    int result = pObj->maxNumber(weakFinger, maxCount);
    clock_t end = clock();
    delete pObj;
    int expected = 186135;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int weakFinger = 3;
    int maxCount = 11;
    FingerCounting* pObj = new FingerCounting();
    clock_t start = clock();
    int result = pObj->maxNumber(weakFinger, maxCount);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int weakFinger = 4;
    int maxCount = 97;
    FingerCounting* pObj = new FingerCounting();
    clock_t start = clock();
    int result = pObj->maxNumber(weakFinger, maxCount);
    clock_t end = clock();
    delete pObj;
    int expected = 389;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int weakFinger = 5;
    int maxCount = 255;
    FingerCounting* pObj = new FingerCounting();
    clock_t start = clock();
    int result = pObj->maxNumber(weakFinger, maxCount);
    clock_t end = clock();
    delete pObj;
    int expected = 2044;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int weakFinger = 5;
    int maxCount = 32768;
    FingerCounting* pObj = new FingerCounting();
    clock_t start = clock();
    int result = pObj->maxNumber(weakFinger, maxCount);
    clock_t end = clock();
    delete pObj;
    int expected = 262148;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int weakFinger = 1;
    int maxCount = 2;
    FingerCounting* pObj = new FingerCounting();
    clock_t start = clock();
    int result = pObj->maxNumber(weakFinger, maxCount);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int weakFinger = 1;
    int maxCount = 3;
    FingerCounting* pObj = new FingerCounting();
    clock_t start = clock();
    int result = pObj->maxNumber(weakFinger, maxCount);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int weakFinger = 2;
    int maxCount = 2;
    FingerCounting* pObj = new FingerCounting();
    clock_t start = clock();
    int result = pObj->maxNumber(weakFinger, maxCount);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int weakFinger = 5;
    int maxCount = 99999;
    FingerCounting* pObj = new FingerCounting();
    clock_t start = clock();
    int result = pObj->maxNumber(weakFinger, maxCount);
    clock_t end = clock();
    delete pObj;
    int expected = 799996;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int weakFinger = 1;
    int maxCount = 1000;
    FingerCounting* pObj = new FingerCounting();
    clock_t start = clock();
    int result = pObj->maxNumber(weakFinger, maxCount);
    clock_t end = clock();
    delete pObj;
    int expected = 8000;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int weakFinger = 3;
    int maxCount = 2;
    FingerCounting* pObj = new FingerCounting();
    clock_t start = clock();
    int result = pObj->maxNumber(weakFinger, maxCount);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int weakFinger = 1;
    int maxCount = 15;
    FingerCounting* pObj = new FingerCounting();
    clock_t start = clock();
    int result = pObj->maxNumber(weakFinger, maxCount);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22628195&rd=11124&pm=8300
********************************************************************************
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
 
class FingerCounting {
public:
  int maxNumber(int, int);
};
 
int FingerCounting::maxNumber(int weakFinger, int maxCount) {
  int x=1,y=0,a=1;
  while(1)
  {
  if(x==weakFinger&&maxCount==0)break;
 
  if(x==weakFinger)maxCount--;
  x+=a;
  y++;
  if(x==5)a=-a;
  if(x==1)a=-a;
  }
  return y;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/