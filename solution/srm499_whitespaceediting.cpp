/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11328
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

class WhiteSpaceEditing {
public:
    int getMinimum(vector<int> lines);
};

int WhiteSpaceEditing::getMinimum(vector<int> lines) {
    int ret;
    return ret;
}


int test0() {
    vector<int> lines = {3, 2, 3};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> lines = {0};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> lines = {320, 187, 247, 193, 308};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 499;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> lines = {250, 104, 204, 350};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 499;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> lines = {1, 2, 4};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> lines = {1000000};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> lines = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> lines = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 1000049;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> lines = {0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 25000049;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> lines = {1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 25000049;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> lines = {0, 0};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
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
    vector<int> lines = {0, 1};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
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
    vector<int> lines = {0, 2};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
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
    vector<int> lines = {1, 0};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
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
    vector<int> lines = {1, 1};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> lines = {1, 2};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
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
    vector<int> lines = {2, 0};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
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
    vector<int> lines = {2, 1};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
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
    vector<int> lines = {2, 2};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
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
    vector<int> lines = {0, 0, 0};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> lines = {0, 0, 1};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
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
    vector<int> lines = {0, 0, 2};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
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
    vector<int> lines = {0, 1, 0};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> lines = {0, 1, 1};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
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
    vector<int> lines = {0, 1, 2};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
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
    vector<int> lines = {0, 2, 0};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
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
    vector<int> lines = {0, 2, 1};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> lines = {0, 2, 2};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> lines = {1, 0, 0};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
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
    vector<int> lines = {1, 0, 1};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> lines = {1, 0, 2};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> lines = {1, 1, 0};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
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
    vector<int> lines = {1, 1, 1};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
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
    vector<int> lines = {1, 1, 2};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> lines = {1, 2, 0};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
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
    vector<int> lines = {1, 2, 1};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> lines = {1, 2, 2};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> lines = {2, 0, 0};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
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
    vector<int> lines = {2, 0, 1};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> lines = {2, 0, 2};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> lines = {2, 1, 0};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> lines = {2, 1, 1};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> lines = {2, 1, 2};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
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
    vector<int> lines = {2, 2, 0};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
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
    vector<int> lines = {2, 2, 1};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
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
    vector<int> lines = {2, 2, 2};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
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
    vector<int> lines = {640967, 640967, 640967, 640967, 640967, 640967, 640967, 640967, 640967, 640967, 640967, 640967, 640967, 640967, 640967, 640967, 640967, 640967, 640967, 640967, 640967, 640967, 640967, 640967, 640967, 640967, 640967, 640967, 640967, 640967, 640967, 640967, 640967, 640967, 640967, 640967};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 641002;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> lines = {969439, 969439, 969439, 969439, 969439, 969439, 969439, 969439, 969439, 969439, 969439, 969439, 969439, 969439, 969439, 969439, 969439, 969439, 969439, 969439, 969439, 969439, 969439, 969439, 969439, 969439, 969439, 969439, 969439, 969439, 969439, 969439, 969439, 969439, 969439, 969439, 969439, 969439, 969439, 969439, 969439, 969439, 969439, 969439, 969439, 969439, 969439, 969439, 969439, 969439};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 969488;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> lines = {50144, 50144, 50144, 137775, 137775, 137775, 137775, 137775, 181877, 343544, 343544, 343544, 366584, 366584, 366584, 366584, 366584, 366584, 366584, 366584, 366584, 366584, 421367, 421367, 421367, 421367, 421367, 421367, 423097, 455743, 455743, 502642, 692903, 692903, 692903, 791467, 814827, 814827, 814827, 814827, 814827, 814827, 814827, 814827, 834916, 834916};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 834961;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> lines = {29915, 37666, 37666, 38924, 38924, 62574, 62574, 62574, 62574, 62574, 108634, 108634, 108634, 108634, 108634, 108634, 108634, 108634, 108634, 149153, 149153, 149153, 149153, 149153, 186034, 342000, 352117, 352117, 352117, 352117, 352117, 352117, 352117, 409689, 484433, 552870, 552870, 697741, 788681, 788681, 837563, 837563, 837563, 837563, 837563, 837563, 837563, 837563, 973211, 973645};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 973694;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> lines = {881621, 881621, 865372, 865372, 772322, 772322, 772322, 772322, 760158, 738549, 738549, 588082, 588082, 588082, 588082, 588082, 588082, 588082, 551001, 364370, 338412, 338412, 338412, 338412, 338412, 338412, 338412, 338412, 338412, 338412, 338412};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 881651;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> lines = {946170, 904424, 904424, 891674, 891674, 891674, 828959, 828959, 828959, 822025, 822025, 822025, 822025, 818071, 818071, 789380, 789380, 789380, 789380, 682200, 682200, 682200, 682200, 682200, 597387, 597387, 597387, 504228, 483671, 483671, 483671, 309366, 309366, 267246, 267246, 267246, 267246, 267246, 267246, 267246, 267246, 267246, 265209, 211888, 144386, 144386, 144386, 144386, 144386, 41147};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 946219;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> lines = {192805, 82930, 652006, 469766, 581687, 498263, 796653, 249583, 358694, 211718, 437725, 33050, 894317, 792975, 835372, 449697, 745046, 635020, 736418, 432511, 617472, 351744, 748806, 229582, 515468, 3574, 919224, 521145, 784012, 253124, 525232};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 5126285;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> lines = {645429, 388386, 988850, 640252, 863036, 139322, 163940, 118792, 529684, 96820, 922944, 899712, 941845, 886982, 979497, 974740, 995389, 650628, 891343, 531341, 657490, 578376, 946784, 895181, 956849, 810814, 812822, 444938, 695282, 60775, 130970, 95733, 989902, 688616, 769701, 367785, 847085, 521853, 726818, 452465, 473659, 285884, 964664, 102080, 676901, 148207, 980156, 592926, 782009, 703386};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 7960490;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> lines = {350507, 509579, 408452, 890109, 218466, 371263, 180553, 390975, 141123, 509524, 17531, 35276, 25354, 714209, 78644, 857007, 585861, 859986, 535479, 672012, 618139, 698347, 46429, 318284, 299783, 396853, 155258, 819884, 550781, 672149, 492795, 982142, 133786, 572259};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 5781457;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> lines = {315096, 794795, 338347, 530395, 315833, 346587, 189125, 675111, 663327, 675863, 136545, 547371, 4578, 322797, 320464, 565420, 46286, 727408, 434747, 890688, 10660, 342677, 94286, 924884, 418077, 492634, 322552, 472541, 70753, 484357, 276095, 445494, 240169, 705154, 499745, 663094, 123712, 937033, 446115, 582435, 441008, 559970, 220157, 772482, 768172, 854952, 549467, 975491, 309762, 690945};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 8740645;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> lines = {990046, 988838, 988601, 984658, 983913, 982736, 980969, 980825, 979858, 979450, 974499, 971541, 970445, 969243, 967979, 967362, 966858, 966104, 966062, 965892, 965494, 964410, 963991, 963411, 963340, 962912, 962839, 962533, 961999, 961890, 961881, 934266, 907533, 868891, 844827, 803174, 759927, 715160, 703761, 663746, 659155, 617574, 598671, 584663, 582775, 550197, 549504, 473099, 462122, 427002};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 990095;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> lines = {998624, 995691, 995504, 964398, 963713, 946961, 900669, 899885, 899885, 899885, 899885, 899885, 899885, 899885, 899885, 899885, 899885, 899885, 899885, 899885, 899885, 899885, 899885, 897317, 893787, 887210, 878596, 862669, 855633, 850292, 848831, 846813, 841032, 833036, 830493, 816614, 815345, 814614, 811381, 807551, 801690, 800554, 798057, 797823, 789049, 744474, 703414, 606613, 604156, 314074};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 998673;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> lines = {390404, 387018, 385549, 382645, 377384, 337060, 334189, 331574, 296624, 296587, 291841, 279428, 274153, 273611, 262712, 260364, 260364, 260160, 259929, 256436, 252842, 250860, 245214, 244857, 242678, 239439, 233632, 232190, 232190, 232190, 232190, 232190, 232190, 232190, 232190, 232190, 232190, 232190, 232190, 232190, 232190, 232190, 232190, 232190, 232190, 232190, 232190, 232190, 232190, 232190};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 390453;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> lines = {572527, 572396, 571457, 570865, 568960, 568357, 561388, 560254, 558591, 558591, 558591, 558591, 558591, 558591, 558591, 558591, 558591, 558591, 558591, 558591, 558591, 558591, 558591, 558591, 558591, 558591, 558591, 558591, 558591, 558591, 558591, 558591, 532120, 521471, 519960, 488416, 469987, 455694, 452977, 434318, 433531, 397060, 395949, 390437, 384771, 383076, 349249, 336049, 321966, 731302};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 981912;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> lines = {521659, 482492, 475738, 439356, 404965, 404965, 404965, 404965, 404965, 404965, 404965, 404965, 404965, 404965, 404965, 404965, 404965, 404965, 404965, 404965, 404965, 404965, 404965, 404965, 404965, 404965, 404965, 404965, 404965, 404965, 404965, 404965, 404965, 404965, 404965, 404965, 404965, 404965, 404965, 404965, 404965, 404965, 404965, 404965, 404965, 404965, 404965, 404965, 404965, 404965};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 521708;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> lines = {637844, 582318, 565055, 545863, 536350, 516716, 453608, 424690, 394118, 391520, 366565, 361254, 338147, 336827, 322620, 306994, 271362, 254183, 236584, 217593, 200328, 200328, 200328, 200328, 200328, 200328, 200328, 239580, 426952, 469247, 539724, 634415, 718085, 782819, 839188, 860670, 858422, 817583, 810019, 779650, 745994, 731932, 702179, 614897, 576379, 561941, 545699, 536136, 479010, 366465};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 1298235;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> lines = {524171, 523667, 516086, 512152, 510419, 484744, 470667, 456654, 445163, 425987, 410620, 407767, 384728, 363145, 312304, 300523, 282379, 271849, 241911, 226977, 208964, 204043, 199707, 160235, 152723, 140771, 118685, 117849, 115828, 99688, 97041, 75369, 53327, 39377, 39377, 39377, 39377, 39377, 39377, 307926, 408054, 598521, 788367, 811065, 811065, 811065, 811065, 811065, 811065, 811065};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 1295908;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> lines = {622738, 483092, 464115, 421982, 371745, 367053, 367053, 367053, 367053, 367053, 367053, 367053, 367053, 367053, 367053, 367053, 367053, 367053, 367053, 367053, 367053, 367053, 367053, 456417, 494057, 501368, 503052, 622905, 649826, 676735, 686812, 702505, 711850, 728682, 789203, 799940, 800808, 806348, 810127, 826060, 827226, 830058, 841962, 858932, 869111, 873466, 874415, 885805, 895945, 939775};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 1195509;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> lines = {910084, 904396, 851841, 819415, 809657, 786982, 753571, 753083, 701320, 693308, 688882, 637642, 546099, 494740, 479238, 437908, 445706, 453381, 455815, 457818, 470851, 478010, 478988, 479292, 509080, 513158, 531412, 548036, 551131, 570060, 577732, 595067, 596265, 600180, 602306, 602362, 603308, 668071, 672518, 679582, 683222, 687689, 625064, 560548, 543506, 537789, 510963, 489873, 470134, 443935};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 1159914;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> lines = {500063, 411778, 392244, 364100, 347787, 340793, 306933, 238446, 240960, 241655, 241916, 242595, 242682, 244218, 244837, 244940, 245998, 246340, 246759, 249387, 250157, 251093, 251146, 251215, 258634, 260404, 256568, 251493, 245266, 227305, 220501, 206668, 204101, 198214, 194228, 174172, 173966, 157987, 156763, 153356, 142791, 137306, 137306, 137306, 137306, 137306, 137306, 137306, 137306, 137306};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 522070;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> lines = {454313, 167728, 156441, 129628, 43795, 198448, 281919, 383189, 471208, 517422, 509506, 477892, 474777, 456803, 444719, 442511, 436412, 428113, 398210, 397474, 387115, 370098, 367063, 359548, 346589, 331246, 327206, 322248, 312042, 300696, 289113, 286935, 284087, 282480, 274008, 259710, 247951, 240026, 233430, 215390, 214759, 203931, 200234, 319335, 325735, 421102, 497124, 508110, 769244, 789339};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 1517094;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> lines = {330229, 318482, 308954, 298153, 286758, 279729, 274133, 274057, 271911, 269198, 247302, 243434, 233203, 226401, 218063, 209806, 204813, 191614, 188817, 179258, 330846, 408981, 411643, 457036, 457036, 451129, 413719, 365838, 355202, 354097, 333686, 330336, 296297, 290868, 289568, 281934, 273068, 238579, 229390, 203881, 193018, 189214, 171325, 167312, 137217, 82516, 55688, 53222, 42003, 13501};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 608056;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> lines = {298201, 277683, 218627, 220092, 231474, 248724, 252219, 252578, 285108, 308807, 338654, 366407, 382854, 383701, 397865, 402087, 408538, 410014, 440000, 458042, 458583, 458583, 458583, 458583, 458583, 458583, 458583, 458583, 458583, 458583, 458583, 458583, 458583, 458583, 458583, 458583, 458583, 458583, 458583, 458583, 458583, 458583, 458583, 458583, 458583, 458583, 458583, 458583, 458583, 458583};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 538206;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> lines = {740213, 738701, 665832, 661092, 636723, 625643, 599080, 532604, 474080, 444486, 370744, 360238, 325480, 311389, 301870, 262415, 189916, 184632, 169821, 204305, 341921, 394494, 441288, 653444, 672283, 683982, 692235, 692235, 692235, 692235, 692235, 692235, 692235, 692235, 692235, 692235, 692235, 692235, 692235, 720953, 729240, 740245, 748280, 748708, 750982, 790835, 861500, 879906, 885872, 951704};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 1522145;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> lines = {697051, 661180, 625264, 608243, 594981, 542987, 482436, 414833, 384211, 367060, 357312, 323374, 305500, 236204, 207788, 194520, 166792, 135437, 88578, 47193, 43238, 41827, 12113, 16998, 30503, 40456, 50398, 57662, 59439, 62766, 70745, 72121, 78100, 81040, 84403, 98603, 99982, 118630, 128332, 142314, 160517, 164195, 185281, 188339, 198063, 208226, 288598, 491294, 591687, 613850};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 1298837;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> lines = {855487, 855487, 855487, 855487, 855487, 852706, 835813, 797593, 777527, 739046, 733615, 726959, 726353, 695701, 673900, 670938, 635138, 633329, 633005, 626720, 586609, 577405, 576948, 567539, 550795, 534430, 529167, 522663, 519553, 499139, 491502, 463334, 458333, 443370, 421267, 393871, 372595, 350419, 323058, 318259, 303968, 303034, 298323, 274657, 265834, 253511, 230377, 223917, 219435, 216540};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 855536;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> lines = {792266, 792266, 792266, 792266, 792266, 792266, 792266, 792266, 792266, 792266, 792266, 792266, 792266, 792266, 792266, 792266, 792266, 792266, 792266, 792266, 792266, 792266, 792266, 759468, 753974, 753960, 740664, 739817, 739346, 723931, 723823, 721788, 716658, 709548, 706987, 702440, 702440, 702440, 702440, 649165, 603223, 568771, 495444, 494701, 479340, 427312, 427136, 426540, 414586, 394565};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 792315;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> lines = {385097, 385097, 385097, 385097, 385097, 385097, 385097, 385097, 385097, 385097, 385097, 385097, 385097, 385097, 385097, 385097, 377579, 362570, 360798, 352466, 331357, 274839, 266856, 246547, 246547, 246547, 246547, 246547, 246547, 246547, 246547, 246547, 246547, 246547, 246547, 246547, 246547, 246547, 246547, 246547, 246547, 246547, 246547, 246547, 246547, 246547, 246547, 246547, 246547, 246547};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 385146;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> lines = {790249, 790249, 790249, 790249, 790249, 790249, 790249, 790249, 790249, 790249, 790249, 790249, 790249, 790249, 790249, 790249, 790249, 790249, 790249, 790249, 790249, 790249, 790249, 790249, 790249, 790249, 790249, 790249, 790249, 790249, 790249, 766965, 666811, 641186, 632442, 602949, 589717, 562732, 533445, 427471, 426714, 426714, 426714, 426714, 426714, 502917, 504108, 601734, 615316, 673532};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 1037116;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> lines = {805748, 805748, 805748, 805748, 805748, 805748, 805748, 805748, 801992, 735349, 728945, 725240, 719576, 719242, 714575, 683334, 634817, 626312, 582445, 531816, 531190, 524545, 457751, 441435, 415954, 373629, 363112, 367522, 380883, 405850, 417363, 419626, 423368, 444330, 458991, 473878, 477929, 482546, 541724, 552094, 653812, 662559, 734642, 754392, 754869, 764303, 788425, 789671, 795593, 507009};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 1238278;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> lines = {241946, 241946, 241946, 241946, 241946, 241946, 241946, 241946, 241946, 241946, 241946, 241946, 241946, 241946, 241946, 241946, 241946, 241946, 241946, 241393, 240892, 240841, 240568, 240357, 239130, 238973, 238782, 238694, 238585, 238073, 237771, 237436, 237423, 237332, 237298, 237143, 236730, 236692, 236486, 236269, 236091, 334020, 430929, 443067, 481393, 481393, 481393, 481393, 481393, 481393};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 487297;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> lines = {962602, 962602, 936410, 902402, 888013, 838244, 769509, 764910, 710279, 696505, 673538, 652537, 640228, 486876, 430494, 436188, 440097, 440530, 445554, 449146, 458559, 461515, 462512, 466461, 471129, 484484, 489394, 498361, 502065, 504364, 509492, 524885, 535901, 537205, 539622, 548848, 556994, 564585, 565534, 570322, 577627, 584242, 589679, 593303, 596199, 598226, 623830, 627804, 638990, 642470};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 1174627;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> lines = {266734, 266734, 266734, 266734, 266734, 266734, 266734, 266734, 266734, 266734, 266734, 266734, 266734, 266734, 266734, 266734, 266734, 266734, 266734, 266734, 266734, 266734, 266734, 266734, 266734, 266734, 266734, 266734, 266734, 266734, 266734, 266734, 266734, 266734, 266734, 266734, 266734, 266734, 266734, 266734, 266734, 266734, 266734, 266734, 266734, 266734, 266734, 266734, 266734, 266734};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 266783;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> lines = {89748, 89748, 89748, 89748, 89748, 89748, 89748, 89748, 95411, 137199, 151591, 182634, 203156, 206630, 245549, 247770, 259671, 261073, 265432, 266005, 286003, 308479, 330364, 334322, 367182, 424995, 428588, 433549, 436944, 444084, 471272, 512533, 525796, 534349, 536265, 550099, 596665, 617703, 629711, 651402, 659013, 660600, 656140, 623857, 599675, 587241, 580200, 567062, 534326, 419860};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 660649;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> lines = {400234, 400234, 400234, 400234, 400234, 400234, 400234, 400234, 400234, 400234, 400234, 400234, 400234, 400234, 400234, 400234, 400234, 400234, 400234, 400234, 400234, 400234, 400234, 400234, 400234, 400234, 400234, 400234, 402082, 404252, 406671, 407369, 407649, 411683, 416079, 316169, 214333, 214333, 214333, 214333, 214333, 214333, 214333, 214333, 214333, 214333, 214333, 214333, 214333, 214333};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 416128;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> lines = {181233, 181233, 181233, 181233, 181233, 181233, 181233, 181233, 181233, 181233, 181233, 181233, 318001, 323867, 344781, 708379, 760286, 867343, 866451, 852369, 791186, 790117, 742860, 658808, 597225, 620840, 622936, 626243, 629479, 640861, 658479, 667163, 675052, 675841, 689181, 691368, 691777, 711363, 719054, 732594, 747096, 761903, 786826, 793984, 835806, 871571, 903418, 910744, 920153, 943779};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 1213946;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> lines = {403643, 403643, 403643, 403643, 403643, 403643, 403643, 403643, 403643, 403643, 403643, 403643, 403643, 403643, 403643, 403643, 403643, 403643, 403643, 403643, 403643, 403643, 403643, 526320, 546143, 554621, 619249, 639612, 639612, 639612, 639612, 639612, 639612, 639612, 639612, 639612, 639612, 639612, 639612, 639612, 639612, 639612, 562446, 555286, 549876, 545318, 538255, 531307, 529206, 514231};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 639661;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> lines = {793785, 793785, 818576, 840658, 845474, 866643, 882011, 886329, 906957, 910752, 927947, 935449, 940583, 971764, 977127, 977127, 977127, 977127, 977127, 977127, 977127, 977127, 977127, 977127, 977127, 977127, 977127, 977127, 977127, 977127, 977127, 977127, 977127, 977127, 977127, 977127, 977127, 977127, 977127, 977127, 977127, 977127, 977127, 977127, 977127, 977127, 977127, 977127, 977127, 977127};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 977176;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> lines = {80744, 80744, 80744, 83770, 84600, 85968, 87295, 90622, 102004, 102821, 103840, 113524, 113524, 113524, 113524, 113524, 113524, 113524, 113524, 113524, 113524, 113524, 113524, 113524, 113524, 113524, 113524, 113524, 113524, 113524, 135596, 143711, 155742, 181927, 204437, 212541, 240260, 245433, 353215, 463968, 467239, 497987, 523802, 526998, 527467, 550969, 560876, 589304, 611759, 645017};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 645066;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> lines = {238406, 238406, 238406, 238406, 238406, 238406, 238406, 238406, 238406, 238406, 238406, 238406, 238406, 238406, 238406, 238406, 250376, 257664, 279026, 289583, 290846, 298908, 353621, 366540, 396643, 431108, 453046, 461868, 466567, 486715, 500909, 501018, 504564, 571233, 576873, 578385, 602167, 641481, 673782, 706831, 765690, 777922, 788745, 796611, 824683, 826798, 828940, 850815, 887423, 942840};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 942889;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> lines = {767653, 787438, 849222, 850035, 852723, 868870, 885752, 909787, 914539, 920805, 936607, 952679, 989328, 966112, 930055, 897825, 888137, 848167, 847012, 816999, 792481, 754916, 711527, 709112, 693777, 687763, 686231, 676944, 657479, 653055, 647399, 638406, 634966, 623502, 623139, 620963, 613033, 612609, 600203, 598432, 598323, 597122, 582237, 550379, 544583, 542072, 540346, 536767, 536500, 443237};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 989377;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> lines = {42747, 215706, 275512, 356192, 579957, 580747, 618837, 649996, 748584, 781186, 768162, 620663, 599503, 571252, 548106, 473946, 463003, 452622, 446119, 404209, 376756, 370199, 305938, 305938, 305938, 305938, 305938, 305938, 305938, 305938, 305938, 305938, 305938, 305938, 305938, 305938, 305938, 305938, 305938, 305938, 294992, 282388, 277158, 258847, 246193, 222147, 207572, 158578, 157708, 136029};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 781235;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> lines = {113899, 466738, 464018, 456509, 441405, 434245, 426865, 398144, 395496, 385744, 370111, 349702, 338250, 338250, 338250, 338250, 338250, 338250, 338250, 338250, 338250, 338250, 338250, 338250, 338250, 338250, 338250, 338250, 338250, 338250, 338250, 338250, 338250, 338250, 338250, 338250, 338250, 338250, 338250, 338250, 338250, 338250, 338250, 338250, 338250, 338250, 338250, 338250, 338250, 338250};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 466787;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> lines = {190656, 215654, 219231, 315971, 354836, 358206, 381952, 413378, 466853, 472157, 596333, 681100, 793170, 774976, 740931, 703455, 701135, 658895, 606466, 533062, 520161, 518019, 490028, 478302, 423872, 410722, 409921, 373027, 369269, 353740, 330434, 330434, 330434, 330434, 330434, 330434, 330434, 348373, 351115, 418036, 439019, 444828, 470632, 474374, 497754, 514128, 531415, 570681, 594181, 625735};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 1088520;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> lines = {70444, 72434, 126360, 147916, 171963, 270293, 282338, 574820, 594573, 622155, 623717, 631522, 613128, 593428, 567743, 522523, 520419, 508905, 506611, 501771, 475928, 461565, 413929, 390722, 379135, 372143, 371902, 363150, 335129, 315414, 314795, 274658, 241425, 237372, 223217, 163618, 117575, 213166, 219254, 246484, 253808, 428922, 447726, 630574, 924264, 916467, 771989, 622227, 437425, 318022};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 1438260;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> lines = {458381, 467354, 473348, 495274, 500029, 502109, 503768, 506509, 506881, 509521, 523650, 533868, 536107, 537041, 561721, 563452, 567241, 572481, 573335, 602997, 611725, 631750, 635116, 656344, 675106, 676897, 685850, 702148, 702329, 706409, 716525, 731191, 734403, 676643, 676300, 668767, 661737, 672204, 754484, 781714, 787777, 836262, 864523, 890276, 890276, 890276, 890276, 890276, 890276, 890276};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 962991;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> lines = {17746, 37348, 51165, 61854, 65124, 71752, 72260, 83160, 91542, 90144, 89273, 88611, 87792, 86766, 83931, 80935, 77816, 76678, 75841, 74802, 73481, 71327, 71089, 71017, 68003, 65053, 63896, 59405, 58484, 422101, 434331, 434849, 445150, 447995, 455467, 458387, 462300, 505312, 512168, 514980, 572085, 602028, 615519, 626839, 657534, 667363, 679015, 684043, 697904, 761677};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 794784;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> lines = {317293, 319010, 326951, 335776, 335820, 337218, 346520, 367558, 371980, 379505, 383007, 386443, 387047, 396483, 401418, 407996, 422015, 425596, 430425, 431095, 432585, 437324, 444300, 445939, 451191, 460049, 462140, 467132, 467132, 467132, 467132, 467132, 467132, 467132, 467132, 467132, 467132, 467132, 467132, 467132, 467132, 467132, 467132, 467132, 467132, 288262, 242957, 176859, 169699, 31806};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 467181;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> lines = {830509, 830841, 831019, 835329, 835329, 835329, 835329, 835329, 835329, 835329, 835329, 835329, 835329, 835329, 835329, 835329, 835329, 835329, 835329, 835329, 835329, 819391, 781108, 739455, 728398, 564475, 497643, 421994, 371626, 371626, 371626, 371626, 371626, 371626, 371626, 371626, 371626, 371626, 371626, 371626, 371626, 371626, 371626, 371626, 371626, 371626, 371626, 371626, 371626, 371626};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 835378;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> lines = {686206, 711227, 720022, 722168, 725761, 727063, 749814, 750308, 806077, 806077, 806077, 806077, 806077, 806077, 806077, 806077, 806077, 806077, 806077, 803779, 730175, 709333, 669059, 597934, 550362, 539681, 529711, 486864, 451020, 442132, 429365, 390742, 389078, 381569, 366299, 291371, 198313, 184591, 128006, 96602, 85376, 65226, 46563, 101499, 182636, 333210, 346727, 430584, 438076, 976273};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 1735836;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> lines = {78361, 134543, 251031, 304895, 324785, 387883, 491698, 540648, 554669, 569895, 639524, 647997, 672548, 777454, 812718, 836140, 850007, 861751, 866057, 889164, 913054, 922748, 943126, 943126, 943126, 943126, 943126, 943126, 943126, 943126, 943126, 943126, 943126, 943126, 943126, 943126, 943126, 943126, 943126, 943126, 943126, 943126, 943126, 943126, 943126, 943126, 943126, 943126, 943126, 943126};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 943175;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> lines = {119664, 320521, 624087, 624087, 624087, 624087, 624087, 624087, 624087, 624087, 624087, 624087, 624087, 624087, 624087, 624087, 624087, 624087, 624087, 624087, 629348, 641228, 645162, 671813, 673618, 673997, 697681, 715754, 733601, 740267, 751148, 770016, 797198, 798340, 819325, 826286, 830994, 864016, 864437, 866077, 887166, 889182, 909598, 934160, 909355, 878708, 877880, 859158, 789673, 730369};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 934209;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> lines = {410606, 410915, 414198, 414381, 417585, 423342, 426518, 446098, 446767, 450824, 459945, 468050, 468093, 468509, 469469, 470752, 478672, 492362, 492760, 496773, 497927, 504179, 506283, 508543, 509957, 512006, 518028, 518543, 532440, 536584, 537906, 538346, 538893, 541106, 543515, 550371, 550705, 551512, 552626, 552626, 552626, 552626, 585701, 640868, 640868, 640868, 640868, 640868, 640868, 640868};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 640917;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> lines = {63734, 157191, 282425, 467043, 486824, 543638, 593381, 622877, 622877, 623801, 624177, 625413, 626766, 627115, 629255, 630586, 631774, 635627, 635847, 637777, 638377, 640042, 641517, 642572, 642985, 645440, 645894, 648124, 653601, 653802, 653830, 655020, 656661, 657570, 657993, 658059, 659055, 660104, 662739, 663154, 667359, 668581, 671539, 678864, 696383, 700723, 702108, 710020, 717022, 745602};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 745651;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> lines = {386137, 404996, 471196, 483316, 505167, 597895, 641429, 642467, 659602, 671717, 691311, 696992, 717561, 746155, 763531, 773408, 774087, 774245, 777945, 795355, 810053, 819808, 822637, 823202, 828914, 830021, 831367, 832926, 835156, 835224, 836537, 840778, 843058, 843225, 849847, 851354, 854015, 855162, 865562, 871883, 872391, 872579, 873551, 874325, 874330, 874444, 874500, 874720, 875057, 875132};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 875181;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> lines = {0, 276521, 747788, 213156, 566756, 0, 566756, 83646, 213156, 44922, 213156, 44922, 747788, 213156, 0, 44922, 276521, 0, 276521, 44922, 83646, 0, 213156, 755508, 0, 566756, 44922, 0, 213156, 83646, 755508, 83646, 0, 213156, 747788, 0, 83646, 44922, 276521, 83646, 566756, 44922, 276521, 44922, 276521, 83646, 0, 44922, 566756, 83646};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 8043948;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> lines = {550927, 31765, 411549, 0, 411549, 0, 550927, 31765, 792494, 550927, 31765, 0, 411549, 0, 434395, 411549, 31765, 128307, 31765, 434395, 0, 128307, 917195, 128307, 550927, 411549, 128307, 411549, 31765, 411549, 434395, 0, 31765, 128307, 0, 792494, 31765, 0, 792494, 0, 128307, 434395, 128307, 31765, 917195, 550927, 434395, 0, 434395, 128307};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 9492283;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> lines = {170004, 293999, 293999, 745551, 385062, 32932, 139002, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 999999, 999999, 999998, 999997, 999997, 999967, 999155, 993324, 993324, 993324, 993324, 993324, 991104, 947583, 946748, 709397, 665772, 1407, 1775, 3802, 4862, 24570, 39050, 190885, 680165};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 2391426;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> lines = {232076, 990670, 253926, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 999999, 999999, 999942, 999887, 999805, 999736, 999694, 999089, 998721, 996869, 996825, 985742, 949017, 520083};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 1736793;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> lines = {771, 935, 935, 3376, 3376, 5510, 7338, 7699, 7699, 7699, 7699, 7699, 7699, 7699, 10534, 14977, 14977, 14977, 14977, 14977, 14977, 14977, 14977, 14977, 14977, 14977, 14977, 14977, 14977, 23669, 487199, 244495, 21418, 0, 0, 0, 0, 1, 2, 9, 11, 38, 40, 117, 4799, 25822, 27366, 30515, 103597, 780674};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 1267922;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> lines = {613099, 953694, 980373, 996159, 999100, 999357, 999719, 999737, 999873, 999874, 999878, 999920, 999955, 999996, 999999, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 522303, 210295, 92186, 529, 374, 350, 145, 25, 20, 7, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 815347};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 1815396;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> lines = {921430, 915031, 915031, 999435, 998064, 998064, 998064, 998064, 998064, 998064, 996926, 996711, 933072, 790742, 204, 447, 212183, 548169, 0, 0, 0, 0, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 14, 60, 4683, 6959, 7583, 78225, 127887, 141691, 717518, 791888, 791888};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 2345736;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> lines = {404603, 884856, 899714, 914347, 965140, 976196, 976907, 984135, 992395, 997209, 998532, 999211, 999483, 999720, 999962, 999983, 999996, 999999, 999999, 999999, 999999, 999999, 999999, 1000000, 183481, 79964, 40340, 12663, 5203, 4529, 1790, 733, 153, 130, 34, 27, 7, 7, 7, 7, 7, 7, 7, 779916, 833780, 952220, 416092, 416092, 103712, 103712};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 1952262;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> lines = {628943, 164351, 321746, 0, 0, 0, 0, 0, 0, 1, 1, 16, 16, 16, 92, 753, 1850, 2374, 13754, 34126, 49374, 125997, 601853, 628508, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 999999, 999997, 999867, 999660, 991697, 971581, 967986, 967661, 950751, 939950, 776710, 624005, 569560, 29673, 29673, 29673, 29673, 29673, 29673, 29673};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 1786387;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> lines = {231950, 833821, 801642, 801642, 801642, 962593, 931841, 0, 0, 0, 0, 1, 8, 23, 24, 24, 24, 24, 24, 24, 24, 31, 72, 99, 561, 838, 1961, 2013, 4483, 5503, 14074, 239705, 473030, 492248, 492248, 492248, 51061, 880200, 999841, 964138, 803851, 610414, 19383, 33129, 138315, 149126, 303998, 318733, 337937, 465569};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 2882035;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> lines = {787454, 498738, 334310, 76601, 5476, 569, 292, 292, 292, 292, 292, 292, 292, 292, 292, 292, 292, 292, 393234, 735160, 763894, 998485, 391824, 391824, 391824, 391824, 391824, 391824, 391824, 43177, 18480, 323209, 995009, 999742, 457313, 101179, 134662, 558827, 651218, 977200, 988745, 989502, 989502, 989502, 989518, 488051, 3629, 3629, 470595, 694645};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 4346313;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> lines = {794165, 832526, 977239, 990312, 997322, 998618, 999207, 999809, 999895, 999946, 999960, 266313, 116112, 111559, 76621, 19458, 9267, 4752, 3606, 1459, 1154, 830, 454, 286, 99, 442212, 64324, 3169, 477064, 526581, 870999, 948506, 968568, 999845, 999862, 999871, 999894, 999944, 352049, 74142, 11234, 884245, 948973, 996850, 999379, 999204, 999406, 999406, 999421, 999421};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 3427259;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> lines = {791471, 316025, 314497, 137432, 77301, 24696, 19812, 17705, 6777, 6594, 2435, 1464, 16, 8, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 98846, 970417, 999496, 783236, 774583, 724984, 142089, 70042, 438234, 718490, 718490, 962636, 962636, 869744};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 2683610;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> lines = {721066, 168129, 792057, 801807, 791560, 88182, 319042, 356125, 261435, 443727, 787209, 959705, 525319, 875298, 591918, 630052, 419085, 686803, 36901, 294890, 724500, 575024, 610231, 909524, 843146, 635135, 412584, 198021, 378758, 402677, 603814, 919505, 377262, 680792, 328353, 225494, 539980, 200474, 442626, 274657, 732005, 89080, 239645, 596440, 844636, 197996};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 6793488;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> lines = {39233, 117227, 138481, 252724, 786713, 99088, 211599, 360029, 299776, 995361, 417607, 367450, 295422, 972675, 208925, 643846, 702375, 289286, 285074, 811988, 962276, 74482, 146896, 836695, 300759, 611353, 301072, 831864, 496663, 796814, 450031, 516626, 398157, 747732, 278366, 59654, 66479, 997937, 362221, 599505, 974715, 102204, 140489, 251083};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 7610763;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> lines = {940255, 193207, 1170, 697769, 706062, 496885, 913386, 382457, 269571, 119342, 865015};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 2807331;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> lines = {922671, 417885, 692019, 191322, 734677, 56430, 305533, 261598, 706321, 165536, 469080, 873539, 247954, 237388, 496327, 913992, 698796, 648471, 332750, 546142, 74744};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 4032005;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> lines = {334829, 878607, 637654, 897245, 863584, 219309, 891645, 880241, 400675, 909256, 617002, 234856, 477120, 997391, 283914, 108438, 267638, 442483, 242036, 969484, 529537, 706368, 960097, 146891, 431934, 776329, 947924, 366334, 126426, 359866, 619895, 355520, 846403, 158614, 823528, 951443, 667242, 3634, 355755, 445583, 378175, 722429, 337760, 458209, 960538, 917630, 140538, 818957, 729877};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 9239365;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> lines = {895763, 648969, 406822, 981462, 393008, 651467, 668727, 87525, 222306, 52478, 600127, 370033, 447260, 951668, 126033};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 3010201;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> lines = {2273, 19777, 522306, 271156, 909074, 177386, 899640, 804935, 255675, 526552, 372606, 822362, 989488, 193100, 646243, 415817, 407106, 26330, 689648, 279906, 595243, 105245, 145239, 585752, 479147, 12590, 712714, 341759, 855033, 523385, 450874, 37465, 668578, 412122, 372580, 838976, 389303, 655821, 154409, 815331, 381391, 429900, 494568, 950501};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 8490042;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> lines = {543115, 923372, 160399, 793387, 257507, 365061, 940907, 974311, 700252, 733076, 834883, 205236, 218201, 351915, 503533, 173127, 69179, 17231, 530800, 946671, 856585, 926448, 743847, 854293, 294276, 966744, 633673, 504007, 599968, 987110, 618586, 190785, 514918, 290669, 3927, 156479, 401009, 130411, 335495, 88798};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 5897750;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> lines = {177333, 439623, 6344, 144901, 266315, 587036, 211784, 748777, 810141, 650309, 728501, 752493, 919499, 583020, 675610, 289598, 119907, 974559, 570270, 686987, 731235, 360071, 933961, 995996, 863774, 828305, 735766, 679114, 782576, 302199, 404319, 312463, 535781, 47158, 507666};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 4521436;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> lines = {324559, 575087, 405434, 403232, 369625, 72315, 224904, 874468, 843316, 220402, 614301, 759759, 715874, 583083, 800693, 407790, 107740, 235619, 396278, 238422, 660056, 960783, 207448, 912004, 462233, 929386, 754039, 332497, 635029, 24604, 824550, 539512, 287018, 453978, 763079, 308534, 638895, 665007, 262995, 527835, 436656, 932291, 916113, 809200, 903909, 421458};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 7107056;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> lines = {983917, 918525, 499659, 971138};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 1455399;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> lines = {250, 105, 155, 205, 350};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 499;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> lines = {83960, 675172, 157296, 444775, 177666, 24317, 447612, 462614, 617143, 440089, 670578, 726100, 969204, 243869, 767804, 899487, 539157, 455457, 989624, 602181, 201704, 56109, 776296, 948973, 542015, 459954, 480400, 609012, 740466, 277499, 420066, 610304, 210268, 617153, 884244, 363360, 765931, 691124, 789058, 509306, 869295, 604096, 854082, 658510, 80880, 796407, 310485, 867768, 573260, 12944};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 7837873;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> lines = {547416, 764373, 640967, 969439, 63808, 814827, 503720, 905192, 237900, 300222, 136556, 998146, 538248, 690921, 343544, 860045, 83558, 249306, 366584, 11143, 924524, 718370, 288564, 178757, 482043, 426167, 664211, 418297, 37188, 50144, 711551, 741602, 107383, 834916, 611027, 682320, 181877, 969481, 137775, 200946, 387923, 835694, 211748, 420727, 791467, 198762, 423097, 289838, 692903, 995844};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 10075031;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> lines = {568121, 594348, 889557, 616572, 789644, 868317, 586937, 745139, 579050, 915273, 772841, 743455, 765105, 705836, 650325, 664905, 731641, 888984, 915026, 755700, 990284, 706580, 964287, 854585, 921189, 602563, 534122, 545058, 874528, 583815, 920149, 959000, 678162, 809705, 575571, 984157, 678021, 678859, 729296, 757071, 610483, 518488, 516877, 891939, 724323, 667202, 556843, 972315, 556185, 988221};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 5038362;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> lines = {241383, 627526, 610351, 842793, 124956, 526081, 725643, 696273, 345952, 796034, 662321, 311592, 562037, 807848, 644087, 540014, 913896, 279263, 28262, 385843, 745890, 241520, 224805, 629910, 141871, 447105, 280676, 608164, 809790, 262633, 349199, 472667, 572291, 571924, 315779, 196869, 350452, 852011, 309417, 177842, 63881, 378788, 693651, 535243, 312818, 469193, 401094, 110099, 56502, 773237};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 7205685;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> lines = {179600, 298198, 469567, 208852, 189145, 187037, 795246, 392759, 696891, 695630, 120865, 398441, 411447, 489029, 528320, 906863, 581320, 96163, 929041, 363099, 128455, 212, 952768, 281969, 509816, 689305, 803622, 618689, 339101, 357193, 867112, 127314, 320777, 572605, 61554, 116922, 24198, 810017, 736147, 754083, 988642, 727254, 844302, 766128, 449639, 867271, 452008, 688847, 484545, 985491};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 7814491;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> lines = {50, 49, 48, 47, 46, 45, 42, 4124, 312, 0, 501, 409, 400008, 407, 400006, 405, 400002, 41024, 3102, 0, 502, 4009, 40008, 4007, 40006, 4005, 40002, 41204, 30102, 0, 53, 40009, 4008, 40007, 4006, 40005, 4002, 40124, 31002, 0, 503, 400009, 408, 400007, 406, 400005, 402, 410024, 3012, 0};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 3073641;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> lines = {6, 2, 2, 2, 6, 2, 2, 2, 6, 2, 2, 2, 6, 2, 2, 2, 6, 2, 2, 2, 6, 2, 2, 2, 6, 2, 2, 2, 6, 2, 6, 6, 6, 6, 6, 2, 2, 2, 2, 6, 6, 6, 6, 6};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 85;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> lines = {0, 0, 309666, 978464, 100109, 829252, 918240, 569762, 771968, 575132, 599571, 806671, 206964, 481309, 929340, 565025, 995872, 10584, 270364, 872075, 716829, 629803, 830017, 96863, 548545, 298689, 745608, 368214, 0, 251975, 867477, 507308, 532293, 208071, 29069, 1000000, 145685, 933969, 104039, 607365, 958250, 187844, 373559, 358531, 718879, 745049, 262212, 915908, 647962, 742079};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 10169852;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> lines = {88, 88, 88, 88, 77, 77, 77, 88, 88, 6, 5, 4, 3, 2, 1, 10, 9, 8, 7, 6, 289383, 930886, 692777, 636915, 747793, 238335, 885386, 760492, 516649, 641421, 202362, 490027, 368690, 520059, 897763, 513926, 180540, 383426, 89172, 455736, 5211, 595368, 702567, 956429, 465782, 21530, 722862, 665123, 174067, 703135};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 5381544;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> lines = {11223, 3963, 4076, 21870, 5522, 13212, 19666, 15138, 18056, 21700, 15992, 4886, 13114, 16194, 17024, 15541, 5240, 885, 14174, 11763, 5239, 16016, 12812, 8753, 21027, 24730, 15359, 12385, 11958, 5049, 11611, 3178, 6538, 10415, 30563, 30670, 20011, 11429, 29491, 9610, 14513, 3112, 2225, 5438, 29773, 26481, 16833, 10637, 6177, 31721};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 212177;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> lines = {60, 10, 50, 20, 40, 35};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 125;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> lines = {989217, 689381, 657837, 731083, 331523, 901501, 811134, 396258, 967460, 351250, 954056, 387480, 471479, 546010, 920942, 913527, 481065, 530834, 244967, 353334, 927827, 659034, 296893, 599703, 850544, 758258, 716979, 342701, 283241, 960736, 103993, 956451, 761763, 751843, 336866, 144790, 131026, 426575, 107207, 439344, 282563, 968164, 144949, 200872, 536642, 675252, 298719, 306201, 805506, 161848};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 8506570;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> lines = {1000000, 956231, 25452, 362555, 254144, 95214, 3666, 12, 1, 22222, 0, 665325, 25141, 23625, 22251, 447585, 36252, 141251, 32514, 214521, 296396, 555, 59547, 89652, 36251, 444111, 25142, 362145, 125146, 333, 251478, 965214, 525252, 6524, 15241, 52222, 362514, 251444, 956253, 251452, 33333, 6251, 32562, 14857, 652362, 11111, 11, 142514, 325625, 62511};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 6667983;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> lines = {125000, 125001, 124998, 125001, 125001, 500000, 500000, 500000, 500000, 500000, 125000, 125001, 124998, 125001, 125001, 500000, 500000, 500000, 500000, 500000, 125000, 125001, 124998, 125001, 125001, 500000, 500000, 500000, 500000, 500000, 125000, 125001, 124998, 125001, 125001, 500000, 500000, 500000, 500000, 500000, 125000, 125001, 124998, 125001, 125001, 500000, 500000, 500000, 500000, 500000};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 2000064;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> lines = {487748, 643497, 546090, 158247, 881133, 554409, 482572, 520766, 893623, 819317, 611333, 941216, 228000, 261627, 555054, 998610, 26470, 816422, 157452, 233946, 294748, 408444, 215512, 124295, 638793, 57392, 123998, 695515, 230601, 868080, 575341, 528791, 651119, 937213, 659720, 635905, 192972, 749867, 157584, 773131, 427396, 838378, 290860, 599783, 833448, 406778, 530679, 792362, 53497, 235563};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 8811104;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> lines = {921, 34240, 324923, 883994, 377234, 777, 888, 838384, 949923, 49234, 82832, 73842, 84924, 295362, 829374, 283940, 921, 34240, 324923, 883994, 377234, 838384, 949923, 49234, 82832, 73842, 84924, 295362, 829374, 283940, 921, 34240, 324923, 883994, 377234, 838384, 949923, 49234, 82832, 73842, 84924, 295362, 829374, 283940, 32434, 234324, 43224, 5434, 4324, 432};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 7313993;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> lines = {0, 0, 0, 0, 5, 5, 0, 0, 0, 0};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> lines = {153399, 883879, 24697, 275773, 980331, 745668, 550466, 85703, 932523, 102959, 325499, 240197, 82368, 785304, 243777, 108943, 338301, 876711, 679038, 138693, 19115, 110964, 923549, 119715, 131149, 468391, 595849, 670472, 250228, 231698, 225137, 683370, 346640, 814483, 671238, 678958, 388995, 360802, 945969, 559977, 390499, 119803, 375578, 748771, 915236, 117823, 627422, 493691, 390040, 229815};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 8658812;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> lines = {893958, 249778, 600779, 730492, 815437, 32927, 68153, 119594, 790612, 216686, 21498, 191409, 474003, 254612, 239407, 993, 369126, 739349, 853150, 157612, 151622, 962947, 638448, 670132, 29500, 471411, 188571, 584364, 167780, 547372, 714400, 912824, 871287, 425392, 999964, 527191, 669161, 56389, 12309, 869570, 28198, 388707, 65629, 351645, 893474, 328437, 414065, 168656, 456349, 407165};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 9083248;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> lines = {1000, 1000, 50, 50, 50, 50, 1000, 1000, 1000, 50, 50, 1000, 1000, 1000, 50, 50, 25, 25, 25, 1000, 1000, 1000, 1000000, 1000, 1000, 1000, 1000, 1000, 800, 1200, 50, 50};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 1003306;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> lines = {1, 2, 1, 4, 4, 0};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> lines = {1, 2, 1, 2, 3};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> lines = {1000000, 1000000, 2222, 3, 3, 3, 3, 1000000, 1000000, 1000000, 1000000, 1000000, 3, 3, 543, 3, 3, 3, 3, 4, 5, 6, 7, 8, 8, 8, 8, 8, 9, 9, 9, 9, 989898, 454656, 2222, 2222, 2222, 4, 4, 7, 7};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 2990475;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> lines = {1, 2, 3, 4, 5, 4, 3, 2, 1, 2, 3, 4, 5, 6, 7, 8, 7, 6, 5, 4, 3, 4, 5, 6, 7, 6, 5, 4, 3, 2, 1, 2, 3, 4, 3, 2, 1, 999998, 999999, 1000000, 999999, 999998, 999997, 999996, 0, 0, 999996, 999997, 1000000, 1};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 2000067;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> lines = {3, 2, 1};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> lines = {41, 18467, 6334, 26500, 19169, 15724, 11478, 29358, 26962, 24464, 5705, 28145, 23281, 16827, 9961, 491, 2995, 11942, 4827, 5436, 32391, 14604, 3902, 153, 292, 12382, 17421, 18716, 19718, 19895, 5447, 21726, 14771, 11538, 1869, 19912, 25667, 26299, 17035, 9894, 28703, 23811, 31322, 30333, 17673, 4664, 15141, 7711, 28253, 6868};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 235807;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> lines = {975797, 752892, 617352, 648420, 965102, 888320, 503477, 885068, 958178, 551332, 650010, 768942, 939380, 521888, 890424, 615048, 631638, 615535, 970064, 982424, 666740, 584338, 797636, 579754, 703568, 658050, 835123, 885004, 599939, 548571, 592399, 593723, 984348, 564050, 914777, 877504, 870574, 824513, 902004, 834177, 835888, 659425, 588808, 870174, 680552, 783180, 900348, 999760, 542445, 523864};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 4948706;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> lines = {777099, 641333, 331786, 683925, 322234, 878996, 388871, 286128, 321736, 141018, 369324, 833698, 498299, 652423, 650031, 263171, 336877, 361344, 660354, 861224, 386775, 947216, 158853, 694540, 282475, 249435, 37798, 541747, 807556, 566088, 880680, 619343, 916921, 808509, 291948, 257760, 879566, 939792, 968345, 954228, 607505, 474019, 587689, 905871, 795969, 67864, 853622, 209471, 715887, 397327};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 8079181;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> lines = {845312, 184911, 801369, 584684, 744160, 131619, 691461, 14973, 499672, 293651, 696043, 679074, 508655, 262298, 87362, 29845, 817065, 58698, 731676, 150071, 770955, 631889, 152784, 193512, 953486, 667859, 469342, 835792, 107870, 192812, 571063, 382064, 656157, 659898, 404153, 573714, 630224, 125807, 326267, 404270, 862159, 456633, 39839, 697051, 644802, 123077, 991700, 892723, 72731, 542902};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 10015918;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> lines = {245697, 417775, 366273, 475151, 246063, 164372, 406167, 621904, 512526, 40215, 365245, 345829, 959906, 54902, 966757, 691808, 48231, 611247, 241414, 895615, 694745, 597576, 59056, 92241, 502578, 437924, 352205, 586202, 539214, 393383, 232801, 576439, 269794, 657586, 116293, 84080, 501858, 990010, 698763, 592039, 999667, 831808, 480936, 811377, 675515, 521964, 400770, 985185, 561694, 105603};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 7689776;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> lines = {1, 2, 4, 1, 2, 4};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> lines = {670041, 6334, 259169, 591478, 666962, 455705, 293281, 919961, 0, 1, 2, 533902, 820292, 177421, 969718, 265447, 394771, 121869, 15667, 957035, 138703, 361322, 657673, 125141, 708253, 465547, 602662, 610037, 418723, 807529, 362316, 442190, 60288, 429040, 49926, 477446, 305890, 524370, 25006, 504393, 249629, 564084, 418756, 1000000, 999999, 1000000, 254626, 385537, 836118, 432929};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 9327262;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> lines = {0, 5, 3, 11, 9, 7, 5, 3, 1, 3, 5, 7, 9, 11, 11, 9, 7, 5, 3, 1, 3, 5, 7, 9, 11, 13130, 22344, 16529, 17374, 32689, 12662, 2329, 9546, 27033, 2940, 27919, 30610, 31625, 12689, 1119, 15675, 3844, 13312, 1970, 20379, 12915, 29484, 0, 393, 0};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 151359;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> lines = {1, 2, 3, 5, 8, 1, 2, 4, 200000, 200001, 300002, 300005, 300003, 1, 2, 5, 8, 4, 0, 0, 2, 5, 4, 8, 26, 999999, 999958, 99995, 25656, 1252, 22, 999999, 0, 0, 55, 50, 2563, 26888, 628996, 995853};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 3295893;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> lines = {2, 2, 2, 1, 2, 1, 1, 2, 8, 6, 4};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> lines = {150, 250, 100, 50, 1, 99, 76331, 4531, 76389, 234521, 999999, 0, 999999, 0, 999999, 0, 999999, 0};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 4072062;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> lines = {1643, 213, 34, 326, 436, 45, 463, 85686, 7, 443, 547, 568568, 45};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 656259;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> lines = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 1000049;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> lines = {1000, 3, 1000, 3, 1000};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 2998;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> lines = {1000000, 1000000, 1000000, 999999, 0, 1, 3829, 1298, 1222, 1, 1, 144, 2, 5, 8, 9, 8192, 89441, 2891, 1, 23, 758, 21, 7859, 123, 646, 1000000, 1000000, 32, 32, 551, 62, 1, 32, 6, 93290, 589, 33, 123, 999999, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 3195736;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> lines = {41, 18467, 6334, 26500, 19169, 15724, 0, 29358, 26962, 24464, 5705, 28145, 23281, 16827, 9961, 491, 2995, 11942, 4827, 5436, 32391, 14604, 3902, 153, 292, 123, 82, 17421, 18716, 19718, 19895, 5447, 21726, 14771, 11538, 1869, 19912, 25667, 26299, 17035, 9894, 28703, 23811, 31322, 30333, 17673, 4664, 15141, 7711, 6868};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 226953;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> lines = {894918, 889255, 747893, 985553, 450155, 747027, 685813, 991666, 327393, 806849, 286361, 20713, 631219, 959698, 805537, 549154, 250593, 293377, 400146, 576663, 8465, 781238, 527872, 313067, 183907, 312423, 206060, 441319, 154273, 473195, 248198, 131664, 216213, 272925, 477011, 170977, 653557, 704553, 725417, 680042, 469882, 318070, 476440, 20037, 20751, 32112, 343587, 323696, 636260, 708081};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 6701425;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> lines = {878259, 535686, 293141, 161088, 283366, 530482, 590450, 744834, 871924, 39747, 641976, 624166, 621648, 670264, 41791, 631566, 571946, 13960, 889831, 502028, 590709, 446431, 246969, 185529, 66899, 953477, 281116, 423460, 354976, 926944, 512305, 883432, 964952, 647568, 614347, 479063, 812710, 518840, 44430, 744210, 486154, 150812, 906787, 237050, 173285, 283814, 233173, 946945, 566500, 277507};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 8461556;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<int> lines = {1, 1, 1, 8, 8, 7, 8, 8, 1, 1, 1};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<int> lines = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 23, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 100, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1, 0};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 3998926;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<int> lines = {42, 35, 68, 1, 70};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 148;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<int> lines = {50, 75, 120, 46, 47, 9, 50, 51, 56, 58, 69, 78, 98, 120, 140, 150, 300, 345, 375, 330, 300, 340, 325, 150, 257, 240, 350, 330, 265, 120, 450, 324, 400, 222, 207, 270, 240, 211, 99, 111, 120, 145, 167, 97, 43, 123, 270, 287, 290};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 1576;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<int> lines = {6, 8, 39, 27, 44, 2, 7, 63, 27, 48, 33, 25};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 149;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<int> lines = {321, 432, 65, 0, 1233, 543543, 456465, 254554, 543543, 543543, 543432, 432432, 765765, 543543, 432432, 432432};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 1166312;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<int> lines = {2, 2, 2, 1, 2, 1, 1, 2, 8, 6, 4, 3, 4, 5, 1000, 10030};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 10052;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<int> lines = {5740, 9707, 3291, 3667, 7369, 6968, 2002, 509, 896, 3875, 9222, 78, 4877, 7773, 3077, 11, 8092, 6234, 9136, 5978, 7198};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 42416;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<int> lines = {397398, 869342, 910709, 785694, 348450, 187460, 758424, 772974, 217213, 758483, 150664, 640254, 6573, 466441, 970658, 360411, 931808, 368714, 853596, 27451, 678719, 175980, 515256, 669683, 312825, 171134, 35610, 260551, 882484, 11426, 53830, 232456, 571976, 805738, 568738, 389226, 490526, 38637, 350589, 834906, 537895, 818056, 337957, 193042, 839013, 376234, 892490, 495865, 205069, 192068};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 9673610;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<int> lines = {11043, 2624, 4587, 9108, 28044, 26617, 12321, 12298, 27423, 32163, 24127, 2464, 7892, 23650, 8871, 12218, 4810, 3306, 11788, 28627, 32746, 16532, 6197, 16166, 4296, 6321, 23037, 23726, 19401, 30750, 10399, 20305, 26763, 4889, 5680, 5209, 5249, 12626, 7021, 4643, 27358, 22085, 28343, 8987, 9141, 17352, 19548, 19688, 15966, 2784};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 215344;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<int> lines = {919041, 196904, 160751, 279453, 160390, 982337, 218409, 733344, 796168, 990904, 884892, 539434, 944611, 26317, 646618, 369511, 756094, 846168, 503026, 522165, 827562, 861722, 945441, 427963, 658931, 49520, 950006, 657815, 19835, 813283, 433973, 536684, 264200, 784467, 130526, 22273, 721006, 617403, 630316, 224705, 921355, 430965, 587100, 72586, 621491, 945927, 506055, 54913, 955007, 866859};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 10462530;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<int> lines = {999950, 999950, 999952, 999952, 999954, 999955, 999955, 999957, 999958, 999959, 999960, 999960, 999962, 999963, 999964, 99994, 999964, 999964, 999968, 999969, 999970, 999971, 999972, 999973, 999975, 999975, 999976, 999977, 999978, 999979, 999980, 999980, 999981, 999982, 999983, 999984, 999985, 999986, 999987, 999988, 999989, 999990, 999991, 999992, 999993, 999994, 999995, 999996, 999997, 999998};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 1900017;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<int> lines = {2, 4, 4, 4, 2};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<int> lines = {4, 3, 4, 1};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<int> lines = {999991, 999992, 999991, 999994, 999993, 999996, 999991, 999994, 999992, 999995, 999991, 999993, 999, 999990};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 1999010;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<int> lines = {361954, 578805, 144888, 140086, 514397, 969399, 887873, 402213, 152004, 176414, 401831, 860762, 580629, 869474, 138673, 508844, 27182, 263243, 81714, 212216, 562775, 388603, 112949, 147503, 800247, 150903, 300103, 584619, 844720, 70148, 573320, 123035, 467281, 231366, 264769, 373434, 689729, 570712, 747218, 312573, 215052, 203677, 607834, 733102, 516860, 252876, 955285, 457773, 156178, 353262};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 7785383;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<int> lines = {1, 1000, 1, 1000, 1};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 2003;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<int> lines = {1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 1, 1000000, 0};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 25000025;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<int> lines = {45, 57, 47, 5, 45, 75, 65, 478, 45785, 457, 58, 0, 45, 784, 7475, 4175, 47, 897, 68, 78, 57475, 37456, 7467, 94753, 79, 7547, 76, 78, 645, 6798, 0, 75, 978, 6749, 4597, 94573, 4597, 20, 789, 0, 47593, 7459, 475, 795, 1579, 157, 0, 4759, 4973, 975};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 364268;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<int> lines = {100, 100, 10, 10, 5, 5, 1000, 1000, 1000, 1000, 2, 1};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 1106;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<int> lines = {41000, 467000, 334000, 500000, 169000, 724000, 478000, 358000, 962000, 464000, 705000, 145000, 281000, 827000, 961000, 491000, 995000, 942000, 827000, 436000, 391000, 604000, 902000, 153000, 292000, 382000, 421000, 716000, 718000, 895000, 447000, 726000, 771000, 538000, 869000, 912000, 667000, 299000, 35000, 894000, 703000, 811000, 322000, 333000, 673000, 664000, 141000, 711000, 253000, 868000};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 7807049;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<int> lines = {1, 1000000, 654654, 93485, 0, 67, 632454, 55555, 777777, 888888, 1234, 0, 654335, 898989, 11111, 999999, 5656, 78, 909090, 676767, 90000, 322345, 1, 1000000, 654654, 93485, 0, 67, 632454, 55555, 777777, 888888, 1234, 0, 654335, 898989, 11111, 999999, 5656, 78, 909090, 676767, 90000, 322345, 454545, 898989, 70, 89890, 1};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 11656553;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<int> lines = {841872, 850227, 356899, 915513, 904086, 573220, 682541, 799024, 118068, 560376, 85633, 405987, 350881, 640814, 926079, 833876, 535833, 672441, 752581, 153291, 537737, 650301, 748149, 893417, 616918, 478899, 660735, 361650, 911439, 280355, 717059, 173628, 647031, 64341, 698365, 339636, 105548, 821120, 568772, 4352, 735241, 615588, 790035, 469113, 170007, 58090, 730948, 439352, 339751, 606867};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 8766066;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<int> lines = {89, 80, 0, 22, 37, 50, 4, 1, 49, 31};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 196;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<int> lines = {100, 0, 100};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 202;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    vector<int> lines = {6523, 22445, 8346, 4538, 5971, 1418, 24590, 14971, 8440, 12581, 1766, 16184, 17454, 23418, 21308, 25206, 760, 25048, 17205, 10132, 6594, 31554, 11477, 23380, 30176, 9494, 2072, 1431, 28727, 17132, 7998, 10344, 8250, 30145, 6502, 28732, 23321, 28245, 4958, 14712, 13108, 16081, 15034, 3892, 3030, 28589, 7971, 1855, 5408, 23505};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 283364;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    vector<int> lines = {0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 25000049;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    vector<int> lines = {1746, 25808, 25320, 4638, 29425, 1093, 30545, 8648, 28028, 26437, 26802, 18369, 12670, 3257, 27166, 7006, 10051, 28885, 10191, 30082, 27509, 1957, 10090, 24524, 20869, 17897, 32131, 1039, 25932, 11299, 31844, 12291, 12275, 2030, 16394, 16698, 17424, 24465, 15217, 3413, 21777, 15316, 11026, 6775, 24030, 17427, 4265, 15354, 6842, 24720};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 334780;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    vector<int> lines = {120071, 402162, 636329, 67335, 306155, 873994, 729008, 347834, 329659, 550887, 774547, 345484, 968263, 143688, 323394, 650629, 425474, 362444, 812812, 236020, 577335, 832701, 229541, 672313, 576189, 724614, 766667, 754949, 266719, 330387, 434739, 170978, 394500, 235881, 66912, 163200, 341955, 852311, 823742, 742596, 389292, 569770, 861721, 243072, 805270, 736957, 300455, 2341, 503466};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 7410636;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    vector<int> lines = {123456, 654321, 123456, 654321, 123456, 654321, 123456, 654321, 123456, 654321, 777, 123, 1000000, 0, 1437, 777, 123, 1000000, 0, 1437, 123456, 654321, 123456, 654321, 123456, 654321, 123456, 654321, 123456, 654321, 777, 123, 1000000, 0, 1437, 777, 123, 1000000, 0, 1437, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 9559439;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    vector<int> lines = {1, 10, 1, 100, 2};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 113;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    vector<int> lines = {92, 11, 80, 81, 98, 16, 9, 53, 78, 38, 93, 28, 55, 62, 84, 96, 51, 47, 37, 50, 66, 99, 91, 59, 13, 0, 25, 0, 23, 77, 89, 85, 2, 62, 70, 38, 50, 21, 30, 40, 42, 51, 70, 21, 27, 42, 11, 98, 65, 76};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 844;
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    vector<int> lines = {10, 5, 9, 4, 8, 3, 7, 2, 6, 1};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    vector<int> lines = {4, 2, 3, 1};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    vector<int> lines = {100, 100, 4};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 102;
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    vector<int> lines = {800003, 800014, 799995, 799996, 799990, 800003, 800014, 800017, 800002, 800001, 800006, 799989, 800012, 799998, 799995, 800001, 800008, 799987, 799999, 799997, 800009, 800004, 800005, 799997, 799993, 800009, 800000, 799997, 799995, 800001, 800014, 799993, 799990, 799994, 799994, 799996, 799999, 800014, 800006, 800000, 800010, 800006, 800002, 800003, 799995, 799999, 799994, 799986, 799990, 799999};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 800244;
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    vector<int> lines = {999959, 981533, 993666, 973500, 980831, 984276, 988522, 970642, 973038, 975536, 994295, 971855, 976719, 983173, 990039, 999509, 997005, 988058, 995173, 994564, 967609, 985396, 996098, 999847, 999708, 987618, 982579, 981284, 980282, 980105, 994553, 978274, 985229, 988462, 998131, 980088, 974333, 973701, 982965, 990106, 971297, 976189, 968678, 969667, 982327, 995336, 984859, 992289, 971747, 993132};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 1228898;
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    vector<int> lines = {45268, 682686, 628468, 46, 84, 86, 867, 67866, 1668, 0, 777778, 987, 97887, 7898, 451456, 64654, 645654, 64654, 7881, 0, 56516, 86187, 786181, 3543, 878687, 999999, 1000000, 86868, 7868, 666, 666, 666, 999999, 999997, 999997, 999996, 99998, 6786, 76876, 786781, 68687, 87687, 6876, 789999, 900000, 687678, 687686, 4851, 781687, 78618};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 7900725;
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    vector<int> lines = {50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    vector<int> lines = {266316, 568740, 565785, 278607, 606561, 787735, 35686, 680635, 436289, 76724, 43422, 945473, 229435, 594726, 449999, 281179, 698161, 348174, 880062, 8695, 523282, 995356, 561936, 692542, 498815, 960254, 125762, 462574, 327682, 78354, 267330, 522871, 922756, 203788, 266499, 873523, 934111, 466622, 269679, 207099, 771378, 608309, 635122, 237655, 398338, 510586, 830976, 986816, 424649, 699882};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 9044807;
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    vector<int> lines = {1, 2, 5, 101, 234, 534, 5634, 2222, 234, 12, 12132, 54325, 453, 532, 765, 97, 532};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 60710;
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    vector<int> lines = {0, 10, 20, 234, 0, 32434};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 32673;
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    vector<int> lines = {4, 4, 4, 4, 4, 4, 1};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    vector<int> lines = {2, 8, 5, 1};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    vector<int> lines = {5, 10, 10, 5};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    vector<int> lines = {95, 246, 218, 181, 440, 353, 526, 547, 88, 291, 202, 547, 694, 145, 109, 62, 265, 991, 8, 633, 550, 711, 640, 320, 8, 243, 338, 394, 442, 773, 590, 933, 785, 717, 983, 676, 464, 475, 26, 54, 707, 621, 133, 393, 825, 547, 498, 478, 812, 113};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 6250;
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    vector<int> lines = {35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 16, 17, 23, 24, 25, 26, 27, 28, 29, 49, 0, 1, 2, 3, 4, 5, 6, 7, 8, 18, 19, 20, 21, 22, 9, 10, 11, 12, 13, 14, 15, 30, 31, 32, 33, 34};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 177;
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    vector<int> lines = {1, 2, 100, 100, 1000, 1000000};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 1000005;
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    vector<int> lines = {41, 18467, 6334, 26500, 19169, 15724, 11478, 29358, 26962, 6868};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 56522;
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    vector<int> lines = {9894, 491, 18716, 211107, 25667, 947185, 644761, 415654, 78819, 41, 512080, 14604, 9040, 23281, 9741, 240792, 22648, 176326, 28253, 696577, 26500, 4827, 89524, 11538, 995798, 916524, 20037, 870060, 58372, 933767, 478612, 1842, 190446, 130027, 31322, 292, 914860, 11478, 12316, 78634, 5447, 325018, 128481, 27644, 175863, 4664, 598850, 15890, 24464, 262173};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 7994372;
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    vector<int> lines = {8, 4, 2, 1, 3, 3, 129, 89, 32, 900};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 1013;
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    vector<int> lines = {289383, 930886, 692777, 636915, 747793, 238335, 885386, 760492, 516649, 641421, 202362, 490027, 368690, 520059, 897763, 513926, 180540, 383426, 89172, 455736, 5211, 595368, 702567, 956429, 465782, 21530, 722862, 665123, 174067, 703135, 513929, 979802, 634022, 723058, 133069, 898167, 961393, 18456, 175011, 478042, 176229, 377373, 484421, 544919, 413784, 898537, 575198, 594324, 798315, 664370};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 8300821;
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test221() {
    vector<int> lines = {50, 48, 46, 44, 42, 40, 38, 36, 34, 32, 30, 28, 26, 24, 22, 20, 18, 16, 14, 12, 10, 8, 6, 4, 2, 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49};
    WhiteSpaceEditing* pObj = new WhiteSpaceEditing();
    clock_t start = clock();
    int result = pObj->getMinimum(lines);
    clock_t end = clock();
    delete pObj;
    int expected = 147;
    if(result == expected) {
        cout << "Test Case 221: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 221: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22682445&rd=14428&pm=11328
********************************************************************************
#include <vector> 
#include <cmath> 
using namespace std; 
class WhiteSpaceEditing  
{ 
  int n, dp[100][100]; 
  int dg(int l, int r) 
  { 
    if(dp[l][r] != -1) return dp[l][r]; 
    if((l + 1) >= r) return dp[l][r] = 0; 
    int ret = 999999999; 
    for(int i = l + 1; i < r; i++) 
      ret = min(ret, min((l == 0 ? dp[i][i] : abs(dp[l][l] - dp[i][i])) + dg(l, i) + dg(i, r), (r == n ? dp[i][i] : abs(dp[r][r] - dp[i][i])) + dg(l, i) + dg(i, r))); 
    return dp[l][r] = ret; 
  } 
public: 
  int getMinimum(vector <int> lines) 
  { 
    int n = lines.size() + 1; 
    memset(dp, -1, sizeof(dp)); 
    for(int i = 0; i < lines.size(); i++) dp[i + 1][i + 1] = lines[i]; 
    return dg(0, n) + lines.size() - 1; 
  } 
};

********************************************************************************
*******************************************************************************/