/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10879
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

class RabbitIncreasing {
public:
    int getNumber(vector<int> leaving, int k);
};

int RabbitIncreasing::getNumber(vector<int> leaving, int k) {
    int ret;
    return ret;
}


int test0() {
    vector<int> leaving = {3};
    int k = 3;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> leaving = {5, 9};
    int k = 10;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> leaving = {5, 10, 15};
    int k = 19;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 212;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> leaving = {2};
    int k = 10000000;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
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
    vector<int> leaving = {195, 211, 227, 230, 260, 297, 346, 350, 403, 411, 428, 485, 594, 606, 876};
    int k = 1000;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 975206486;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> leaving = {1};
    int k = 1;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
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
    vector<int> leaving = {1};
    int k = 2;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
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
    vector<int> leaving = {2};
    int k = 2;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> leaving = {1, 2};
    int k = 2;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> leaving = {1};
    int k = 3;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> leaving = {2};
    int k = 3;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> leaving = {1, 2};
    int k = 3;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> leaving = {3};
    int k = 3;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> leaving = {1, 3};
    int k = 3;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
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
    vector<int> leaving = {2, 3};
    int k = 3;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> leaving = {1, 2, 3};
    int k = 3;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
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
    vector<int> leaving = {1};
    int k = 4;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> leaving = {2};
    int k = 4;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> leaving = {1, 2};
    int k = 4;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> leaving = {3};
    int k = 4;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> leaving = {1, 3};
    int k = 4;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> leaving = {2, 3};
    int k = 4;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> leaving = {1, 2, 3};
    int k = 4;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> leaving = {4};
    int k = 4;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> leaving = {1, 4};
    int k = 4;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> leaving = {2, 4};
    int k = 4;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
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
    vector<int> leaving = {1, 2, 4};
    int k = 4;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> leaving = {3, 4};
    int k = 4;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
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
    vector<int> leaving = {1, 3, 4};
    int k = 4;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> leaving = {2, 3, 4};
    int k = 4;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> leaving = {1, 2, 3, 4};
    int k = 4;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> leaving = {3};
    int k = 5;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> leaving = {4};
    int k = 5;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> leaving = {5};
    int k = 5;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> leaving = {3, 5};
    int k = 5;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> leaving = {3};
    int k = 6;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> leaving = {4};
    int k = 6;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> leaving = {5};
    int k = 6;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> leaving = {3, 5};
    int k = 6;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> leaving = {6};
    int k = 6;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
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
    vector<int> leaving = {3, 6};
    int k = 6;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> leaving = {4, 6};
    int k = 6;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
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
    vector<int> leaving = {5, 6};
    int k = 6;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> leaving = {3};
    int k = 7;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> leaving = {4};
    int k = 7;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> leaving = {5};
    int k = 7;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> leaving = {3, 5};
    int k = 7;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> leaving = {6};
    int k = 7;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> leaving = {3, 6};
    int k = 7;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
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
    vector<int> leaving = {4, 6};
    int k = 7;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> leaving = {5, 6};
    int k = 7;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
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
    vector<int> leaving = {7};
    int k = 7;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> leaving = {3, 7};
    int k = 7;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
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
    vector<int> leaving = {4, 7};
    int k = 7;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> leaving = {5, 7};
    int k = 7;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> leaving = {3, 5, 7};
    int k = 7;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> leaving = {6, 7};
    int k = 7;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> leaving = {5, 6, 7};
    int k = 7;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> leaving = {9999951, 9999952, 9999953, 9999954, 9999955, 9999956, 9999957, 9999958, 9999959, 9999960, 9999961, 9999962, 9999963, 9999964, 9999965, 9999966, 9999967, 9999968, 9999969, 9999970, 9999971, 9999972, 9999973, 9999974, 9999975, 9999976, 9999977, 9999978, 9999979, 9999980, 9999981, 9999982, 9999983, 9999984, 9999985, 9999986, 9999987, 9999988, 9999989, 9999990, 9999991, 9999992, 9999993, 9999994, 9999995, 9999996, 9999997, 9999998, 9999999, 10000000};
    int k = 10000000;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 668858438;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> leaving = {9999902, 9999904, 9999906, 9999908, 9999910, 9999912, 9999914, 9999916, 9999918, 9999920, 9999922, 9999924, 9999926, 9999928, 9999930, 9999932, 9999934, 9999936, 9999938, 9999940, 9999942, 9999944, 9999946, 9999948, 9999950, 9999952, 9999954, 9999956, 9999958, 9999960, 9999962, 9999964, 9999966, 9999968, 9999970, 9999972, 9999974, 9999976, 9999978, 9999980, 9999982, 9999984, 9999986, 9999988, 9999990, 9999992, 9999994, 9999996, 9999998, 10000000};
    int k = 10000000;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 503948594;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> leaving = {9999853, 9999856, 9999859, 9999862, 9999865, 9999868, 9999871, 9999874, 9999877, 9999880, 9999883, 9999886, 9999889, 9999892, 9999895, 9999898, 9999901, 9999904, 9999907, 9999910, 9999913, 9999916, 9999919, 9999922, 9999925, 9999928, 9999931, 9999934, 9999937, 9999940, 9999943, 9999946, 9999949, 9999952, 9999955, 9999958, 9999961, 9999964, 9999967, 9999970, 9999973, 9999976, 9999979, 9999982, 9999985, 9999988, 9999991, 9999994, 9999997, 10000000};
    int k = 10000000;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 225971647;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> leaving = {25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74};
    int k = 10000000;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> leaving = {50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99};
    int k = 10000000;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 88081120;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> leaving = {20448, 20630, 20837, 23680, 23693, 24776, 28012, 46910, 57846, 58401, 62165, 63805, 70773, 73010, 75318, 79020, 80906, 84943, 85644, 87335, 100531, 104499, 107794, 109060, 114830, 115385, 122281, 130059, 131108, 134086, 134667, 139723, 154473, 156163, 156347, 165847, 173145, 174075, 180535, 193840, 199052, 203624, 206070, 222676, 222706, 225213, 234614, 240932};
    int k = 242811;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 16770971;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> leaving = {42, 225, 252, 279, 337, 375};
    int k = 446;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 186816480;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> leaving = {1377, 3234, 3518, 4831, 5038, 5039, 5811, 6429, 8037, 8909, 8989, 11429, 11957, 19078, 19190, 19862, 21733, 22513, 22575, 22703, 24399, 26162, 30057, 31074, 31468, 31623, 31968, 32579, 33427, 39232, 39344, 39834, 40001, 40503, 45791, 47479, 52149};
    int k = 54977;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 949797228;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> leaving = {53, 70, 76, 165, 211, 214, 282, 294, 352, 364, 427, 454, 492, 518, 562, 610, 683, 714, 721, 739, 769, 801, 880, 885, 903, 928, 1126, 1210, 1211, 1257, 1277, 1282, 1368, 1413, 1457, 1459, 1588, 1589, 1625, 1628, 1641, 1649, 1661, 1696, 1762};
    int k = 1769;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 262048960;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> leaving = {1, 8, 22, 23, 34, 45, 47, 55, 61, 64, 65, 72, 73, 74, 78, 85, 86, 87, 88, 89, 90, 93, 97, 102, 104, 116, 124, 138, 139, 144, 147, 149, 155, 163, 169, 174, 176, 183, 188, 192, 201, 202, 203, 213, 223};
    int k = 223;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> leaving = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 21, 25, 27};
    int k = 27;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> leaving = {1, 159, 215, 325, 431, 475, 477, 603, 626, 705, 785, 857, 876, 1008, 1208, 1501, 1636, 1772, 1795, 1797};
    int k = 1798;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> leaving = {202201, 343595, 346910, 688073, 785690, 975844, 1053041, 1094677, 1153147, 1548258, 1583178, 1621426, 1656316, 1678333, 1755216, 2108301, 2126603, 2360447, 2429492, 2470241, 2484986, 2551174, 2694964, 2735632, 2812277, 2920386, 2963195, 3270604, 3386928, 3469029, 3919261, 3971151, 4050684, 4776787, 4834524, 4870395, 4937867, 5061655, 5085142, 5189760, 5645238, 5788290, 5973553, 6036739, 6230379, 6300201, 6328506, 6383279, 6406882};
    int k = 6425044;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 6134042;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> leaving = {42, 99, 141, 163, 194, 250, 255, 261, 271, 291, 350, 386, 426, 428, 592, 650, 784, 862, 890, 969, 970, 975, 1037, 1068, 1072, 1180, 1239, 1248, 1257, 1258, 1276, 1348, 1362, 1398, 1403, 1416, 1439, 1578, 1585, 1635};
    int k = 1647;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 952607219;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> leaving = {386, 2111, 3559, 5663, 6608, 7294};
    int k = 7448;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 718345633;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> leaving = {830722, 1519602, 1590816, 1924726, 2159961, 2470442, 2504960, 2647336, 3082631, 4262616, 4370676, 4553976, 4564380};
    int k = 4865046;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 106491565;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> leaving = {170, 4362, 11111, 28355, 34122, 41044, 44945, 54811, 58615, 58917, 72782, 76700, 88390, 89632, 109228, 110362, 128793, 136369, 150764, 163945, 173263, 175128, 186390, 202581, 218699, 224581, 247920, 256528, 265576, 278130, 278438, 291970, 292107};
    int k = 312062;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 473474015;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> leaving = {31, 34, 53, 77, 100, 102, 119, 142, 158, 160, 183, 211, 234, 235, 272, 285, 312, 344, 358, 381, 399, 418, 427, 471, 501, 534, 624, 686, 697, 708, 726, 827, 878, 880, 953, 1004, 1015};
    int k = 1024;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 31095667;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> leaving = {58, 186, 191, 232, 481, 502, 643, 718, 728, 748, 857, 1150, 1166, 1177, 1201, 1268, 1300, 1327, 1332, 1356, 1454, 1470, 1567, 1626, 1670, 1733, 1771, 1829, 1879, 1891, 2009, 2013, 2039, 2157, 2279};
    int k = 2334;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 265986389;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> leaving = {2, 18, 25, 29, 30, 41, 42, 46, 47, 50, 51, 53, 54, 56, 57, 60, 61, 63, 64, 66, 67, 70, 72, 75, 79, 82, 84, 86, 88, 103, 109, 110, 115, 117, 118, 119, 120, 121, 132, 133, 134};
    int k = 135;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
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
    vector<int> leaving = {31, 48, 59, 61, 75, 89, 119, 164, 169, 230, 372, 452, 471, 472, 548, 657, 683, 701, 806, 836, 838, 853, 866, 894, 899, 951, 1016, 1077, 1082, 1083, 1092, 1148, 1153, 1193, 1243, 1320, 1323, 1366, 1433};
    int k = 1449;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 240283473;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> leaving = {28206, 55910, 207475, 220447, 244264, 536331, 679980, 742980, 779437, 784691, 887974, 967072, 1041257, 1073666, 1324454, 1482206, 1573587, 1588027, 1634894, 1753880, 1888638, 1893043, 1923914, 1962835, 2031414, 2237697, 2283338, 2461657};
    int k = 2631605;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 635495604;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> leaving = {15725, 16176, 17964, 36965, 38469, 43366, 47213, 48589, 50419, 51913, 57769, 58032, 61836, 71594, 76062, 90228, 100573, 107241, 111338, 114178, 119719, 122552, 127756, 135315, 136478, 140101, 140272, 143192, 157255, 158990, 160551};
    int k = 162504;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 329864564;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> leaving = {33518, 46003, 46760, 113099, 217202, 272542, 308708, 321630, 353005, 397480, 476556, 522574, 602807, 603754, 698895, 729752, 859277, 861454, 872062, 894000, 926569, 983949, 1053718, 1053816, 1141346, 1172811, 1212566, 1272861, 1337001, 1342854, 1487226, 1500640, 1631587, 1652884, 1768573, 1788821, 1810498, 1835934, 1848605, 1872304, 1924947, 2055783, 2067767, 2067968, 2090147, 2153425, 2208500, 2274339};
    int k = 2287861;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 868680112;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> leaving = {29836, 31467, 108722, 124525, 124963, 133956, 168840, 196449};
    int k = 200872;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 568322828;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> leaving = {12409, 16582, 20385, 40500};
    int k = 41567;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 291906104;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> leaving = {11, 41, 51, 80, 99, 177, 184, 247, 258, 263, 285, 310, 337, 573, 650, 723, 774, 788, 798, 864, 880, 967, 1063, 1077, 1078, 1114, 1117};
    int k = 1194;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 245832349;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> leaving = {113772, 345565, 563525, 566755, 640193, 686756, 727397, 739258, 763723, 806966, 822400};
    int k = 854794;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 566456916;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> leaving = {52, 242, 288, 327, 603, 945, 1025, 1046, 1264, 1353, 1450, 1629, 1880, 1947, 2009, 2293, 2386, 2574, 2729, 2906, 2918, 3106, 3330, 3385, 3658, 3793};
    int k = 4025;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 310606505;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> leaving = {13, 1225, 1283, 1336, 1865, 4007, 4056, 4830, 5185, 5318, 5650, 5685, 5988, 6002, 6741, 6884, 7748, 8313, 8330, 8853, 8948, 9243, 9376, 10174, 10348, 11419, 11467, 12125, 12191, 12337, 12384, 13339, 13779, 13863, 14663};
    int k = 15057;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 203474244;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> leaving = {155, 1266, 1841, 1900, 2536, 2623, 4604, 5389, 6639, 6852, 7644, 8081, 8099, 8416, 8932};
    int k = 10068;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 311432888;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> leaving = {54, 2141, 4267, 4899, 5450, 5501, 5769};
    int k = 6797;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 104195643;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> leaving = {456, 3875, 5991, 6077, 8901, 11202, 11217, 12579, 24076, 25939, 37309, 42946, 45396, 46172, 47684, 51265, 52745, 53588, 53769, 54810, 55092, 57476};
    int k = 59427;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 812752270;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> leaving = {42724, 79166, 188247, 434407, 480631, 564878, 650656, 652493, 708988, 931761, 946156, 1115360, 1133583, 1175049, 1483982, 1580690, 1661151, 1728254, 1879486, 1898767, 1953963, 2050474, 2055567, 2080250};
    int k = 2497937;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 348111187;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> leaving = {1, 135, 148, 157, 197, 218, 294, 336, 342, 347, 350, 351, 352, 354, 361, 370, 383, 393, 406, 418, 463, 495, 499, 569, 586, 656, 766, 793, 794, 821, 978, 989, 1018, 1101, 1148, 1156, 1234, 1375, 1457};
    int k = 1464;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> leaving = {8, 21, 31, 38, 74, 148, 157, 184, 186, 197, 205, 210, 318, 320, 331, 334, 348, 512};
    int k = 523;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 710291366;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> leaving = {6432, 9177, 42539, 53265, 61371, 95617, 108401, 113986, 115568, 117994, 124219, 139506, 145072, 151245, 151348, 156317, 197301, 200664, 231375, 237006, 246838, 261941, 273893, 285809, 288631, 292995, 298114, 298297, 303202, 367460, 374811, 375703, 383460, 384923, 391483, 393260, 423760, 465817, 469516, 514519, 533822, 544412};
    int k = 545082;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 826244726;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> leaving = {129, 570, 795, 907, 1270, 1340, 1455, 1547, 1653, 1736, 1787, 1804, 1825, 1923, 2039, 2153, 2478, 2484, 2821, 3001, 3079, 3207, 3226, 3334, 3566, 3602, 3616, 3700, 3707, 4058, 4358, 4743, 4787, 4860, 5339, 5762, 5847, 5866, 6305, 6415, 6448, 6467, 6528, 6539};
    int k = 6585;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 81373743;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> leaving = {409, 675, 699, 709, 749, 833, 857, 922, 1040, 1224, 1242, 1252, 1641, 1762, 1765, 1778, 1876};
    int k = 1880;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 13854960;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> leaving = {808, 817, 910, 1005};
    int k = 1406;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 888302;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> leaving = {12387, 35991, 68999, 115829, 303971, 311351, 344367, 426318, 450781, 475920, 639402, 782087, 829785, 848738, 893159, 1023373, 1118761, 1185102, 1388493, 1452467, 1485695, 1492527, 1536363, 1557876, 1629690, 1642685, 1692899, 1796702, 1861775, 1876618, 1884217, 1917341, 1922179, 1990556, 2053730, 2079399, 2127478, 2146394};
    int k = 2186646;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 509744526;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> leaving = {1, 2, 10};
    int k = 11;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
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
    vector<int> leaving = {11111, 11112, 11113, 11114, 11115, 11116, 11117, 11118, 11119, 11120, 11121, 11122, 11123, 11124, 11125, 11126, 11127, 11128, 11129, 11130, 11131, 11132, 11133, 11134, 11135, 11136, 11137, 11138, 11139, 11140, 11141, 11142, 11143, 11144, 11145, 11146, 11147, 11148, 11149, 11150, 11151, 11152, 11153, 11154, 11155, 11156, 11157, 11158, 11159, 11160};
    int k = 15000;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 81622123;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> leaving = {11111, 11112, 11113, 11114, 11115, 11116, 11117, 11118, 11119, 11120, 11121, 11122, 11123, 11124, 11125, 11126, 11127, 11128, 11129, 11130, 11131, 11132, 11133, 11134, 11135, 11136, 11137, 11138, 11139, 11140, 11141, 11142, 11143, 11144, 11145, 11146, 11147, 11148, 11149, 11150, 11151, 11152, 11153, 11154, 11155, 11156, 11157, 11158, 11159, 11160};
    int k = 11161;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 916922290;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> leaving = {9111111, 9111112, 9111113, 9111114, 9111115, 9111116, 9111117, 9111118, 9111119, 9111120, 9111121, 9111122, 9111123, 9111124, 9111125, 9111126, 9111127, 9111128, 9111129, 9111130, 9111131, 9111132, 9111133, 9111134, 9111135, 9111136, 9111137, 9111138, 9111139, 9111140, 9111141, 9111142, 9111143, 9111144, 9111145, 9111146, 9111147, 9111148, 9111149, 9111150, 9111151, 9111152, 9111153, 9111154, 9111155, 9111156, 9111157, 9111158, 9111159, 9111160};
    int k = 9999999;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 477491848;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> leaving = {195, 211, 227, 230, 260, 297, 346, 350, 403, 411, 428, 485, 594, 606, 876};
    int k = 1000;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 975206486;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> leaving = {81843, 203841, 223102, 579549, 707955, 928779, 995896, 1196860, 1330468, 1370300, 2240440, 2334334, 2588146, 2683539, 2714501, 2808465, 3423725, 3744542, 4102869, 4115036, 4325727, 4469437, 4519712, 4864154, 5008828, 5129895, 5216758, 5540665, 5778083, 5818309, 5851943, 6470649, 6526605, 7205539, 7325359, 7490717, 7531645, 8043324, 8140624, 8295806, 8486730, 8519812, 8752492, 8919377, 9145742, 9246107, 9288943, 9356383, 9827913, 9855351};
    int k = 10000000;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 438814806;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> leaving = {10000000};
    int k = 10000000;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 236946917;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> leaving = {10000, 10001, 10002, 10003, 10004, 20000, 30000, 40000};
    int k = 10000000;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 723089896;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> leaving = {100, 200, 201, 300, 3000, 123456, 123458, 999999, 1000100, 2000000, 9999990};
    int k = 9999997;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 719252766;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> leaving = {7000000, 7000001, 7000002, 7000003, 7000004, 7000005, 7000006, 7000007, 7000008, 7000009, 7000010, 7000011, 7000012, 7000013, 7000014, 7000015, 7000016, 7000017, 7000018, 7000019, 7000020, 7000021, 7000022, 7000023, 7000024, 7000025, 7000026, 7000027, 7000028, 7000029, 7000030, 7000031, 7000032, 7000033, 7000034, 7000035, 7000036, 7000037, 7000038, 7000039, 7000040, 7000041, 7000042, 7000043, 7000044, 7000045, 7000046, 7000047, 7000048, 7000049};
    int k = 10000000;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 526195138;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> leaving = {10000, 20000, 30000, 40000, 50000, 60000, 70000, 80000, 90000, 100000, 110000, 120000, 130000, 140000, 150000, 160000, 170000, 180000, 190000, 200000, 210000, 220000, 230000, 240000, 250000, 260000, 270000, 280000, 290000, 300000, 310000, 320000, 330000, 340000, 350000, 360000, 370000, 380000, 390000, 400000, 410000, 420000, 430000, 440000, 450000, 460000, 470000, 480000, 490000, 500000};
    int k = 10000000;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 100088771;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> leaving = {500003, 500004, 500005, 500006, 500007, 500008, 500009, 500010, 9100001, 9100002, 9100003, 9100004, 9100005, 9100006, 9100007, 9100009, 9100010, 9900001, 9900002, 9900003, 9900004, 9900005, 9900006, 9900007, 9900008, 9900009, 9900010};
    int k = 10000000;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 95730541;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> leaving = {999999};
    int k = 10000000;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 115550965;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> leaving = {1000000};
    int k = 10000000;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 795702849;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> leaving = {198, 1588, 2198, 2288, 2635, 3022, 3094, 3196, 3579, 3672, 4600, 5250, 5845, 6039, 6192, 6225, 6557, 6619, 7409, 7449, 7959, 8714, 9057, 9504, 9703, 9923, 10956, 11009, 11512, 12009, 12102, 12293, 13459, 14344, 14799, 14990, 15282, 16203, 16520, 18191, 18539, 19157, 19590, 19797, 19816, 20056, 20329, 20473, 20486, 20581};
    int k = 20601;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 350354224;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> leaving = {3};
    int k = 1004;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 102915696;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> leaving = {195, 211, 227, 230, 260, 297, 346, 350, 403, 411, 428, 485, 594, 606, 9899999};
    int k = 10000000;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 696736572;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> leaving = {1};
    int k = 20;
    RabbitIncreasing* pObj = new RabbitIncreasing();
    clock_t start = clock();
    int result = pObj->getNumber(leaving, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22707311&rd=14156&pm=10879
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
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
#include <cctype>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
#define FOR(i,a,b) for(__typeof(b) i=(a);i!=(b);i++)
#define REP(i,n) FOR(i,0,n)
#define EACH(i,a) FOR(i,a.begin(),a.end())
#define SZ(a) (int)a.size()
#define PB push_back
#define iss istringstream
#define ALL(a) a.begin(),a.end()
#define CLEAR(a) memset(a,0,sizeof(a))
#define ll long long
 
class RabbitIncreasing {
  public:
  int getNumber(vector <int> leaving, int k);
};
 
const int MOD = 1000000009;
const long long MOD2 = (2LL) * MOD;
 
struct bint {
  long long A, B;
  inline void init() {
    A = B = 0;
  }
  inline void add(bint o) {
    A += o.A;
    B += o.B;
    while (B >= MOD) {
      B -= MOD;
      A++;
    }
    A %= (1LL << 55);
  }
  inline void div() {
    if (A & 1) {
      A--;
      B += MOD;
    }
    A /= 2;
    B /= 2;
  }
} mem[3];
 
int RabbitIncreasing::getNumber(vector <int> leaving, int k) {
  int N = SZ(leaving);
  if (leaving[0] <= 2) {
    return 0;
  }
  mem[0].init();
  mem[1].init();
  mem[1].B = 1;
  mem[2].init();
  int it = 0;
  for(int i = 3 ; i <= k ; i++) {
    mem[0].add(mem[1]);
    mem[1].A = mem[2].A;
    mem[1].B = mem[2].B;
    mem[2].A = mem[0].A;
    mem[2].B = mem[0].B;
    if (it < N && leaving[it] == i) {
      it++;
      mem[0].init();
      mem[1].div();
    }
  }
  return ((mem[0].B + mem[1].B + mem[2].B) % MOD);
}
 
 
 
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/