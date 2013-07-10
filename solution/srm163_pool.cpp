/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1809
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

class Pool {
public:
    int rackMoves(vector<int> triangle);
};

int Pool::rackMoves(vector<int> triangle) {
    int ret;
    return ret;
}


int test0() {
    vector<int> triangle = {6, 12, 14, 1, 8, 2, 11, 3, 9, 4, 7, 13, 5, 15, 10};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> triangle = {2, 10, 7, 1, 8, 12, 6, 11, 4, 9, 13, 3, 14, 15, 5};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> triangle = {8, 15, 9, 4, 10, 6, 11, 3, 14, 7, 2, 1, 13, 12, 5};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> triangle = {15, 5, 8, 13, 2, 14, 10, 3, 4, 6, 7, 9, 1, 12, 11};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> triangle = {1, 5, 15, 6, 10, 9, 11, 13, 7, 4, 3, 8, 2, 12, 14};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> triangle = {15, 4, 1, 9, 8, 14, 3, 12, 7, 11, 10, 5, 13, 2, 6};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> triangle = {11, 9, 1, 12, 8, 15, 4, 13, 5, 14, 10, 3, 6, 7, 2};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> triangle = {14, 13, 2, 10, 8, 1, 5, 11, 6, 9, 12, 4, 15, 7, 3};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> triangle = {15, 2, 7, 13, 4, 10, 3, 12, 6, 1, 11, 14, 9, 5, 8};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> triangle = {9, 4, 7, 2, 8, 14, 5, 6, 15, 1, 11, 10, 12, 3, 13};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> triangle = {14, 5, 2, 13, 8, 10, 3, 9, 7, 4, 6, 11, 15, 1, 12};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> triangle = {12, 4, 6, 2, 8, 1, 5, 10, 9, 15, 11, 3, 14, 7, 13};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> triangle = {10, 5, 14, 9, 8, 11, 7, 3, 4, 13, 2, 1, 6, 12, 15};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> triangle = {14, 3, 5, 13, 1, 4, 6, 12, 2, 10, 11, 15, 7, 8, 9};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> triangle = {6, 4, 14, 11, 15, 8, 7, 1, 10, 12, 13, 2, 9, 3, 5};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> triangle = {15, 7, 5, 12, 8, 11, 2, 13, 6, 10, 9, 1, 14, 3, 4};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> triangle = {15, 6, 7, 12, 8, 13, 1, 14, 10, 5, 9, 3, 11, 4, 2};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> triangle = {11, 8, 3, 14, 5, 13, 2, 9, 1, 12, 10, 6, 4, 7, 15};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> triangle = {14, 3, 1, 9, 10, 13, 6, 5, 4, 7, 12, 8, 11, 2, 15};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> triangle = {15, 7, 1, 3, 8, 11, 6, 2, 4, 5, 14, 9, 13, 12, 10};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> triangle = {12, 7, 1, 15, 9, 3, 5, 8, 13, 6, 10, 14, 11, 4, 2};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> triangle = {1, 10, 6, 15, 2, 13, 12, 9, 5, 4, 7, 8, 14, 11, 3};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> triangle = {11, 12, 2, 5, 8, 13, 3, 14, 9, 7, 10, 4, 15, 6, 1};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> triangle = {7, 4, 11, 14, 1, 3, 6, 8, 12, 5, 15, 10, 2, 9, 13};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> triangle = {14, 6, 2, 12, 8, 15, 7, 10, 13, 4, 3, 11, 9, 1, 5};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> triangle = {11, 6, 7, 10, 8, 12, 4, 9, 5, 13, 15, 3, 14, 1, 2};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> triangle = {10, 6, 1, 8, 12, 15, 3, 14, 7, 13, 11, 4, 9, 5, 2};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> triangle = {10, 2, 3, 14, 8, 15, 4, 12, 6, 9, 11, 7, 13, 1, 5};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> triangle = {10, 4, 1, 14, 8, 13, 6, 11, 7, 12, 15, 5, 2, 3, 9};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> triangle = {9, 4, 7, 13, 2, 15, 10, 14, 8, 12, 5, 6, 3, 11, 1};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> triangle = {6, 15, 2, 1, 8, 14, 5, 11, 10, 9, 13, 4, 12, 7, 3};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> triangle = {7, 1, 2, 11, 10, 15, 8, 5, 14, 9, 13, 6, 12, 4, 3};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> triangle = {13, 9, 2, 8, 4, 7, 3, 10, 6, 12, 14, 1, 15, 5, 11};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> triangle = {7, 11, 13, 1, 8, 5, 14, 10, 4, 9, 3, 12, 15, 6, 2};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> triangle = {14, 11, 5, 6, 8, 10, 3, 2, 4, 7, 13, 12, 9, 15, 1};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> triangle = {11, 6, 3, 13, 8, 10, 7, 15, 2, 9, 14, 1, 12, 4, 5};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> triangle = {15, 5, 2, 13, 8, 14, 1, 3, 6, 11, 10, 12, 9, 7, 4};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> triangle = {4, 7, 6, 12, 8, 11, 5, 15, 3, 13, 10, 2, 14, 9, 1};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> triangle = {13, 4, 7, 12, 8, 9, 2, 10, 5, 15, 6, 14, 1, 11, 3};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> triangle = {15, 9, 2, 12, 8, 7, 1, 13, 6, 11, 3, 10, 14, 5, 4};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> triangle = {8, 11, 5, 7, 13, 9, 12, 14, 3, 4, 15, 1, 10, 6, 2};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> triangle = {15, 2, 6, 10, 8, 4, 3, 9, 5, 14, 12, 1, 13, 7, 11};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> triangle = {1, 8, 13, 2, 3, 11, 14, 10, 5, 12, 6, 7, 9, 15, 4};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> triangle = {3, 6, 11, 1, 2, 15, 14, 8, 7, 10, 9, 12, 13, 4, 5};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> triangle = {15, 5, 6, 2, 4, 8, 9, 7, 12, 11, 14, 13, 10, 3, 1};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> triangle = {13, 5, 1, 9, 8, 10, 3, 11, 2, 12, 15, 7, 14, 4, 6};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> triangle = {13, 6, 7, 14, 8, 11, 4, 9, 2, 15, 12, 1, 10, 3, 5};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> triangle = {12, 1, 6, 9, 8, 14, 10, 15, 2, 5, 11, 7, 13, 3, 4};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> triangle = {9, 10, 5, 14, 8, 11, 7, 12, 3, 13, 15, 1, 2, 6, 4};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> triangle = {9, 3, 14, 13, 8, 10, 1, 11, 5, 6, 12, 15, 2, 4, 7};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> triangle = {1, 4, 6, 10, 8, 15, 12, 9, 2, 11, 3, 5, 14, 13, 7};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> triangle = {4, 13, 6, 8, 14, 12, 2, 15, 5, 11, 9, 7, 10, 1, 3};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> triangle = {12, 2, 1, 13, 8, 3, 9, 5, 15, 10, 11, 4, 14, 6, 7};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> triangle = {15, 2, 8, 10, 1, 12, 4, 9, 11, 7, 14, 3, 6, 13, 5};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> triangle = {4, 15, 5, 6, 14, 2, 7, 11, 8, 9, 12, 3, 13, 10, 1};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> triangle = {5, 14, 9, 4, 8, 7, 15, 1, 13, 2, 6, 11, 3, 10, 12};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> triangle = {6, 15, 10, 3, 8, 1, 12, 4, 14, 2, 7, 11, 9, 13, 5};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> triangle = {3, 11, 14, 4, 8, 5, 13, 1, 12, 6, 2, 15, 7, 10, 9};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> triangle = {2, 9, 6, 4, 8, 3, 14, 5, 13, 7, 1, 11, 15, 10, 12};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> triangle = {3, 15, 12, 2, 1, 6, 13, 7, 11, 14, 8, 10, 4, 9, 5};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> triangle = {1, 11, 9, 6, 10, 3, 8, 7, 14, 2, 5, 12, 4, 15, 13};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> triangle = {4, 14, 11, 15, 8, 10, 7, 3, 9, 6, 5, 13, 1, 2, 12};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> triangle = {4, 1, 15, 6, 7, 10, 14, 5, 13, 9, 8, 3, 2, 11, 12};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> triangle = {8, 4, 9, 10, 2, 5, 11, 13, 3, 7, 6, 12, 1, 15, 14};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> triangle = {6, 11, 8, 7, 12, 15, 5, 2, 4, 10, 3, 1, 13, 9, 14};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> triangle = {2, 9, 13, 4, 8, 1, 12, 6, 14, 7, 3, 11, 5, 10, 15};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> triangle = {2, 13, 11, 5, 6, 8, 15, 3, 9, 4, 1, 10, 7, 14, 12};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> triangle = {7, 10, 4, 1, 8, 3, 9, 13, 15, 2, 5, 11, 6, 14, 12};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> triangle = {4, 14, 8, 12, 3, 13, 15, 1, 10, 5, 2, 11, 6, 9, 7};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> triangle = {6, 12, 10, 4, 8, 1, 2, 3, 15, 5, 7, 13, 11, 14, 9};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> triangle = {7, 15, 11, 14, 8, 4, 12, 2, 3, 6, 1, 9, 5, 13, 10};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> triangle = {11, 8, 13, 1, 12, 6, 5, 15, 10, 7, 3, 9, 2, 4, 14};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> triangle = {6, 7, 10, 4, 8, 9, 12, 1, 13, 2, 15, 14, 3, 11, 5};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> triangle = {15, 8, 11, 12, 4, 7, 9, 1, 10, 3, 13, 2, 6, 14, 5};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> triangle = {9, 4, 6, 2, 11, 13, 10, 15, 1, 12, 14, 8, 7, 3, 5};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> triangle = {6, 9, 10, 4, 8, 3, 15, 2, 14, 7, 5, 12, 1, 11, 13};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> triangle = {2, 13, 11, 5, 8, 6, 9, 7, 15, 1, 3, 14, 4, 12, 10};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> triangle = {4, 10, 13, 7, 8, 1, 12, 3, 11, 2, 6, 9, 5, 15, 14};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> triangle = {2, 1, 11, 5, 10, 6, 15, 8, 9, 4, 7, 14, 3, 12, 13};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> triangle = {3, 10, 12, 9, 8, 5, 2, 1, 14, 11, 7, 13, 4, 15, 6};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> triangle = {4, 11, 12, 7, 8, 2, 6, 5, 9, 3, 13, 1, 15, 10, 14};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> triangle = {3, 13, 15, 2, 8, 11, 9, 1, 5, 4, 7, 10, 12, 14, 6};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> triangle = {5, 12, 9, 10, 7, 3, 11, 2, 14, 8, 6, 15, 1, 13, 4};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> triangle = {4, 14, 3, 8, 2, 7, 15, 1, 6, 9, 5, 10, 11, 13, 12};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> triangle = {5, 2, 10, 3, 8, 6, 9, 4, 12, 15, 14, 11, 1, 13, 7};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> triangle = {4, 9, 13, 6, 8, 5, 14, 1, 11, 7, 2, 12, 3, 15, 10};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> triangle = {7, 9, 14, 3, 8, 6, 10, 1, 11, 4, 5, 13, 2, 12, 15};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> triangle = {6, 10, 12, 2, 7, 9, 14, 4, 11, 8, 1, 13, 5, 3, 15};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> triangle = {4, 1, 14, 5, 6, 9, 12, 3, 10, 8, 7, 13, 2, 11, 15};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> triangle = {8, 15, 14, 7, 13, 3, 9, 4, 12, 10, 2, 11, 5, 6, 1};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> triangle = {9, 13, 7, 2, 8, 11, 3, 1, 10, 12, 5, 6, 4, 15, 14};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> triangle = {1, 13, 9, 8, 2, 15, 7, 6, 11, 5, 3, 14, 4, 12, 10};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> triangle = {15, 10, 13, 2, 7, 1, 5, 6, 12, 14, 3, 9, 4, 8, 11};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> triangle = {6, 5, 9, 2, 13, 4, 7, 1, 10, 3, 12, 14, 15, 11, 8};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> triangle = {7, 11, 12, 3, 1, 10, 6, 4, 14, 2, 8, 13, 5, 15, 9};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> triangle = {5, 13, 9, 7, 8, 2, 14, 3, 15, 6, 4, 10, 1, 12, 11};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> triangle = {7, 1, 15, 3, 8, 2, 11, 4, 14, 12, 5, 10, 6, 13, 9};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> triangle = {6, 13, 9, 7, 8, 14, 10, 1, 11, 4, 3, 12, 2, 15, 5};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> triangle = {1, 11, 13, 7, 8, 12, 15, 3, 14, 5, 2, 4, 6, 10, 9};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> triangle = {7, 11, 1, 6, 8, 3, 9, 4, 12, 2, 5, 15, 10, 13, 14};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> triangle = {8, 12, 14, 1, 6, 2, 11, 3, 9, 4, 7, 13, 5, 15, 10};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> triangle = {15, 7, 6, 14, 8, 13, 5, 11, 3, 12, 10, 2, 9, 1, 4};
    Pool* pObj = new Pool();
    clock_t start = clock();
    int result = pObj->rackMoves(triangle);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=157974&rd=4620&pm=1809
********************************************************************************
#include <string>
#include <vector>
#include <iostream>
using namespace std;
  int pos1[] = {1,0,0,1,0,1,0,1,0,1,1,0,1,0,0};
  int pos2[] = {0,1,1,0,0,0,1,0,1,0,0,1,0,1,1};
class Pool {
 
  bool xl(int x){
    return x>8;
  }
  int doit(vector<int> tri, int* pos){
    vector<bool> x;
    int i;
    int eight=0;
    for( i=0; i<15; i++ ){
      if(tri[i]==8){
        eight=i;
      }
      x.push_back(xl(tri[i]));
    }
    int sum=0;
    if(eight!=4){
      sum++;
      bool temp=x[4];
      x[4]=false;
      x[eight]=temp;
    }
    for(i=0; i<15; i++){
      if( x[i] && !pos[i] ){
        sum++;
      }
    }
    return sum;
  }
  public:
  int rackMoves(vector <int> triangle) {
    int best = doit(triangle,pos1);
    best <?= doit(triangle,pos2);
    return best;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/