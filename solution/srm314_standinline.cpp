/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6631
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

class StandInLine {
public:
    vector<int> reconstruct(vector<int> left);
};

vector<int> StandInLine::reconstruct(vector<int> left) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> left = {2, 1, 1, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 2, 1, 3};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> left = {0, 0, 0, 0, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> left = {5, 4, 3, 2, 1, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> left = {0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
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
    vector<int> left = {1, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> left = {2, 0, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 1};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> left = {1, 1, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 1, 2};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> left = {1, 0, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 3};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> left = {3, 1, 1, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 2, 3, 1};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> left = {3, 0, 1, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 3, 1};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> left = {2, 2, 0, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4, 1, 2};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> left = {1, 1, 1, 1, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> left = {0, 2, 0, 1, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 5, 2, 4};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> left = {2, 2, 1, 0, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 3, 1, 2, 5};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> left = {4, 2, 1, 1, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 3, 2, 4, 1};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> left = {2, 2, 2, 1, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 4, 1, 2, 3};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> left = {5, 4, 2, 0, 0, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 5, 3, 6, 2, 1};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> left = {2, 4, 1, 1, 1, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 3, 1, 4, 5, 2};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> left = {5, 4, 1, 2, 0, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 3, 6, 4, 2, 1};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> left = {4, 3, 1, 2, 0, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 3, 6, 2, 1, 4};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> left = {2, 1, 3, 0, 0, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 2, 1, 5, 6, 3};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> left = {6, 1, 1, 1, 2, 0, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 2, 3, 4, 7, 5, 1};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> left = {5, 5, 2, 0, 0, 0, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 5, 3, 6, 7, 1, 2};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> left = {3, 0, 2, 1, 1, 1, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 7, 4, 1, 3, 5, 6};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> left = {4, 2, 0, 3, 0, 0, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 5, 2, 6, 1, 7, 4};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> left = {4, 3, 3, 2, 2, 0, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 7, 4, 2, 1, 3, 5};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> left = {1, 3, 2, 2, 2, 0, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 1, 7, 3, 2, 4, 5};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> left = {6, 1, 1, 2, 1, 0, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 2, 3, 5, 4, 7, 1};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> left = {2, 0, 3, 0, 1, 0, 0, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 1, 6, 5, 3, 7, 8};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> left = {0, 4, 2, 1, 2, 2, 0, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 7, 4, 3, 8, 2, 5, 6};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> left = {3, 0, 1, 3, 0, 1, 0, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 5, 3, 1, 7, 6, 4, 8};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> left = {1, 2, 5, 3, 2, 0, 1, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 1, 8, 2, 5, 4, 7, 3};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> left = {3, 6, 2, 1, 2, 2, 1, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 4, 3, 1, 7, 5, 6, 2};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> left = {7, 6, 1, 2, 0, 1, 0, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 3, 7, 4, 6, 8, 2, 1};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> left = {2, 3, 2, 0, 3, 2, 0, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 7, 1, 3, 2, 8, 6, 5};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> left = {0, 3, 4, 4, 1, 3, 0, 0, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 7, 5, 8, 2, 9, 3, 4, 6};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> left = {2, 4, 2, 4, 0, 0, 0, 0, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 6, 1, 3, 7, 2, 8, 4, 9};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> left = {6, 5, 2, 5, 1, 1, 0, 1, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 5, 3, 6, 9, 2, 1, 8, 4};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> left = {4, 6, 3, 0, 2, 1, 2, 0, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 8, 6, 3, 1, 5, 9, 2, 7};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> left = {7, 2, 5, 2, 3, 2, 2, 0, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 9, 2, 4, 6, 5, 3, 1, 7};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> left = {3, 0, 4, 0, 0, 3, 1, 1, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 5, 1, 9, 7, 3, 8, 6};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> left = {8, 5, 0, 1, 0, 3, 2, 1, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 5, 4, 9, 8, 2, 7, 6, 1};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> left = {4, 4, 4, 5, 3, 1, 2, 1, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 6, 8, 5, 1, 2, 3, 7, 4};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> left = {7, 6, 6, 4, 4, 1, 0, 0, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 6, 8, 9, 4, 5, 2, 1, 3};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> left = {1, 5, 6, 1, 2, 2, 2, 2, 1, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 1, 4, 9, 5, 6, 2, 7, 3, 8};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> left = {0, 1, 2, 6, 0, 4, 0, 0, 0, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 5, 2, 7, 3, 8, 9, 10, 6, 4};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> left = {4, 4, 1, 0, 2, 0, 1, 2, 0, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 3, 6, 9, 1, 2, 5, 7, 10, 8};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> left = {7, 5, 6, 2, 0, 3, 3, 2, 0, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 9, 4, 10, 8, 2, 6, 1, 3, 7};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> left = {0, 3, 1, 0, 1, 0, 0, 1, 1, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4, 3, 6, 2, 5, 7, 10, 8, 9};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> left = {4, 3, 1, 4, 4, 0, 0, 2, 0, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 3, 7, 2, 1, 9, 10, 4, 5, 8};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> left = {1, 2, 0, 6, 3, 3, 0, 2, 1, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 1, 7, 2, 10, 9, 5, 6, 8, 4};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> left = {5, 5, 7, 6, 1, 2, 2, 2, 0, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 5, 10, 6, 7, 1, 2, 8, 4, 3};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> left = {3, 7, 4, 3, 1, 1, 1, 0, 1, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 5, 6, 1, 4, 3, 7, 10, 2, 9};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> left = {4, 6, 0, 1, 3, 4, 1, 2, 0, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 9, 4, 7, 1, 10, 5, 2, 8, 6};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> left = {6, 1, 1, 1, 2, 0, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 2, 3, 4, 7, 5, 1};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> left = {0, 1, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 2};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> left = {3, 2, 4, 2, 0, 2, 2, 0, 0, 0};
    StandInLine* pObj = new StandInLine();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(left);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 8, 2, 1, 4, 9, 3, 6, 7, 10};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7581406&rd=9994&pm=6631
********************************************************************************
#include <string> 
#include <vector> 
#include <cstdio> 
#include <iostream> 
#include <sstream> 
#include <set> 
#include <map> 
#include <utility> 
#include <cmath> 
using namespace std; 
 
#define fo(a,b) for(int a=0;a<b;++a) 
#define pb push_back 
#define foreach(it,c) for(typeof((c).begin()) it = (c).begin();it != (c).end();++it) 
#define mp make_pair 
 
#define lint long long int 
#define VS vector<string> 
#define VI vector<int> 
#define VVI vector<VI > 
#define iss istringstream 
#define oss ostringstream 
 
class StandInLine{  
public:  
vector <int> reconstruct(vector <int> left) { 
  VI ret; 
  int n = left.size(); 
  ret.pb(n); 
  for(int i=n-2;i>=0;i--){ 
    ret.insert(ret.begin()+left[i],i+1); 
  } 
  return ret; 
}  
         
  
};  
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/