/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7397
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

class KLastNonZeroDigits {
public:
    string getKDigits(int N, int K);
};

string KLastNonZeroDigits::getKDigits(int N, int K) {
    string ret;
    return ret;
}


int test0() {
    int N = 10;
    int K = 3;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "288";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 6;
    int K = 1;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "2";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 6;
    int K = 3;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "72";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 7;
    int K = 2;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "04";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 20;
    int K = 9;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "200817664";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 16;
    int K = 6;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "789888";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 16;
    int K = 1;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "8";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 17;
    int K = 6;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "428096";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 3;
    int K = 8;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "6";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 18;
    int K = 8;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "73705728";
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
    int K = 8;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "72";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 16;
    int K = 9;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "922789888";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 20;
    int K = 4;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "7664";
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
    int K = 7;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "72";
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
    int K = 3;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "72";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 13;
    int K = 7;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "2270208";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 11;
    int K = 7;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "399168";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 16;
    int K = 3;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "888";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 18;
    int K = 7;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "3705728";
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
    int K = 5;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "24";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 8;
    int K = 7;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "4032";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 1;
    int K = 6;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 5;
    int K = 2;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "12";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 19;
    int K = 3;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "832";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 10;
    int K = 5;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "36288";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 1;
    int K = 1;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 20;
    int K = 1;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "4";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 19;
    int K = 8;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "00408832";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 20;
    int K = 8;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "00817664";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 8;
    int K = 3;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "032";
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
    int K = 9;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "871782912";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 13;
    int K = 9;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "62270208";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 3;
    int K = 8;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "6";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 15;
    int K = 1;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "8";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 6;
    int K = 3;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "72";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 1;
    int K = 9;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 1;
    int K = 5;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 4;
    int K = 8;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "24";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 10;
    int K = 6;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "36288";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 20;
    int K = 9;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "200817664";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 10;
    int K = 3;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "288";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 7;
    int K = 2;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "04";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 8;
    int K = 3;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "032";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 5;
    int K = 9;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "12";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 15;
    int K = 2;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "68";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 2;
    int K = 2;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "2";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 2;
    int K = 9;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "2";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 18;
    int K = 9;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "373705728";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 17;
    int K = 9;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "687428096";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 20;
    int K = 7;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "0817664";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 19;
    int K = 9;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "100408832";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 20;
    int K = 8;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "00817664";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 3;
    int K = 5;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "6";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 5;
    int K = 1;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "2";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 19;
    int K = 8;
    KLastNonZeroDigits* pObj = new KLastNonZeroDigits();
    clock_t start = clock();
    string result = pObj->getKDigits(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "00408832";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=14767863&rd=10665&pm=7397
********************************************************************************
// By mirosuaf
#include <algorithm> 
#include <cstdio> 
#include <cstdlib> 
#include <cctype> 
#include <cmath> 
#include <iostream> 
#include <sstream> 
#include <string> 
#include <utility> 
#include <vector> 
using namespace std; 
#define VAR(a,b) typeof(b) a=(b) 
#define REP(i,n) for(int _n=n, i=0;i<_n;++i) 
#define FOR(i,a,b) for(int i=(a),_b=(b);i<=_b;++i) 
#define FORD(i,a,b) for(int i=(a),_b=(b);i>=_b;--i) 
#define FOREACH(it,c) for(VAR(it,(c).begin());it!=(c).end();++it) 
#define ALL(f,w) ({ bool _ok=true; f _ok=_ok && (w); _ok; }) 
#define EXISTS(f,w) (!ALL(f,!(w))) 
typedef long long LL; 
const int INF = 1000000000; 
typedef vector<int> VI; 
 
    class KLastNonZeroDigits
        { 
        public: 
        string getKDigits(int n, int k) 
            { 
string ss;
 
 
 
if (n==1) ss="1";
if (n==2) ss="2";
if (n==3) ss="6";
if (n==4) ss="24";
if (n==5) ss="12";
if (n==6) ss="72";
if (n==7) ss="504";
if (n==8) ss="4032";
if (n==9) ss="36288";
if (n==10) ss="36288";
if (n==11) ss="399168";
if (n==12) ss="4790016";
if (n==13) ss="62270208";
if (n==14) ss="871782912";
if (n==15) ss="1307674368";
if (n==16) ss="20922789888";
if (n==17) ss="355687428096";
if (n==18) ss="6402373705728";
if (n==19) ss="121645100408832";
if (n==20) ss="243290200817664";
 
 
if (k>=ss.size()) return ss;
string s="";
FORD(i,ss.size()-1,ss.size()-k) s=ss[i]+s;
return s;
 
 
 
 
            } 
        
 
        }; 
 
    
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/