/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6835
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

class Multifactorial {
public:
    string calcMultiFact(int n, int k);
};

string Multifactorial::calcMultiFact(int n, int k) {
    string ret;
    return ret;
}


int test0() {
    int n = 14;
    int k = 3;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "12320";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 5;
    int k = 4;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "5";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 1000;
    int k = 2;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 2000000000;
    int k = 1900000000;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "200000000000000000";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 1000;
    int k = 256;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "84232704000";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 1;
    int k = 2000000000;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 2000000000;
    int k = 1;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 999999999;
    int k = 2452342;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 20;
    int k = 1;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 21;
    int k = 1;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 500000000;
    int k = 300000000;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "100000000000000000";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 346534522;
    int k = 234523499;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "38815686314036006";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 1;
    int k = 1;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 1000000000;
    int k = 500000000;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "500000000000000000";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 1000000000;
    int k = 499999999;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 999999998;
    int k = 499999998;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "999999998000000000";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 2000000000;
    int k = 1500000000;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1000000000000000000";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 1500000000;
    int k = 749999996;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 1500000000;
    int k = 749999995;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 2000000000;
    int k = 1000000000;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 19;
    int k = 1;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "121645100408832000";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 7096;
    int k = 1665;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "132949364877520576";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 1403;
    int k = 240;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "92503795940503129";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 580;
    int k = 89;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "49844758346611200";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 2883;
    int k = 650;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "2690805827660643";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 6765;
    int k = 1565;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "133671026560500000";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 789;
    int k = 122;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "372592483175247615";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 5740;
    int k = 1053;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 2032;
    int k = 299;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 9081;
    int k = 1711;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 2471;
    int k = 441;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 1299;
    int k = 182;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 788;
    int k = 106;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 44346642;
    int k = 27276775;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "756991280836614";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 514509426;
    int k = 456665009;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "29761497787974642";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 551970908;
    int k = 468308461;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "46179236836091876";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 58169460;
    int k = 29439230;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1671221964775800";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 553651008;
    int k = 357920486;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "108366400801666176";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 71623417;
    int k = 27276775;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 971174435;
    int k = 456665009;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 1020279369;
    int k = 468308461;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 87608690;
    int k = 29439230;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 911571494;
    int k = 357920486;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 470471467;
    int k = 383653989;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "40845146235900226";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 1321684950;
    int k = 1610906284;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1321684950";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 962668700;
    int k = 1552320299;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "962668700";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 1855938358;
    int k = 1589679319;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "494160363644317962";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 945693672;
    int k = 1995299534;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "945693672";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 1121829815;
    int k = 510036533;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 1085488572;
    int k = 398983355;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 1587268015;
    int k = 837447602;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 423332300;
    int k = 165035639;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 1930571740;
    int k = 867298328;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 1461315454;
    int k = 531261815;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 30;
    int k = 2;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "42849873690624000";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 111;
    int k = 11;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "122087424094272000";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 53;
    int k = 4;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "885821206052908125";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 637;
    int k = 95;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "151534613656153728";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 151;
    int k = 16;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "532998118279051425";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 338;
    int k = 47;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "36814996368259200";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 51;
    int k = 4;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "178311467764705275";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 213;
    int k = 25;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "278761477374027648";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 231;
    int k = 27;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "642203484132672000";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 78;
    int k = 7;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "119715577952256000";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 72;
    int k = 6;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int n = 260;
    int k = 31;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int n = 440;
    int k = 57;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int n = 168;
    int k = 16;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int n = 287;
    int k = 31;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int n = 99;
    int k = 9;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int n = 87;
    int k = 7;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int n = 20;
    int k = 1;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int n = 107;
    int k = 9;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int n = 20;
    int k = 1;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int n = 96;
    int k = 10;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "9585618768101376";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int n = 59;
    int k = 5;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "60705973649857536";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int n = 89;
    int k = 8;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "494437513909964625";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int n = 89;
    int k = 8;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "494437513909964625";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int n = 31;
    int k = 2;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "191898783962510625";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int n = 70;
    int k = 6;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "333247405883392000";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int n = 97;
    int k = 10;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "13865696119905399";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int n = 62;
    int k = 5;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "728640635326636032";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int n = 98;
    int k = 9;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "886471860680806400";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int n = 78;
    int k = 7;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "119715577952256000";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int n = 59;
    int k = 5;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "60705973649857536";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int n = 19;
    int k = 1;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "121645100408832000";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int n = 89;
    int k = 8;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "494437513909964625";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int n = 30;
    int k = 2;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "42849873690624000";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int n = 68;
    int k = 6;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "73569236156416000";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int n = 74;
    int k = 7;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "17921371792896000";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int n = 5;
    int k = 5;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "5";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int n = 2000000000;
    int k = 1;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int n = 200000000;
    int k = 1;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int n = 669266210;
    int k = 185904517;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int n = 2000000000;
    int k = 1000000000;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int n = 1000000001;
    int k = 499999999;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int n = 1000000000;
    int k = 333333333;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int n = 200;
    int k = 22;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int n = 1000000000;
    int k = 400000000;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int n = 3;
    int k = 3;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "3";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int n = 720;
    int k = 100;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int n = 20;
    int k = 1;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int n = 2000000000;
    int k = 1500000000;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1000000000000000000";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int n = 19;
    int k = 1;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "121645100408832000";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int n = 25000000;
    int k = 9992000;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int n = 305;
    int k = 35;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int n = 1000000001;
    int k = 500000000;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "500000001500000001";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int n = 6000;
    int k = 1000;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int n = 4362252;
    int k = 1454084;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int n = 1650966;
    int k = 550322;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int n = 1000000000;
    int k = 431987941;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int n = 100000000;
    int k = 43987949;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int n = 110;
    int k = 10;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int n = 261871898;
    int k = 100333140;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int n = 200000000;
    int k = 43809569;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int n = 1999999996;
    int k = 1499999995;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "999999999999999996";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int n = 1000;
    int k = 2;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int n = 5120;
    int k = 1000;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int n = 1500000;
    int k = 499000;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int n = 999000000;
    int k = 425636850;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int n = 1000000000;
    int k = 425636850;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int n = 1;
    int k = 1;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int n = 281;
    int k = 30;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int n = 2000000000;
    int k = 1400000000;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int n = 2000000000;
    int k = 639514741;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int n = 1000000000;
    int k = 386822144;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int n = 1000;
    int k = 96;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int n = 330000;
    int k = 100000;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int n = 1999999999;
    int k = 1500000000;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "999999997500000001";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int n = 130;
    int k = 10;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int n = 1000000005;
    int k = 499999993;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int n = 1000000005;
    int k = 500000000;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int n = 999999999;
    int k = 500000001;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "499999997500000002";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int n = 4;
    int k = 10;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "4";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int n = 100000000;
    int k = 1;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int n = 1000000000;
    int k = 460000000;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int n = 1804289383;
    int k = 846930886;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int n = 1671014630;
    int k = 1066920525;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int n = 5;
    int k = 1;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "120";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int n = 666;
    int k = 88;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int n = 1000000000;
    int k = 499999985;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int n = 1999999999;
    int k = 1900000000;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "199999997900000001";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int n = 2000000000;
    int k = 1499999999;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int n = 31;
    int k = 2;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "191898783962510625";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int n = 100000;
    int k = 25000;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int n = 33;
    int k = 2;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int n = 1000000101;
    int k = 500000000;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int n = 100;
    int k = 10;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "36288000000000000";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int n = 1000000000;
    int k = 333333300;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int n = 2000000000;
    int k = 999999999;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int n = 158000000;
    int k = 74000000;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    int n = 18147702;
    int k = 6049234;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    int n = 15;
    int k = 1;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1307674368000";
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    int n = 900000000;
    int k = 300000000;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    int n = 1000000000;
    int k = 390000000;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    int n = 262144;
    int k = 65536;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    int n = 32;
    int k = 2;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    int n = 10;
    int k = 10;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "10";
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    int n = 120000000;
    int k = 40000000;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    int n = 1000000002;
    int k = 500000000;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    int n = 10000000;
    int k = 3333333;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    int n = 16;
    int k = 4;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "6144";
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    int n = 14;
    int k = 14;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "14";
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    int n = 10000;
    int k = 2;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    int n = 100;
    int k = 100;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "100";
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    int n = 2000000000;
    int k = 1000000001;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    int n = 2000000;
    int k = 700000;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    int n = 42;
    int k = 2;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    int n = 2;
    int k = 1;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "2";
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    int n = 9;
    int k = 3;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "162";
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    int n = 8;
    int k = 1;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "40320";
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    int n = 43;
    int k = 3;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    int n = 2000000000;
    int k = 100000005;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "overflow";
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    int n = 6;
    int k = 3;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "18";
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    int n = 10;
    int k = 1;
    Multifactorial* pObj = new Multifactorial();
    clock_t start = clock();
    string result = pObj->calcMultiFact(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "3628800";
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15868491&rd=10659&pm=6835
********************************************************************************
#include <vector> 
#include <string> 
#include <algorithm> 
#include <sstream> 
#include <iostream> 
#include <queue> 
#include <set> 
#include <map> 
 
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h> 
#include <ctype.h> 
 
using namespace std; 
 
#define PB push_back 
typedef long long LL; 
typedef vector <int> VI; 
typedef pair <int, int> PII; 
#define SZ(a) (int)((a).size()) 
#define ALL(a) (a).begin(), (a).end() 
#define REP(i, a) for (i = 0; i < (a); i++) 
#define REPS(i, a) REP(i, SZ(a)) 
 
template<class T> string str(T a) { ostringstream ss; ss << a; return ss.str(); } 
 
class Multifactorial 
{ 
public: 
  string calcMultiFact(int n, int k) 
  { 
    LL res = 1, ma = (LL)1e18; 
    int i; 
    for (i = n; i > 0; i -= k) 
      if (i > ma / res) 
        return "overflow"; 
      else 
        res *= i;   
    return str(res); 
  } 
};

********************************************************************************
*******************************************************************************/