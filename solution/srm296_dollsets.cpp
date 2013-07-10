/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6082
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

class DollSets {
public:
    int maximumQuantity(vector<int> dollSizes, int K);
};

int DollSets::maximumQuantity(vector<int> dollSizes, int K) {
    int ret;
    return ret;
}


int test0() {
    vector<int> dollSizes = {1, 2, 1, 2, 4};
    int K = 2;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> dollSizes = {5, 4, 3, 2, 1};
    int K = 2;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> dollSizes = {5, 4, 1, 2, 3, 4, 5, 67, 8, 9, 8, 7, 15, 12};
    int K = 3;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
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
    vector<int> dollSizes = {1};
    int K = 25;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> dollSizes = {1, 9, 81, 729, 1, 81};
    int K = 9;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> dollSizes = {1};
    int K = 1;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
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
    vector<int> dollSizes = {2, 1};
    int K = 1;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> dollSizes = {1, 2, 2};
    int K = 1;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
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
    vector<int> dollSizes = {3, 4, 1, 1};
    int K = 1;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> dollSizes = {1, 5, 5, 3, 1};
    int K = 1;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> dollSizes = {1, 1, 3, 5, 1, 2};
    int K = 1;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> dollSizes = {2, 5, 7, 1, 4, 6, 6};
    int K = 1;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> dollSizes = {2, 1, 4, 1, 3, 3, 2, 7};
    int K = 1;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
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
    vector<int> dollSizes = {7, 5, 9, 5, 6, 8, 3, 8, 8};
    int K = 1;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> dollSizes = {10, 7, 4, 3, 6, 2, 10, 4, 6, 10};
    int K = 1;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
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
    vector<int> dollSizes = {8, 5, 3, 4, 3, 5, 3, 3, 7, 1, 2};
    int K = 1;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> dollSizes = {12, 7, 7, 8, 7, 2, 10, 3, 2, 8, 9, 6};
    int K = 1;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> dollSizes = {13, 11, 6, 7, 4, 6, 12, 6, 10, 3, 4, 4, 4};
    int K = 1;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> dollSizes = {2, 5, 10, 14, 11, 1, 2, 4, 10, 3, 3, 10, 8, 11};
    int K = 1;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> dollSizes = {7, 2, 12, 6, 6, 10, 6, 1, 1, 3, 15, 9, 6, 9, 13};
    int K = 2;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
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
    vector<int> dollSizes = {3, 11, 5, 6, 3, 10, 9, 15, 1, 3, 5, 15, 11, 16, 6, 13};
    int K = 2;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
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
    vector<int> dollSizes = {12, 9, 17, 9, 2, 11, 16, 7, 11, 2, 12, 6, 4, 11, 16, 9, 17};
    int K = 2;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> dollSizes = {10, 4, 18, 3, 8, 5, 7, 17, 18, 11, 4, 4, 12, 14, 12, 1, 12, 8};
    int K = 2;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> dollSizes = {18, 14, 6, 6, 5, 9, 2, 6, 15, 17, 4, 17, 10, 2, 3, 4, 6, 13, 3};
    int K = 2;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> dollSizes = {15, 7, 4, 4, 16, 17, 17, 13, 6, 13, 3, 19, 19, 7, 12, 15, 15, 6, 1, 8};
    int K = 2;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> dollSizes = {11, 15, 18, 7, 20, 20, 8, 4, 18, 20, 11, 2, 6, 16, 9, 13, 16, 20, 9, 17, 19};
    int K = 2;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> dollSizes = {22, 21, 21, 7, 12, 1, 7, 17, 21, 20, 22, 1, 6, 9, 9, 18, 9, 14, 22, 7, 6, 20};
    int K = 2;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> dollSizes = {20, 15, 15, 12, 15, 8, 19, 3, 19, 16, 3, 21, 23, 15, 8, 19, 4, 17, 5, 10, 13, 21, 20};
    int K = 2;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> dollSizes = {3, 13, 11, 11, 20, 10, 12, 8, 4, 12, 3, 14, 21, 13, 10, 17, 12, 19, 2, 13, 5, 14, 11, 20};
    int K = 2;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> dollSizes = {6, 19, 22, 18, 15, 19, 8, 1, 9, 8, 9, 7, 25, 8, 3, 16, 17, 15, 8, 12, 8, 16, 9, 11, 7};
    int K = 2;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> dollSizes = {15, 17, 25, 9, 11, 23, 15, 13, 1, 25, 10, 1, 24, 20, 2, 13, 25, 10, 13, 13, 8, 15, 22, 24, 15, 9};
    int K = 2;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> dollSizes = {2, 8, 16, 4, 4, 1, 8, 19, 17, 13, 7, 11, 26, 6, 6, 5, 20, 26, 1, 6, 19, 17, 15, 17, 9, 16, 8};
    int K = 2;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> dollSizes = {27, 10, 17, 5, 6, 23, 7, 2, 22, 1, 21, 28, 6, 8, 10, 5, 27, 12, 28, 10, 24, 18, 1, 22, 10, 4, 28, 18};
    int K = 2;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> dollSizes = {9, 1, 19, 28, 11, 5, 2, 26, 1, 23, 25, 2, 15, 3, 22, 19, 4, 19, 25, 27, 18, 18, 29, 24, 17, 12, 25, 29, 13};
    int K = 2;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> dollSizes = {19, 4, 11, 15, 23, 6, 23, 9, 13, 13, 20, 14, 27, 25, 28, 27, 10, 14, 2, 15, 21, 8, 22, 22, 21, 14, 7, 8, 30, 17};
    int K = 3;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> dollSizes = {13, 8, 9, 9, 22, 16, 5, 31, 23, 12, 20, 29, 16, 22, 12, 3, 6, 4, 31, 1, 16, 5, 12, 14, 20, 10, 18, 30, 3, 18, 18};
    int K = 3;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> dollSizes = {5, 22, 18, 10, 30, 19, 6, 23, 14, 12, 10, 23, 29, 6, 3, 20, 23, 6, 29, 7, 32, 9, 15, 3, 20, 22, 14, 14, 21, 24, 25, 21};
    int K = 3;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> dollSizes = {2, 22, 9, 25, 9, 32, 18, 25, 20, 21, 19, 5, 28, 17, 17, 20, 3, 20, 23, 6, 25, 25, 25, 4, 16, 19, 29, 9, 19, 12, 6, 23, 16};
    int K = 3;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> dollSizes = {8, 33, 4, 27, 15, 32, 17, 13, 8, 2, 21, 33, 23, 34, 27, 19, 3, 33, 16, 7, 32, 17, 1, 2, 33, 20, 13, 25, 18, 4, 28, 28, 10, 4};
    int K = 3;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
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
    vector<int> dollSizes = {26, 24, 3, 3, 7, 20, 3, 32, 6, 29, 12, 34, 2, 4, 26, 15, 12, 8, 10, 20, 12, 20, 26, 30, 18, 35, 12, 16, 30, 34, 18, 14, 16, 13, 16};
    int K = 3;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> dollSizes = {11, 22, 36, 18, 2, 30, 24, 8, 14, 14, 1, 10, 12, 26, 10, 19, 19, 11, 36, 19, 33, 12, 12, 22, 20, 22, 33, 12, 24, 10, 3, 9, 6, 22, 11, 2};
    int K = 3;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> dollSizes = {11, 13, 19, 36, 3, 7, 2, 24, 4, 19, 5, 26, 17, 28, 16, 35, 7, 4, 19, 7, 26, 22, 11, 12, 11, 34, 22, 11, 28, 34, 31, 20, 35, 22, 16, 1, 1};
    int K = 3;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> dollSizes = {38, 35, 31, 27, 13, 38, 4, 36, 23, 13, 9, 21, 9, 22, 18, 24, 38, 9, 28, 8, 18, 35, 13, 5, 24, 6, 34, 6, 37, 9, 5, 11, 30, 25, 12, 32, 22, 5};
    int K = 3;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> dollSizes = {29, 17, 30, 19, 38, 32, 26, 20, 26, 10, 28, 12, 9, 31, 29, 29, 9, 10, 3, 33, 25, 21, 19, 16, 18, 17, 23, 4, 39, 39, 19, 19, 29, 24, 16, 11, 18, 26, 19};
    int K = 3;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
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
    vector<int> dollSizes = {31, 38, 32, 10, 3, 16, 12, 38, 7, 30, 22, 18, 21, 16, 33, 6, 21, 1, 21, 11, 12, 16, 34, 14, 9, 19, 7, 38, 34, 18, 15, 7, 19, 7, 13, 19, 30, 40, 7, 5};
    int K = 3;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> dollSizes = {23, 10, 27, 41, 8, 25, 36, 7, 14, 31, 21, 33, 41, 18, 37, 8, 25, 33, 27, 5, 17, 9, 34, 31, 22, 12, 39, 23, 1, 18, 26, 24, 16, 38, 29, 17, 22, 28, 24, 12, 12};
    int K = 3;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> dollSizes = {18, 2, 36, 37, 2, 33, 11, 30, 9, 2, 5, 29, 11, 27, 32, 28, 30, 25, 9, 25, 23, 34, 8, 17, 21, 39, 38, 30, 22, 21, 10, 32, 33, 5, 19, 17, 31, 9, 41, 5, 36, 38};
    int K = 3;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> dollSizes = {11, 37, 25, 21, 31, 25, 12, 24, 21, 24, 26, 42, 6, 5, 30, 19, 35, 5, 36, 38, 18, 25, 28, 30, 25, 7, 41, 16, 10, 12, 31, 14, 33, 22, 41, 22, 12, 42, 16, 13, 32, 37, 34};
    int K = 3;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> dollSizes = {7, 14, 24, 17, 39, 19, 11, 4, 7, 1, 26, 7, 14, 24, 24, 2, 37, 43, 10, 5, 39, 27, 26, 16, 32, 41, 2, 37, 2, 9, 37, 8, 3, 38, 27, 19, 14, 38, 6, 5, 20, 24, 34, 42};
    int K = 3;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> dollSizes = {33, 44, 30, 23, 6, 30, 2, 4, 30, 13, 35, 33, 4, 35, 34, 21, 26, 8, 4, 11, 34, 21, 6, 30, 27, 21, 30, 31, 34, 36, 25, 12, 18, 19, 1, 10, 9, 43, 2, 42, 41, 33, 23, 21, 23};
    int K = 4;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> dollSizes = {3, 6, 15, 16, 11, 9, 17, 23, 25, 35, 28, 24, 11, 3, 4, 38, 8, 16, 36, 39, 42, 27, 10, 38, 45, 17, 29, 28, 15, 42, 10, 11, 41, 11, 26, 18, 5, 41, 9, 32, 12, 29, 2, 42, 18, 7};
    int K = 4;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> dollSizes = {26, 32, 29, 10, 16, 10, 36, 15, 5, 27, 46, 13, 33, 36, 3, 44, 5, 17, 43, 10, 47, 33, 13, 11, 5, 26, 36, 30, 31, 29, 11, 33, 40, 26, 11, 42, 30, 5, 39, 17, 27, 16, 10, 29, 6, 20, 40};
    int K = 4;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> dollSizes = {5, 17, 22, 3, 23, 4, 32, 21, 7, 43, 45, 19, 33, 2, 5, 34, 36, 19, 20, 43, 16, 12, 37, 30, 30, 12, 16, 7, 6, 29, 13, 25, 17, 42, 35, 38, 29, 2, 34, 17, 22, 37, 9, 42, 7, 11, 37, 40};
    int K = 4;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> dollSizes = {1, 31, 48, 28, 28, 45, 46, 24, 22, 15, 7, 10, 13, 6, 14, 23, 10, 24, 36, 41, 1, 33, 34, 8, 42, 14, 11, 1, 26, 24, 46, 25, 30, 14, 42, 46, 17, 26, 20, 43, 29, 42, 6, 32, 34, 44, 40, 39, 26};
    int K = 4;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> dollSizes = {21, 14, 46, 34, 49, 14, 29, 8, 19, 33, 36, 24, 44, 2, 9, 13, 42, 46, 8, 15, 14, 40, 21, 6, 30, 9, 16, 1, 24, 38, 14, 45, 45, 48, 25, 5, 16, 15, 30, 27, 1, 8, 42, 9, 11, 20, 39, 8, 28, 13};
    int K = 4;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> dollSizes = {176, 134, 89, 3, 27, 1, 65, 198, 143, 22, 147, 14, 52, 95, 57, 166, 76, 133, 74, 92, 44, 102, 193, 103, 111, 130, 177, 121, 24, 86, 90, 15, 12, 79, 130, 69, 129, 112, 27, 134, 95, 39, 76, 49, 154, 169, 183, 48, 177, 198};
    int K = 3;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> dollSizes = {571, 178, 430, 470, 89, 59, 469, 472, 531, 378, 589, 152, 519, 402, 268, 506, 288, 549, 68, 400, 435, 486, 139, 290, 508, 85, 47, 577, 510, 142, 360, 73, 570, 454, 534, 1, 487, 540, 585, 8, 416, 264, 192, 542, 283, 323, 369, 468, 125, 258};
    int K = 3;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
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
    vector<int> dollSizes = {517842, 670035, 163952, 629137, 586686, 154382, 511700, 357108, 715125, 767190, 22956, 195728, 705468, 227844, 89931, 115776, 589805, 918004, 967014, 325228, 90718, 335813, 356237, 757652, 313058, 886828, 531380, 70972, 357929, 370101, 304752, 957684, 568003, 1752, 459965, 576643, 50305, 730804, 161979, 77232, 419836, 626667, 975674, 656364, 199919, 856857, 339754, 53983, 831871, 100785};
    int K = 3;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
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
    vector<int> dollSizes = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    int K = 1;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> dollSizes = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    int K = 25;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> dollSizes = {639909, 416709, 931550, 98393, 834065, 312962, 639909, 599753, 607654, 836230, 836230, 599753, 741862, 729253, 741862, 717756, 416709, 865179, 338962, 865179, 717756, 187435, 776281, 776281, 312962, 736044, 834065, 36741, 338962, 931550, 562666, 36741, 187435, 397524, 729253, 98393, 397524, 607654, 736044, 562666};
    int K = 1;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> dollSizes = {228991, 83919, 774364, 196058, 934418, 252900, 468360, 188692, 776150, 72288, 453319, 414680, 133182, 193760, 15708, 10592, 388075, 207340, 817884, 467209, 234180, 96880, 185293, 370586, 154386, 377384, 449747, 21184, 387182, 167838, 899494, 599982, 7854, 77193, 457982, 98029, 126450, 906638, 299991, 266364, 408942};
    int K = 2;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> dollSizes = {951480, 615489, 645936, 205163, 104805, 972753, 111850, 74592, 747348, 941316, 129104, 103755, 311265, 154251, 215312, 27048, 696249, 174194, 202544, 313772, 249116, 9016, 651777, 279481, 607632, 335550, 30889, 522582, 34935, 92667, 324251, 24864, 317160, 387312, 232083, 213507, 838443, 51417, 217259, 710427, 236809, 640521};
    int K = 3;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> dollSizes = {47703, 207731, 57111, 39383, 195482, 239964, 155629, 190768, 75823, 190100, 84545, 157532, 181125, 347032, 47692, 213744, 975752, 86758, 171688, 551024, 608124, 622516, 724500, 243938, 228444, 42922, 303292, 939548, 137756, 760400, 959856, 795556, 73969, 338180, 234887, 830924, 185451, 190812, 781928, 295876, 152031, 741804, 198889};
    int K = 4;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> dollSizes = {139666, 804750, 998925, 118030, 693560, 748245, 829660, 683485, 548695, 111043, 581250, 260975, 158409, 29331, 199785, 438575, 160950, 465820, 136697, 298745, 138712, 59749, 151042, 698330, 165932, 87715, 555215, 755210, 93164, 107947, 32578, 792045, 146655, 539735, 162890, 111471, 109739, 149649, 590150, 380980, 76196, 116250, 557355, 52195};
    int K = 5;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> dollSizes = {55490, 105244, 631464, 693720, 97722, 272724, 45454, 43405, 624660, 94204, 57897, 347382, 769758, 128293, 116448, 886428, 32169, 193014, 332940, 88445, 104106, 9871, 823926, 698688, 59226, 260430, 194964, 136476, 104110, 162750, 147738, 58934, 624636, 183, 586332, 137321, 1098, 135158, 810948, 976500, 353604, 530670, 22746, 115620, 32494};
    int K = 6;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> dollSizes = {393092, 447713, 34846, 202216, 746193, 106599, 39406, 275842, 100910, 41302, 56156, 110432, 91132, 24423, 42515, 637924, 63959, 954030, 136290, 15776, 4261, 83602, 139888, 113456, 706370, 29239, 19984, 132251, 289114, 476966, 59071, 413497, 68138, 16208, 125964, 170961, 120939, 4177, 585214, 28888, 18893, 881748, 243922, 846573, 29827, 297605};
    int K = 7;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> dollSizes = {87204, 401424, 356800, 59627, 926528, 403080, 114619, 477016, 53997, 82126, 50385, 742080, 34142, 431976, 942512, 35212, 50092, 31674, 44914, 64124, 115816, 657008, 8502, 802280, 640872, 761832, 92760, 359312, 345512, 43189, 82064, 117814, 95229, 512992, 656512, 281696, 68016, 368048, 273136, 697632, 44600, 916952, 100285, 46006, 50178, 80109, 400736};
    int K = 8;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> dollSizes = {33818, 58461, 20508, 124965, 939537, 615015, 871947, 848394, 13885, 888372, 14646, 638370, 70930, 78045, 840438, 304362, 702405, 50488, 98181, 644904, 93382, 30417, 104428, 230643, 169011, 184572, 526149, 71656, 98708, 25627, 131814, 18779, 794646, 273753, 68335, 939852, 94266, 59294, 104393, 96883, 82932, 746388, 454392, 883629, 823707, 88294, 533646, 91523};
    int K = 9;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> dollSizes = {924200, 76493, 63863, 373640, 9979, 668700, 55480, 51, 510, 37364, 497190, 909960, 49035, 673450, 30348, 512070, 92420, 90996, 764930, 94794, 55330, 5548, 464980, 638630, 58223, 582230, 49719, 12569, 60381, 490350, 51207, 30665, 196980, 486770, 125690, 603810, 66870, 46498, 534280, 19698, 53428, 67345, 75459, 947940, 48677, 754590, 303480, 553300, 99790};
    int K = 10;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> dollSizes = {600314, 90119, 85154, 57772, 85217, 623414, 827002, 75730, 53456, 623832, 952391, 753005, 54574, 202202, 56674, 635492, 56712, 885665, 55301, 588016, 13141, 511566, 55441, 80515, 35294, 68277, 135278, 46506, 773586, 991309, 148577, 608311, 231616, 833030, 70326, 61555, 937387, 18382, 12298, 86581, 6207, 609851, 936694, 75182, 21056, 144551, 13507, 68455, 677105, 388234};
    int K = 11;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> dollSizes = {656400, 23411, 25355, 21860, 22627, 145800, 34664, 24586, 382725, 773500, 416400, 5832, 26256, 10760, 565675, 1448, 337800, 15309, 976325, 37015, 706875, 2280, 21175, 16656, 614650, 925375, 160025, 269000, 526075, 871300, 568775, 180250, 34852, 30565, 57000, 529375, 546500, 6401, 866600, 36200, 28275, 585275, 13512, 764125, 21043, 633875, 30940, 7210, 22751, 39053};
    int K = 25;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> dollSizes = {8559, 797550, 266575, 666300, 22079, 417275, 26634, 195100, 2439, 26652, 10161, 665850, 3043, 2276, 254025, 234225, 34703, 551975, 266100, 31902, 73400, 56900, 7804, 30295, 10644, 12682, 334050, 740500, 76075, 60975, 757375, 16691, 27660, 790100, 31604, 712325, 32269, 13362, 10663, 28493, 29620, 867575, 317050, 388300, 9369, 691500, 213975, 806725, 2936, 15532};
    int K = 25;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> dollSizes = {126224, 45551, 39129, 273903, 85295, 11638, 477428, 109221, 81466, 318857, 34003, 73909, 19235, 30520, 386, 12185, 221452, 20089, 17867, 100414, 746368, 2702, 110379, 108424, 51348, 125069, 140623, 84405, 47538, 47719, 106624, 43061, 42960, 101496, 97111, 2321, 68204, 118655, 702898, 126063, 238021, 31636, 59816, 883568, 11038, 134645, 113635, 135251, 88633, 213640};
    int K = 7;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> dollSizes = {81739, 348585, 432050, 176317, 135599, 644315, 78766, 199137, 69717, 518320, 881585, 163001, 121516, 393830, 197333, 143049, 85680, 941800, 98461, 160150, 684940, 28799, 103664, 130627, 986665, 170990, 188360, 492305, 110133, 607580, 160633, 20913, 408695, 86410, 136988, 128750, 181149, 198540, 102473, 992700, 33172, 149870, 128863, 800750, 111720, 164975, 181100, 106786, 1167, 428400};
    int K = 5;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> dollSizes = {51497, 56413, 600006, 38249, 78266, 717860, 674894, 32235, 54546, 13181, 62150, 29319, 60021, 186813, 79240, 21644, 65855, 8162, 36767, 25033, 22972, 620543, 30026, 67702, 39953, 161887, 330286, 31046, 85899, 439483, 26227, 38429, 566467, 65260, 61009, 49274, 542014, 14717, 32486, 322509, 61354, 49361, 933295, 16983, 341506, 71278, 252692, 84845, 20492, 275363};
    int K = 11;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> dollSizes = {1, 9, 81, 729, 1, 81};
    int K = 9;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> dollSizes = {1, 2, 1, 2, 1, 2};
    int K = 2;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> dollSizes = {1};
    int K = 1;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> dollSizes = {1, 2, 2, 4, 8, 1};
    int K = 2;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> dollSizes = {5, 3, 2, 8, 1, 16, 6, 8, 4, 10, 2, 5, 3, 2, 8, 1, 16, 6, 8, 4, 10, 2, 5, 3, 2, 8, 1, 16, 6, 8, 4, 10, 2, 5, 3, 2, 8, 1, 16, 6, 8, 4, 10, 2, 5, 3, 2, 8, 1};
    int K = 2;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> dollSizes = {2, 4, 1, 8, 2, 4, 1, 8, 2, 4, 2, 4, 1, 8, 2, 4, 1, 8, 2, 4, 2, 4, 1, 8, 2, 4, 1, 8, 2, 4, 2, 4, 1, 8, 2, 4, 1, 8, 2, 4, 2, 4, 1, 8, 2, 4, 1, 8, 2, 4};
    int K = 2;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> dollSizes = {1, 1, 1, 1, 1};
    int K = 1;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
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
    vector<int> dollSizes = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 3, 6, 12, 24, 48, 96, 192, 384, 768, 1536};
    int K = 2;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> dollSizes = {2, 4, 1, 8};
    int K = 2;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
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
    vector<int> dollSizes = {1, 1, 1, 1, 1, 1, 1, 1, 2};
    int K = 2;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> dollSizes = {4, 2, 1, 8};
    int K = 2;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> dollSizes = {7, 22};
    int K = 3;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> dollSizes = {4, 2, 1, 8, 4, 2, 1, 8, 4, 2, 4, 2, 1, 8, 4, 2, 1, 8, 4, 2, 4, 2, 1, 8, 4, 2, 1, 8, 4, 2, 4, 2, 1, 8, 4, 2, 1, 8, 4, 2, 4, 2, 1, 8, 4, 2, 1, 8, 4, 2};
    int K = 2;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> dollSizes = {1, 2, 1, 2, 4, 4, 8, 8, 8, 2, 1, 4, 6, 8, 2, 16, 16, 32, 32, 64, 64, 64, 128, 128, 64, 8, 256, 256};
    int K = 2;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> dollSizes = {1, 2, 2};
    int K = 1;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> dollSizes = {2, 4, 1, 8, 20, 40, 10, 80};
    int K = 2;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> dollSizes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int K = 1;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> dollSizes = {3, 9, 1, 9, 27, 27};
    int K = 3;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
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
    vector<int> dollSizes = {1, 1, 2, 2, 2, 4};
    int K = 2;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> dollSizes = {1, 2, 2, 4, 4, 8, 8, 16, 16, 16, 16, 32, 32, 32, 64, 64, 64, 8, 4, 16, 32, 64, 128, 128, 356, 256, 512, 512, 8, 4, 2, 5, 3, 16, 10, 6, 13, 32, 128, 256, 512, 1, 1, 2, 4, 8, 16, 32, 64, 128};
    int K = 2;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> dollSizes = {1, 2, 1, 2, 4};
    int K = 2;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> dollSizes = {2, 4, 24, 12, 1, 48, 8, 6};
    int K = 2;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> dollSizes = {5, 4, 1, 2, 3, 4, 5, 67, 8, 9, 8, 7, 15, 12};
    int K = 3;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> dollSizes = {1, 1000000};
    int K = 5;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> dollSizes = {1, 1, 1, 1, 1, 1};
    int K = 1;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> dollSizes = {1, 1, 1, 1};
    int K = 1;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> dollSizes = {1, 3};
    int K = 3;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> dollSizes = {3, 9, 1, 27};
    int K = 3;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> dollSizes = {52536, 743257, 2, 6225, 999999, 352, 4672, 7555, 52225, 1330, 8900, 980, 50, 4453, 2553, 647437, 636657, 265662, 1, 1, 1, 1, 1, 1, 1, 1, 9999, 45, 2, 4, 6, 2, 222333};
    int K = 1;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> dollSizes = {1, 3, 1};
    int K = 3;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> dollSizes = {1, 2, 1, 2, 4, 1, 2};
    int K = 2;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> dollSizes = {1, 2, 2};
    int K = 2;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> dollSizes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int K = 1;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> dollSizes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int K = 1;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> dollSizes = {2, 4, 1, 8, 2, 2, 4, 1, 8, 2, 2, 4, 1, 8, 2, 2, 4, 1, 8, 2, 2, 4, 1, 8, 2, 2, 4, 1, 8, 2, 2, 4, 1, 8, 2, 2, 4, 1, 8, 2, 2, 4, 1, 8, 2, 2, 4, 1, 8, 2};
    int K = 2;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> dollSizes = {1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 3, 6, 1, 2, 7, 14, 12, 24, 12, 24, 12, 3, 6, 3, 6, 3, 6, 3, 6, 6};
    int K = 2;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> dollSizes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
    int K = 1;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> dollSizes = {2, 1, 1, 1, 1, 2};
    int K = 1;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> dollSizes = {1, 2, 4, 8};
    int K = 2;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> dollSizes = {1, 1, 1, 1, 1, 1, 1, 1};
    int K = 1;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> dollSizes = {1, 3, 3};
    int K = 3;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> dollSizes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int K = 1;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> dollSizes = {2, 1, 3, 5, 4, 8, 16, 8, 32, 16, 32, 64, 128, 64, 512, 64, 128, 8, 4, 2, 1, 8, 16, 32, 64, 128, 256, 512, 512, 128, 64, 4, 10, 8, 9, 18, 36, 72, 144, 36, 128, 356, 512, 2, 4, 8, 16, 64, 128, 64};
    int K = 2;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> dollSizes = {9, 3, 1, 27};
    int K = 3;
    DollSets* pObj = new DollSets();
    clock_t start = clock();
    int result = pObj->maximumQuantity(dollSizes, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8471704&rd=9817&pm=6082
********************************************************************************
#include <iostream>
#include <vector>
#include <string>
#define FOR(i,n) for(int i=0;i<n;i++)
#define REP(i,f,t) for(int i=f;i<=t;i++)
#define debln(a) cout<< #a <<" : " << a << endl;
using namespace std;
 
class DollSets {
  public:
  int maximumQuantity(vector <int> d, int K) {
    sort(d.begin(),d.end());
    vector<bool> used(d.size());
    int res = 0;
    FOR(i,d.size()) {
      for(int j=i+1;j<d.size();j++) {
        if(d[j]==K*d[i] && !used[j] && !used[i]) {
          used[i] = used[j] = 1;
          cout << d[j] << " " << d[i] << endl;
          res++;
        }
      }
    }
    return res;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/