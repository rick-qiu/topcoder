/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8758
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

class AvoidingProduct {
public:
    vector<int> getTriple(vector<int> a, int n);
};

vector<int> AvoidingProduct::getTriple(vector<int> a, int n) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> a = {2, 4};
    int n = 4;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 3};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> a = {1};
    int n = 10;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 2};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> a = {1, 2};
    int n = 10;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3, 3};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> a = {1, 3};
    int n = 12;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 2};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> a = {1, 3};
    int n = 13;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 4};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {51, 51, 51};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> a = {};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1000};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 1;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 11};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 2;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 11};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 3;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 11};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 4;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 11};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 5;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 11};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 6;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 11};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 7;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 11};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 8;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 11};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 9;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 11};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 11};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 11;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 11};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 12;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 11};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 13};
    int n = 13;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 11};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 14;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 11};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 15;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 11};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 16;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 11};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> a = {17, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 17;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 11};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 18;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 11};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> a = {1, 2, 19, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 19;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 11};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 20;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 11};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> a = {1, 2, 3, 4, 5, 20, 6, 7, 8, 9, 10};
    int n = 20;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 11};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 40};
    int n = 40;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 11};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 60;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 11};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 80;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 11};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    int n = 100;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 14, 14};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 15, 20, 120, 30};
    int n = 120;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 11};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> a = {1, 2, 3, 4, 5, 140, 6, 7, 8, 9, 10};
    int n = 140;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 11};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 160;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 11};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 180;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 11};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 50, 23, 22};
    int n = 200;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 11};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 14};
    int n = 220;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 11};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 60};
    int n = 240;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 11};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    int n = 260;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 14, 14};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> a = {1, 70, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 14, 17, 16, 19, 18, 23, 31};
    int n = 280;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 12, 12};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 25, 9, 10};
    int n = 300;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 11};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 320, 7, 8, 9, 10, 13};
    int n = 320;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 11};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> a = {1, 2, 3, 38, 4, 5, 6, 7, 8, 9, 10, 11};
    int n = 340;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 12, 12};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 40, 10, 11, 15, 18};
    int n = 360;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 12, 12};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 42, 8, 380, 9, 10, 11, 21, 95};
    int n = 380;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 12, 12};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 25, 9, 10, 11};
    int n = 400;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 12, 12};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int n = 420;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 12, 12};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int n = 440;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 12, 12};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 13};
    int n = 460;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 12, 12};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 40, 11, 12, 16, 120};
    int n = 480;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 13, 13};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 20, 25};
    int n = 500;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 12, 12};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int n = 520;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 12, 12};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 15};
    int n = 540;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 12, 12};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 17, 16, 560};
    int n = 560;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 12, 12};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> a = {1, 2, 3, 4, 64, 5, 6, 7, 8, 9, 10, 11, 12, 13, 24};
    int n = 580;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 14, 14};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 600, 10, 11};
    int n = 600;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 12, 12};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 620, 17};
    int n = 620;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 12, 12};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> a = {1, 32, 2, 3, 71, 4, 64, 5, 6, 7, 8, 9, 40, 10, 11, 160, 12, 13, 18, 80, 20, 27, 26};
    int n = 640;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 14, 14};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 44, 16, 660};
    int n = 660;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 12, 12};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> a = {34, 1, 2, 3, 4, 5, 6, 680, 7, 8, 9, 10, 11, 14, 17, 27};
    int n = 680;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 12, 12};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 78, 10, 11};
    int n = 700;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 12, 12};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 720, 29, 240, 180};
    int n = 720;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 13, 13};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15, 185, 18, 21, 31};
    int n = 740;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 14, 14};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 190};
    int n = 760;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 13, 13};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 16};
    int n = 780;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 14, 14};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> a = {1, 2, 32, 3, 33, 4, 5, 6, 7, 8, 9, 10, 11, 12, 15, 18, 23};
    int n = 800;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 13, 13};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> a = {1, 2, 3, 33, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15, 17, 23, 91};
    int n = 820;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 14, 14};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int n = 840;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 13, 13};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 43, 9, 10, 11, 12, 15, 18, 24};
    int n = 860;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 13, 13};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> a = {440, 880, 1, 2, 3, 4, 98, 5, 6, 7, 8, 9, 10, 11, 12, 16, 21, 22, 24};
    int n = 880;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 13, 13};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> a = {1, 2, 100, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 14, 18, 900};
    int n = 900;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 13, 13};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> a = {102, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 46, 17, 26};
    int n = 920;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 13, 13};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 47};
    int n = 940;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 13, 13};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> a = {1, 2, 32, 3, 4, 5, 6, 7, 8, 9, 10, 40, 11, 12, 16, 80, 23, 27};
    int n = 960;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 13, 13};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> a = {1, 35, 2, 3, 4, 39, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 49, 28};
    int n = 980;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 15, 15};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 40, 10, 11, 12, 13, 16, 50, 18, 20, 24, 28};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 14, 14};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> a = {1, 2, 10};
    int n = 10;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3, 3};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> a = {1, 2, 3, 5};
    int n = 30;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 4};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> a = {1, 2, 3};
    int n = 50;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 4};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> a = {1, 2, 3, 4, 7};
    int n = 70;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 5, 5};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> a = {1, 2, 3, 4, 5};
    int n = 90;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 6, 6};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> a = {1, 2, 3, 4, 22, 110, 10, 12};
    int n = 110;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 5, 5};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> a = {1, 2, 3, 4, 5};
    int n = 130;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 6, 6};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> a = {1, 2, 3, 4, 5};
    int n = 150;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 6, 6};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> a = {17, 1, 2, 19, 3, 4, 6, 7, 43, 14};
    int n = 170;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 5, 8};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> a = {1, 2, 3, 4, 21, 38, 190, 5, 8, 95, 12};
    int n = 190;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 6, 6};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 210};
    int n = 210;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 7, 7};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> a = {1, 2, 3, 4, 5, 7, 231, 230, 77, 9, 46, 115, 23, 58};
    int n = 230;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 6, 6};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> a = {1, 2, 3, 4, 250, 7, 8, 10, 125, 28};
    int n = 250;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 6, 9};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> a = {17, 1, 2, 3, 4, 5, 27, 45};
    int n = 270;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 6, 7};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> a = {1, 32, 2, 290, 3, 4, 5, 7, 8, 145};
    int n = 290;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 6, 9};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> a = {34, 1, 2, 3, 4, 5, 13};
    int n = 310;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 6, 9};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> a = {1, 2, 3, 4, 6, 7, 8, 11, 13};
    int n = 330;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 5, 14};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 350};
    int n = 350;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 8, 8};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> a = {1, 2, 3, 4, 5, 23, 7, 10};
    int n = 370;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 8, 8};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> a = {1, 2, 3, 4, 5, 39, 6, 7, 11, 13, 390};
    int n = 390;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 8, 8};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> a = {17, 205, 410, 1, 2, 3, 4, 5, 6};
    int n = 410;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 7, 8};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 43, 13};
    int n = 430;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 7, 9};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> a = {16, 1, 2, 18, 3, 4, 5, 8, 9, 28, 15};
    int n = 450;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 7, 11};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> a = {16, 1, 19, 2, 3, 4, 7, 8, 13, 47};
    int n = 470;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 9, 9};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> a = {35, 1, 2, 3, 4, 5, 7, 8, 9, 41, 123};
    int n = 490;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 6, 14};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> a = {34, 85, 1, 2, 3, 4, 20, 6, 8, 10};
    int n = 510;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 5, 21};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> a = {1, 19, 2, 3, 4, 5, 6, 53, 11, 133};
    int n = 530;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 8, 8};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> a = {550, 1, 2, 3, 4, 5, 6, 7, 8, 14, 61};
    int n = 550;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 9, 9};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> a = {16, 1, 19, 2, 3, 4, 5, 7, 9, 95, 11, 12};
    int n = 570;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 6, 15};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> a = {1, 49, 2, 3, 4, 5, 6, 7, 37};
    int n = 590;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 8, 9};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> a = {17, 34, 68, 610, 1, 2, 3, 4, 5, 7, 10, 29};
    int n = 610;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 8, 13};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> a = {1, 2, 3, 4, 5, 8, 9, 13, 15, 105};
    int n = 630;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 6, 17};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> a = {1, 2, 3, 4, 5, 65, 650, 7, 163, 9, 10, 72, 18, 325, 25, 26};
    int n = 650;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 8, 14};
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 12};
    int n = 670;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 7, 14};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> a = {1, 2, 3, 4, 115, 5, 6, 23, 7, 46, 690, 345};
    int n = 690;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 8, 11};
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> a = {17, 1, 2, 3, 4, 5, 6, 8, 10};
    int n = 710;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 9, 11};
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 9, 183, 73};
    int n = 730;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 8, 11};
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 12};
    int n = 750;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 7, 15};
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> a = {1, 2, 3, 4, 770, 5, 7, 8, 13, 14};
    int n = 770;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 6, 21};
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> a = {1, 2, 3, 33, 4, 5, 66, 6, 7, 8, 44, 18, 22, 88};
    int n = 790;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 9, 10};
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> a = {1, 2, 18, 3, 4, 5, 6, 7, 9, 10, 27};
    int n = 810;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 8, 13};
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> a = {17, 1, 2, 3, 4, 5, 6, 7, 52, 8, 92};
    int n = 830;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 9, 10};
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> a = {17, 1, 2, 3, 71, 4, 5, 6, 7, 142, 213, 11};
    int n = 850;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 9, 12};
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> a = {1, 2, 3, 4, 5, 36, 8, 9, 10, 12, 54, 24, 31};
    int n = 870;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 7, 21};
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> a = {1, 2, 32, 3, 4, 36, 6, 37, 8, 10, 890, 11, 12, 14, 17, 18, 20, 56, 89};
    int n = 890;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 5, 35};
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 10, 57};
    int n = 910;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 8, 14};
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 9, 12, 17, 19, 22, 26, 31};
    int n = 930;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 10, 13};
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> a = {1, 2, 3, 38, 4, 5, 6, 7, 9, 79, 12, 15, 17, 19, 95};
    int n = 950;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 11, 11};
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> a = {1, 2, 3, 4, 5, 39, 7, 8, 9, 13, 17, 16, 970, 18, 23, 27};
    int n = 970;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 11, 15};
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> a = {1, 2, 3, 4, 990, 20, 5, 6, 10, 11};
    int n = 990;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 8, 18};
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> a = {1, 2, 3, 4, 5, 10, 11};
    int n = 991;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 7, 20};
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 13};
    int n = 991;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 11};
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> a = {1, 2, 3, 4, 991, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 28};
    int n = 991;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 17, 17};
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> a = {1, 2, 3, 55, 4, 5, 7, 110, 992, 10, 15};
    int n = 992;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 6, 28};
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> a = {1, 2, 3, 4, 5, 39, 66, 6, 7, 8, 110, 9, 40, 10, 11, 14, 20, 22, 25, 28};
    int n = 992;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 12, 12};
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15, 248, 992};
    int n = 992;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 14, 14};
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> a = {1, 2, 18, 33, 3, 71, 4, 5, 110, 9, 10, 11};
    int n = 993;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 7, 20};
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 110, 9, 10, 11};
    int n = 993;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 12, 12};
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> a = {1, 2, 3, 33, 4, 5, 6, 7, 8, 9, 10, 11, 12, 15, 993};
    int n = 993;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 13, 13};
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 62};
    int n = 994;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 7, 20};
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> a = {1, 2, 3, 33, 4, 5, 6, 7, 8, 9, 10, 497, 22, 994};
    int n = 994;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 11};
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> a = {1, 2, 71, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 166, 18, 20, 249};
    int n = 994;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 13, 13};
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> a = {1, 2, 3, 5, 7, 8, 111, 40, 10, 15, 50, 19, 83, 25, 62};
    int n = 995;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 6, 41};
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 10, 11, 12, 13, 14, 16, 995};
    int n = 995;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 9, 15};
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 14, 995, 28};
    int n = 995;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 13, 13};
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> a = {1, 2, 3, 33, 4, 7, 8, 9, 10, 40, 15, 50, 18, 83, 332, 996};
    int n = 996;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 6, 28};
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 111, 9, 10, 11, 28};
    int n = 996;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 12, 12};
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 40, 10, 11, 12, 15, 50, 20, 83, 25};
    int n = 996;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 13, 13};
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 83, 7, 10, 997, 998};
    int n = 997;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 9, 14};
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 498, 499, 15, 997, 996, 998};
    int n = 997;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 11};
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 15, 28};
    int n = 997;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 13, 13};
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 9, 10, 28, 13, 15};
    int n = 998;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 8, 16};
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13, 18, 998};
    int n = 998;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 11};
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15, 28, 998};
    int n = 998;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 14, 14};
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 37, 7, 111, 10, 14, 50, 112, 333, 28, 999};
    int n = 999;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 8, 16};
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 111, 10, 12, 13, 15, 16, 21, 27, 333, 29, 28, 999};
    int n = 999;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 11};
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> a = {1, 2, 3, 4, 5, 200, 6, 7, 8, 9, 10, 11, 12, 13, 1000, 25, 333, 999, 31, 36, 37, 42, 50, 250, 63, 62};
    int n = 999;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 14, 14};
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> a = {1, 100, 2, 3, 4, 5, 6, 7, 9, 40, 10, 1000, 250, 28};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 8, 16};
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 40, 11, 50, 16, 63};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 12, 12};
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> a = {1, 2, 3, 4, 200, 5, 6, 7, 8, 500, 9, 10, 11, 12, 1000};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 13, 13};
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> a = {2, 3, 4, 5, 8, 9, 10, 20, 25, 27, 37, 40, 50, 100, 111, 125, 200, 250, 333, 500, 999, 1000};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1001};
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> a = {441, 147, 63, 9, 1, 49, 21, 110, 55, 5, 22, 20, 17, 11, 111, 73, 74, 37, 109, 112, 4, 31, 32, 28, 16, 8, 108, 72, 75, 36, 18, 15, 48, 50, 24, 25, 12, 113, 107, 114, 71, 76, 38, 106, 47, 51, 115, 23, 105, 70};
    int n = 441;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 77};
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> a = {263, 262, 264, 131, 1, 66, 44, 33, 22, 12, 11, 29, 65, 26, 19, 13, 67, 43, 64, 45, 32, 27, 16, 15, 30, 18, 10, 8, 9, 5, 68, 34, 17, 63, 42, 21, 28, 14, 6, 69, 46, 23, 62, 31, 70, 41, 35, 20, 61, 47};
    int n = 263;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 71};
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> a = {352, 176, 88, 44, 32, 22, 16, 11, 351, 353, 117, 39, 27, 13, 350, 354, 175, 177, 118, 70, 59, 50, 35, 25, 14, 10, 349, 355, 71, 348, 356, 174, 178, 116, 87, 89, 58, 29, 347, 357, 119, 51, 21, 17, 346, 358, 173, 179, 345, 359};
    int n = 352;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 115};
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> a = {593, 592, 594, 296, 297, 198, 148, 99, 74, 66, 54, 37, 33, 27, 3, 11, 591, 595, 119, 85, 35, 5, 590, 596, 295, 298, 149, 59, 589, 597, 31, 588, 598, 294, 2, 147, 98, 7, 49, 46, 42, 28, 26, 587, 599, 586, 600, 150, 100, 75};
    int n = 593;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 10, 60};
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> a = {335, 67, 334, 336, 167, 168, 112, 84, 56, 48, 42, 28, 24, 21, 14, 16, 12, 8, 333, 337, 111, 37, 332, 338, 166, 169, 83, 26, 13, 331, 339, 113, 330, 340, 165, 170, 110, 85, 66, 68, 55, 33, 34, 30, 22, 20, 17, 15, 11, 329};
    int n = 335;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 341};
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> a = {206, 103, 205, 207, 69, 41, 23, 204, 208, 102, 104, 68, 51, 52, 34, 26, 17, 16, 13, 203, 209, 29, 19, 202, 210, 101, 105, 70, 42, 35, 30, 21, 15, 14, 10, 7, 201, 211, 67, 200, 212, 100, 106, 50, 53, 40, 25, 20, 8, 199};
    int n = 206;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 213};
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> a = {961, 31, 960, 962, 480, 481, 320, 240, 192, 160, 120, 96, 80, 74, 64, 60, 20, 40, 37, 32, 48, 30, 24, 16, 15, 12, 959, 963, 321, 137, 107, 958, 964, 479, 482, 241, 957, 965, 319, 193, 87, 33, 29, 1, 239, 3, 69, 21, 23, 242};
    int n = 961;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 121};
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> a = {945, 315, 189, 135, 105, 63, 45, 35, 21, 27, 15, 944, 946, 472, 473, 236, 118, 86, 59, 43, 943, 947, 41, 942, 948, 471, 474, 314, 316, 237, 157, 158, 79, 941, 949, 73, 940, 950, 470, 475, 235, 188, 190, 94, 95, 50, 47, 38, 25, 19};
    int n = 945;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 939};
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> a = {196, 98, 49, 28, 14, 7, 195, 197, 65, 39, 15, 13, 194, 198, 97, 99, 3, 33, 22, 18, 11, 193, 199, 192, 200, 96, 100, 48, 50, 40, 6, 24, 25, 20, 16, 12, 10, 8, 191, 201, 190, 202, 95, 101, 38, 19, 189, 203, 21, 188};
    int n = 196;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 204};
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> a = {934, 467, 1, 17, 233, 234, 156, 117, 78, 52, 39, 13, 26, 104, 19, 155, 93, 67, 31, 62, 232, 235, 116, 94, 58, 47, 29, 103, 157, 37, 231, 236, 154, 2, 77, 44, 28, 22, 59, 7, 21, 14, 105, 5, 35, 79, 23, 102, 51, 34};
    int n = 934;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3, 106};
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> a = {216, 108, 72, 54, 36, 27, 24, 18, 12, 9, 6, 215, 217, 43, 31, 214, 218, 107, 109, 213, 219, 71, 73, 212, 220, 106, 110, 53, 55, 44, 22, 20, 11, 211, 221, 17, 210, 222, 105, 111, 70, 74, 42, 30, 21, 15, 35, 37, 14, 10};
    int n = 216;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 209};
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<int> a = {703, 37, 702, 704, 351, 352, 234, 176, 117, 88, 78, 64, 54, 44, 39, 32, 27, 22, 26, 18, 16, 13, 11, 701, 705, 235, 141, 47, 700, 706, 350, 353, 175, 140, 100, 70, 50, 35, 28, 25, 20, 14, 10, 699, 707, 233, 101, 698, 708, 349};
    int n = 703;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 354};
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<int> a = {403, 31, 402, 404, 201, 202, 134, 101, 67, 401, 405, 135, 81, 45, 27, 15, 9, 400, 406, 200, 203, 100, 80, 58, 50, 40, 29, 25, 20, 10, 16, 399, 407, 133, 57, 37, 21, 19, 398, 408, 199, 204, 136, 102, 68, 51, 34, 24, 17, 397};
    int n = 403;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 409};
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<int> a = {333, 111, 37, 332, 334, 166, 167, 83, 331, 335, 67, 330, 336, 165, 168, 110, 112, 84, 66, 55, 56, 48, 42, 33, 30, 28, 24, 22, 21, 15, 14, 16, 11, 12, 8, 329, 337, 47, 328, 338, 164, 169, 82, 26, 41, 13, 327, 339, 109, 113};
    int n = 333;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 326};
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<int> a = {812, 406, 203, 116, 58, 29, 811, 813, 271, 810, 814, 405, 407, 270, 162, 135, 90, 81, 74, 54, 45, 37, 30, 15, 27, 18, 10, 809, 815, 163, 808, 816, 404, 408, 272, 202, 204, 136, 101, 102, 68, 51, 48, 34, 24, 17, 807, 817, 269, 43};
    int n = 812;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 806};
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<int> a = {1, 250, 125, 100, 50, 25, 40, 20, 10, 111, 37, 13, 167, 249, 251, 166, 83, 67, 71, 248, 252, 168, 124, 126, 84, 72, 62, 63, 56, 42, 36, 31, 28, 24, 112, 48, 21, 18, 14, 16, 12, 165, 99, 101, 55, 45, 33, 110, 66, 30};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 15, 22};
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<int> a = {1, 2, 50, 25, 40, 20, 10, 111, 37, 13, 83, 67, 112, 84, 56, 48, 42, 28, 24, 21, 62, 63, 36, 31, 18, 14, 16, 12, 110, 66, 55, 30, 22, 33, 15, 23, 47, 29, 82, 41, 113, 109, 85, 68, 49, 51, 35, 34, 61, 64};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 8, 32};
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<int> a = {1000, 500, 250, 200, 125, 100, 50, 40, 25, 20, 10, 999, 333, 143, 111, 91, 77, 37, 13, 998, 499, 501, 334, 167, 997, 59, 996, 498, 502, 332, 249, 251, 166, 83, 995, 335, 199, 201, 67, 994, 497, 503, 142, 71, 993, 331, 53, 992, 496};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1001};
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<int> a = {1, 2, 5, 25, 10, 111, 37, 13, 83, 112, 84, 56, 48, 42, 28, 24, 21, 62, 63, 36, 31, 18, 14, 16, 12, 110, 55, 30, 22, 15, 23, 47, 82, 41, 113, 109, 85, 20, 35, 61, 64, 32, 114, 57, 38, 19, 108, 81, 54, 27};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 7, 49};
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<int> a = {1, 2, 5, 10, 111, 37, 13, 83, 112, 84, 56, 48, 42, 28, 24, 21, 62, 63, 36, 31, 18, 14, 16, 12, 110, 55, 30, 22, 15, 23, 47, 82, 41, 113, 109, 85, 20, 35, 61, 64, 32, 114, 57, 38, 19, 108, 81, 54, 27, 49};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4, 86};
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<int> a = {1, 2, 5, 10, 3, 13, 62, 63, 42, 36, 31, 28, 21, 18, 24, 14, 16, 12, 15, 23, 41, 35, 20, 61, 64, 32, 19, 27, 43, 22, 11, 37, 60, 65, 40, 30, 29, 34, 17, 25, 59, 66, 44, 33, 39, 38, 26, 58, 67, 45};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 57};
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<int> a = {1, 2, 5, 10, 3, 11, 4, 28, 24, 21, 14, 18, 16, 12, 13, 20, 19, 27, 23, 15, 29, 17, 25, 22, 26, 30, 31, 32, 33, 34, 35, 9, 36, 37, 38, 39, 40, 41, 8, 42, 43, 44, 45, 46, 7, 47, 48, 49};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 6, 6};
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<int> a = {1, 2, 5, 10, 3, 11, 4, 28, 24, 21, 14, 18, 16, 12, 13, 20, 19, 27, 23, 15, 29, 17, 25, 22, 26, 30, 31, 32, 33, 34, 35, 9, 36, 37, 38, 39, 40, 41, 8, 42, 43, 44, 45, 46, 7, 47, 48};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 6, 49};
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<int> a = {1, 15};
    int n = 90;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 5, 9};
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int n = 12;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {51, 51, 51};
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<int> a = {3, 9, 27, 37, 111, 333, 999, 1000, 2, 4, 8, 10, 20, 40, 50, 100, 200, 250, 500};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1001};
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<int> a = {1, 2, 3};
    int n = 1;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 4};
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<int> a = {2, 4, 5, 8, 10, 20, 25, 40, 999, 1000};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1001};
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<int> a = {999, 1000, 2, 4, 5, 8, 10, 20, 25, 40, 50};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1001};
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int n = 1;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {51, 51, 51};
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<int> a = {2, 3, 4, 5, 7, 8, 9, 10, 11, 13, 20, 25, 27, 37, 40, 50, 77, 91, 100, 111, 125, 143, 200, 250, 333, 500, 999, 1000};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1001};
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 5;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 11};
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<int> a = {2, 3, 4, 5, 7, 8, 9, 10, 11, 13, 20, 25, 27, 37, 40, 50, 77, 91, 100, 111, 125, 143, 200, 250, 333, 499, 500, 998, 999, 1000};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1001};
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<int> a = {1000, 999, 998, 2, 500, 4, 250, 8, 125, 5, 200, 10, 100, 20, 50, 25, 40};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1001};
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<int> a = {1, 2};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 5, 50};
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int n = 51;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {51, 51, 51};
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    vector<int> a = {1};
    int n = 1;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 2};
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    vector<int> a = {1, 2, 3, 4, 5};
    int n = 5;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 6, 6};
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    vector<int> a = {5, 25, 125, 2, 10, 50, 250, 4, 20, 100, 500, 8, 40, 200, 1000, 999, 998, 997};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1001};
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    vector<int> a = {};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1000};
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    vector<int> a = {1, 2, 3, 4, 5, 6};
    int n = 1;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 7, 7};
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    vector<int> a = {1, 2, 4, 6, 8, 9, 14, 15, 16};
    int n = 136;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 7, 7};
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    vector<int> a = {};
    int n = 997;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 997};
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    vector<int> a = {1000, 999, 200, 500, 333, 111, 9, 2, 3, 4, 5, 6, 8, 7, 10, 100, 250, 20, 50, 40, 25, 499, 249, 410};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1001};
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    vector<int> a = {1, 4, 6, 8, 11, 14, 17, 20, 22, 23, 25, 26, 27, 28, 30, 33, 35, 38, 100, 103, 109, 110, 120, 130, 131, 132, 135, 140, 200, 201, 205, 210, 290, 300, 400, 433, 444, 445, 460, 490, 500, 505, 509, 510, 600, 700, 800, 850, 999, 1000};
    int n = 990;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 165};
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    vector<int> a = {1};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 250};
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    vector<int> a = {10, 1000, 2, 500, 4, 5, 50, 999, 3, 111, 7, 11, 13, 6, 28, 8, 9, 14, 24, 40};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1001};
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    vector<int> a = {2, 4, 5, 10, 20, 25, 40, 50, 100, 125, 200, 250, 500, 999, 1000, 3, 9, 111, 333};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1001};
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int n = 23;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {51, 51, 51};
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int n = 999;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {51, 51, 51};
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    vector<int> a = {1, 2};
    int n = 1;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3, 3};
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    vector<int> a = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 25, 50, 100, 200, 500, 990, 991, 992, 993, 994, 995, 996, 997, 998, 999, 1000};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1001};
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    vector<int> a = {2, 4, 5, 8, 10, 20, 25, 999, 1000};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1001};
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    vector<int> a = {999, 1000, 500, 250, 125, 5, 200, 25, 10, 100, 20, 50};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1001};
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    vector<int> a = {12, 23, 34, 45, 56, 67, 1};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 250};
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    vector<int> a = {2};
    int n = 997;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 997};
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int n = 1;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21, 21, 21};
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    vector<int> a = {9};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1000};
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    vector<int> a = {50, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    int n = 1;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {51, 51, 51};
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    vector<int> a = {1, 5};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 250};
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    vector<int> a = {1000, 2, 4, 5, 10, 20, 999, 3, 9, 8, 25};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1001};
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    vector<int> a = {2, 3, 4, 5};
    int n = 5;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 6};
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    vector<int> a = {1000, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 999, 50};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1001};
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test221() {
    vector<int> a = {2, 4, 5, 8, 10, 16, 20, 25, 32, 40, 50, 100, 200, 500, 998, 999, 1000};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1001};
    if(result == expected) {
        cout << "Test Case 221: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 221: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test222() {
    vector<int> a = {1, 2, 3, 4, 5};
    int n = 1;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 6, 6};
    if(result == expected) {
        cout << "Test Case 222: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 222: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test223() {
    vector<int> a = {999, 1000, 2, 4, 5, 8, 10, 20, 25};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1001};
    if(result == expected) {
        cout << "Test Case 223: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 223: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test224() {
    vector<int> a = {2, 3, 4, 5, 8, 10, 20, 25, 998, 999, 1000};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1001};
    if(result == expected) {
        cout << "Test Case 224: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 224: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test225() {
    vector<int> a = {2, 3, 4};
    int n = 4;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 5};
    if(result == expected) {
        cout << "Test Case 225: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 225: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test226() {
    vector<int> a = {2};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1000};
    if(result == expected) {
        cout << "Test Case 226: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 226: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test227() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {51, 51, 51};
    if(result == expected) {
        cout << "Test Case 227: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 227: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test228() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42};
    int n = 15;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {43, 43, 43};
    if(result == expected) {
        cout << "Test Case 228: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 228: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test229() {
    vector<int> a = {};
    int n = 1;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 229: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 229: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test230() {
    vector<int> a = {32, 31, 33, 56, 44, 43};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1000};
    if(result == expected) {
        cout << "Test Case 230: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 230: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test231() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 50;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 11};
    if(result == expected) {
        cout << "Test Case 231: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 231: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test232() {
    vector<int> a = {2, 3};
    int n = 900;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 900};
    if(result == expected) {
        cout << "Test Case 232: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 232: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test233() {
    vector<int> a = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1000};
    if(result == expected) {
        cout << "Test Case 233: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 233: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test234() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48};
    int n = 913;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {49, 49, 49};
    if(result == expected) {
        cout << "Test Case 234: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 234: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test235() {
    vector<int> a = {5, 25, 125, 10, 50, 250, 20, 100, 500, 40, 200, 1000, 2, 4, 8, 999, 998, 997};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1001};
    if(result == expected) {
        cout << "Test Case 235: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 235: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test236() {
    vector<int> a = {1, 2, 4, 5, 8, 10, 20, 25, 40, 50, 100, 125, 200, 500, 1000, 250, 9, 11};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3, 111};
    if(result == expected) {
        cout << "Test Case 236: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 236: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test237() {
    vector<int> a = {1, 2, 3, 4, 5};
    int n = 2;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 6, 6};
    if(result == expected) {
        cout << "Test Case 237: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 237: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test238() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int n = 50;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {51, 51, 51};
    if(result == expected) {
        cout << "Test Case 238: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 238: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test239() {
    vector<int> a = {999, 1000, 500, 250, 125, 200, 100, 50, 25, 40, 20, 10, 5, 8, 4, 2};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1001};
    if(result == expected) {
        cout << "Test Case 239: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 239: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test240() {
    vector<int> a = {1000, 2, 4, 5, 8, 10, 50, 25, 999};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1001};
    if(result == expected) {
        cout << "Test Case 240: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 240: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test241() {
    vector<int> a = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 13, 14, 15, 24, 27, 28, 37, 40, 50, 111, 500, 998, 999, 1000};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1001};
    if(result == expected) {
        cout << "Test Case 241: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 241: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test242() {
    vector<int> a = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65, 67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97, 99};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 250};
    if(result == expected) {
        cout << "Test Case 242: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 242: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test243() {
    vector<int> a = {1000, 999, 998, 500, 250, 125, 200, 100, 50, 25, 20, 40, 10};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1001};
    if(result == expected) {
        cout << "Test Case 243: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 243: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test244() {
    vector<int> a = {1, 2, 3, 4};
    int n = 3;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 5, 5};
    if(result == expected) {
        cout << "Test Case 244: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 244: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test245() {
    vector<int> a = {1, 15};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 250};
    if(result == expected) {
        cout << "Test Case 245: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 245: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test246() {
    vector<int> a = {2, 3, 4, 5, 7, 8, 10, 20, 25, 40, 999, 1000};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1001};
    if(result == expected) {
        cout << "Test Case 246: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 246: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test247() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int n = 997;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {51, 51, 51};
    if(result == expected) {
        cout << "Test Case 247: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 247: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test248() {
    vector<int> a = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int n = 107;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 107};
    if(result == expected) {
        cout << "Test Case 248: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 248: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test249() {
    vector<int> a = {10, 50, 20, 25, 5, 2, 4, 100, 1000, 1, 3, 33, 200, 500, 40, 6, 7, 8, 9, 12, 14, 16, 18, 30, 60, 70, 80, 90, 110, 120, 130, 41, 42, 43, 44, 45, 46, 47, 48, 49, 51, 52, 53, 54, 55, 56, 57, 58};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 11};
    if(result == expected) {
        cout << "Test Case 249: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 249: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test250() {
    vector<int> a = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 997, 998, 999, 1000};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1001};
    if(result == expected) {
        cout << "Test Case 250: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 250: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test251() {
    vector<int> a = {2, 15};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1000};
    if(result == expected) {
        cout << "Test Case 251: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 251: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test252() {
    vector<int> a = {2, 3};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1000};
    if(result == expected) {
        cout << "Test Case 252: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 252: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test253() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int n = 100;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16, 16, 16};
    if(result == expected) {
        cout << "Test Case 253: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 253: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test254() {
    vector<int> a = {2, 5, 10, 100, 20, 50, 500, 250, 4, 8, 125, 3, 111, 37, 999, 333, 1000, 40};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1001};
    if(result == expected) {
        cout << "Test Case 254: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 254: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test255() {
    vector<int> a = {1, 2, 3, 4};
    int n = 1;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 5, 5};
    if(result == expected) {
        cout << "Test Case 255: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 255: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test256() {
    vector<int> a = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 1000, 999, 998, 997, 996, 995, 994, 993, 992, 991, 990};
    int n = 997;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1001};
    if(result == expected) {
        cout << "Test Case 256: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 256: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test257() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int n = 10;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {51, 51, 51};
    if(result == expected) {
        cout << "Test Case 257: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 257: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test258() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 1;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 10, 10};
    if(result == expected) {
        cout << "Test Case 258: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 258: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test259() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int n = 40;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {51, 51, 51};
    if(result == expected) {
        cout << "Test Case 259: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 259: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test260() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int n = 3;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {51, 51, 51};
    if(result == expected) {
        cout << "Test Case 260: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 260: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test261() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 12, 12};
    if(result == expected) {
        cout << "Test Case 261: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 261: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test262() {
    vector<int> a = {3, 9, 27, 81, 999, 1000, 2, 4, 5, 8, 10, 20, 25};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1001};
    if(result == expected) {
        cout << "Test Case 262: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 262: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test263() {
    vector<int> a = {2, 4, 8, 10, 20, 25, 40, 50, 100, 200, 250, 500, 125, 1000, 5, 999};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1001};
    if(result == expected) {
        cout << "Test Case 263: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 263: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test264() {
    vector<int> a = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65, 67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97, 99};
    int n = 999;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 250};
    if(result == expected) {
        cout << "Test Case 264: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 264: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test265() {
    vector<int> a = {};
    int n = 100;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 100};
    if(result == expected) {
        cout << "Test Case 265: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 265: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test266() {
    vector<int> a = {19, 101, 990, 11, 17, 555, 10, 29, 114, 325, 879, 998, 333, 55, 598, 15, 5, 558, 222, 9, 1, 578, 22, 99, 345, 85, 25, 80, 700, 499, 100, 1000, 2, 546, 88, 235, 777, 77, 7, 377, 645, 125, 444, 945, 66, 678, 934, 76, 766, 81};
    int n = 998;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3, 111};
    if(result == expected) {
        cout << "Test Case 266: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 266: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test267() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    int n = 1;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {26, 26, 26};
    if(result == expected) {
        cout << "Test Case 267: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 267: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test268() {
    vector<int> a = {3, 4, 1, 2, 5, 6};
    int n = 5;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 7, 7};
    if(result == expected) {
        cout << "Test Case 268: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 268: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test269() {
    vector<int> a = {1, 997};
    int n = 997;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 249};
    if(result == expected) {
        cout << "Test Case 269: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 269: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test270() {
    vector<int> a = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 994, 995, 996, 997, 998, 999, 1000};
    int n = 998;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1001};
    if(result == expected) {
        cout << "Test Case 270: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 270: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test271() {
    vector<int> a = {3, 4, 1, 2, 5, 6, 7, 8, 9, 10, 11};
    int n = 5;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 12, 12};
    if(result == expected) {
        cout << "Test Case 271: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 271: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test272() {
    vector<int> a = {5, 25, 125, 10, 50, 250, 20, 100, 500, 40, 200, 998, 999, 1000};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1001};
    if(result == expected) {
        cout << "Test Case 272: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 272: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test273() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    int n = 10;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {26, 26, 26};
    if(result == expected) {
        cout << "Test Case 273: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 273: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test274() {
    vector<int> a = {999};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1000};
    if(result == expected) {
        cout << "Test Case 274: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 274: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test275() {
    vector<int> a = {1000, 999, 998, 997, 996, 995, 994, 566, 234, 233, 111, 2, 3, 444, 555, 666, 777, 888, 902, 22, 33, 44, 55, 66, 77, 88, 99, 13, 24, 463, 574, 687, 98, 37, 58, 69, 73, 96, 933, 76, 54, 988, 65, 43, 21};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4, 250};
    if(result == expected) {
        cout << "Test Case 275: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 275: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test276() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int n = 47;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {51, 51, 51};
    if(result == expected) {
        cout << "Test Case 276: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 276: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test277() {
    vector<int> a = {12, 13};
    int n = 13;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 14};
    if(result == expected) {
        cout << "Test Case 277: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 277: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test278() {
    vector<int> a = {};
    int n = 720;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 720};
    if(result == expected) {
        cout << "Test Case 278: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 278: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test279() {
    vector<int> a = {200, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {50, 50, 50};
    if(result == expected) {
        cout << "Test Case 279: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 279: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test280() {
    vector<int> a = {2, 4, 5, 8, 10, 20, 25, 40, 50, 100, 125, 200, 250, 500, 1000, 3, 9, 111, 333, 999, 7, 11, 13};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1001};
    if(result == expected) {
        cout << "Test Case 280: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 280: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test281() {
    vector<int> a = {2, 3, 4, 5, 8, 9, 10, 20, 25, 27, 37, 40, 50, 100, 111, 125, 200, 250, 333, 500, 999, 1000, 7, 11, 13};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1001};
    if(result == expected) {
        cout << "Test Case 281: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 281: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test282() {
    vector<int> a = {2, 4, 3};
    int n = 4;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 5};
    if(result == expected) {
        cout << "Test Case 282: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 282: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test283() {
    vector<int> a = {999, 5, 25, 125, 2, 10, 50, 250, 4, 20, 100, 500, 8, 40, 200, 1000};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1001};
    if(result == expected) {
        cout << "Test Case 283: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 283: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test284() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 13, 20, 25, 27, 37, 40, 50, 77, 91, 100, 111, 125, 143, 167, 200, 250, 333, 334, 499, 500, 501, 997, 998, 999, 1000};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 12, 12};
    if(result == expected) {
        cout << "Test Case 284: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 284: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test285() {
    vector<int> a = {1000};
    int n = 1000;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 500};
    if(result == expected) {
        cout << "Test Case 285: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 285: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test286() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 16, 32, 64, 128, 256, 512, 11, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 34, 25, 26, 27, 28, 29, 30, 31, 51, 33, 340, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45};
    int n = 512;
    AvoidingProduct* pObj = new AvoidingProduct();
    clock_t start = clock();
    vector<int> result = pObj->getTriple(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24, 24, 24};
    if(result == expected) {
        cout << "Test Case 286: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 286: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test233() == 0 ? ++passed : ++failed;
    test234() == 0 ? ++passed : ++failed;
    test235() == 0 ? ++passed : ++failed;
    test236() == 0 ? ++passed : ++failed;
    test237() == 0 ? ++passed : ++failed;
    test238() == 0 ? ++passed : ++failed;
    test239() == 0 ? ++passed : ++failed;
    test240() == 0 ? ++passed : ++failed;
    test241() == 0 ? ++passed : ++failed;
    test242() == 0 ? ++passed : ++failed;
    test243() == 0 ? ++passed : ++failed;
    test244() == 0 ? ++passed : ++failed;
    test245() == 0 ? ++passed : ++failed;
    test246() == 0 ? ++passed : ++failed;
    test247() == 0 ? ++passed : ++failed;
    test248() == 0 ? ++passed : ++failed;
    test249() == 0 ? ++passed : ++failed;
    test250() == 0 ? ++passed : ++failed;
    test251() == 0 ? ++passed : ++failed;
    test252() == 0 ? ++passed : ++failed;
    test253() == 0 ? ++passed : ++failed;
    test254() == 0 ? ++passed : ++failed;
    test255() == 0 ? ++passed : ++failed;
    test256() == 0 ? ++passed : ++failed;
    test257() == 0 ? ++passed : ++failed;
    test258() == 0 ? ++passed : ++failed;
    test259() == 0 ? ++passed : ++failed;
    test260() == 0 ? ++passed : ++failed;
    test261() == 0 ? ++passed : ++failed;
    test262() == 0 ? ++passed : ++failed;
    test263() == 0 ? ++passed : ++failed;
    test264() == 0 ? ++passed : ++failed;
    test265() == 0 ? ++passed : ++failed;
    test266() == 0 ? ++passed : ++failed;
    test267() == 0 ? ++passed : ++failed;
    test268() == 0 ? ++passed : ++failed;
    test269() == 0 ? ++passed : ++failed;
    test270() == 0 ? ++passed : ++failed;
    test271() == 0 ? ++passed : ++failed;
    test272() == 0 ? ++passed : ++failed;
    test273() == 0 ? ++passed : ++failed;
    test274() == 0 ? ++passed : ++failed;
    test275() == 0 ? ++passed : ++failed;
    test276() == 0 ? ++passed : ++failed;
    test277() == 0 ? ++passed : ++failed;
    test278() == 0 ? ++passed : ++failed;
    test279() == 0 ? ++passed : ++failed;
    test280() == 0 ? ++passed : ++failed;
    test281() == 0 ? ++passed : ++failed;
    test282() == 0 ? ++passed : ++failed;
    test283() == 0 ? ++passed : ++failed;
    test284() == 0 ? ++passed : ++failed;
    test285() == 0 ? ++passed : ++failed;
    test286() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=21111148&rd=12171&pm=8758
********************************************************************************
#include <string>
#include <vector>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <map>
#include <set>
#include <sstream>
#include <algorithm>
 
#define forn(i, n) for (int i = 0; i < (int)(n); i++)
#define forit(i, a) for (_typeof((a).begin()) = (a).begin(); i != (a).end(); i++)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
 
using namespace std;
 
typedef long long llong;
typedef vector <int> vi;
typedef vector <string> vs;
typedef pair <int, int> pii;
 
#define m 10000
 
int u[m];
 
class AvoidingProduct
{
public:
  vector <int> getTriple( vector <int> a, int n )
  {
    memset(u, 0, sizeof(u));
    for (int i = 0; i < a.size(); i++)
      u[a[i]] = 1;
    int bx = -1, by = -1, bz = -1;
    for (int x = 1; bx == -1 || x <= n; x++)
      if (!u[x])
        for (int y = x; bx == -1 || x * y <= 2 * n + 1; y++)
          if (!u[y])
            for (int z = y; bx == -1 || x * y * z <= 2 * n + 1; z++)
              if (!u[z])
                if (bx == -1 || abs(bx * by * bz - n) > abs(x * y * z - n))
                  bx = x, by = y, bz = z;
    vi res;
    res.pb(bx);
    res.pb(by);
    res.pb(bz);
    return res;
  }
};
 
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/