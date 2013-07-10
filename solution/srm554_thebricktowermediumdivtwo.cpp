/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12162
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

class TheBrickTowerMediumDivTwo {
public:
    vector<int> find(vector<int> heights);
};

vector<int> TheBrickTowerMediumDivTwo::find(vector<int> heights) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> heights = {4, 7, 5};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 1};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> heights = {4, 4, 4, 4, 4, 4, 4};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> heights = {2, 3, 3, 2};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 1, 2};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> heights = {13, 32, 38, 25, 43, 47, 6};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 6, 3, 1, 2, 4, 5};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> heights = {5, 3, 4, 7, 1, 2, 6};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 4, 5, 2, 6, 3};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> heights = {3, 4, 6, 7, 1, 2, 5};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 4, 5, 1, 6, 2, 3};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> heights = {7, 6, 5, 2, 4, 3, 1};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 6, 5, 4};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> heights = {3, 13, 28, 32, 24, 18, 23};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 5, 6, 4, 2, 3};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> heights = {30, 19, 8, 13, 25, 1};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 5, 3, 4};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> heights = {4, 23, 38, 20};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 1, 2};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> heights = {30};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> heights = {10, 16, 47, 8};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 1, 2};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> heights = {13, 32, 38, 25, 43, 47, 6};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 6, 3, 1, 2, 4, 5};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> heights = {21, 10, 43, 43, 37, 30};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 5, 4, 2, 3};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> heights = {19, 37, 37, 33, 42, 36, 27};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 6, 3, 5, 1, 2, 4};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> heights = {10, 10, 46, 4};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 2};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> heights = {44, 6};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> heights = {44, 20, 19, 37, 14, 31, 29};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 4, 6, 5, 3};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> heights = {1, 2, 3, 4, 5, 6, 7};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> heights = {7, 6, 5, 4, 3, 2, 1};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> heights = {3, 13, 28, 32, 24, 18, 23};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 5, 6, 4, 2, 3};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> heights = {25, 30, 8, 32, 13, 1, 19};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 5, 4, 6, 1, 3};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> heights = {16, 35, 35, 22, 29, 10, 24};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 5, 3, 6, 4, 1, 2};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> heights = {45, 17, 33, 41, 17, 12, 17};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 4, 5, 6, 2, 3};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> heights = {40, 29, 31, 24, 13, 12, 3};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 4, 5, 6, 2};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> heights = {40, 12, 22, 15, 21, 22, 17};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 6, 4, 2, 5};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> heights = {31, 25, 34, 40, 38, 28, 37};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 5, 2, 6, 4, 3};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> heights = {30, 27, 34, 25, 32, 11, 13};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 5, 6, 4, 2};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> heights = {27, 25, 16, 36, 11, 46, 15};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 4, 6, 3, 5};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> heights = {16, 37, 3, 21, 16, 44, 18};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 4, 6, 3, 1, 5};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> heights = {47, 47, 47, 47, 47, 47, 47};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> heights = {46, 44, 44, 46, 46, 45, 47};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 5, 3, 4, 6};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> heights = {47, 47, 45, 44, 47, 44, 44};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 5, 6, 4};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> heights = {44, 44, 46, 45, 47, 44, 47};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 5, 3, 2, 4, 6};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> heights = {44, 46, 46, 46, 45, 47, 44};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 6, 4, 1, 2, 3, 5};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> heights = {8, 8, 8, 8, 8, 9, 9};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> heights = {9, 8, 9, 9, 9, 8};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 5, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> heights = {9, 9, 8, 9};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> heights = {9, 9, 9, 9};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> heights = {8, 8, 9, 9, 8, 9, 9};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 4, 2, 3, 5, 6};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> heights = {24};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> heights = {13};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> heights = {24, 18};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> heights = {30, 45};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> heights = {2, 2, 1, 1, 2, 2, 3};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> heights = {2, 1, 3, 3, 2, 3};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 4, 2, 3, 5};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> heights = {2, 2, 2, 3, 2, 3};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 4, 3, 5};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> heights = {13, 32, 38, 25, 43, 47, 6};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 6, 3, 1, 2, 4, 5};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> heights = {4, 7, 5};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 1};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> heights = {20, 47, 10, 47, 30, 47, 1};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 6, 4, 1, 3, 5};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> heights = {43, 42, 44, 42, 44, 43, 42};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 6, 5, 2, 4};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> heights = {3, 2, 1};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> heights = {2, 3, 3, 2};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 1, 2};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> heights = {3, 2, 1, 4, 5, 6};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> heights = {3, 4, 2, 1};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 1};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> heights = {4, 3, 3};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> heights = {7, 6, 5, 4, 3, 2, 1};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> heights = {8, 5, 3, 4, 8, 5, 9};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 5, 4, 6};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> heights = {39, 44, 30, 19, 45, 40, 10};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 6, 5, 1, 4};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> heights = {2, 2, 1};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> heights = {13, 32, 38, 8, 43, 47, 6};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 6, 1, 2, 4, 5};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> heights = {47, 47, 1, 2, 3, 4, 5};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> heights = {22, 32, 12, 25, 43, 47, 6};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 6, 3, 1, 4, 5};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> heights = {2, 2, 2, 1, 3, 3, 3};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> heights = {5, 4, 3, 2};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> heights = {1};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> heights = {13, 6, 25, 32, 38, 43, 47};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> heights = {7, 5, 4};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> heights = {4, 2, 3, 10, 46, 46, 12};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 6, 4, 5};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> heights = {3, 2, 1, 4};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> heights = {15, 14, 13, 12, 11, 10, 7};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> heights = {8, 5, 6, 7, 9, 10};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> heights = {14, 12, 6, 12, 31, 42};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> heights = {5};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> heights = {4, 3, 1, 2};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> heights = {45, 43, 25, 17, 5, 4};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> heights = {4, 3, 2, 1};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> heights = {4, 7, 5, 2, 9, 1};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 5, 2, 1, 4};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> heights = {47, 46, 46};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> heights = {39, 40, 38, 41};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 1, 3};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> heights = {5, 4, 3, 2, 1};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> heights = {30};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> heights = {7, 5, 3};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> heights = {38, 25, 13, 6, 32, 43, 46};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> heights = {3, 5, 4, 2, 1};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 4, 2, 1};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> heights = {3, 3, 2, 2};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> heights = {4};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> heights = {3, 2, 1, 2, 3};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> heights = {13, 6, 6, 13};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> heights = {3, 3, 2};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> heights = {4, 7, 5, 1, 1, 1};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 4, 5, 2, 1};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> heights = {40, 1, 40, 1};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 2};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> heights = {9, 7, 2, 2, 2};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> heights = {32, 13, 38, 25, 43, 47, 6};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 6, 3, 2, 4, 5};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> heights = {23, 34, 12, 1, 5, 7, 18};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 4, 5, 6, 1};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> heights = {4, 4, 3, 3, 2, 2};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> heights = {5, 5, 4, 5, 6, 1, 7};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 5, 3, 4, 6};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> heights = {13, 32, 38, 25, 43, 6, 6};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 5, 6, 3, 1, 2, 4};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> heights = {10, 12, 11, 6, 5, 5, 5};
    TheBrickTowerMediumDivTwo* pObj = new TheBrickTowerMediumDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 4, 5, 6, 2, 1};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22920362&rd=15176&pm=12162
********************************************************************************
#include <iostream> 
#include <vector> 
#include <string> 
#include <stack> 
#include <algorithm> 
#include <bitset> 
#include <math.h> 
#include <queue> 
#include <map> 
#include <set> 
#include <limits.h> 
#include <limits> 
#include <stdio.h> 
#include <stdlib.h> 
#include <cstring> 
#include <sstream> 
using namespace std; 
 
 
class TheBrickTowerMediumDivTwo { 
public: 
   vector <int> find( vector <int> heights ) { 
       vector <int> pi, ret; 
       int Min = 1 << 30; 
       for(int i = 0; i < heights.size(); i++) 
           pi.push_back(i); 
       do{ 
           int cur = 0; 
           for(int i = 1; i < heights.size(); i++) 
               cur += max(heights[pi[i]], heights[pi[i - 1]]); 
           if(cur < Min){ 
               Min = cur; 
               ret = pi; 
           } 
       }while(next_permutation(pi.begin(), pi.end())); 
       return ret; 
   } 
}; 
 
 
 
// Powered by FileEdit
// Powered by moj 4.17 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/