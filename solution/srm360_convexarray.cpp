/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7877
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

class ConvexArray {
public:
    vector<int> getEnding(vector<int> beginning);
};

vector<int> ConvexArray::getEnding(vector<int> beginning) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> beginning = {1, 1, 2, 2};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> beginning = {5, 6, 6};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> beginning = {1, 3};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 2, 1};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> beginning = {1, 2, 3, 4, 5};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> beginning = {2, 5, 5, 5, 4, 4, 3};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> beginning = {};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 2, 2, 1};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> beginning = {1};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 2, 2, 1};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> beginning = {2};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 2};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> beginning = {50};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 2};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> beginning = {1, 1};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 2, 1};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> beginning = {1, 2};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 2, 1};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> beginning = {2, 1};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 2};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> beginning = {5, 6};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 2};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> beginning = {1, 1, 1};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 1};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> beginning = {1, 1, 2};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 2};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> beginning = {1, 2, 1};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 1};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> beginning = {1, 2, 2};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> beginning = {1, 10, 1};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 1};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> beginning = {1, 50, 49};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> beginning = {2, 1, 1};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 2};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> beginning = {2, 1, 2};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 1};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> beginning = {2, 1, 4};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 2};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> beginning = {2, 2, 1};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 2};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> beginning = {2, 2, 2};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> beginning = {2, 40, 50};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> beginning = {3, 1, 1};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 2};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> beginning = {3, 1, 3};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 1};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> beginning = {3, 3, 1};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 2};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> beginning = {3, 40, 6};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> beginning = {5, 1, 1};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 2};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> beginning = {7, 1, 8};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 2};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> beginning = {1, 1, 2, 2};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> beginning = {1, 1, 1, 10};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> beginning = {3, 3, 5, 5};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> beginning = {49, 49, 50, 50};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> beginning = {1, 7, 1, 19};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> beginning = {1, 50, 50, 1};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> beginning = {35, 1, 15, 1, 25};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> beginning = {5, 4, 7, 7, 3};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> beginning = {8, 1, 24, 1, 3};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> beginning = {1, 50, 20, 32, 50};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> beginning = {23, 24, 25, 26, 27, 29};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> beginning = {5, 1, 24, 21, 46, 42};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> beginning = {10, 1, 20, 1, 15, 10, 12};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> beginning = {33, 20, 41, 10, 48, 20, 41};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> beginning = {9, 2, 8, 3, 9, 16, 10};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> beginning = {1, 1, 5, 2, 10, 5, 15};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> beginning = {1, 1, 2, 1, 4, 12, 5};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> beginning = {4, 4, 4, 6, 6, 6, 6};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> beginning = {2, 6, 5, 48, 43, 33, 35, 12};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> beginning = {23, 21, 21, 21, 21, 23, 23, 23, 24};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {22};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> beginning = {5, 49, 3, 31, 9, 28, 7, 49, 6};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {50};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> beginning = {30, 20, 20, 10, 10, 20, 20, 30, 25};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {26};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> beginning = {1, 1, 5, 6, 9, 8, 5, 3, 4};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> beginning = {2, 50, 1, 49, 1, 2, 2, 1, 49, 1, 50, 2, 50, 49, 3};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {50};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> beginning = {10, 37, 11, 46, 1, 1, 2, 1, 3, 2, 4, 4, 5, 7, 6, 11, 7, 16, 8, 22, 9};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {29};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> beginning = {12, 42, 16, 46, 21, 49, 26, 50, 30, 49, 35, 46, 39, 42, 43, 36, 46, 28, 48, 20, 50, 11, 50, 10, 49, 9, 47, 8, 44, 7, 40, 6, 29, 4, 22, 3, 14, 2, 5, 1, 1, 1, 1, 11, 3, 20, 5, 28, 8};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {35};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> beginning = {45, 25, 42, 35, 35, 42, 25, 45, 15, 42, 8, 35, 5, 25, 8, 15, 15, 8, 25, 5, 35, 8, 42, 15, 44};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> beginning = {41, 49, 33, 47, 25, 43, 17, 37, 9, 28, 1, 1, 25, 25, 49};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {50};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> beginning = {1, 1, 2, 4, 3, 9, 4, 16, 5, 25, 6, 36, 7, 49};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> beginning = {1, 1, 2, 4, 3, 9, 4, 16, 5, 25, 6, 36, 7, 49, 3};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> beginning = {40, 30, 20, 30, 10, 31, 20, 32, 40, 32, 50};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {31};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> beginning = {1, 1, 2, 3, 3, 1, 1, 2, 3};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> beginning = {1, 1, 1, 1};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> beginning = {23, 9, 23, 9};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> beginning = {50, 50, 50, 50};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> beginning = {50, 50, 50, 50, 23};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> beginning = {12, 6, 12, 48, 12};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> beginning = {30, 50, 38, 48, 39, 49, 40};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> beginning = {5, 1, 7, 3, 8, 2, 9};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> beginning = {2, 2, 2, 4, 4, 4, 4, 2, 2, 2, 2, 4, 4, 4, 4, 2};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> beginning = {1, 1, 1, 9, 5, 9, 5, 5, 1, 5, 1, 9, 5, 9, 5, 1};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> beginning = {20, 20, 20, 30, 30, 30, 30, 20, 20, 20, 20, 28, 28, 28, 28, 20};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> beginning = {25, 1, 23, 5, 25, 7, 27, 5, 25, 1, 10, 8, 24, 14, 40};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> beginning = {6, 1, 5, 2, 7, 5, 9, 2, 8, 1, 7};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> beginning = {3, 14, 15, 9, 2, 6, 5, 35, 8, 9, 7, 9};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> beginning = {4, 4, 8, 6, 8, 4, 4, 6, 4, 8, 5};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> beginning = {5, 6, 6, 6, 7, 7, 8, 8, 9};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> beginning = {10, 10, 50, 1, 50, 50, 1, 50, 1, 1, 20, 2, 15};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> beginning = {4, 6, 4, 3, 7, 3, 7, 7, 3, 7, 3, 4, 5};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> beginning = {50, 25, 44, 39, 32, 46, 18, 44, 10, 35, 10, 25, 16, 18, 22, 16, 26, 19, 29, 22, 30, 25, 29, 27, 26, 30, 22, 33, 16, 31, 11, 25, 10, 14, 18, 5, 32, 3, 44, 10};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> beginning = {44, 24, 34, 39, 15, 40, 4, 26, 10, 10, 29, 6, 43, 18, 39, 35, 21, 41, 5, 31, 7, 14, 24, 6, 40, 14, 42, 31, 26, 41};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> beginning = {1, 25, 5, 37, 14, 45, 26, 47, 36, 43, 43, 35, 45, 25, 42, 16, 35, 10, 26, 9, 19, 12, 14, 18, 13, 25, 16, 31, 20, 35, 26, 35, 30, 33, 33, 29, 33, 25, 14};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> beginning = {25, 1, 34, 3, 42, 8, 47, 16, 49, 25, 47, 34, 41, 41, 34, 46, 25, 48, 16, 46, 9, 41, 4, 34, 3, 25, 5, 17, 9, 9, 17, 5, 25, 3, 33, 5, 40, 10, 44, 17, 46, 25, 30};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> beginning = {1, 25, 25, 3, 45, 25, 25, 43, 9, 25, 25, 11, 37, 25, 25};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> beginning = {2, 1, 2};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 1};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> beginning = {1};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 2, 2, 1};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> beginning = {};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 2, 2, 1};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> beginning = {50, 50, 1, 1, 1, 2};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> beginning = {1, 1, 1, 2, 2, 2, 2, 1};
    ConvexArray* pObj = new ConvexArray();
    clock_t start = clock();
    vector<int> result = pObj->getEnding(beginning);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=10772&pm=7877
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
 
 
class ConvexArray
{
public:
  int n,X[60],Y[60];
  vector<int> R;
  int next(int v)
  {
    return (v==n-1)?0:(v+1);
  }
  int cross(int p0,int p1,int p2)
  {
    return (X[p1]-X[p0])*(Y[p2]-Y[p0])-(X[p2]-X[p0])*(Y[p1]-Y[p0]);
  }
  bool check(vector<int> A,bool closed)
  {
    n=0;
    for (int i=0;i<A.size();i+=2)
      X[n]=A[i],Y[n++]=A[i+1];
    for (int i=0;i<n;i++)
      for (int j=i+1;j<n;j++)
        if (X[i]==X[j] && Y[i]==Y[j])
          return false;
    if (closed && n<3) return false;
    for (int i=0;i<n;i++)
    {
      if (i==n-1 && !closed) continue;
      bool f1=false,f2=false;
      for (int k=0;k<n;k++) if (k!=i && k!=next(i))
      {
        int c=cross(i,next(i),k);
        if (c==0) return false;
        if (c<0) f1=true;
        if (c>0) f2=true;
      }
      if (f1 && f2) return false;
    }
    return true;
  }
  bool search(vector<int> A)
  {
    if (A.size()>=6 && A.size()%2==0)
      return check(A,true);
    if (A.size()%2==0 && !check(A,false)) return false;
    for (int i=1;i<=50;i++)
    {
      A.push_back(i);
      R.push_back(i);
      if (search(A)) return true;
      A.pop_back();
      R.pop_back();
    }
    return false;
  }
  vector <int> getEnding(vector <int> A)
  {
    R.clear();
    if (!search(A))
      R.push_back(-1);
    return R;
  }
};
 
 
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/