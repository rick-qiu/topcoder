/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12104
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

class KingdomAndCities {
public:
    int howMany(int N, int M, int K);
};

int KingdomAndCities::howMany(int N, int M, int K) {
    int ret;
    return ret;
}


int test0() {
    int N = 3;
    int M = 0;
    int K = 3;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 4;
    int M = 1;
    int K = 4;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
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
    int N = 5;
    int M = 2;
    int K = 11;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
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
    int M = 0;
    int K = 8;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 10;
    int M = 2;
    int K = 20;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 150810825;
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
    int M = 0;
    int K = 1;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
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
    int N = 1;
    int M = 1;
    int K = 1;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
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
    int M = 0;
    int K = 1;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
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
    int M = 2;
    int K = 2;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
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
    int N = 2;
    int M = 1;
    int K = 1;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
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
    int N = 5;
    int M = 2;
    int K = 3;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
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
    int N = 5;
    int M = 0;
    int K = 3;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
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
    int N = 6;
    int M = 1;
    int K = 4;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 6;
    int M = 2;
    int K = 4;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 6;
    int M = 0;
    int K = 4;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 16;
    int M = 0;
    int K = 49;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 48360829;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 49;
    int M = 1;
    int K = 29;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 25;
    int M = 1;
    int K = 33;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 506402538;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 8;
    int M = 1;
    int K = 8;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 578907;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 4;
    int M = 2;
    int K = 34;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 28;
    int M = 0;
    int K = 4;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 29;
    int M = 0;
    int K = 13;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 11;
    int M = 0;
    int K = 31;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 856255304;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 14;
    int M = 0;
    int K = 1;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 31;
    int M = 1;
    int K = 35;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 639226707;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 10;
    int M = 2;
    int K = 42;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 8;
    int M = 2;
    int K = 46;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 39;
    int M = 0;
    int K = 19;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 23;
    int M = 2;
    int K = 29;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 200458943;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 30;
    int M = 2;
    int K = 35;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 409602685;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 14;
    int M = 0;
    int K = 6;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 19;
    int M = 1;
    int K = 46;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 905919826;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 33;
    int M = 1;
    int K = 8;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 16;
    int M = 0;
    int K = 33;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 368947806;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 16;
    int M = 1;
    int K = 3;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 2;
    int M = 1;
    int K = 40;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 43;
    int M = 2;
    int K = 25;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 41;
    int M = 1;
    int K = 35;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 11;
    int M = 0;
    int K = 3;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 39;
    int M = 0;
    int K = 27;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 26;
    int M = 2;
    int K = 26;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 85272996;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 33;
    int M = 2;
    int K = 6;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
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
    int N = 28;
    int M = 0;
    int K = 46;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 828756516;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 35;
    int M = 2;
    int K = 1;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 17;
    int M = 1;
    int K = 38;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 591679493;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 22;
    int M = 1;
    int K = 35;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 483487378;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 11;
    int M = 0;
    int K = 41;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 547303434;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 36;
    int M = 2;
    int K = 35;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 170513612;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 44;
    int M = 0;
    int K = 38;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 35;
    int M = 2;
    int K = 9;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 41;
    int M = 2;
    int K = 13;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 27;
    int M = 1;
    int K = 36;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 827423461;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 7;
    int M = 2;
    int K = 30;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 38;
    int M = 2;
    int K = 37;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 362211780;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 13;
    int M = 1;
    int K = 28;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 471304464;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 19;
    int M = 0;
    int K = 41;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 319153854;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 21;
    int M = 1;
    int K = 31;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 536604856;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 11;
    int M = 2;
    int K = 23;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 719296228;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 50;
    int M = 0;
    int K = 50;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 921061336;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 50;
    int M = 1;
    int K = 50;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 261563447;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 50;
    int M = 2;
    int K = 50;
    KingdomAndCities* pObj = new KingdomAndCities();
    clock_t start = clock();
    int result = pObj->howMany(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 654698051;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22713193&rd=15170&pm=12104
********************************************************************************
#include <string> 
 
using namespace std; 
 
const long long MOD = 1000000007; 
 
class KingdomAndCities 
{ 
public: 
  long long choose[2500][2500]; 
  long long f[51][51]; 
  long long g[51][51]; 
  long long f2(int a, int b) 
  { 
    return (a * b * a * b + a * b * (choose[a][2] + choose[b][2]) * 2) % MOD; 
  } 
  long long f3(int a, int b, int c) 
  { 
    return (a * b * a * c + b * a * b * c + c * a * c * b) * 2 % MOD; 
  } 
  int howMany(int N, int M, int K) 
  { 
    if (K < N - 1 || K > N * (N - 1) / 2) 
      return 0; 
    if (N <= 2) 
      return (M == 0) ? 1 : 0; 
    memset(choose, 0, sizeof(choose)); 
    for (int n = 0; n < 2500; ++n) 
    { 
      choose[n][0] = 1; 
      choose[n][n] = 1; 
      for (int m = 1; m <= n - 1; ++m) 
        choose[n][m] = (choose[n - 1][m - 1] + choose[n - 1][m]) % MOD; 
    } 
    memset(g, 0, sizeof(g)); 
    for (int n = 1; n <= N; ++n) 
      for (int k = 0; k <= K; ++k) 
      { 
        g[n][k] = choose[choose[n][2]][k]; 
        f[n][k] = g[n][k]; 
        for (int m = 1; m < n; ++m) 
          for (int l = 0; l <= k; ++l) 
            f[n][k] -= f[m][l] * g[n - m][k - l] % MOD * choose[n - 1][m - 1] % MOD; 
        f[n][k] = (f[n][k] % MOD + MOD) % MOD; 
      } 
    if (M == 0) 
      return f[N][K]; 
    else if (M == 1) 
    { 
      if (K < 2) 
        return 0; 
      long long results = f[N - 1][K - 2] * choose[N - 1][2] % MOD; 
      for (int n = 1; n < N - 1; ++n) 
        for (int k = 0; k <= K - 2; ++k) 
          results += f[n][k] * f[N - 1 - n][K - 2 - k] % MOD * n * (N - 1 - n) % MOD * choose[N - 2][n - 1] % MOD; 
      return results % MOD; 
    } 
    else 
    { 
      if (K < 3) 
        return 0; 
      long long results = f[N - 2][K - 3] * (N - 2) * (N - 2) % MOD; 
      for (int n = 1; n < N - 2; ++n) 
        for (int k = 0; k <= K - 3; ++k) 
          results += f[n][k] * f[N - 2 - n][K - 3 - k] % MOD * n * (N - 2 - n) * 2 % MOD * choose[N - 3][n - 1] % MOD; 
      if (K >= 4) 
      { 
        results += f[N - 2][K - 4] * choose[N - 2][2] % MOD * choose[N - 2][2] % MOD; 
        for (int n = 1; n < N - 2; ++n) 
          for (int k = 0; k <= K - 4; ++k) 
            results += f[n][k] * f[N - 2 - n][K - 4 - k] % MOD * f2(n, N - 2 - n) % MOD * choose[N - 3][n - 1] % MOD; 
        for (int n = 1; n < N - 2; ++n) 
          for (int k = 0; k <= K - 4; ++k) 
            for (int n2 = 1; n + n2 < N - 2; ++n2) 
              for (int k2 = 0; k + k2 <= K - 4; ++k2) 
                results += f[n][k] * f[n2][k2] % MOD * f[N - 2 - n - n2][K - 4 - k - k2] % MOD * f3(n, n2, N - 2 - n - n2) % MOD * choose[N - 3][n - 1] % MOD * choose[N - 3 - n][n2 - 1] % MOD; 
      } 
      return results % MOD; 
    } 
  } 
};

********************************************************************************
*******************************************************************************/