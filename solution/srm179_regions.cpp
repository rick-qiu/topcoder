/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1099
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

class Regions {
public:
    int numTaxes(vector<int> row, vector<int> col);
};

int Regions::numTaxes(vector<int> row, vector<int> col) {
    int ret;
    return ret;
}


int test0() {
    vector<int> row = {4, 2, 3};
    vector<int> col = {4, 2, 6};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> row = {0, 1000000000, 0};
    vector<int> col = {0, 1000000000, 0};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000000;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> row = {0, 10, 10};
    vector<int> col = {0, 2, 2};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> row = {9, 0};
    vector<int> col = {0, 9};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> row = {0, 9};
    vector<int> col = {0, 9};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> row = {0, 9};
    vector<int> col = {0, 1};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> row = {0, 1000000000, 6};
    vector<int> col = {0, 999999999, 18};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> row = {1000, 100000, 100000};
    vector<int> col = {0, 100000, 1000000000};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 1000099000;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> row = {1000, 100000, 100000};
    vector<int> col = {0, 101000, 1000000000};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 1000098000;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> row = {1, 2, 3, 4, 5, 6, 7, 8, 9, 8, 7, 7};
    vector<int> col = {100, 200, 300, 400, 500, 600, 700, 800, 900, 900, 900, 901};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 811;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> row = {1000, 100000, 100000};
    vector<int> col = {0, 100999, 1000000000};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 1000099000;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> row = {1, 2, 3, 4, 5, 6, 7, 8, 9, 8, 7, 7};
    vector<int> col = {100, 200, 300, 400, 500, 600, 700, 800, 900, 900, 900, 900};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 810;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> row = {100, 200, 300, 400, 500, 600, 700, 800, 900, 900, 900, 900};
    vector<int> col = {1, 2, 3, 4, 5, 6, 7, 8, 9, 8, 7, 7};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 810;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> row = {1, 1, 1};
    vector<int> col = {999999999, 999999999, 999999999};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
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
    vector<int> row = {1, 1, 1};
    vector<int> col = {999999999, 1, 999999999};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 1999999996;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> row = {1, 1, 1, 1};
    vector<int> col = {999999999, 1, 999999999, 2};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> row = {999999999, 1, 999999999, 999999999};
    vector<int> col = {1, 1, 1, 5};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000000;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> row = {999999999, 1, 999999999, 999999999};
    vector<int> col = {1, 1, 1, 6};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> row = {345111111, 100234567, 123456, 654321};
    vector<int> col = {251435123, 412345123, 341235643, 123123123};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 795650520;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> row = {0, 1000000000, 6};
    vector<int> col = {0, 999999999, 18};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> row = {4, 2, 3};
    vector<int> col = {4, 2, 6};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> row = {0, 10, 10};
    vector<int> col = {0, 2, 2};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> row = {55, 455, 86, 500, 500, 333, 444, 5, 834, 5, 999, 55, 455, 86, 500, 500, 333, 444, 5, 834, 5, 999, 5, 834, 5, 999, 55, 455, 500, 444, 456, 19, 300, 55, 89, 33, 100, 1, 2, 3, 4, 5, 6, 7, 866, 56, 111, 48, 444};
    vector<int> col = {43, 9, 86, 500, 500, 333, 333, 994, 934, 22, 82, 55, 455, 86, 500, 500, 333, 444, 5, 834, 5, 999, 4, 934, 22, 82, 55, 455, 99, 1000, 1, 2, 3, 4, 5, 99, 455, 333, 698, 453, 756, 243, 567, 44, 12, 15, 16, 88, 1000};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 29428;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> row = {0, 2, 0, 1, 1, 3};
    vector<int> col = {0, 2, 2, 0, 1, 30000};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 30009;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> row = {5, 9};
    vector<int> col = {6, 10};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> row = {0, 2};
    vector<int> col = {0, 10};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> row = {0, 100000000};
    vector<int> col = {0, 100000000};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 100000000;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> row = {0, 50};
    vector<int> col = {0, 38};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 86;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> row = {321654987, 326598741, 1354689, 321654987, 12326547, 6546313, 6587313, 513847, 1681, 654987333, 1, 2};
    vector<int> col = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 2, 321654};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> row = {0, 3};
    vector<int> col = {0, 5};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> row = {0, 4};
    vector<int> col = {0, 6};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> row = {0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000};
    vector<int> col = {0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> row = {321, 3, 21, 18, 4, 7, 11, 13, 16, 79};
    vector<int> col = {0, 2, 7, 11115, 12, 14, 19, 1, 7, 6};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 22673;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> row = {1, 2};
    vector<int> col = {1, 6};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> row = {0, 6};
    vector<int> col = {0, 20};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> row = {0, 1, 2, 3, 4, 5, 34543, 4343, 345345, 6747, 7436, 436, 34};
    vector<int> col = {0, 2, 5, 9, 14, 20, 23478, 3245, 765, 64250, 64250, 3245, 34};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 926322;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> row = {4, 2, 3, 0, 10, 10};
    vector<int> col = {4, 2, 6, 0, 2, 2};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> row = {0, 2, 777777700};
    vector<int> col = {0, 4, 777777700};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 1555555400;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> row = {0, 65536};
    vector<int> col = {0, 65536};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 65536;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> row = {0, 1};
    vector<int> col = {0, 1};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> row = {0, 1000000000, 0, 100000000, 0, 100000000, 0, 9999999, 0, 99999992, 3, 99999994, 9873, 5186, 1873, 18438, 112};
    vector<int> col = {1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 6548, 153, 4831, 13, 23, 4};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> row = {0, 4};
    vector<int> col = {0, 2};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> row = {0, 5};
    vector<int> col = {0, 7};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> row = {42, 532553, 42424};
    vector<int> col = {242424, 525, 777};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 1264784;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> row = {0, 2};
    vector<int> col = {0, 4};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> row = {99999999, 0};
    vector<int> col = {99999997, 0};
    Regions* pObj = new Regions();
    clock_t start = clock();
    int result = pObj->numTaxes(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 199999995;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=310430&rd=4715&pm=1099
********************************************************************************
#include <vector>
#include <string>
 
using namespace std;
 
class Regions{
 
long long gcd(long long a, long long b) {
        if (a<0) return gcd(-a,b);
        if (b<0) return gcd(a,-b);
        if (a<b) return gcd(b,a);
        if (b==0) return a;
        return gcd(b,a%b);
}
  long long count(long long dr, long long dc) {
    if (dr<0) dr=-dr;
    if (dc<0) dc=-dc;
    long long n=dr+dc;
    long long a=dr*2;
    long long b=dc*2;
    long long m=gcd(a,b);
    if (m==0) return n;
    a/=m; b/=m;
    if (a%2==0) return n;
    if (b%2==0) return n;
    return n-m/2;
  }
public:
  int numTaxes(vector <int> row, vector <int> col) {
    int i;
    long long sum=0;
    for (i=1;i<row.size();i++) {
      sum+=count(row[i]-row[i-1],col[i]-col[i-1]);
    }
    if (sum>2000000000) return -1;
    return (int)(sum);
  };
};
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/