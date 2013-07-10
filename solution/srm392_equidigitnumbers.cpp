/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8536
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

class EquiDigitNumbers {
public:
    long findNext(string n);
};

long EquiDigitNumbers::findNext(string n) {
    long ret;
    return ret;
}


int test0() {
    string n = "42";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 42;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string n = "2008";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 2013;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string n = "987654322";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 987778899;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string n = "1000000000000000000";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 1111111111111111111;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string n = "1";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string n = "7";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string n = "9";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string n = "10";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string n = "11";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string n = "77";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 77;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string n = "99";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 99;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string n = "100";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 102;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string n = "101";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 102;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string n = "565";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 567;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string n = "770";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 777;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string n = "999";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 999;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string n = "1000";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 1001;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string n = "6998";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 7007;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string n = "10000";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 10234;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string n = "11239";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 12034;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string n = "33334";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 34012;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string n = "100000";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 100011;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string n = "332233";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 332244;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string n = "987655";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 987789;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string n = "6565656";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 6570123;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string n = "7897654";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 7901234;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string n = "9876544";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 9999999;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string n = "10000007";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 10000111;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string n = "18075655";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 18075692;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string n = "23871987";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 23872378;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string n = "34344344";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 34344433;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string n = "99999000";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 99999999;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string n = "100000000";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 100011222;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string n = "566000000";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 566000556;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string n = "986998868";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 987012345;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string n = "999888999";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string n = "1001001111";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 1001010011;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string n = "2222444444";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 2222525555;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string n = "3982475615";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 3982476015;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string n = "5556667777";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 5557557777;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string n = "8767865999";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 8767869009;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string n = "10000000000";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 11111111111;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string n = "79117818325";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 88888888888;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string n = "88898989898";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 99999999999;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string n = "555435444334";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 555436334466;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string n = "666262266266";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 666262272777;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string n = "975335799754";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 975335800789;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string n = "998877665555";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 998877666789;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string n = "1010101010101";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 1111111111111;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string n = "10101010010101";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 10101010010101;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string n = "41440000000566";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 41441111114444;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string n = "57855001234567";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 57856001122678;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string n = "87128712700000";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 87128712900339;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string n = "87858000000000";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 87859001122579;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string n = "555094094988888";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 555094096044669;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string n = "797870000056600";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 797870001118899;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string n = "1120000000100000";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 1120000112223333;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string n = "3974000000010000";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 3974001122345579;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string n = "7777780000001000";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 7777787778888888;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string n = "9876543210123456";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 9876543223456789;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string n = "9998765432101234";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 9998766667778889;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string n = "9999978654321012";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 9999979777777799;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string n = "9999999999999999";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 9999999999999999;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string n = "10000000000000000";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 11111111111111111;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string n = "34343434343434343";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 44444444444444444;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string n = "44444444444878778";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 55555555555555555;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string n = "99999999999999999";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 99999999999999999;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string n = "100000000000000000";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 100000000011111111;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string n = "111112222223333333";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 111112222224144444;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string n = "477472729387456236";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 477472742222244477;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string n = "477572729387456236";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 477572800022445588;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string n = "623987154623987154";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 623987154623987154;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string n = "633463729387456236";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 633463729422467799;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string n = "912337462988765544";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 912337464001255679;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string n = "999999999999999999";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999999999999;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string n = "12345678910";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 22222222222;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string n = "900230876000003210";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 900230877223378899;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string n = "111111111111111112";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 111111111222222222;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string n = "2945678900";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 2945680137;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string n = "11111111111111112";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 22222222222222222;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string n = "12341234123412341";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 22222222222222222;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string n = "119993";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 120012;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string n = "22559999";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 22560056;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string n = "928283210923765";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 928283211133899;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string n = "229994";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 230023;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string n = "1234567890";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 1234567890;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string n = "812814";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 812821;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string n = "90000000000000000";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 99999999999999999;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string n = "413134337691647105";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 413134340001222555;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string n = "1234567889";
    EquiDigitNumbers* pObj = new EquiDigitNumbers();
    clock_t start = clock();
    long result = pObj->findNext(n);
    clock_t end = clock();
    delete pObj;
    long expected = 1234567890;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=11126&pm=8536
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
 
typedef long long int64;
int64 toInt64(string s){int64 r=0;istringstream sin(s);sin>>r;return r;}
 
class EquiDigitNumbers
{
public:
  bool check(int C[],int L,int M)
  {
    if (L/M>10) return false;
    for (int i=0;i<10;i++) if (C[i]>M) return false;
    int C0=0;
    for (int i=0;i<10;i++) if (C[i]>0) C0++;
    if (C0>L/M) return false;
    return true;
  }
  bool check(string s)
  {
    int L=s.length();
    int C[10];
    memset(C,0,sizeof(C));
    for (int i=0;i<L;i++) if (s[i]!='*') C[s[i]-'0']++;
    for (int d=1;d<=L;d++) if (L%d==0 && check(C,L,d)) return true;
    return false;
  }
  string construct(string s)
  {
    int L=s.length();
    int pos=s.find("*");
    if (pos==-1) return s;
    for (int i=0;i<10;i++)
    {
      s[pos]=(char)(i+'0');
      if (check(s)) return construct(s);
      s[pos]='*';
    }
    return s;
  }
  int64 findNext(string n)
  {
    int L=(int)n.length();
    if (check(n)) return toInt64(construct(n));
    for (int i=L-1;i>=0;i--)
      for (int k=0;k<10;k++)
        if (k>(int)(n[i]-'0'))
        {
          string s=n;
          for (int v=i+1;v<L;v++) s[v]='*';
          s[i]=(char)(k+'0');
          if (check(s)) 
            return toInt64(construct(s));
        }
    string s=string(L+1,'*');
    s[0]='1';
    return toInt64(construct(s));
  }
};
 
 
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/