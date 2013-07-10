/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8705
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

class RoundAboutCircle {
public:
    int maxScore(int N);
};

int RoundAboutCircle::maxScore(int N) {
    int ret;
    return ret;
}


int test0() {
    int N = 4;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
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
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 17;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 566;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 176;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 1;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 200000;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 18707;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 99974;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 14885;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 199999;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 27604;
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
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
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
    int N = 3;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 6;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 12;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 30;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 42;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 918;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 134;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 2412;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 263;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 5517;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 460;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 13788;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 1149;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 21177;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 1583;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 29052;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 2000;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 52497;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 3206;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 80100;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 4548;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 94302;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 5118;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 100037;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 14868;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 148518;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 8052;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 176706;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 9228;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 192636;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 9834;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 198162;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 10026;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 199350;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 10062;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 199926;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 10080;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 199971;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 10086;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 199998;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 10080;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 128;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 218;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 563;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 247;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 836;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 281;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 1900;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 494;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 3001;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 759;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 4583;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 1021;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 9515;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 2070;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 19606;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 3802;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 32768;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 5690;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 40054;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 6677;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 55651;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 9363;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 65270;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 10574;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 95851;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 14338;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 101027;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 15157;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 125999;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 18637;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 154651;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 22817;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 185225;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 26549;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 196058;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 27392;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 198616;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 27784;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 199912;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 27940;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 199946;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 27942;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 199952;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 27946;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 198765;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 10044;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 192342;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 17865;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 199997;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 18966;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 199943;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 27909;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 199000;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 27489;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 187549;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 26156;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 189999;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 9720;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 123533;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 18035;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 46573;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 5176;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 199995;
    RoundAboutCircle* pObj = new RoundAboutCircle();
    clock_t start = clock();
    int result = pObj->maxScore(N);
    clock_t end = clock();
    delete pObj;
    int expected = 18417;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=11126&pm=8705
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
 
template<class T> inline void checkmax(T &a,T b){if(b>a) a=b;}
 
const int maxn=200000+5;
 
class RoundAboutCircle
{
public:
  int n,size;
  int next[maxn],deg[maxn],queue[maxn];
  int f[maxn];
  int maxScore(int _n)
  {
    n=_n;
    for (int i=1;i<=n;i++)
    {
      int d=0;
      for (int m=i;m>0;m/=10) d+=m%10;
      next[i]=(i+d-1)%n+1;
    }
    size=0;
    for (int i=1;i<=n;i++) deg[i]=0;
    for (int i=1;i<=n;i++) deg[next[i]]++;
    for (int i=1;i<=n;i++) if (deg[i]==0) queue[++size]=i;
    for (int cl=1;cl<=size;cl++)
    {
      int k=queue[cl];
      if ((--deg[next[k]])==0)
        queue[++size]=next[k];
    }
    for (int i=1;i<=n;i++) f[i]=-1;
    for (int i=1;i<=n;i++) if (f[i]<0 && deg[i]>0)
    {
      int C=1;
      for (int k=next[i];k!=i;k=next[k]) C++;
      for (int k=i;f[k]<0;k=next[k]) f[k]=C;
    }
    for (int cl=size;cl>=1;cl--)
    {
      int k=queue[cl];
      f[k]=f[next[k]]+1;
    }
    int result=0;
    for (int i=1;i<=n;i++) checkmax(result,f[i]);
    return result;
  }
};

********************************************************************************
*******************************************************************************/