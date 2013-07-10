/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8154
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

class KSubstring {
public:
    vector<int> maxSubstring(int A0, int X, int Y, int M, int n);
};

vector<int> KSubstring::maxSubstring(int A0, int X, int Y, int M, int n) {
    vector<int> ret;
    return ret;
}


int test0() {
    int A0 = 5;
    int X = 3;
    int Y = 4;
    int M = 25;
    int n = 5;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int A0 = 7;
    int X = 37;
    int Y = 23;
    int M = 4007;
    int n = 23;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 2};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int A0 = 7;
    int X = 37;
    int Y = 23;
    int M = 4003;
    int n = 500;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {231, 1};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int A0 = 7;
    int X = 37;
    int Y = 23;
    int M = 4003;
    int n = 700;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {268, 1};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int A0 = 1;
    int X = 32;
    int Y = 1;
    int M = 65536;
    int n = 1700;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {848, 0};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int A0 = 53;
    int X = 7;
    int Y = 11;
    int M = 40003;
    int n = 30;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 5};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int A0 = 2;
    int X = 4001;
    int Y = 17;
    int M = 1000003;
    int n = 200;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 1};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int A0 = 0;
    int X = 6;
    int Y = 12;
    int M = 1000209;
    int n = 2000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {781, 9};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int A0 = 0;
    int X = 6;
    int Y = 13;
    int M = 1000305;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {658, 2};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int A0 = 0;
    int X = 6;
    int Y = 13;
    int M = 1000338;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {663, 1};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int A0 = 0;
    int X = 6;
    int Y = 13;
    int M = 1000342;
    int n = 2900;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {311, 1};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int A0 = 0;
    int X = 6;
    int Y = 13;
    int M = 1000344;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {41, 12};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int A0 = 1;
    int X = 1;
    int Y = 1;
    int M = 2;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1500, 0};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int A0 = 3;
    int X = 4;
    int Y = 5;
    int M = 978951371;
    int n = 2756;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {36, 12};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int A0 = 8;
    int X = 19;
    int Y = 17;
    int M = 2093;
    int n = 12;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 161};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int A0 = 10;
    int X = 18;
    int Y = 10;
    int M = 3672;
    int n = 12;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 180};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int A0 = 18;
    int X = 2;
    int Y = 4698;
    int M = 4999;
    int n = 12;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 75};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int A0 = 10;
    int X = 18;
    int Y = 6;
    int M = 4884;
    int n = 12;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 132};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int A0 = 10;
    int X = 18;
    int Y = 7;
    int M = 2714;
    int n = 12;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 118};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int A0 = 53;
    int X = 13;
    int Y = 9;
    int M = 65535;
    int n = 500;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {244, 0};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int A0 = 12;
    int X = 34;
    int Y = 55;
    int M = 7890;
    int n = 123;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {35, 4};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int A0 = 0;
    int X = 1;
    int Y = 12345678;
    int M = 1000000000;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 82};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int A0 = 0;
    int X = 1;
    int Y = 1234567;
    int M = 999999999;
    int n = 100;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1234567};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int A0 = 961751977;
    int X = 961752983;
    int Y = 961751491;
    int M = 961905521;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {83, 1};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int A0 = 999999999;
    int X = 999999999;
    int Y = 999999999;
    int M = 1000000000;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1500, 0};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int A0 = 982450801;
    int X = 982450981;
    int Y = 982451161;
    int M = 982451333;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {65, 2};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int A0 = 941084101;
    int X = 941093911;
    int Y = 941101729;
    int M = 941482127;
    int n = 2500;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {113, 1};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int A0 = 941083987;
    int X = 941083993;
    int Y = 941083987;
    int M = 941084531;
    int n = 1700;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {349, 89};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int A0 = 941083987;
    int X = 941083993;
    int Y = 941083987;
    int M = 941084831;
    int n = 170;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {71, 1604};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int A0 = 941083987;
    int X = 941083993;
    int Y = 941083991;
    int M = 941084821;
    int n = 1200;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {413, 107};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int A0 = 941083987;
    int X = 941083993;
    int Y = 941084777;
    int M = 941088461;
    int n = 1700;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {505, 71};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int A0 = 2;
    int X = 7;
    int Y = 941084303;
    int M = 941089453;
    int n = 2234;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {854, 62};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int A0 = 7;
    int X = 3;
    int Y = 11;
    int M = 1000000000;
    int n = 30;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 25};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int A0 = 2;
    int X = 7;
    int Y = 941088167;
    int M = 941093551;
    int n = 2500;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {173, 6};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int A0 = 11;
    int X = 4003;
    int Y = 7;
    int M = 4007;
    int n = 1000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {312, 1};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int A0 = 2;
    int X = 19;
    int Y = 37;
    int M = 941084201;
    int n = 2234;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21, 4};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int A0 = 2;
    int X = 19;
    int Y = 941089207;
    int M = 941092013;
    int n = 2500;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1054, 5};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int A0 = 2;
    int X = 19;
    int Y = 941089207;
    int M = 941092013;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 1};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int A0 = 2;
    int X = 7;
    int Y = 2;
    int M = 9;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1497, 0};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int A0 = 2;
    int X = 7;
    int Y = 2;
    int M = 941084983;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1174, 10};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int A0 = 5;
    int X = 55;
    int Y = 555;
    int M = 5555;
    int n = 555;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {255, 0};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int A0 = 91;
    int X = 37;
    int Y = 13;
    int M = 1000007;
    int n = 2222;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {930, 1};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int A0 = 53;
    int X = 13;
    int Y = 9;
    int M = 65535;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1464, 0};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int A0 = 5;
    int X = 3;
    int Y = 4;
    int M = 25;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1500, 0};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int A0 = 12;
    int X = 34;
    int Y = 55;
    int M = 7890;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1441, 0};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int A0 = 1;
    int X = 2;
    int Y = 3;
    int M = 12334455;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1145, 1};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int A0 = 12;
    int X = 34;
    int Y = 55;
    int M = 29989;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1231, 1};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int A0 = 247830;
    int X = 423144;
    int Y = 528351;
    int M = 100000000;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1100, 0};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int A0 = 7523;
    int X = 11111;
    int Y = 1234;
    int M = 12345;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1085, 0};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int A0 = 5;
    int X = 199;
    int Y = 817238;
    int M = 999666111;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {143, 4};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int A0 = 3000;
    int X = 3000;
    int Y = 3000;
    int M = 99999999;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1300, 0};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int A0 = 1;
    int X = 1000;
    int Y = 0;
    int M = 100000007;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {87, 1};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int A0 = 12;
    int X = 123;
    int Y = 44;
    int M = 1000000000;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {390, 16};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int A0 = 53;
    int X = 13;
    int Y = 9;
    int M = 1165535;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1200, 0};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int A0 = 1;
    int X = 31;
    int Y = 17;
    int M = 12345679;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1093, 4};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int A0 = 6456;
    int X = 456456456;
    int Y = 546456456;
    int M = 1000000000;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1098, 512};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int A0 = 0;
    int X = 1;
    int Y = 1;
    int M = 1000000000;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int A0 = 5;
    int X = 3;
    int Y = 4;
    int M = 25234234;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {944, 2};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int A0 = 123456789;
    int X = 777777779;
    int Y = 888888889;
    int M = 987654321;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {583, 1};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int A0 = 5;
    int X = 3453;
    int Y = 345321;
    int M = 6574432;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {448, 0};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int A0 = 5;
    int X = 1000;
    int Y = 1000;
    int M = 1000000000;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1498, 0};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int A0 = 999999999;
    int X = 1;
    int Y = 1;
    int M = 1000000000;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int A0 = 8;
    int X = 19;
    int Y = 17;
    int M = 999999999;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {176, 1};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int A0 = 12389823;
    int X = 12340934;
    int Y = 58439581;
    int M = 939829834;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {316, 2};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int A0 = 878782;
    int X = 1231154;
    int Y = 78914542;
    int M = 92345677;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {219, 1};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int A0 = 235;
    int X = 327;
    int Y = 125;
    int M = 100090123;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {395, 1};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int A0 = 14365109;
    int X = 2874294;
    int Y = 93092422;
    int M = 999999997;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {266, 3};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int A0 = 53;
    int X = 13;
    int Y = 9;
    int M = 65535;
    int n = 2999;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1463, 0};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int A0 = 999997777;
    int X = 1;
    int Y = 1;
    int M = 1000000000;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int A0 = 999999999;
    int X = 987654321;
    int Y = 987654327;
    int M = 1000000000;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {584, 8};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int A0 = 345345;
    int X = 345;
    int Y = 45345534;
    int M = 1000000000;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1488, 0};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int A0 = 12;
    int X = 34;
    int Y = 55;
    int M = 123456789;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {503, 1};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int A0 = 5;
    int X = 3;
    int Y = 4;
    int M = 1000000000;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {662, 8};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int A0 = 1;
    int X = 2;
    int Y = 2;
    int M = 1000000000;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int A0 = 0;
    int X = 1;
    int Y = 1;
    int M = 100000000;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int A0 = 12;
    int X = 34;
    int Y = 55;
    int M = 999999999;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {38, 1};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int A0 = 9876543;
    int X = 987654321;
    int Y = 987654321;
    int M = 987654322;
    int n = 2997;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1498, 0};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int A0 = 999999991;
    int X = 872341235;
    int Y = 987654321;
    int M = 999999999;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {473, 9};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int A0 = 53;
    int X = 2003;
    int Y = 123314;
    int M = 1201231;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1202, 0};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int A0 = 0;
    int X = 0;
    int Y = 0;
    int M = 3;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1500, 0};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int A0 = 1000000;
    int X = 1000000;
    int Y = 1000000;
    int M = 10000000;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1500, 0};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int A0 = 999999999;
    int X = 999799951;
    int Y = 999999999;
    int M = 1000000000;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {197, 1};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int A0 = 100;
    int X = 789;
    int Y = 422;
    int M = 1000000000;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {47, 18};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int A0 = 5;
    int X = 21;
    int Y = 31;
    int M = 10000007;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {235, 0};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int A0 = 1;
    int X = 1;
    int Y = 1;
    int M = 1000000000;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int A0 = 3;
    int X = 4;
    int Y = 5;
    int M = 99987;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1280, 1};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int A0 = 53;
    int X = 31337;
    int Y = 1337;
    int M = 65535;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1496, 0};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int A0 = 12;
    int X = 34;
    int Y = 55;
    int M = 1000000000;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {500, 0};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int A0 = 752752727;
    int X = 727737527;
    int Y = 134537377;
    int M = 999999999;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {430, 9};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int A0 = 21;
    int X = 214435;
    int Y = 325326435;
    int M = 1000000000;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1488, 0};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int A0 = 999999999;
    int X = 1;
    int Y = 999999999;
    int M = 1000000000;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int A0 = 12345678;
    int X = 1234567;
    int Y = 12345;
    int M = 1000000000;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {198, 8};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int A0 = 1;
    int X = 782;
    int Y = 99;
    int M = 1000000000;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1000, 0};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int A0 = 78;
    int X = 12972351;
    int Y = 2418255;
    int M = 111626124;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {669, 3};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int A0 = 999999999;
    int X = 999999999;
    int Y = 999999999;
    int M = 1000000000;
    int n = 55;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {27, 0};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int A0 = 2;
    int X = 997137;
    int Y = 5;
    int M = 999999983;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int A0 = 0;
    int X = 0;
    int Y = 1;
    int M = 1000000000;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1499, 0};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int A0 = 12345;
    int X = 37523;
    int Y = 39727;
    int M = 999999937;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 9};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int A0 = 1;
    int X = 1;
    int Y = 1;
    int M = 10;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1500, 0};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int A0 = 100;
    int X = 7;
    int Y = 123;
    int M = 100000;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1460, 0};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int A0 = 65465;
    int X = 456546;
    int Y = 456456;
    int M = 4564501;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1428, 0};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int A0 = 50000;
    int X = 50000;
    int Y = 50000;
    int M = 1000000000;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1499, 0};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int A0 = 999887763;
    int X = 999887763;
    int Y = 999887763;
    int M = 1000000000;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {657, 3};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int A0 = 1;
    int X = 2;
    int Y = 23213;
    int M = 222222;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1476, 0};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int A0 = 3948867;
    int X = 58976;
    int Y = 487847855;
    int M = 909689084;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {311, 4};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int A0 = 32133;
    int X = 197999997;
    int Y = 213123213;
    int M = 997999999;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {134, 1};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int A0 = 13;
    int X = 2354234;
    int Y = 1371;
    int M = 1000000000;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1250, 0};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int A0 = 32767234;
    int X = 99991232;
    int Y = 78231232;
    int M = 999999999;
    int n = 2999;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {899, 121};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int A0 = 17;
    int X = 2;
    int Y = 11;
    int M = 1000000000;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 28};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int A0 = 453;
    int X = 125;
    int Y = 5476;
    int M = 134123;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1012, 0};
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int A0 = 1;
    int X = 31;
    int Y = 17;
    int M = 999999997;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {174, 4};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int A0 = 12341234;
    int X = 12341237;
    int Y = 12341233;
    int M = 999999991;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {116, 6};
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int A0 = 999999998;
    int X = 9997;
    int Y = 999999998;
    int M = 999999999;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {48, 3};
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int A0 = 9546;
    int X = 3546;
    int Y = 134;
    int M = 100000000;
    int n = 2;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 33840704};
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int A0 = 946455541;
    int X = 1;
    int Y = 1;
    int M = 1000000000;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int A0 = 999999999;
    int X = 1000000;
    int Y = 1000000;
    int M = 1000000000;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1499, 0};
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int A0 = 145;
    int X = 0;
    int Y = 0;
    int M = 99999989;
    int n = 389;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {194, 0};
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int A0 = 1234123;
    int X = 9871366;
    int Y = 9163245;
    int M = 29999997;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {595, 3};
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int A0 = 99999;
    int X = 0;
    int Y = 0;
    int M = 9999999;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1499, 0};
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int A0 = 13;
    int X = 62381318;
    int Y = 83219;
    int M = 1000000000;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1484, 0};
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int A0 = 37894325;
    int X = 43214321;
    int Y = 54325432;
    int M = 999999997;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {27, 7};
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int A0 = 10;
    int X = 1;
    int Y = 0;
    int M = 1000;
    int n = 3000;
    KSubstring* pObj = new KSubstring();
    clock_t start = clock();
    vector<int> result = pObj->maxSubstring(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1500, 0};
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=251074&rd=12176&pm=8154
********************************************************************************
#include <string>
#include <vector>
#include <map>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <set>
#include <iostream>
#include <sstream>
#include <cstddef>
#include <algorithm>
#include <utility>
#include <iterator>
#include <numeric>
#include <list>
#include <complex>
 
using namespace std;
 
typedef vector<int> vi;
typedef vector<string> vs;
typedef long long ll;
typedef complex<double> pnt;
typedef pair<int, int> pii;
 
#define RA(x) (x).begin(), (x).end()
#define FE(i, x) for (typeof((x).begin()) i = (x).begin(); i != (x).end(); i++)
#define SZ(x) ((int) (x).size())
 
 
class KSubstring
{
public:
    vector <int> maxSubstring(int A0, int X, int Y, int M, int n);
};
 
vector <int> KSubstring::maxSubstring(int A0, int X, int Y, int M, int n)
{
    ll A[n], B[n + 1];
    A[0] = A0;
    for (int i = 1; i < n; i++)
        A[i] = (A[i - 1] * X + Y) % M;
 
    B[0] = 0;
    partial_sum(A, A + n, B + 1);
 
    ll best = LONG_LONG_MAX;
    int bestk = 0;
    for (int k = n / 2; k > 0; k--)
    {
        set<ll> have;
        ll q[n + 1];
        for (int j = 0; j + k <= n; j++)
        {
            if (j >= k)
                have.insert(q[j - k]);
            ll d = B[j + k] - B[j];
            set<ll>::iterator p = have.lower_bound(d);
            if (p != have.end())
            {
                if (*p - d < best)
                {
                    bestk = k;
                    best = *p - d;
                }
            }
            if (p != have.begin())
            {
                p--;
                if (d - *p < best)
                {
                    bestk = k;
                    best = d - *p;
                }
            }
            q[j] = d;
        }
        if (best == 0)
            break;
    }
    vi ans;
    ans.push_back(bestk);
    ans.push_back(best);
    return ans;
}
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/