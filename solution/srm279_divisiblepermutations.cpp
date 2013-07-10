/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4838
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

class DivisiblePermutations {
public:
    long count(string N, int M);
};

long DivisiblePermutations::count(string N, int M) {
    long ret;
    return ret;
}


int test0() {
    string N = "133";
    int M = 7;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string N = "2753";
    int M = 5;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string N = "1112225";
    int M = 5;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 20;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string N = "123456789";
    int M = 17;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 21271;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string N = "987654321999999";
    int M = 39;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 19960896;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string N = "1";
    int M = 2;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string N = "999999999999999";
    int M = 9;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string N = "999999999999999";
    int M = 1;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string N = "999999999999999";
    int M = 2;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string N = "7";
    int M = 7;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string N = "7";
    int M = 5;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string N = "71";
    int M = 1;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string N = "72";
    int M = 3;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string N = "987654321987654";
    int M = 1;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 20432412000;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string N = "987654321987654";
    int M = 2;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 9535125600;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string N = "987654321987654";
    int M = 3;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 20432412000;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string N = "987654321987654";
    int M = 9;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string N = "987654321987654";
    int M = 11;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 1860667200;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string N = "987654321987654";
    int M = 17;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 1201908570;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string N = "987654321987654";
    int M = 50;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string N = "987654321987654";
    int M = 49;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 416980651;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string N = "987654321987654";
    int M = 47;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 434727697;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string N = "57113725698779";
    int M = 11;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 42071400;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string N = "321166";
    int M = 13;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string N = "4";
    int M = 46;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string N = "5163449686";
    int M = 32;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 11540;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string N = "297386725276";
    int M = 48;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string N = "17233";
    int M = 8;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string N = "9";
    int M = 15;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string N = "754446927783";
    int M = 42;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 950496;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string N = "5";
    int M = 4;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string N = "6";
    int M = 31;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string N = "1789";
    int M = 50;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string N = "3137714858";
    int M = 42;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string N = "4443977371";
    int M = 17;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 2969;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string N = "98162841628";
    int M = 5;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string N = "5773414292";
    int M = 22;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 14400;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string N = "113313143565853";
    int M = 30;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string N = "9";
    int M = 41;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string N = "113529317896";
    int M = 9;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string N = "989957223297229";
    int M = 20;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string N = "14321647835149";
    int M = 33;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string N = "8712829";
    int M = 6;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string N = "623659";
    int M = 40;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string N = "662883374628947";
    int M = 24;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string N = "9118463136675";
    int M = 16;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 4425120;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string N = "6595625";
    int M = 46;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string N = "767993273";
    int M = 13;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 1156;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string N = "295691123255225";
    int M = 34;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 2670654;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string N = "498241";
    int M = 32;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 21;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string N = "3995977";
    int M = 31;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string N = "63";
    int M = 7;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string N = "793579949546585";
    int M = 28;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 7720244;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string N = "612677154322929";
    int M = 45;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string N = "974775963484298";
    int M = 40;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string N = "823689438517296";
    int M = 44;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 332224200;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string N = "593122955657244";
    int M = 1;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 2270268000;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string N = "326881255488785";
    int M = 42;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string N = "462627765381156";
    int M = 29;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 117426948;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string N = "755418619235526";
    int M = 38;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 143384907;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string N = "927437473988247";
    int M = 46;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 11515579;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string N = "994938585878792";
    int M = 16;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 22245300;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string N = "649369117645183";
    int M = 30;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string N = "722598674738743";
    int M = 13;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 261918765;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string N = "392546449958534";
    int M = 19;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 39828401;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string N = "542883921525521";
    int M = 26;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 20377814;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string N = "292154732769956";
    int M = 14;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 259484120;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string N = "997661224423129";
    int M = 17;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 66773001;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string N = "493216396584441";
    int M = 49;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 69504155;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string N = "845883316624743";
    int M = 22;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 162640800;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string N = "692737935531985";
    int M = 29;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 104375029;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string N = "725773548515399";
    int M = 13;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 174674382;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string N = "868482581124251";
    int M = 46;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 10968374;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string N = "834937776637446";
    int M = 31;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 8136015;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string N = "799217226723546";
    int M = 40;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string N = "853751555994681";
    int M = 26;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 27939234;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string N = "352668338218384";
    int M = 46;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 14805100;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string N = "174258988287556";
    int M = 41;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 55307610;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string N = "348865746965852";
    int M = 36;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string N = "648712948548431";
    int M = 8;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 731808000;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string N = "798994279857884";
    int M = 39;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string N = "454573349997578";
    int M = 2;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 134534400;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string N = "111112222233333";
    int M = 49;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 15443;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string N = "111111123333333";
    int M = 49;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 1056;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string N = "111111113333333";
    int M = 49;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 133;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string N = "123456789123456";
    int M = 49;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 416987439;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string N = "123456789127456";
    int M = 49;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 416988138;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string N = "888888888888888";
    int M = 2;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string N = "888888888888887";
    int M = 2;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 14;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string N = "988888888888888";
    int M = 2;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 14;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string N = "999999999999999";
    int M = 9;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string N = "999999999999999";
    int M = 3;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string N = "199999999999999";
    int M = 9;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string N = "123456789878765";
    int M = 3;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string N = "342239829657425";
    int M = 47;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 72453064;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string N = "998877665544321";
    int M = 11;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 1860667200;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string N = "123456789123456";
    int M = 1;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 20432412000;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string N = "123456789123456";
    int M = 49;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 416987439;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string N = "123456789123456";
    int M = 2;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 9535125600;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string N = "123456781234569";
    int M = 1;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 20432412000;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string N = "123456789912345";
    int M = 49;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 416973824;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string N = "123456789876543";
    int M = 17;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 1201902822;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string N = "123456789123456";
    int M = 5;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 2724321600;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string N = "123456789123456";
    int M = 3;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 20432412000;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string N = "123456789123456";
    int M = 41;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 498015135;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string N = "778223491265334";
    int M = 29;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 313149050;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string N = "987654321234567";
    int M = 49;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 416986862;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string N = "112233445566789";
    int M = 39;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 1571586219;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string N = "123456789123456";
    int M = 15;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 2724321600;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string N = "123456789123477";
    int M = 47;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 289811662;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string N = "987654321999999";
    int M = 39;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 19960896;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    string N = "987654321987654";
    int M = 47;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 434727697;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    string N = "123456789123456";
    int M = 48;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 1212472800;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    string N = "123456789243876";
    int M = 49;
    DivisiblePermutations* pObj = new DivisiblePermutations();
    clock_t start = clock();
    long result = pObj->count(N, M);
    clock_t end = clock();
    delete pObj;
    long expected = 416973395;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test102() == 0 ? ++passed : ++failed;
    test103() == 0 ? ++passed : ++failed;
    test104() == 0 ? ++passed : ++failed;
    test105() == 0 ? ++passed : ++failed;
    test106() == 0 ? ++passed : ++failed;
    test107() == 0 ? ++passed : ++failed;
    test108() == 0 ? ++passed : ++failed;
    test109() == 0 ? ++passed : ++failed;
    test110() == 0 ? ++passed : ++failed;
    test111() == 0 ? ++passed : ++failed;
    test112() == 0 ? ++passed : ++failed;
    test113() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=310333&rd=8076&pm=4838
********************************************************************************
#include <algorithm> 
#include <iostream> 
#include <string> 
#include <vector> 
 
using namespace std; 
 
 
typedef long long llint; 
 
int n, m; 
string s; 
 
llint memo[1<<15][50]; 
 
class DivisiblePermutations {  
   public:  
 
   llint rec( int r, int mask, int k ) { 
      if( k == n ) return r == 0; 
       
      llint & ret = memo[mask][r]; 
      if( ret >= 0 ) return ret; 
 
      ret = 0; 
       
      for( int i = 0; i < n; ++i ) { 
         if( (mask >> i)&1 ) continue; 
         if( i > 0 && s[i] == s[i-1] && ((mask >> (i-1))&1)==0 ) continue; 
         ret += rec( (r*10 + s[i]-'0')%m, mask | (1<<i), k+1 ); 
      } 
 
      return ret; 
   } 
 
   llint count(string N, int M) {  
      s = N; 
      n = s.size(); 
      m = M; 
      sort( s.begin(), s.end() );  
       
      memset( memo, -1, sizeof memo ); 
      return rec( 0, 0, 0 ); 
   }  
 
 
 
 
 
    
 
};  
 
 
 
// Powered by FileEdit
// Powered by moj 3.0 beta 7 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/