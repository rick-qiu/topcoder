/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12201
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

class HyperKnight {
public:
    long countCells(int a, int b, int numRows, int numColumns, int k);
};

long HyperKnight::countCells(int a, int b, int numRows, int numColumns, int k) {
    long ret;
    return ret;
}


int test0() {
    int a = 2;
    int b = 1;
    int numRows = 8;
    int numColumns = 8;
    int k = 4;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 20;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int a = 3;
    int b = 2;
    int numRows = 8;
    int numColumns = 8;
    int k = 2;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int a = 1;
    int b = 3;
    int numRows = 7;
    int numColumns = 11;
    int k = 0;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int a = 3;
    int b = 2;
    int numRows = 10;
    int numColumns = 20;
    int k = 8;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 56;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int a = 1;
    int b = 4;
    int numRows = 100;
    int numColumns = 10;
    int k = 6;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 564;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int a = 2;
    int b = 3;
    int numRows = 1000000000;
    int numColumns = 1000000000;
    int k = 8;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 999999988000000036;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int a = 2;
    int b = 3;
    int numRows = 7;
    int numColumns = 7;
    int k = 1;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int a = 2;
    int b = 3;
    int numRows = 7;
    int numColumns = 7;
    int k = 2;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int a = 2;
    int b = 3;
    int numRows = 7;
    int numColumns = 7;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int a = 2;
    int b = 3;
    int numRows = 7;
    int numColumns = 7;
    int k = 4;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int a = 2;
    int b = 3;
    int numRows = 7;
    int numColumns = 7;
    int k = 5;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
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
    int a = 2;
    int b = 3;
    int numRows = 7;
    int numColumns = 7;
    int k = 6;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int a = 2;
    int b = 3;
    int numRows = 7;
    int numColumns = 7;
    int k = 7;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int a = 2;
    int b = 3;
    int numRows = 7;
    int numColumns = 7;
    int k = 8;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int a = 499999998;
    int b = 499999999;
    int numRows = 1000000000;
    int numColumns = 1000000000;
    int k = 0;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int a = 499999998;
    int b = 499999999;
    int numRows = 1000000000;
    int numColumns = 1000000000;
    int k = 1;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int a = 499999998;
    int b = 499999999;
    int numRows = 1000000000;
    int numColumns = 1000000000;
    int k = 2;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 999999992000000016;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int a = 499999998;
    int b = 499999999;
    int numRows = 1000000000;
    int numColumns = 1000000000;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 3999999984;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int a = 499999998;
    int b = 499999999;
    int numRows = 1000000000;
    int numColumns = 1000000000;
    int k = 4;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 3999999988;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int a = 499999998;
    int b = 499999999;
    int numRows = 1000000000;
    int numColumns = 1000000000;
    int k = 5;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
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
    int a = 499999998;
    int b = 499999999;
    int numRows = 1000000000;
    int numColumns = 1000000000;
    int k = 6;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int a = 499999998;
    int b = 499999999;
    int numRows = 1000000000;
    int numColumns = 1000000000;
    int k = 7;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int a = 499999998;
    int b = 499999999;
    int numRows = 1000000000;
    int numColumns = 1000000000;
    int k = 8;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int a = 2;
    int b = 1;
    int numRows = 20001;
    int numColumns = 1000000000;
    int k = 0;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int a = 2;
    int b = 1;
    int numRows = 20001;
    int numColumns = 1000000000;
    int k = 1;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
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
    int a = 2;
    int b = 1;
    int numRows = 20001;
    int numColumns = 1000000000;
    int k = 2;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int a = 2;
    int b = 1;
    int numRows = 20001;
    int numColumns = 1000000000;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int a = 2;
    int b = 1;
    int numRows = 20001;
    int numColumns = 1000000000;
    int k = 4;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 2000039990;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int a = 2;
    int b = 1;
    int numRows = 20001;
    int numColumns = 1000000000;
    int k = 5;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
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
    int a = 2;
    int b = 1;
    int numRows = 20001;
    int numColumns = 1000000000;
    int k = 6;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 2000039986;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int a = 2;
    int b = 1;
    int numRows = 20001;
    int numColumns = 1000000000;
    int k = 7;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
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
    int a = 2;
    int b = 1;
    int numRows = 20001;
    int numColumns = 1000000000;
    int k = 8;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 19996999920012;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int a = 10000;
    int b = 5000;
    int numRows = 20001;
    int numColumns = 1000000000;
    int k = 0;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
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
    int a = 10000;
    int b = 5000;
    int numRows = 20001;
    int numColumns = 1000000000;
    int k = 1;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
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
    int a = 10000;
    int b = 5000;
    int numRows = 20001;
    int numColumns = 1000000000;
    int k = 2;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 100000000;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int a = 10000;
    int b = 5000;
    int numRows = 20001;
    int numColumns = 1000000000;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 200000000;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int a = 10000;
    int b = 5000;
    int numRows = 20001;
    int numColumns = 1000000000;
    int k = 4;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 9999900010000;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int a = 10000;
    int b = 5000;
    int numRows = 20001;
    int numColumns = 1000000000;
    int k = 5;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
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
    int a = 10000;
    int b = 5000;
    int numRows = 20001;
    int numColumns = 1000000000;
    int k = 6;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 9999800010000;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int a = 10000;
    int b = 5000;
    int numRows = 20001;
    int numColumns = 1000000000;
    int k = 7;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
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
    int a = 10000;
    int b = 5000;
    int numRows = 20001;
    int numColumns = 1000000000;
    int k = 8;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 999980000;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int a = 1;
    int b = 2;
    int numRows = 1000000000;
    int numColumns = 1000000000;
    int k = 0;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
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
    int a = 1;
    int b = 2;
    int numRows = 1000000000;
    int numColumns = 1000000000;
    int k = 1;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
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
    int a = 1;
    int b = 2;
    int numRows = 1000000000;
    int numColumns = 1000000000;
    int k = 2;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int a = 1;
    int b = 2;
    int numRows = 1000000000;
    int numColumns = 1000000000;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int a = 1;
    int b = 2;
    int numRows = 1000000000;
    int numColumns = 1000000000;
    int k = 4;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 3999999988;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int a = 1;
    int b = 2;
    int numRows = 1000000000;
    int numColumns = 1000000000;
    int k = 5;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int a = 1;
    int b = 2;
    int numRows = 1000000000;
    int numColumns = 1000000000;
    int k = 6;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 3999999984;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int a = 1;
    int b = 2;
    int numRows = 1000000000;
    int numColumns = 1000000000;
    int k = 7;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int a = 1;
    int b = 2;
    int numRows = 1000000000;
    int numColumns = 1000000000;
    int k = 8;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 999999992000000016;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int a = 1;
    int b = 2;
    int numRows = 1000000000;
    int numColumns = 5;
    int k = 0;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int a = 1;
    int b = 2;
    int numRows = 1000000000;
    int numColumns = 5;
    int k = 1;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int a = 1;
    int b = 2;
    int numRows = 1000000000;
    int numColumns = 5;
    int k = 2;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int a = 1;
    int b = 2;
    int numRows = 1000000000;
    int numColumns = 5;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int a = 1;
    int b = 2;
    int numRows = 1000000000;
    int numColumns = 5;
    int k = 4;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1999999998;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int a = 1;
    int b = 2;
    int numRows = 1000000000;
    int numColumns = 5;
    int k = 5;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int a = 1;
    int b = 2;
    int numRows = 1000000000;
    int numColumns = 5;
    int k = 6;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1999999994;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int a = 1;
    int b = 2;
    int numRows = 1000000000;
    int numColumns = 5;
    int k = 7;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
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
    int a = 1;
    int b = 2;
    int numRows = 1000000000;
    int numColumns = 5;
    int k = 8;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 999999996;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int a = 499999999;
    int b = 1;
    int numRows = 1000000000;
    int numColumns = 1000000000;
    int k = 0;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int a = 499999999;
    int b = 1;
    int numRows = 1000000000;
    int numColumns = 1000000000;
    int k = 1;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int a = 499999999;
    int b = 1;
    int numRows = 1000000000;
    int numColumns = 1000000000;
    int k = 2;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int a = 499999999;
    int b = 1;
    int numRows = 1000000000;
    int numColumns = 1000000000;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 3999999984;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int a = 499999999;
    int b = 1;
    int numRows = 1000000000;
    int numColumns = 1000000000;
    int k = 4;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 999999992000000024;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int a = 499999999;
    int b = 1;
    int numRows = 1000000000;
    int numColumns = 1000000000;
    int k = 5;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int a = 499999999;
    int b = 1;
    int numRows = 1000000000;
    int numColumns = 1000000000;
    int k = 6;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 3999999984;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int a = 499999999;
    int b = 1;
    int numRows = 1000000000;
    int numColumns = 1000000000;
    int k = 7;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int a = 499999999;
    int b = 1;
    int numRows = 1000000000;
    int numColumns = 1000000000;
    int k = 8;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int a = 19205425;
    int b = 29027233;
    int numRows = 79816846;
    int numColumns = 73398506;
    int k = 2;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1475393397722500;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int a = 19205425;
    int b = 29027233;
    int numRows = 79816846;
    int numColumns = 73398506;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1509055975267200;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int a = 19205425;
    int b = 29027233;
    int numRows = 79816846;
    int numColumns = 73398506;
    int k = 4;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1811160782212456;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int a = 19205425;
    int b = 29027233;
    int numRows = 79816846;
    int numColumns = 73398506;
    int k = 6;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 728904265614720;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int a = 19205425;
    int b = 29027233;
    int numRows = 79816846;
    int numColumns = 73398506;
    int k = 8;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 333922829215200;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int a = 36411905;
    int b = 49189985;
    int numRows = 123331332;
    int numColumns = 139724323;
    int k = 2;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 5303307302916100;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int a = 36411905;
    int b = 49189985;
    int numRows = 123331332;
    int numColumns = 139724323;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 3722193880339200;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int a = 36411905;
    int b = 49189985;
    int numRows = 123331332;
    int numColumns = 139724323;
    int k = 4;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 5481023866919750;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int a = 36411905;
    int b = 49189985;
    int numRows = 123331332;
    int numColumns = 139724323;
    int k = 6;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1694263899854400;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int a = 36411905;
    int b = 49189985;
    int numRows = 123331332;
    int numColumns = 139724323;
    int k = 8;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1031597918358786;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int a = 37909854;
    int b = 42557194;
    int numRows = 128417691;
    int numColumns = 92857213;
    int k = 2;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 5748628121205264;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int a = 37909854;
    int b = 42557194;
    int numRows = 128417691;
    int numColumns = 92857213;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1409439847106880;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int a = 37909854;
    int b = 42557194;
    int numRows = 128417691;
    int numColumns = 92857213;
    int k = 4;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 3956693595793024;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int a = 5347410;
    int b = 33895789;
    int numRows = 74759886;
    int numColumns = 97588821;
    int k = 8;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 207636366774844;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int a = 42207223;
    int b = 39173184;
    int numRows = 115662001;
    int numColumns = 97975491;
    int k = 4;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 3547412635778884;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int a = 42207223;
    int b = 39173184;
    int numRows = 115662001;
    int numColumns = 97975491;
    int k = 6;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 271902079870800;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int a = 42207223;
    int b = 39173184;
    int numRows = 115662001;
    int numColumns = 97975491;
    int k = 8;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 423749499494975;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int a = 6654070;
    int b = 1356936;
    int numRows = 57822120;
    int numColumns = 24685929;
    int k = 2;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 7365101232384;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int a = 6654070;
    int b = 1356936;
    int numRows = 57822120;
    int numColumns = 24685929;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 57502974571392;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int a = 26174793;
    int b = 2712259;
    int numRows = 85355565;
    int numColumns = 96339217;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 509091752034448;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int a = 26174793;
    int b = 2712259;
    int numRows = 85355565;
    int numColumns = 96339217;
    int k = 4;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 2619626079170604;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int a = 26174793;
    int b = 2712259;
    int numRows = 85355565;
    int numColumns = 96339217;
    int k = 6;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 3613024234951480;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int a = 26174793;
    int b = 2712259;
    int numRows = 85355565;
    int numColumns = 96339217;
    int k = 8;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1451920837003749;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int a = 38549418;
    int b = 49711042;
    int numRows = 144624062;
    int numColumns = 105034741;
    int k = 2;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 5944230512554896;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int a = 38549418;
    int b = 49711042;
    int numRows = 144624062;
    int numColumns = 105034741;
    int k = 8;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 253703198235546;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int a = 39483358;
    int b = 9722546;
    int numRows = 123397642;
    int numColumns = 96761518;
    int k = 2;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 378111602888464;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int a = 39483358;
    int b = 9722546;
    int numRows = 123397642;
    int numColumns = 96761518;
    int k = 6;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 3703776385142272;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int a = 39483358;
    int b = 9722546;
    int numRows = 123397642;
    int numColumns = 96761518;
    int k = 8;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 790639530846652;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int a = 35834099;
    int b = 7025192;
    int numRows = 73801792;
    int numColumns = 89315676;
    int k = 2;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 197413290547456;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int a = 35834099;
    int b = 7025192;
    int numRows = 73801792;
    int numColumns = 89315676;
    int k = 8;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 37652553175932;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int a = 4781822;
    int b = 9360408;
    int numRows = 54482604;
    int numColumns = 24850751;
    int k = 2;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 91463286558736;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int a = 4781822;
    int b = 9360408;
    int numRows = 54482604;
    int numColumns = 24850751;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 175151866109536;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int a = 4781822;
    int b = 9360408;
    int numRows = 54482604;
    int numColumns = 24850751;
    int k = 4;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 484491324356196;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int a = 43521866;
    int b = 5243715;
    int numRows = 101731108;
    int numColumns = 129509489;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1605757716567720;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int a = 43521866;
    int b = 5243715;
    int numRows = 101731108;
    int numColumns = 129509489;
    int k = 4;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 6460256857533394;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int a = 43521866;
    int b = 5243715;
    int numRows = 101731108;
    int numColumns = 129509489;
    int k = 6;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 4375432510194166;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int a = 43521866;
    int b = 5243715;
    int numRows = 101731108;
    int numColumns = 129509489;
    int k = 8;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 623710540183632;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int a = 11098020;
    int b = 36554824;
    int numRows = 107799910;
    int numColumns = 74593434;
    int k = 2;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 492664191681600;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int a = 11098020;
    int b = 36554824;
    int numRows = 107799910;
    int numColumns = 74593434;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 2260160959424640;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int a = 11098020;
    int b = 36554824;
    int numRows = 107799910;
    int numColumns = 74593434;
    int k = 4;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 3395116095947584;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int a = 11098020;
    int b = 36554824;
    int numRows = 107799910;
    int numColumns = 74593434;
    int k = 6;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1841751299645184;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int a = 18607318;
    int b = 20353033;
    int numRows = 58228002;
    int numColumns = 54010191;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 259864593138960;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int a = 18607318;
    int b = 20353033;
    int numRows = 58228002;
    int numColumns = 54010191;
    int k = 4;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1159370722873696;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int a = 18607318;
    int b = 20353033;
    int numRows = 58228002;
    int numColumns = 54010191;
    int k = 6;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 107627034157230;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int a = 18607318;
    int b = 20353033;
    int numRows = 58228002;
    int numColumns = 54010191;
    int k = 8;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 233114026786000;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int a = 43265408;
    int b = 3290218;
    int numRows = 90125504;
    int numColumns = 103363137;
    int k = 4;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 6526481887540324;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int a = 43265408;
    int b = 3290218;
    int numRows = 90125504;
    int numColumns = 103363137;
    int k = 6;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1633147131813420;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int a = 43265408;
    int b = 3290218;
    int numRows = 90125504;
    int numColumns = 103363137;
    int k = 8;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 60506942310848;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int a = 22620589;
    int b = 11861535;
    int numRows = 67151929;
    int numColumns = 50577031;
    int k = 2;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 562784050224900;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int a = 22620589;
    int b = 11861535;
    int numRows = 67151929;
    int numColumns = 50577031;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1020951164703120;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int a = 22620589;
    int b = 11861535;
    int numRows = 67151929;
    int numColumns = 50577031;
    int k = 4;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1109402065853944;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int a = 22620589;
    int b = 11861535;
    int numRows = 67151929;
    int numColumns = 50577031;
    int k = 6;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 586295367505232;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int a = 22620589;
    int b = 11861535;
    int numRows = 67151929;
    int numColumns = 50577031;
    int k = 8;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 116912546455603;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int a = 1;
    int b = 2;
    int numRows = 5;
    int numColumns = 5;
    int k = 0;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int a = 1;
    int b = 2;
    int numRows = 5;
    int numColumns = 5;
    int k = 1;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int a = 1;
    int b = 2;
    int numRows = 5;
    int numColumns = 5;
    int k = 2;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int a = 1;
    int b = 2;
    int numRows = 5;
    int numColumns = 5;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int a = 1;
    int b = 2;
    int numRows = 5;
    int numColumns = 5;
    int k = 4;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int a = 1;
    int b = 2;
    int numRows = 5;
    int numColumns = 5;
    int k = 5;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int a = 1;
    int b = 2;
    int numRows = 5;
    int numColumns = 5;
    int k = 6;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int a = 1;
    int b = 2;
    int numRows = 5;
    int numColumns = 5;
    int k = 7;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int a = 1;
    int b = 2;
    int numRows = 5;
    int numColumns = 5;
    int k = 8;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int a = 3000013;
    int b = 5000017;
    int numRows = 987654321;
    int numColumns = 123456789;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 48000304000416;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int a = 4;
    int b = 2;
    int numRows = 100;
    int numColumns = 500;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 32;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int a = 1;
    int b = 2;
    int numRows = 8;
    int numColumns = 8;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int a = 2;
    int b = 1;
    int numRows = 8;
    int numColumns = 8;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int a = 3;
    int b = 1;
    int numRows = 8;
    int numColumns = 8;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int a = 156;
    int b = 178;
    int numRows = 100000000;
    int numColumns = 100000000;
    int k = 4;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 62399779792;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int a = 2;
    int b = 3;
    int numRows = 1000000000;
    int numColumns = 1000000000;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int a = 2;
    int b = 1;
    int numRows = 1000000000;
    int numColumns = 1000000000;
    int k = 8;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 999999992000000016;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int a = 111111;
    int b = 1111111;
    int numRows = 1000000000;
    int numColumns = 1000000000;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 888888000000;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int a = 2;
    int b = 1;
    int numRows = 100;
    int numColumns = 100;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int a = 2;
    int b = 3;
    int numRows = 1000000000;
    int numColumns = 1000000000;
    int k = 4;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 7999999956;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int a = 2;
    int b = 1;
    int numRows = 5;
    int numColumns = 5;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int a = 5;
    int b = 99;
    int numRows = 1000;
    int numColumns = 1000;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 3760;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int a = 4;
    int b = 2;
    int numRows = 1000;
    int numColumns = 1000;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 32;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int a = 3;
    int b = 2;
    int numRows = 8;
    int numColumns = 8;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int a = 10;
    int b = 8;
    int numRows = 100;
    int numColumns = 100;
    int k = 4;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 2576;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int a = 50;
    int b = 40;
    int numRows = 200;
    int numColumns = 200;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 3200;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int a = 1;
    int b = 2;
    int numRows = 1000;
    int numColumns = 1000;
    int k = 8;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 992016;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int a = 10;
    int b = 7;
    int numRows = 10000;
    int numColumns = 10000;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 168;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int a = 19;
    int b = 57;
    int numRows = 200;
    int numColumns = 312;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 5776;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int a = 600000;
    int b = 500000;
    int numRows = 1000000000;
    int numColumns = 1000000000;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 400000000000;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    int a = 2;
    int b = 1;
    int numRows = 100000;
    int numColumns = 100000;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    int a = 499999999;
    int b = 499999998;
    int numRows = 1000000000;
    int numColumns = 1000000000;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 3999999984;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    int a = 5;
    int b = 3;
    int numRows = 10000;
    int numColumns = 10000;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 48;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    int a = 3;
    int b = 1;
    int numRows = 7;
    int numColumns = 7;
    int k = 5;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    int a = 11;
    int b = 234;
    int numRows = 10000;
    int numColumns = 20000;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 19624;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    int a = 1000;
    int b = 1200;
    int numRows = 100000;
    int numColumns = 120000;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1600000;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    int a = 2;
    int b = 3;
    int numRows = 8;
    int numColumns = 8;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    int a = 3;
    int b = 5;
    int numRows = 100;
    int numColumns = 100;
    int k = 4;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1096;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    int a = 5;
    int b = 70;
    int numRows = 1000000000;
    int numColumns = 1000000000;
    int k = 6;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 259999963600;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    int a = 10;
    int b = 30;
    int numRows = 100;
    int numColumns = 1000;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1600;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    int a = 499999998;
    int b = 499999990;
    int numRows = 1000000000;
    int numColumns = 1000000000;
    int k = 2;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 999999960000000400;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    int a = 2;
    int b = 1;
    int numRows = 1000000000;
    int numColumns = 1000000000;
    int k = 4;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 3999999988;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    int a = 26;
    int b = 16;
    int numRows = 567;
    int numColumns = 123;
    int k = 5;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    int a = 1;
    int b = 2;
    int numRows = 10;
    int numColumns = 10;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    int a = 2;
    int b = 1;
    int numRows = 10;
    int numColumns = 10;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    int a = 99999999;
    int b = 999999;
    int numRows = 1000000000;
    int numColumns = 1000000000;
    int k = 4;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 42403996807999992;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    int a = 23;
    int b = 4;
    int numRows = 2542;
    int numColumns = 5463;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 608;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    int a = 1;
    int b = 3;
    int numRows = 7;
    int numColumns = 7;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    int a = 99;
    int b = 100;
    int numRows = 100000;
    int numColumns = 100000;
    int k = 2;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 39204;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    int a = 400000000;
    int b = 200000000;
    int numRows = 1000000000;
    int numColumns = 1000000000;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 320000000000000000;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    int a = 1;
    int b = 3;
    int numRows = 1000000000;
    int numColumns = 1000000000;
    int k = 4;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 3999999992;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    int a = 4;
    int b = 3;
    int numRows = 14;
    int numColumns = 15;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 24;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    int a = 10;
    int b = 20;
    int numRows = 100;
    int numColumns = 100;
    int k = 3;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 800;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    int a = 49999999;
    int b = 50000000;
    int numRows = 100000003;
    int numColumns = 100000007;
    int k = 4;
    HyperKnight* pObj = new HyperKnight();
    clock_t start = clock();
    long result = pObj->countCells(a, b, numRows, numColumns, k);
    clock_t end = clock();
    delete pObj;
    long expected = 999999984;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=23022116&rd=15181&pm=12201
********************************************************************************
#ifdef defines
 
class HyperKnight {
public:
  long long countCells(int a_, int b_, int numRows, int numColumns, int k) {
    LL a = a_, b = b_;
    if(b>a) swap(a,b);
    if(k==2) return 4*b*b;
    if(k==3) return (a-b)*b*8;
    if(k==4) return (a-b)*(a-b)*4+b*(numRows-2*a + numColumns-2*a)*2;
    if(k==6) return (a-b)*(numRows-2*a + numColumns-2*a)*2;
    if(k==8) return (numRows-2*a) * (numColumns-2*a);
    return 0;
  }
};
 
#else
 
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <list>
#include <algorithm>
#include <iterator>
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
 
// macro hackery. everything should do what the name suggests.
// but if anything is broken, challenge and I'll fix it!
/* BEGIN>nab */
typedef long long LL;
/* END>nab */
 
#define defines
#include "HyperKnight.cc"
 
#endif
//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/