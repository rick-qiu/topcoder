/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7257
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

class NextPalindromicNumber {
public:
    string getNext(string n);
};

string NextPalindromicNumber::getNext(string n) {
    string ret;
    return ret;
}


int test0() {
    string n = "12345";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "12421";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string n = "858";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "868";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string n = "1999";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "2002";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string n = "1";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "2";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string n = "9999";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "10001";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string n = "91";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "99";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string n = "9999999999999999998";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "9999999999999999999";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string n = "9";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "11";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string n = "123999321";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "124000421";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string n = "98999989";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "99000099";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string n = "99000099";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "99011099";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string n = "990000099";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "990010099";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string n = "2";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "3";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string n = "8";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "9";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string n = "9";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "11";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string n = "99999999999999999999999990000000000000000000000000";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "99999999999999999999999999999999999999999999999999";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string n = "99999999999999999999999999999999999999999999999999";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "100000000000000000000000000000000000000000000000001";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string n = "9999999999999999999999999999999999999999999999999";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "10000000000000000000000000000000000000000000000001";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string n = "9999999999999999999999990000000000000000000000000";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "9999999999999999999999990999999999999999999999999";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string n = "9999999999999999999999999000000000000000000000000";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "9999999999999999999999999999999999999999999999999";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string n = "9899999999999999999999999999999999999999999999999";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "9900000000000000000000000000000000000000000000099";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string n = "699996";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "700007";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string n = "199999999999999991";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "200000000000000002";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string n = "66";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "77";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string n = "4999999999999999999999999994";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "5000000000000000000000000005";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string n = "20771985438476749999999999999999994767483458917702";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "20771985438476750000000000000000005767483458917702";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string n = "1168889999999999999999999999999999999999888611";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "1168890000000000000000000000000000000000988611";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string n = "8716627456669779999999779666547266178";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "8716627456669780000000879666547266178";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string n = "18395199159381";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "18395200259381";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string n = "5704058999999998504075";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "5704059000000009504075";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string n = "9071999999999999999999999999999999999999999991709";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "9072000000000000000000000000000000000000000002709";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string n = "98709999999999990789";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "98710000000000001789";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string n = "42107148129999992184170124";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "42107148130000003184170124";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string n = "575999999999999999999999999999999999999575";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "576000000000000000000000000000000000000675";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string n = "77170999999999999907177";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "77171000000000000017177";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string n = "43345258980805999999999999999999999950808985254334";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "43345258980806000000000000000000000060808985254334";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string n = "69996";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "70007";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string n = "338999833";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "339000933";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string n = "3524992709999999999999999999999999999999072994253";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "3524992710000000000000000000000000000000172994253";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string n = "899998";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "900009";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string n = "96637781267099999999999999999999999999076218773669";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "96637781267100000000000000000000000000176218773669";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string n = "6999996";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "7000007";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string n = "57915794481550999999999999999999905518449751975";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "57915794481551000000000000000000015518449751975";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string n = "3821239261387583870039999999300783857831629321283";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "3821239261387583870040000000400783857831629321283";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string n = "67581050873349049994094337805018576";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "67581050873349050005094337805018576";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string n = "65423364178363795925630388303652959736387146332456";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "65423364178363795925630399303652959736387146332456";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string n = "9127624432536804703369633074086352344267219";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "9127624432536804703370733074086352344267219";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string n = "363021120363";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "363022220363";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string n = "7012778579385320035189659569815300235839758772107";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "7012778579385320035189660669815300235839758772107";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string n = "88450614171917141605488";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "88450614172027141605488";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string n = "41516678381749083449813499431894438094718387661513";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "41516678381749083449813499431894438094718387661514";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string n = "509477171696171774904";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "509477171696171774905";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string n = "990939658249868877079681186970778868942856939098";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "990939658249868877079681186970778868942856939099";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string n = "1275218346474647543420209020243457464746438125720";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "1275218346474647543420209020243457464746438125721";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string n = "17084841422414848070";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "17084841422414848071";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string n = "89391827921002007224158499485142270020012972819399";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "89391827921002007224158500585142270020012972819398";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string n = "21175039311393057113";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "21175039322393057112";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string n = "895975058184632533033002200330335236481850579599";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "895975058184632533033003300330335236481850579598";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string n = "7104258297143952728239729279328272593417928524018";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "7104258297143952728239730379328272593417928524017";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string n = "1679561335772489503113059842775331659762";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "1679561335772489503223059842775331659761";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string n = "4";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "5";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string n = "93194561262582880252342621064817238452832276413792";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "93194561262582880252342622624325208828526216549139";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string n = "6661574544684912681299937581232154";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "6661574544684912772194864454751666";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string n = "5885352903460612030342171510491318604";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "5885352903460612031302160643092535885";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string n = "2878515948517711390467772034511832445241228298252";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "2878515948517711390467772777640931177158495158782";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string n = "2245767100126388949954834";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "2245767100127210017675422";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string n = "67865438";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "67866876";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string n = "78651257269418359230269404760145921966973956412606";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "78651257269418359230269411496203295381496275215687";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string n = "9841673418009141942691323";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "9841673418010108143761489";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string n = "3149733518890244926";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "3149733519153379413";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string n = "5290768517175280951176426748798698395003449409851";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "5290768517175280951176427246711590825717158670925";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string n = "10000000000000000000000000000000000000000000000000";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "10000000000000000000000000000000000000000000000001";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string n = "1000000000000000000000000000000000000000000000000";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "1000000000000000000000000000000000000000000000001";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string n = "10000000000000000000000000000000000000000000000001";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "10000000000000000000000011000000000000000000000001";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string n = "1000000000000000000000000000000000000000000000001";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "1000000000000000000000001000000000000000000000001";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string n = "10000000000000000000000190000000000000000000000009";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "10000000000000000000000199100000000000000000000001";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string n = "10000000000000000000000199100000000000000000000001";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "10000000000000000000000200200000000000000000000001";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string n = "19999999999999999999999999999999999999999999999999";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "20000000000000000000000000000000000000000000000002";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string n = "1999999999999999999999999999999999999999999999999";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "2000000000000000000000000000000000000000000000002";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string n = "99999";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "100001";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string n = "99999999999999999999999999999999999999999999999999";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "100000000000000000000000000000000000000000000000001";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string n = "12345123451234512345123451234512345123451234512345";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "12345123451234512345123455432154321543215432154321";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string n = "99999999999999999999990999999999999999999999999999";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "99999999999999999999991000019999999999999999999999";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string n = "1285999999999999999999999999999999999999999999921";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "1286000000000000000000000000000000000000000006821";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string n = "99999999999999999999999999999999999999999999999979";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "99999999999999999999999999999999999999999999999999";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string n = "19999999999999999999999999999999999999999999999999";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "20000000000000000000000000000000000000000000000002";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string n = "12358152091235815209123581520912358152091235815209";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "12358152091235815209123588532190251853219025185321";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string n = "1234567893458739491832474742381949387543978654321";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "1234567893458739491832475742381949378543987654321";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string n = "12345";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "12421";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string n = "9999999999999999999999999000000000000000000000000";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "9999999999999999999999999999999999999999999999999";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string n = "32525638967986969698867098987";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "32525638967987078976983652523";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string n = "9";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "11";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string n = "9875559891231239567893987653321321989555789";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "9875559891231239567893987659321321989555789";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string n = "111111113111111111112345678999999999999";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "111111113111111111121111111111311111111";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string n = "11233366558566332545551123336655856633254555";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "11233366558566332545555554523366585566333211";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string n = "3";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "4";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string n = "999";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "1001";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string n = "999999999999999999999999";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "1000000000000000000000001";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string n = "999999999999999999999999999";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "1000000000000000000000000001";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string n = "2599971";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "2600062";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string n = "99999999999999999999999990000000000000000000000000";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "99999999999999999999999999999999999999999999999999";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string n = "11111111111111111111111111111111111111111111111111";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "11111111111111111111111122111111111111111111111111";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string n = "123456789123456789123456789123456789";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "123456789123456789987654321987654321";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string n = "9999999978399999999999999000000000000000000000000";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "9999999978399999999999999999999999999938799999999";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string n = "32122";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "32123";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string n = "956321214512195632121451219563212145121658";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "956321214512195632122221236591215412123659";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string n = "80099294579248428914712983742613570009999999191990";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "80099294579248428914712988921741982484297549299008";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string n = "92999999999999999999999999999999999999799999999997";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "92999999999999999999999999999999999999999999999929";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string n = "999995421856548654218565486542189999999985654899";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "999995421856548654218565565812456845658124599999";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string n = "74658764359872037438647865874365694835943875984366";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "74658764359872037438647866874683473027895346785647";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string n = "12345678901234567890123456789012345678901234567890";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "12345678901234567890123466432109876543210987654321";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    string n = "99999999999999999999999999999999999999999999999991";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "99999999999999999999999999999999999999999999999999";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    string n = "111111111111111111111111";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "111111111112211111111111";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    string n = "12345555555555555555555555555555555555555555555555";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "12345555555555555555555566555555555555555555554321";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    string n = "99999999999999999999999999999999999999999999999";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "100000000000000000000000000000000000000000000001";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    string n = "9988776655676752431111111111111111111111";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "9988776655676752431111342576765566778899";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    string n = "99999999999999999999999";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "100000000000000000000001";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    string n = "11111111111011111111111111111111";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "11111111111011122111011111111111";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    string n = "487747873897374738643687737583466265426524652538";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "487747873897374738643687786346837473798378747784";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    string n = "1111111111111111111111111111111111111111111111";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "1111111111111111111111221111111111111111111111";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    string n = "1235434342568506854569889";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "1235434342568652434345321";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    string n = "11111111111111111111111111111111111111111111111112";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "11111111111111111111111122111111111111111111111111";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    string n = "10000000000000000000000000000000000002";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "10000000000000000011000000000000000001";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    string n = "124932";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "125521";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    string n = "99999999999999999999999999999999999";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "100000000000000000000000000000000001";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    string n = "12345678998765432112345678998765412332165498798765";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "12345678998765432112345688654321123456789987654321";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    string n = "900000000000000001000000000000000000";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "900000000000000001100000000000000009";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    string n = "2121";
    NextPalindromicNumber* pObj = new NextPalindromicNumber();
    clock_t start = clock();
    string result = pObj->getNext(n);
    clock_t end = clock();
    delete pObj;
    string expected = "2222";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15053601&rd=10010&pm=7257
********************************************************************************
#include<iostream>
#include<vector>
#include<string>
#include<set>
#include<map>
#include<fstream>
#include<sstream>
#include<queue>
#include<cmath>
using namespace std;   
#define FOR(i,A,N) for(int i=A;i<N;++i)
#define REP(i,N) FOR(i,0,N)
string s;
void add(int i)
{
  if(s[i] == '9')
  {
    if(i==s.size()-1)
    {
      s += "1";
      s[i] = '0';
    }
    else
    {
      s[i] = '0';
      add(i+1);
    }
  }
  else
    s[i] = (char)((int)s[i] +1);
}  
class NextPalindromicNumber {
public:
  string getNext(string);
};
 
string NextPalindromicNumber::getNext(string ss) {
s=ss;
  reverse(s.begin(),s.end());
    add(0);
    int l = s.size();
    for(int i=0; i<l/2; i++)
    {
      if(s[i]==s[l-i-1])
        continue;
      else if(s[i] < s[l-i-1])
        s[i] = s[l-i-1];
      else
      {
        add(i+1);
        s[i] = s[l-i-1];
      }
    }
    return s;
}

********************************************************************************
*******************************************************************************/