/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9744
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

class ReasonableOdds {
public:
    string check(int p1, int pDraw, int p2, int k);
};

string ReasonableOdds::check(int p1, int pDraw, int p2, int k) {
    string ret;
    return ret;
}


int test0() {
    int p1 = 0;
    int pDraw = 100;
    int p2 = 0;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int p1 = 50;
    int pDraw = 0;
    int p2 = 50;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int p1 = 30;
    int pDraw = 0;
    int p2 = 70;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int p1 = 30;
    int pDraw = 10;
    int p2 = 60;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int p1 = 30;
    int pDraw = 40;
    int p2 = 30;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int p1 = 15;
    int pDraw = 7;
    int p2 = 78;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int p1 = 24;
    int pDraw = 35;
    int p2 = 41;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int p1 = 26;
    int pDraw = 64;
    int p2 = 10;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int p1 = 37;
    int pDraw = 28;
    int p2 = 35;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int p1 = 45;
    int pDraw = 36;
    int p2 = 19;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int p1 = 49;
    int pDraw = 46;
    int p2 = 5;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int p1 = 52;
    int pDraw = 6;
    int p2 = 42;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int p1 = 0;
    int pDraw = 0;
    int p2 = 100;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int p1 = 0;
    int pDraw = 1;
    int p2 = 99;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int p1 = 1;
    int pDraw = 0;
    int p2 = 99;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int p1 = 1;
    int pDraw = 2;
    int p2 = 97;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int p1 = 1;
    int pDraw = 10;
    int p2 = 89;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int p1 = 1;
    int pDraw = 15;
    int p2 = 84;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int p1 = 4;
    int pDraw = 31;
    int p2 = 65;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int p1 = 5;
    int pDraw = 37;
    int p2 = 58;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int p1 = 10;
    int pDraw = 41;
    int p2 = 49;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int p1 = 11;
    int pDraw = 45;
    int p2 = 44;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int p1 = 13;
    int pDraw = 47;
    int p2 = 40;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int p1 = 17;
    int pDraw = 49;
    int p2 = 34;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int p1 = 29;
    int pDraw = 49;
    int p2 = 22;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int p1 = 30;
    int pDraw = 50;
    int p2 = 20;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int p1 = 32;
    int pDraw = 50;
    int p2 = 18;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int p1 = 33;
    int pDraw = 49;
    int p2 = 18;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int p1 = 42;
    int pDraw = 46;
    int p2 = 12;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int p1 = 46;
    int pDraw = 43;
    int p2 = 11;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int p1 = 57;
    int pDraw = 37;
    int p2 = 6;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int p1 = 69;
    int pDraw = 28;
    int p2 = 3;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int p1 = 72;
    int pDraw = 25;
    int p2 = 3;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int p1 = 74;
    int pDraw = 24;
    int p2 = 2;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int p1 = 76;
    int pDraw = 23;
    int p2 = 1;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int p1 = 77;
    int pDraw = 22;
    int p2 = 1;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int p1 = 80;
    int pDraw = 18;
    int p2 = 2;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int p1 = 91;
    int pDraw = 8;
    int p2 = 1;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int p1 = 99;
    int pDraw = 0;
    int p2 = 1;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int p1 = 99;
    int pDraw = 1;
    int p2 = 0;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int p1 = 100;
    int pDraw = 0;
    int p2 = 0;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int p1 = 47;
    int pDraw = 45;
    int p2 = 8;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int p1 = 73;
    int pDraw = 24;
    int p2 = 3;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int p1 = 85;
    int pDraw = 13;
    int p2 = 2;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int p1 = 87;
    int pDraw = 1;
    int p2 = 12;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int p1 = 0;
    int pDraw = 0;
    int p2 = 100;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int p1 = 0;
    int pDraw = 1;
    int p2 = 99;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int p1 = 1;
    int pDraw = 0;
    int p2 = 99;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int p1 = 7;
    int pDraw = 23;
    int p2 = 70;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int p1 = 8;
    int pDraw = 27;
    int p2 = 65;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int p1 = 9;
    int pDraw = 27;
    int p2 = 64;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int p1 = 10;
    int pDraw = 29;
    int p2 = 61;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int p1 = 13;
    int pDraw = 30;
    int p2 = 57;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int p1 = 13;
    int pDraw = 33;
    int p2 = 54;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int p1 = 14;
    int pDraw = 33;
    int p2 = 53;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int p1 = 16;
    int pDraw = 34;
    int p2 = 50;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int p1 = 18;
    int pDraw = 34;
    int p2 = 48;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int p1 = 19;
    int pDraw = 34;
    int p2 = 47;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int p1 = 21;
    int pDraw = 36;
    int p2 = 43;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int p1 = 26;
    int pDraw = 37;
    int p2 = 37;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int p1 = 30;
    int pDraw = 37;
    int p2 = 33;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int p1 = 35;
    int pDraw = 38;
    int p2 = 27;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int p1 = 37;
    int pDraw = 37;
    int p2 = 26;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int p1 = 38;
    int pDraw = 36;
    int p2 = 26;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int p1 = 39;
    int pDraw = 36;
    int p2 = 25;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int p1 = 44;
    int pDraw = 35;
    int p2 = 21;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int p1 = 49;
    int pDraw = 34;
    int p2 = 17;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int p1 = 54;
    int pDraw = 33;
    int p2 = 13;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int p1 = 62;
    int pDraw = 28;
    int p2 = 10;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int p1 = 65;
    int pDraw = 26;
    int p2 = 9;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int p1 = 71;
    int pDraw = 23;
    int p2 = 6;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int p1 = 72;
    int pDraw = 23;
    int p2 = 5;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int p1 = 73;
    int pDraw = 21;
    int p2 = 6;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int p1 = 79;
    int pDraw = 18;
    int p2 = 3;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int p1 = 83;
    int pDraw = 15;
    int p2 = 2;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int p1 = 94;
    int pDraw = 5;
    int p2 = 1;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int p1 = 95;
    int pDraw = 5;
    int p2 = 0;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int p1 = 96;
    int pDraw = 4;
    int p2 = 0;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int p1 = 97;
    int pDraw = 3;
    int p2 = 0;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int p1 = 99;
    int pDraw = 0;
    int p2 = 1;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int p1 = 99;
    int pDraw = 1;
    int p2 = 0;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int p1 = 100;
    int pDraw = 0;
    int p2 = 0;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int p1 = 6;
    int pDraw = 40;
    int p2 = 54;
    int k = 3;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int p1 = 15;
    int pDraw = 27;
    int p2 = 58;
    int k = 3;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int p1 = 16;
    int pDraw = 58;
    int p2 = 26;
    int k = 3;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int p1 = 25;
    int pDraw = 21;
    int p2 = 54;
    int k = 3;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int p1 = 64;
    int pDraw = 18;
    int p2 = 18;
    int k = 3;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int p1 = 65;
    int pDraw = 4;
    int p2 = 31;
    int k = 3;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int p1 = 0;
    int pDraw = 0;
    int p2 = 100;
    int k = 3;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int p1 = 0;
    int pDraw = 1;
    int p2 = 99;
    int k = 3;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int p1 = 1;
    int pDraw = 0;
    int p2 = 99;
    int k = 3;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int p1 = 2;
    int pDraw = 12;
    int p2 = 86;
    int k = 3;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int p1 = 5;
    int pDraw = 18;
    int p2 = 77;
    int k = 3;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int p1 = 13;
    int pDraw = 24;
    int p2 = 63;
    int k = 3;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int p1 = 15;
    int pDraw = 26;
    int p2 = 59;
    int k = 3;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int p1 = 16;
    int pDraw = 28;
    int p2 = 56;
    int k = 3;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int p1 = 17;
    int pDraw = 26;
    int p2 = 57;
    int k = 3;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int p1 = 17;
    int pDraw = 28;
    int p2 = 55;
    int k = 3;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int p1 = 19;
    int pDraw = 27;
    int p2 = 54;
    int k = 3;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int p1 = 21;
    int pDraw = 29;
    int p2 = 50;
    int k = 3;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int p1 = 22;
    int pDraw = 30;
    int p2 = 48;
    int k = 3;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int p1 = 23;
    int pDraw = 30;
    int p2 = 47;
    int k = 3;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int p1 = 29;
    int pDraw = 31;
    int p2 = 40;
    int k = 3;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int p1 = 31;
    int pDraw = 31;
    int p2 = 38;
    int k = 3;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int p1 = 38;
    int pDraw = 32;
    int p2 = 30;
    int k = 3;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int p1 = 46;
    int pDraw = 30;
    int p2 = 24;
    int k = 3;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int p1 = 49;
    int pDraw = 30;
    int p2 = 21;
    int k = 3;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int p1 = 59;
    int pDraw = 25;
    int p2 = 16;
    int k = 3;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int p1 = 60;
    int pDraw = 26;
    int p2 = 14;
    int k = 3;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int p1 = 66;
    int pDraw = 22;
    int p2 = 12;
    int k = 3;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int p1 = 73;
    int pDraw = 19;
    int p2 = 8;
    int k = 3;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int p1 = 79;
    int pDraw = 15;
    int p2 = 6;
    int k = 3;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int p1 = 89;
    int pDraw = 10;
    int p2 = 1;
    int k = 3;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int p1 = 92;
    int pDraw = 7;
    int p2 = 1;
    int k = 3;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int p1 = 96;
    int pDraw = 4;
    int p2 = 0;
    int k = 3;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int p1 = 97;
    int pDraw = 3;
    int p2 = 0;
    int k = 3;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int p1 = 99;
    int pDraw = 0;
    int p2 = 1;
    int k = 3;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int p1 = 99;
    int pDraw = 1;
    int p2 = 0;
    int k = 3;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int p1 = 100;
    int pDraw = 0;
    int p2 = 0;
    int k = 3;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int p1 = 0;
    int pDraw = 97;
    int p2 = 3;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int p1 = 2;
    int pDraw = 81;
    int p2 = 17;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int p1 = 3;
    int pDraw = 96;
    int p2 = 1;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int p1 = 4;
    int pDraw = 47;
    int p2 = 49;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int p1 = 8;
    int pDraw = 12;
    int p2 = 80;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int p1 = 22;
    int pDraw = 47;
    int p2 = 31;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int p1 = 36;
    int pDraw = 44;
    int p2 = 20;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int p1 = 41;
    int pDraw = 4;
    int p2 = 55;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int p1 = 73;
    int pDraw = 13;
    int p2 = 14;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int p1 = 89;
    int pDraw = 11;
    int p2 = 0;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int p1 = 0;
    int pDraw = 0;
    int p2 = 100;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int p1 = 0;
    int pDraw = 1;
    int p2 = 99;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int p1 = 1;
    int pDraw = 0;
    int p2 = 99;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int p1 = 3;
    int pDraw = 10;
    int p2 = 87;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int p1 = 5;
    int pDraw = 10;
    int p2 = 85;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int p1 = 5;
    int pDraw = 13;
    int p2 = 82;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int p1 = 7;
    int pDraw = 15;
    int p2 = 78;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int p1 = 10;
    int pDraw = 19;
    int p2 = 71;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int p1 = 12;
    int pDraw = 20;
    int p2 = 68;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int p1 = 17;
    int pDraw = 24;
    int p2 = 59;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int p1 = 21;
    int pDraw = 24;
    int p2 = 55;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int p1 = 30;
    int pDraw = 27;
    int p2 = 43;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int p1 = 31;
    int pDraw = 28;
    int p2 = 41;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int p1 = 32;
    int pDraw = 27;
    int p2 = 41;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int p1 = 32;
    int pDraw = 28;
    int p2 = 40;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int p1 = 38;
    int pDraw = 27;
    int p2 = 35;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int p1 = 40;
    int pDraw = 27;
    int p2 = 33;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int p1 = 42;
    int pDraw = 28;
    int p2 = 30;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int p1 = 60;
    int pDraw = 23;
    int p2 = 17;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int p1 = 60;
    int pDraw = 24;
    int p2 = 16;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int p1 = 65;
    int pDraw = 21;
    int p2 = 14;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int p1 = 65;
    int pDraw = 22;
    int p2 = 13;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    int p1 = 66;
    int pDraw = 20;
    int p2 = 14;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    int p1 = 70;
    int pDraw = 19;
    int p2 = 11;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    int p1 = 79;
    int pDraw = 14;
    int p2 = 7;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    int p1 = 80;
    int pDraw = 13;
    int p2 = 7;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    int p1 = 80;
    int pDraw = 14;
    int p2 = 6;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    int p1 = 84;
    int pDraw = 12;
    int p2 = 4;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    int p1 = 85;
    int pDraw = 10;
    int p2 = 5;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    int p1 = 87;
    int pDraw = 10;
    int p2 = 3;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    int p1 = 89;
    int pDraw = 9;
    int p2 = 2;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    int p1 = 93;
    int pDraw = 5;
    int p2 = 2;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    int p1 = 98;
    int pDraw = 1;
    int p2 = 1;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    int p1 = 99;
    int pDraw = 0;
    int p2 = 1;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    int p1 = 99;
    int pDraw = 1;
    int p2 = 0;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    int p1 = 100;
    int pDraw = 0;
    int p2 = 0;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    int p1 = 9;
    int pDraw = 9;
    int p2 = 82;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    int p1 = 33;
    int pDraw = 30;
    int p2 = 37;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    int p1 = 42;
    int pDraw = 30;
    int p2 = 28;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    int p1 = 55;
    int pDraw = 27;
    int p2 = 18;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    int p1 = 64;
    int pDraw = 31;
    int p2 = 5;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    int p1 = 69;
    int pDraw = 19;
    int p2 = 12;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    int p1 = 74;
    int pDraw = 6;
    int p2 = 20;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    int p1 = 88;
    int pDraw = 11;
    int p2 = 1;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    int p1 = 0;
    int pDraw = 0;
    int p2 = 100;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    int p1 = 0;
    int pDraw = 1;
    int p2 = 99;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    int p1 = 1;
    int pDraw = 0;
    int p2 = 99;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    int p1 = 6;
    int pDraw = 11;
    int p2 = 83;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    int p1 = 7;
    int pDraw = 12;
    int p2 = 81;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    int p1 = 16;
    int pDraw = 19;
    int p2 = 65;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    int p1 = 30;
    int pDraw = 25;
    int p2 = 45;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    int p1 = 33;
    int pDraw = 25;
    int p2 = 42;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    int p1 = 34;
    int pDraw = 24;
    int p2 = 42;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    int p1 = 34;
    int pDraw = 25;
    int p2 = 41;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    int p1 = 35;
    int pDraw = 24;
    int p2 = 41;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    int p1 = 40;
    int pDraw = 24;
    int p2 = 36;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    int p1 = 41;
    int pDraw = 24;
    int p2 = 35;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    int p1 = 41;
    int pDraw = 25;
    int p2 = 34;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    int p1 = 49;
    int pDraw = 24;
    int p2 = 27;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    int p1 = 51;
    int pDraw = 24;
    int p2 = 25;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    int p1 = 52;
    int pDraw = 24;
    int p2 = 24;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    int p1 = 55;
    int pDraw = 23;
    int p2 = 22;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    int p1 = 62;
    int pDraw = 20;
    int p2 = 18;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    int p1 = 64;
    int pDraw = 20;
    int p2 = 16;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    int p1 = 65;
    int pDraw = 19;
    int p2 = 16;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    int p1 = 66;
    int pDraw = 19;
    int p2 = 15;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    int p1 = 70;
    int pDraw = 17;
    int p2 = 13;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    int p1 = 71;
    int pDraw = 18;
    int p2 = 11;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    int p1 = 77;
    int pDraw = 14;
    int p2 = 9;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    int p1 = 98;
    int pDraw = 1;
    int p2 = 1;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    int p1 = 99;
    int pDraw = 0;
    int p2 = 1;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    int p1 = 99;
    int pDraw = 1;
    int p2 = 0;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    int p1 = 100;
    int pDraw = 0;
    int p2 = 0;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    int p1 = 1;
    int pDraw = 18;
    int p2 = 81;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    int p1 = 4;
    int pDraw = 32;
    int p2 = 64;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    int p1 = 9;
    int pDraw = 42;
    int p2 = 49;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    int p1 = 16;
    int pDraw = 48;
    int p2 = 36;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    int p1 = 25;
    int pDraw = 50;
    int p2 = 25;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    int p1 = 36;
    int pDraw = 48;
    int p2 = 16;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    int p1 = 49;
    int pDraw = 42;
    int p2 = 9;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    int p1 = 64;
    int pDraw = 32;
    int p2 = 4;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    int p1 = 81;
    int pDraw = 18;
    int p2 = 1;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    int p1 = 19;
    int pDraw = 24;
    int p2 = 57;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    int p1 = 57;
    int pDraw = 24;
    int p2 = 19;
    int k = 4;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    int p1 = 8;
    int pDraw = 14;
    int p2 = 78;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    int p1 = 78;
    int pDraw = 14;
    int p2 = 8;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    int p1 = 13;
    int pDraw = 18;
    int p2 = 69;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    int p1 = 69;
    int pDraw = 18;
    int p2 = 13;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    int p1 = 80;
    int pDraw = 13;
    int p2 = 7;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    int p1 = 3;
    int pDraw = 3;
    int p2 = 94;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    int p1 = 95;
    int pDraw = 3;
    int p2 = 2;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    int p1 = 40;
    int pDraw = 50;
    int p2 = 10;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test221() {
    int p1 = 20;
    int pDraw = 21;
    int p2 = 59;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 221: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 221: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test222() {
    int p1 = 30;
    int pDraw = 40;
    int p2 = 30;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 222: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 222: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test223() {
    int p1 = 78;
    int pDraw = 12;
    int p2 = 10;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 223: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 223: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test224() {
    int p1 = 1;
    int pDraw = 19;
    int p2 = 80;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 224: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 224: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test225() {
    int p1 = 35;
    int pDraw = 35;
    int p2 = 30;
    int k = 3;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 225: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 225: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test226() {
    int p1 = 49;
    int pDraw = 2;
    int p2 = 49;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 226: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 226: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test227() {
    int p1 = 29;
    int pDraw = 42;
    int p2 = 29;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 227: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 227: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test228() {
    int p1 = 29;
    int pDraw = 40;
    int p2 = 31;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 228: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 228: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test229() {
    int p1 = 64;
    int pDraw = 23;
    int p2 = 13;
    int k = 5;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 229: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 229: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test230() {
    int p1 = 1;
    int pDraw = 97;
    int p2 = 2;
    int k = 2;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 230: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 230: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test231() {
    int p1 = 7;
    int pDraw = 86;
    int p2 = 7;
    int k = 1;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 231: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 231: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test232() {
    int p1 = 14;
    int pDraw = 70;
    int p2 = 16;
    int k = 3;
    ReasonableOdds* pObj = new ReasonableOdds();
    clock_t start = clock();
    string result = pObj->check(p1, pDraw, p2, k);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 232: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 232: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test114() == 0 ? ++passed : ++failed;
    test115() == 0 ? ++passed : ++failed;
    test116() == 0 ? ++passed : ++failed;
    test117() == 0 ? ++passed : ++failed;
    test118() == 0 ? ++passed : ++failed;
    test119() == 0 ? ++passed : ++failed;
    test120() == 0 ? ++passed : ++failed;
    test121() == 0 ? ++passed : ++failed;
    test122() == 0 ? ++passed : ++failed;
    test123() == 0 ? ++passed : ++failed;
    test124() == 0 ? ++passed : ++failed;
    test125() == 0 ? ++passed : ++failed;
    test126() == 0 ? ++passed : ++failed;
    test127() == 0 ? ++passed : ++failed;
    test128() == 0 ? ++passed : ++failed;
    test129() == 0 ? ++passed : ++failed;
    test130() == 0 ? ++passed : ++failed;
    test131() == 0 ? ++passed : ++failed;
    test132() == 0 ? ++passed : ++failed;
    test133() == 0 ? ++passed : ++failed;
    test134() == 0 ? ++passed : ++failed;
    test135() == 0 ? ++passed : ++failed;
    test136() == 0 ? ++passed : ++failed;
    test137() == 0 ? ++passed : ++failed;
    test138() == 0 ? ++passed : ++failed;
    test139() == 0 ? ++passed : ++failed;
    test140() == 0 ? ++passed : ++failed;
    test141() == 0 ? ++passed : ++failed;
    test142() == 0 ? ++passed : ++failed;
    test143() == 0 ? ++passed : ++failed;
    test144() == 0 ? ++passed : ++failed;
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    test193() == 0 ? ++passed : ++failed;
    test194() == 0 ? ++passed : ++failed;
    test195() == 0 ? ++passed : ++failed;
    test196() == 0 ? ++passed : ++failed;
    test197() == 0 ? ++passed : ++failed;
    test198() == 0 ? ++passed : ++failed;
    test199() == 0 ? ++passed : ++failed;
    test200() == 0 ? ++passed : ++failed;
    test201() == 0 ? ++passed : ++failed;
    test202() == 0 ? ++passed : ++failed;
    test203() == 0 ? ++passed : ++failed;
    test204() == 0 ? ++passed : ++failed;
    test205() == 0 ? ++passed : ++failed;
    test206() == 0 ? ++passed : ++failed;
    test207() == 0 ? ++passed : ++failed;
    test208() == 0 ? ++passed : ++failed;
    test209() == 0 ? ++passed : ++failed;
    test210() == 0 ? ++passed : ++failed;
    test211() == 0 ? ++passed : ++failed;
    test212() == 0 ? ++passed : ++failed;
    test213() == 0 ? ++passed : ++failed;
    test214() == 0 ? ++passed : ++failed;
    test215() == 0 ? ++passed : ++failed;
    test216() == 0 ? ++passed : ++failed;
    test217() == 0 ? ++passed : ++failed;
    test218() == 0 ? ++passed : ++failed;
    test219() == 0 ? ++passed : ++failed;
    test220() == 0 ? ++passed : ++failed;
    test221() == 0 ? ++passed : ++failed;
    test222() == 0 ? ++passed : ++failed;
    test223() == 0 ? ++passed : ++failed;
    test224() == 0 ? ++passed : ++failed;
    test225() == 0 ? ++passed : ++failed;
    test226() == 0 ? ++passed : ++failed;
    test227() == 0 ? ++passed : ++failed;
    test228() == 0 ? ++passed : ++failed;
    test229() == 0 ? ++passed : ++failed;
    test230() == 0 ? ++passed : ++failed;
    test231() == 0 ? ++passed : ++failed;
    test232() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22682264&rd=12177&pm=9744
********************************************************************************
#include<vector> 
#include<string> 
using namespace std; 
 
#define EPS 1e-9 
 
class ReasonableOdds{ 
  public: 
    string check(int p1, int pd, int p2, int k){ 
      if(p1==0||p2==0) return "YES"; 
      double lo=0., hi=1.; 
      while(true){ 
        double mi=(lo+hi)/2.; 
        double mi1=1.-mi; 
        vector<double> P(1); 
        P[0]=1.; 
        for(int i=1; i<=k; i++){ 
          vector<double> Q(i+1); 
          Q[0]=P[0]*mi; 
          Q[i]=P[i-1]*mi1; 
          for(int j=1; j<i; j++){ 
            Q[j]=P[j]*mi+P[j-1]*mi1; 
          } 
          P=Q; 
        } 
        vector<double> P2(k+1); 
        for(int i=0; i<=k; i++){ 
          P2[i]=P[k-i]; 
        } 
        double pp1=0; 
        double pp2=0; 
        for(int i=0; i<=k; i++){ 
          for(int j=0; j<=k; j++){ 
            if(i<j)pp1+=P[i]*P2[j]; 
            if(i>j)pp2+=P[i]*P2[j]; 
          } 
        } 
        pp1+=EPS; 
        pp2+=EPS; 
        pp1*=100; 
        pp2*=100; 
        if(pp1>=p1&&pp2>=p2) return "YES"; 
        if(pp1<p1&&pp2<p2) return "NO"; 
        if(pp1>=p1){ 
          hi=mi; 
        }else{ 
          lo=mi; 
        } 
      } 
    } 
};

********************************************************************************
*******************************************************************************/