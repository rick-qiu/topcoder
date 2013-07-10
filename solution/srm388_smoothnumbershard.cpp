/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8565
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

class SmoothNumbersHard {
public:
    int countSmoothNumbers(int N, int k);
};

int SmoothNumbersHard::countSmoothNumbers(int N, int k) {
    int ret;
    return ret;
}


int test0() {
    int N = 10;
    int k = 3;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
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
    int N = 10;
    int k = 4;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 15;
    int k = 3;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 5;
    int k = 20;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 5000000;
    int k = 1000;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1196525;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 1;
    int k = 1;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
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
    int N = 1;
    int k = 100;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
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
    int N = 100000;
    int k = 1;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
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
    int k = 2;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 99999;
    int k = 100;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
    clock_t end = clock();
    delete pObj;
    int expected = 17441;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 99999;
    int k = 96;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
    clock_t end = clock();
    delete pObj;
    int expected = 16760;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 99999;
    int k = 97;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
    clock_t end = clock();
    delete pObj;
    int expected = 17441;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 96;
    int k = 97;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
    clock_t end = clock();
    delete pObj;
    int expected = 96;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 96;
    int k = 96;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
    clock_t end = clock();
    delete pObj;
    int expected = 96;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 121;
    int k = 11;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 168;
    int k = 13;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
    clock_t end = clock();
    delete pObj;
    int expected = 87;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 50;
    int k = 7;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 50000;
    int k = 10;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
    clock_t end = clock();
    delete pObj;
    int expected = 566;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 65536;
    int k = 2;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 4999990;
    int k = 1000;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1196523;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 5000000;
    int k = 996;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1192345;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 5000000;
    int k = 997;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1196525;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 5000000;
    int k = 5;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
    clock_t end = clock();
    delete pObj;
    int expected = 682;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 950;
    int k = 1000;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
    clock_t end = clock();
    delete pObj;
    int expected = 950;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 123456;
    int k = 123;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
    clock_t end = clock();
    delete pObj;
    int expected = 23855;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 5000;
    int k = 1;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 5000000;
    int k = 731;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1015104;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 4989898;
    int k = 1000;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1194680;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 5000000;
    int k = 500;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
    clock_t end = clock();
    delete pObj;
    int expected = 816749;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 4999999;
    int k = 600;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
    clock_t end = clock();
    delete pObj;
    int expected = 903642;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 5000000;
    int k = 343;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
    clock_t end = clock();
    delete pObj;
    int expected = 618234;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 5000000;
    int k = 998;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1196525;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 5000000;
    int k = 123;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
    clock_t end = clock();
    delete pObj;
    int expected = 241786;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 5000000;
    int k = 999;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1196525;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 5000000;
    int k = 1;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 5000000;
    int k = 527;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
    clock_t end = clock();
    delete pObj;
    int expected = 842818;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 4987654;
    int k = 987;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1185903;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 4000000;
    int k = 33;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
    clock_t end = clock();
    delete pObj;
    int expected = 33073;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 5000000;
    int k = 978;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1183920;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 5000000;
    int k = 717;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1004649;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 4999678;
    int k = 675;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
    clock_t end = clock();
    delete pObj;
    int expected = 977640;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 4888887;
    int k = 459;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
    clock_t end = clock();
    delete pObj;
    int expected = 756789;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 4123654;
    int k = 123;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
    clock_t end = clock();
    delete pObj;
    int expected = 215681;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 4956349;
    int k = 997;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1188530;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 5000000;
    int k = 991;
    SmoothNumbersHard* pObj = new SmoothNumbersHard();
    clock_t start = clock();
    int result = pObj->countSmoothNumbers(N, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1192345;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22711420&rd=11122&pm=8565
********************************************************************************
#include <iostream> 
#include <fstream> 
#include <math.h> 
#include <string> 
#include <vector> 
#include <algorithm> 
using namespace std; 
 
class SmoothNumbersHard 
{ 
public: 
  int countSmoothNumbers(int N, int k) 
  { 
    vector <int> a(N+1); 
    vector <int> b(N+1); 
    long i,j; 
    for(i=2;i<=N;i++) a[i]=1; 
    for(i=2;i<=N;i++) 
      if(a[i]==1) 
      { 
        b[i]=i; 
        for(j=2;i*j<=N;j++)  
        { 
          a[i*j]=0; 
          b[i*j]=i; 
        } 
      } 
    int num=1; 
    for(i=2;i<=N;i++)  
      if(b[i]<=k) num++; 
    return num; 
  } 
};

********************************************************************************
*******************************************************************************/