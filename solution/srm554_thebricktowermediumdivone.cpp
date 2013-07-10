/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12161
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

class TheBrickTowerMediumDivOne {
public:
    vector<int> find(vector<int> heights);
};

vector<int> TheBrickTowerMediumDivOne::find(vector<int> heights) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> heights = {4, 7, 5};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    vector<int> heights = {40, 44, 18, 24, 14, 18, 19, 1, 45, 12, 16, 32, 18, 13, 31, 6, 16, 23, 40, 3, 36, 19, 19, 11, 32, 36, 7, 23, 12, 28, 28, 4, 39, 47, 3};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 4, 7, 19, 34, 31, 15, 26, 23, 9, 28, 13, 10, 16, 5, 12, 6, 21, 22, 17, 27, 3, 29, 30, 14, 11, 24, 20, 25, 32, 18, 1, 8, 33};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> heights = {35, 41, 43, 32, 42, 2, 22, 33, 29};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 5, 6, 8, 7, 1, 4, 2};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> heights = {13, 22, 18, 33, 32, 44, 47, 8, 32, 29};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 7, 2, 1, 9, 4, 8, 3, 5, 6};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> heights = {23, 39, 43, 12, 22};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 4, 1, 2};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> heights = {29, 15, 34, 14, 5, 9, 14, 29, 35, 41, 33, 38, 27, 5, 16, 18, 12, 22, 2, 47, 36, 43, 24, 7, 26, 19, 18, 34, 12, 20, 32, 37, 6, 3, 37};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 4, 13, 18, 33, 32, 23, 5, 16, 28, 6, 14, 15, 26, 25, 29, 17, 22, 24, 12, 7, 30, 10, 2, 27, 8, 20, 31, 34, 11, 9, 21, 19};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> heights = {30, 25, 44, 19, 23, 17, 17};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 5, 6, 4, 2};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> heights = {15, 28, 43, 5, 47, 13, 29, 19, 19, 18, 46, 26, 37, 11, 5, 14, 2, 34, 37, 18, 9, 17, 11, 43, 36, 24, 17, 25, 13, 11, 5, 45, 45, 30, 42, 35, 3, 13, 26, 25, 17, 27, 29, 3, 29, 46};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 14, 16, 36, 43, 30, 20, 13, 22, 29, 5, 28, 37, 15, 21, 26, 40, 9, 19, 7, 8, 25, 27, 39, 11, 38, 41, 1, 6, 42, 44, 33, 17, 35, 24, 12, 18, 34, 2, 23, 31, 32, 10, 45, 4};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> heights = {32, 7, 16, 45, 45, 23, 44, 23, 1, 11, 47, 42, 19, 36, 12, 14, 40, 47, 23, 28, 36, 16, 3, 38, 32, 36, 19, 6, 31, 47, 28, 18, 19, 40, 18, 3, 43, 13, 3, 39, 4, 12, 31, 47, 36, 24, 18};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 8, 22, 35, 38, 40, 27, 9, 14, 41, 37, 15, 2, 21, 31, 34, 46, 12, 26, 32, 5, 7, 18, 45, 19, 30, 28, 42, 24, 13, 20, 25, 44, 23, 39, 16, 33, 11, 36, 6, 3, 4, 10, 17, 29, 43};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> heights = {10, 28, 16, 23, 34, 15, 12, 36, 23, 18, 26, 9, 6, 9, 11, 40, 16, 7, 34, 6, 21, 3, 40, 9, 40, 35, 44, 14, 3, 35, 37, 34, 6, 19, 20, 18, 44, 34, 19, 27, 28, 27, 40, 32, 27, 14, 2};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 11, 12, 19, 21, 28, 46, 32, 17, 13, 23, 14, 6, 27, 45, 5, 2, 16, 9, 35, 33, 38, 34, 20, 3, 8, 10, 39, 41, 44, 1, 40, 43, 4, 18, 31, 37, 25, 29, 7, 30, 15, 22, 24, 42, 26, 36};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> heights = {38, 16, 9, 27, 19, 31, 31, 16, 16, 13, 32, 17, 16, 3, 46, 37, 19, 13, 9, 7, 27, 11, 45, 6, 45, 18, 19, 27, 29, 42, 16, 21, 8, 35, 36, 43, 40, 23, 4, 30, 19, 31, 38, 2, 45, 44, 37};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 13, 43, 38, 23, 19, 32, 18, 21, 9, 17, 7, 8, 12, 30, 11, 25, 4, 16, 26, 40, 31, 37, 3, 20, 27, 28, 39, 5, 6, 41, 10, 33, 34, 15, 46, 42, 36, 29, 35, 45, 22, 24, 44, 14};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> heights = {33, 6, 36, 28, 1, 26, 12, 37, 32, 1, 3, 29, 25, 44, 37, 15, 12, 28, 36, 14, 12, 38, 21, 24, 31, 4, 17, 19, 12, 4, 33, 11, 47, 6, 20, 31, 46, 32, 29, 23, 43, 20, 21, 46, 11, 33, 36};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 4, 9, 10, 25, 29, 33, 31, 44, 6, 16, 20, 28, 19, 15, 26, 27, 34, 41, 22, 42, 39, 23, 12, 5, 3, 17, 11, 38, 24, 35, 8, 37, 30, 45, 2, 18, 46, 7, 14, 21, 40, 13, 36, 43, 32};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> heights = {14, 17, 33, 20, 25, 41, 17, 6, 46, 37, 42, 24, 8, 2, 29, 4, 19, 40, 22, 27, 34, 21, 11, 41, 37, 18, 25, 10, 13, 9, 1, 24, 10, 12, 34, 42, 39, 22, 46, 34, 19, 36, 4, 44, 39, 9, 34};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 7, 13, 30, 15, 42, 12, 29, 45, 27, 32, 22, 33, 28, 1, 6, 25, 16, 40, 3, 21, 18, 37, 11, 31, 4, 26, 19, 14, 2, 20, 34, 39, 46, 41, 9, 24, 36, 44, 17, 5, 23, 10, 35, 43, 8, 38};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> heights = {37, 46, 34, 32, 19, 46, 6, 26, 19, 9, 5, 10, 34, 18, 34, 46, 31, 12, 45, 18, 18, 19, 33, 1, 3, 30, 5, 18, 44, 22, 3, 8, 29, 33, 19, 15, 35, 44, 30, 14, 26, 27, 23, 24, 15, 40, 14};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 4, 6, 10, 23, 24, 30, 26, 31, 9, 11, 17, 39, 46, 35, 44, 13, 19, 20, 27, 8, 21, 34, 29, 42, 43, 7, 40, 41, 32, 25, 38, 16, 22, 33, 12, 14, 36, 45, 28, 37, 18, 1, 5, 15};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> heights = {1, 1, 2, 4, 3, 3, 4, 4, 5, 5, 6, 2, 2, 1, 8, 2, 2, 8, 8, 7, 9, 3, 5, 2, 8, 8, 6, 5, 4, 6, 3, 2, 8, 4, 3, 1, 8, 2, 4, 6, 3, 1, 8, 2, 8, 2, 5};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 13, 35, 41, 2, 11, 12, 15, 16, 23, 31, 37, 43, 45, 4, 5, 21, 30, 34, 40, 3, 6, 7, 28, 33, 38, 8, 9, 22, 27, 46, 10, 26, 29, 39, 19, 14, 17, 18, 24, 25, 32, 36, 42, 44, 20};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> heights = {1, 8, 7, 2, 5, 4, 2, 1, 8, 1, 2, 3, 2, 1, 1, 6, 5, 4, 8, 3, 5, 8, 8, 1, 8, 6, 5, 2, 1, 5, 7, 8, 4, 4, 3, 9, 4, 2, 7, 3, 6, 1, 5, 8, 7};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 7, 9, 13, 14, 23, 28, 41, 3, 6, 10, 12, 27, 37, 11, 19, 34, 39, 5, 17, 32, 33, 36, 4, 16, 20, 26, 29, 42, 15, 25, 40, 2, 30, 38, 44, 1, 8, 18, 21, 22, 24, 31, 43, 35};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> heights = {8, 2, 8, 1, 4, 5, 1, 4, 2, 1, 8, 1, 8, 6, 5, 3, 9, 5, 2, 7, 9, 2, 5, 8, 8, 7, 9, 4, 5, 2, 4, 9, 6, 6, 1, 7, 7, 7, 4, 1, 9, 7, 3, 7, 1, 4};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 6, 9, 11, 34, 39, 44, 8, 18, 21, 29, 15, 42, 4, 7, 27, 30, 38, 45, 5, 14, 17, 22, 28, 13, 32, 33, 19, 25, 35, 36, 37, 41, 43, 2, 10, 12, 23, 24, 16, 20, 26, 31, 40};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> heights = {9, 6, 3, 6, 3, 2, 7, 5, 2, 7, 5, 2, 1, 2, 8, 3, 9, 6, 3, 8, 8, 3, 9, 8, 6, 7, 9, 1, 1, 9, 6, 5, 1, 8, 2, 5, 4, 8, 3, 3, 7, 2, 4, 1, 1, 9};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 4, 5, 8, 11, 12, 27, 28, 32, 43, 44, 13, 34, 41, 15, 18, 21, 38, 39, 36, 42, 7, 10, 31, 35, 3, 17, 24, 30, 6, 9, 25, 40, 14, 19, 20, 23, 33, 37, 16, 22, 26, 29, 45};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> heights = {2, 3, 2, 3, 5, 3, 9, 4, 2, 7, 1, 5, 1, 4, 5, 8, 3, 7, 2, 7, 2, 7, 2, 1, 2, 7, 3, 3, 3, 7, 2, 6, 7, 4, 9, 4, 3, 2, 5, 8, 4, 6, 7, 7, 6};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 8, 10, 12, 23, 18, 20, 22, 24, 30, 37, 1, 3, 5, 16, 26, 27, 28, 36, 7, 13, 33, 35, 40, 4, 11, 14, 38, 31, 41, 44, 9, 17, 19, 21, 25, 29, 32, 42, 43, 15, 39, 6, 34};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> heights = {29, 28, 29, 28, 28, 28, 28, 28, 29, 29, 29, 29, 28, 28, 28, 28, 28, 29, 28, 29, 28, 28, 28, 28, 29, 29, 29, 29, 29, 28, 29, 29, 28, 29, 28, 29, 28, 29, 29, 28, 28, 29, 28, 28};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 4, 5, 6, 7, 12, 13, 14, 15, 16, 18, 20, 21, 22, 23, 29, 32, 34, 36, 39, 40, 42, 43, 2, 8, 9, 10, 11, 17, 19, 24, 25, 26, 27, 28, 30, 31, 33, 35, 37, 38, 41};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> heights = {28, 29, 29, 28, 28, 29, 29, 28, 29, 28, 29, 29, 28, 29, 28, 28, 28, 29, 28, 29, 29, 29, 29, 28, 28, 29, 28, 28, 28, 29, 29, 29, 28, 28, 29, 28, 29, 29, 28, 28, 29, 28, 29, 28};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 4, 7, 9, 12, 14, 15, 16, 18, 23, 24, 26, 27, 28, 32, 33, 35, 38, 39, 41, 43, 1, 2, 5, 6, 8, 10, 11, 13, 17, 19, 20, 21, 22, 25, 29, 30, 31, 34, 36, 37, 40, 42};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> heights = {28, 29, 28, 28, 29, 29, 29, 28, 28, 28, 28, 28, 28, 28, 28, 29, 28, 29, 28, 29, 29, 29, 29, 28, 29, 28, 29, 29, 28, 29, 28, 28, 29, 28, 28, 29, 29, 29, 29, 29, 29, 28, 28, 29};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 7, 8, 9, 10, 11, 12, 13, 14, 16, 18, 23, 25, 28, 30, 31, 33, 34, 41, 42, 1, 4, 5, 6, 15, 17, 19, 20, 21, 22, 24, 26, 27, 29, 32, 35, 36, 37, 38, 39, 40, 43};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> heights = {46, 47, 46, 46, 45, 47, 47, 46, 47, 46, 46, 46, 46, 46, 45, 44, 47, 47, 45, 44, 44, 45, 46, 45, 47, 47, 44, 45, 45, 45, 44, 45, 45, 44, 44, 46, 44, 44, 45, 46, 44, 44, 46, 45, 45, 46, 45};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 4, 14, 15, 19, 20, 26, 30, 33, 34, 36, 37, 40, 41, 18, 21, 23, 27, 28, 29, 31, 32, 38, 43, 44, 46, 7, 9, 10, 11, 12, 13, 22, 35, 39, 42, 45, 1, 5, 6, 8, 16, 17, 24, 25};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> heights = {45, 46, 44, 45, 47, 44, 46, 44, 44, 46, 44, 47, 47, 45, 44, 44, 45, 44, 46, 46, 44, 44, 44, 46, 47, 45, 44, 46, 45, 45, 47, 47, 44, 45, 44, 44, 44, 46, 44, 46, 46, 47, 47, 44, 47, 47, 46};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 5, 7, 8, 10, 14, 15, 17, 20, 21, 22, 26, 32, 34, 35, 36, 38, 43, 3, 13, 16, 25, 28, 29, 33, 1, 6, 9, 18, 19, 23, 27, 37, 39, 40, 46, 4, 11, 12, 24, 30, 31, 41, 42, 44, 45};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> heights = {45, 47, 46, 47, 44, 44, 46, 46, 47, 45, 47, 47, 44, 47, 47, 45, 45, 47, 44, 44, 45, 46, 44, 47, 45, 47, 46, 45, 44, 47, 47, 45, 45, 45, 45, 46, 46, 45, 44, 47, 46, 45, 46, 44, 44, 45, 47};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 4, 5, 12, 18, 19, 22, 28, 38, 43, 44, 9, 15, 16, 20, 24, 27, 31, 32, 33, 34, 37, 41, 45, 2, 6, 7, 21, 26, 35, 36, 40, 42, 1, 3, 8, 10, 11, 13, 14, 17, 23, 25, 29, 30, 39, 46};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> heights = {47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> heights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> heights = {47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> heights = {29, 22, 8, 6, 4, 22, 14, 5, 40, 27, 26, 22, 2, 29, 39, 2, 14, 10, 26, 28, 5, 16, 37, 31, 15, 6, 37, 19, 18, 15, 13, 41, 11, 8, 8, 18, 42, 10, 11, 14, 20, 14, 3, 25, 22, 23, 27};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 12, 15, 42, 7, 20, 25, 33, 34, 17, 37, 32, 38, 30, 6, 16, 39, 41, 24, 29, 21, 28, 35, 27, 40, 5, 11, 44, 45, 43, 10, 18, 9, 46, 19, 13, 23, 22, 26, 14, 8, 31, 36};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> heights = {30, 30, 30, 30, 30, 30, 30, 10, 20, 6, 6, 6, 5, 3, 3, 1, 2, 2, 4, 3, 5, 5, 5, 5, 5, 5, 7, 7, 7, 7, 8, 28, 28, 29, 29, 29, 29, 29, 29, 47, 47, 47, 46, 46, 47, 47};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 9, 10, 11, 12, 13, 14, 15, 16, 17, 19, 18, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 8, 31, 32, 33, 34, 35, 36, 37, 38, 42, 43, 39, 40, 41, 44, 45};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> heights = {22, 46, 45, 44, 43, 42, 41, 40, 22, 38, 43, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 22, 20, 19, 22, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 43, 43, 13, 13};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 8, 25, 26, 27, 28, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 45, 46, 29, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 9, 7, 6, 5, 4, 10, 43, 44, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> heights = {5, 1, 2, 3, 3, 2, 4, 3, 4, 2, 3, 4};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 5, 9, 3, 4, 7, 10, 6, 8, 11};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> heights = {5, 4, 1, 2, 3};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> heights = {5, 5, 7, 7, 2, 2, 3, 3, 2, 2, 1, 1, 2, 2, 2, 8, 8, 1, 7, 1, 1, 7, 7, 8, 8, 10, 12, 11, 47, 47, 47, 46, 42, 47, 1, 1};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 4, 5, 8, 9, 10, 11, 17, 19, 20, 34, 35, 12, 13, 14, 6, 7, 2, 3, 18, 21, 22, 15, 16, 23, 24, 25, 27, 26, 32, 31, 28, 29, 30, 33};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> heights = {3, 2, 1};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> heights = {4, 4, 40, 3, 3, 1, 1, 2, 2, 5, 6, 8, 7, 47, 10, 45, 30, 35, 21, 6, 10, 11, 15, 12, 13, 25, 6, 9, 6, 9, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 43, 6, 9, 6, 9, 6, 9};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 4, 5, 6, 7, 8, 30, 31, 32, 9, 33, 10, 19, 26, 28, 34, 41, 43, 45, 12, 35, 11, 36, 27, 29, 37, 42, 44, 46, 14, 20, 38, 21, 39, 23, 24, 22, 18, 25, 16, 17, 2, 40, 15, 13};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> heights = {2, 2, 2, 1, 1, 1, 2, 2, 2};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> heights = {8, 9, 7, 9, 9, 5, 4, 2, 5, 10, 3, 1, 7, 9, 10, 3, 7, 7, 5, 10, 6, 1, 5, 9, 8, 2, 8, 3, 8, 3, 3, 7, 2, 1, 7, 2, 6, 10, 5, 10};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 5, 6, 7, 11, 21, 33, 25, 32, 35, 10, 15, 27, 29, 30, 8, 18, 22, 38, 20, 36, 12, 16, 17, 31, 34, 24, 26, 28, 1, 3, 4, 13, 23, 9, 14, 19, 37, 39};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> heights = {4, 3, 1, 1, 1, 2};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> heights = {47, 13, 1, 13, 47};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> heights = {5, 6, 1, 2, 4, 3};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 5, 4, 1};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> heights = {3, 3, 1, 7, 8};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
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
    vector<int> heights = {47, 44, 46, 45, 47, 29, 30, 29, 15, 7, 3, 2, 4, 3, 7, 15, 14, 15, 21, 22, 23, 24, 23, 22, 21};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 5, 7, 8, 9, 10, 11, 13, 12, 14, 16, 15, 17, 18, 24, 19, 23, 20, 22, 21, 6, 3, 2, 4};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> heights = {2, 2, 1, 3, 4};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> heights = {3, 3, 2};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> heights = {15, 2, 1, 5, 35};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> heights = {3, 13, 16, 12, 15, 17, 4, 11, 11, 14, 8, 4, 12, 13, 11, 16, 18, 8, 18, 12, 15, 8, 12, 3, 3, 5, 5, 16, 10, 14, 11, 10, 8, 4, 18, 3, 1, 18, 13, 11, 13, 2, 11, 5, 11, 18, 17};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 23, 24, 35, 36, 41, 6, 11, 33, 25, 26, 43, 10, 17, 21, 32, 28, 31, 7, 8, 14, 30, 39, 42, 44, 3, 12, 19, 22, 1, 13, 38, 40, 9, 29, 4, 20, 2, 15, 27, 5, 46, 16, 18, 34, 37, 45};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> heights = {47, 43, 6, 6, 13, 25, 32};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> heights = {4, 4, 4, 3, 3, 3, 1, 1, 1, 1, 1, 3, 3, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 37, 38, 39, 35, 36, 40, 41, 42, 43, 44, 45, 46, 11, 12, 13};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> heights = {46, 45, 43, 32, 6, 6, 13, 25, 31};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> heights = {9, 8, 7, 6, 5, 4, 4, 3, 2, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> heights = {20, 32, 35, 25, 46, 46, 9, 22, 20, 38, 16, 20, 20, 43, 21, 29, 24, 36, 30, 26, 11, 45, 34, 40, 28, 13, 1, 33, 41, 37, 6, 31, 27, 20, 18, 20, 47, 12, 19, 23, 14, 20, 20, 20, 15, 20, 44};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 6, 26, 30, 20, 37, 25, 40, 44, 10, 34, 38, 8, 11, 12, 33, 35, 41, 42, 43, 45, 14, 7, 39, 16, 3, 19, 32, 24, 15, 18, 31, 1, 27, 22, 2, 17, 29, 9, 23, 28, 13, 46, 21, 4, 5, 36};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> heights = {9, 6, 5, 7, 8};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> heights = {12, 1, 30, 26, 30, 24, 15, 25, 12, 2, 41, 40, 7, 18, 10, 41, 39, 11, 9, 13, 40, 35, 26, 4, 25, 17, 31, 28, 40, 28, 46, 45, 29, 23, 18, 6, 46, 33, 24, 11, 28, 18, 44, 34, 29, 2, 23};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 9, 45, 23, 35, 12, 18, 14, 17, 39, 8, 19, 6, 25, 13, 34, 41, 33, 46, 5, 38, 7, 24, 3, 22, 27, 29, 40, 32, 44, 2, 4, 26, 37, 43, 21, 16, 11, 20, 28, 10, 15, 42, 31, 30, 36};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> heights = {5, 5, 1, 2, 1};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 4, 3};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> heights = {2, 2, 3, 1, 1, 1, 1, 1, 4, 5, 5, 5, 5};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 4, 5, 6, 7, 2, 8, 9, 10, 11, 12};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> heights = {4, 4, 2, 2, 4};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> heights = {20, 20, 1, 25, 36};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> heights = {38, 25, 13, 6, 32, 44, 47};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> heights = {10, 3, 5, 4, 2, 1, 20};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 4, 5, 3, 2, 6};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> heights = {47, 46, 46, 1, 47};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> heights = {4, 1, 2, 3};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> heights = {28, 40, 22, 22, 15, 5, 24, 20};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 4, 5, 7, 6, 1};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> heights = {24, 23, 22, 21, 25, 25, 25};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> heights = {5, 5, 5, 5, 4, 4};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> heights = {2, 1, 1, 2};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3};
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> heights = {5, 4, 3, 1, 2};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> heights = {5, 5, 4, 4, 4, 4, 3, 4, 3, 3, 3, 4, 4, 5, 4, 5, 47, 47, 47, 46, 46, 45, 47, 37, 1, 2, 3, 3, 3, 33, 3, 3, 4, 5, 4, 5, 6, 9};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 8, 9, 10, 24, 25, 26, 27, 28, 30, 31, 7, 11, 12, 14, 32, 34, 13, 15, 33, 35, 36, 37, 29, 23, 21, 19, 20, 16, 17, 18, 22};
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> heights = {10, 1, 1, 1, 10};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> heights = {4, 3, 2, 1, 2};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> heights = {2, 2, 2, 1, 3, 3, 3};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> heights = {5, 4, 4, 3, 4, 4, 5};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> heights = {17, 5, 5, 17, 17, 5, 5, 17, 17, 17, 4, 3, 2};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 5, 6, 10, 11, 12, 3, 4, 7, 8, 9};
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> heights = {3, 3, 1, 2, 2};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> heights = {14, 12, 12, 21, 22, 18, 11, 10};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 6, 7, 5, 3, 4};
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> heights = {10, 5, 1};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> heights = {3, 3, 2, 2, 4};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> heights = {5, 4, 3, 4, 5};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> heights = {6, 3, 2};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> heights = {47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46};
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> heights = {7, 5, 5, 3};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3};
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> heights = {5, 4, 1, 5, 4, 1};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 5, 4, 3};
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> heights = {31, 47, 31, 46, 41, 10, 40, 5, 4, 27, 39, 32, 46, 45, 27, 13, 10, 19, 34, 35, 40, 1, 15, 4, 27, 31, 18, 11, 6, 33, 44, 6, 36, 9, 1, 31, 7, 47, 24, 41, 29, 23, 43, 30, 22, 39, 16};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 5, 7, 8, 21, 34, 23, 28, 31, 36, 33, 16, 27, 15, 22, 46, 26, 17, 44, 41, 38, 9, 14, 24, 40, 43, 25, 35, 11, 29, 18, 19, 32, 10, 45, 6, 20, 4, 39, 42, 30, 13, 3, 12, 1, 37};
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> heights = {39, 40, 26, 10, 30, 31};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 4, 5, 1};
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> heights = {3, 1, 5, 3, 1, 5};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 4, 3, 2, 5};
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> heights = {40, 10, 1, 10, 40};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> heights = {10, 9, 8, 7, 10, 9, 8};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 6, 5, 4};
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> heights = {47, 1, 2, 3};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3};
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> heights = {10, 10, 5, 1, 4, 8};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5};
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> heights = {8, 6, 4, 1, 3, 7, 9};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> heights = {4, 3, 2, 1, 1, 2, 3, 4, 3, 2, 1, 3, 2, 4, 3, 1};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 10, 15, 5, 9, 12, 6, 8, 11, 14, 7, 13};
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> heights = {42, 4, 27, 12, 44, 22, 5, 9, 4, 6, 11, 14, 16, 39, 30, 23, 33, 27, 14, 22, 20, 8, 41, 43, 15, 25, 27, 22, 43, 2, 38, 6, 10, 7, 47, 2, 20, 16, 11, 32, 46, 3, 3, 1, 8, 28, 27};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 8, 29, 35, 43, 41, 42, 6, 9, 31, 33, 21, 44, 7, 32, 10, 38, 3, 11, 18, 24, 12, 37, 20, 36, 5, 19, 27, 15, 25, 2, 17, 26, 46, 45, 14, 39, 16, 30, 13, 22, 23, 28, 4, 40, 34};
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> heights = {44, 42, 45, 47, 43, 46, 41, 40, 39, 38, 27, 36, 35, 34, 33, 32, 31, 30, 29, 28, 37, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 42, 40, 41, 39, 43, 44, 45, 47, 46};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 6, 7, 8, 9, 10, 21, 19, 22, 18, 23, 17, 24, 16, 25, 15, 26, 14, 27, 13, 28, 12, 29, 11, 30, 20, 31, 32, 36, 34, 35, 33, 4, 37, 38, 2, 39, 5, 41, 3, 40};
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> heights = {2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> heights = {10, 9, 8, 7, 9, 10, 11, 12};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7};
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> heights = {27, 26, 26, 6, 13, 25, 2, 38, 43, 47, 4, 31, 4, 4, 3, 2, 2, 26, 17, 11, 42, 38, 25, 7, 15, 10, 2, 2, 2, 2, 2, 4, 4, 4, 4, 4, 4, 4, 38, 38, 26, 26, 27, 27, 13};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 6, 15, 16, 26, 27, 28, 29, 30, 14, 10, 12, 13, 31, 32, 33, 34, 35, 36, 37, 23, 25, 19, 4, 44, 24, 18, 5, 22, 17, 40, 41, 42, 43, 11, 7, 21, 38, 39, 20, 8, 9};
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> heights = {6, 5, 4, 3, 2};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> heights = {2, 4, 2, 1, 2};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 4, 1};
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> heights = {47, 30, 20, 10, 1};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> heights = {4, 5, 6, 3, 7, 8, 2, 9, 1, 10};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 6, 8, 1, 2, 4, 5, 7, 9};
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> heights = {3, 3, 2, 5};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3};
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> heights = {42, 44, 37, 40, 41, 27, 11, 31, 32, 25};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 5, 6, 9, 7, 8, 3, 4, 1};
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> heights = {2, 1, 2, 1, 2, 1, 2};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 5, 2, 4, 6};
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> heights = {5, 4, 3, 2};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3};
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> heights = {5, 4, 3, 2, 1, 2, 3, 4, 5};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> heights = {9, 8, 7, 6, 4, 3, 2, 1, 5};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> heights = {40, 10, 30, 20, 29, 21, 28, 27, 26, 25, 25, 10, 30};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 11, 3, 5, 9, 10, 8, 7, 6, 4, 2, 12};
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> heights = {25, 24, 23, 22, 21, 21, 21, 40, 41, 42, 43};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> heights = {7, 7, 6, 8, 8, 8};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5};
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> heights = {3, 3, 2, 2};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3};
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> heights = {4, 4, 5, 5, 6, 5, 3, 5};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 6, 2, 3, 5, 7, 4};
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> heights = {4, 4, 8, 4, 2, 1, 3};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 4, 5, 6, 2};
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> heights = {3, 4, 5, 6, 1, 2};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 4, 5, 1, 2, 3};
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> heights = {6, 6, 3, 18, 26, 42, 30};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 6, 5};
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> heights = {4, 2, 1, 3};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3};
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> heights = {3, 5, 4, 4, 5, 3, 3, 5, 2, 3, 2, 1, 2, 3, 4, 5, 4, 3, 2, 3, 4, 1, 1, 4};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 5, 6, 8, 10, 11, 21, 22, 12, 18, 9, 13, 17, 19, 2, 3, 14, 16, 20, 23, 1, 4, 7, 15};
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> heights = {4, 4, 4, 3, 3, 5};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5};
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> heights = {4, 3, 1, 2, 3, 4};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5};
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> heights = {10, 4, 2, 10, 2, 3, 10, 5, 1, 10};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 4, 8, 5, 7, 3, 6, 9};
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> heights = {2, 2, 2, 1, 3, 4, 5};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> heights = {3, 4, 2, 1, 2, 2};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 4, 5, 1};
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> heights = {25, 26, 31, 44, 20, 20, 39, 11, 21, 16, 38, 7, 5, 9, 35, 4, 12, 17, 4, 41, 23, 36, 33, 21, 46, 35, 31, 14, 17, 36, 36, 2, 2, 39, 5, 3, 3, 34, 38, 1, 45, 9, 16, 35, 10, 43, 46};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 4, 5, 7, 11, 12, 15, 18, 31, 32, 39, 35, 36, 34, 13, 41, 44, 16, 27, 9, 42, 17, 28, 8, 23, 20, 1, 2, 26, 22, 37, 14, 25, 43, 21, 29, 30, 10, 38, 6, 33, 19, 45, 3, 40, 24, 46};
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> heights = {5, 6, 8, 4, 3, 9, 2, 7, 1};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 4, 6, 8, 1, 7, 2, 5};
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<int> heights = {9, 10, 2, 9, 1, 4, 6, 3, 1, 3, 4};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 4, 8, 7, 9, 5, 10, 6, 3, 1};
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<int> heights = {5, 3, 4};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<int> heights = {5, 3, 6, 4, 3};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 4, 3, 2};
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<int> heights = {7, 7, 8, 6, 6, 6};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 4, 5, 2};
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<int> heights = {3, 3, 3, 2, 2, 2};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5};
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<int> heights = {2, 2, 2, 1, 1, 4, 5};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<int> heights = {4, 3, 2, 1, 2, 3, 4};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<int> heights = {5, 6, 6, 2, 8, 2, 2, 6, 3};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 5, 6, 8, 1, 2, 7, 4};
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<int> heights = {3, 3, 3, 1, 2};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<int> heights = {2, 2, 1, 2, 1};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 4, 3};
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<int> heights = {4, 3, 3, 3, 2};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<int> heights = {2, 2, 2, 2, 2, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<int> heights = {9, 9, 8, 8, 7, 3, 4, 5};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7};
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<int> heights = {8, 9, 7, 6, 6, 5, 3, 7, 5, 3, 3, 2, 4, 4, 1, 2, 2};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 4, 5, 6, 9, 10, 11, 14, 15, 16, 12, 13, 8, 7, 1};
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<int> heights = {46, 47, 3, 47, 7, 9, 10, 47, 47};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 4, 5, 6, 1, 3, 7, 8};
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<int> heights = {6, 5, 4, 1, 2, 3};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5};
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<int> heights = {16, 13, 18, 18, 10, 18, 13, 11, 18, 13, 11, 16, 18, 19, 15, 15, 10, 14, 19, 19, 13, 17, 14, 15, 14, 11, 14, 13, 11, 11, 12, 18, 18, 14, 13, 14, 19, 18, 17, 13, 18, 16, 12, 17, 17, 17, 18};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 4, 16, 7, 10, 25, 28, 29, 30, 42, 6, 9, 20, 27, 34, 39, 17, 22, 24, 26, 33, 35, 14, 15, 23, 11, 41, 21, 38, 43, 44, 45, 2, 3, 5, 8, 12, 31, 32, 37, 40, 46, 13, 18, 19, 36};
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<int> heights = {4, 3, 2, 1, 3, 2, 1};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 6, 5, 4};
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<int> heights = {2, 2, 1};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<int> heights = {47, 45, 46, 44, 41, 43, 42, 28, 40, 19, 16, 32, 13, 10, 7, 17, 26, 8, 34, 2, 12, 30, 6, 29, 38, 22, 1, 36, 35, 33, 3, 31, 37, 11, 5, 39, 23, 15, 14, 9, 27, 24, 4, 20, 18, 21, 25};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 4, 7, 9, 10, 12, 13, 14, 19, 26, 30, 42, 34, 22, 17, 39, 33, 20, 38, 37, 15, 44, 43, 45, 25, 36, 41, 46, 16, 40, 23, 21, 31, 11, 29, 18, 28, 27, 32, 24, 35, 8, 6, 5, 2};
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<int> heights = {4, 4, 1};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<int> heights = {25, 32, 38, 13, 43, 47, 6};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 6, 1, 2, 4, 5};
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<int> heights = {13, 32, 38, 25, 43, 47, 6};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 6, 3, 1, 2, 4, 5};
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<int> heights = {47, 23, 24, 25, 21};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 4, 2, 3};
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<int> heights = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    vector<int> heights = {47, 34, 23, 25, 18, 9, 7, 13, 44, 23, 12, 18, 7, 19};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 4, 5, 6, 12, 10, 7, 11, 13, 9, 3, 8};
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    vector<int> heights = {2, 2, 4, 1, 1, 4};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 4, 2, 5};
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    vector<int> heights = {41, 42, 43, 1, 2, 3, 4, 5};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 4, 5, 6, 7, 1, 2};
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    vector<int> heights = {7, 6, 5, 5, 5, 8};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5};
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    vector<int> heights = {6, 5, 4, 1, 1, 1, 1, 4, 5, 6};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    vector<int> heights = {3, 3, 2, 2, 2};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    vector<int> heights = {13, 15, 10, 12, 11, 7, 8, 7, 5, 8, 13};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 5, 7, 8, 6, 9, 4, 3, 10, 1};
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    vector<int> heights = {2, 2, 1, 2, 2};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    vector<int> heights = {6, 3, 4, 2, 5, 3, 2, 1, 8, 8, 4, 2, 6, 3, 1, 2, 8, 6, 1, 2, 4, 6, 5, 9};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 6, 7, 14, 18, 11, 15, 19, 5, 13, 2, 10, 20, 4, 22, 12, 17, 21, 8, 9, 16, 23};
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    vector<int> heights = {20, 10, 20, 10, 5, 10};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 4, 5, 2};
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    vector<int> heights = {8, 7, 6, 9, 10};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    vector<int> heights = {4, 4, 4, 2, 2, 2, 4, 4, 4};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    vector<int> heights = {38, 32, 13, 25, 43, 47, 6};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 6, 3, 4, 5};
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    vector<int> heights = {3, 2, 1, 2, 3};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    vector<int> heights = {6, 5, 4, 1, 1, 1, 1, 1, 4, 5, 6};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    vector<int> heights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46};
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    vector<int> heights = {4, 5, 3, 6, 1};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 4, 1, 3};
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    vector<int> heights = {13, 32, 38, 39, 47, 43, 6};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 6, 1, 2, 3, 5, 4};
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    vector<int> heights = {35, 38, 19, 39, 21, 2, 32, 18, 21, 7};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 5, 9, 7, 4, 8, 6, 1, 3};
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    vector<int> heights = {5, 3, 4, 3};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 2};
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    vector<int> heights = {10, 4, 7};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    vector<int> heights = {5, 5, 2};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    vector<int> heights = {5, 2, 5, 2, 6, 2, 6};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 5, 2, 4, 6};
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    vector<int> heights = {8, 6, 4, 6, 2, 3, 1, 7, 6};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 4, 6, 5, 3, 8, 7};
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    vector<int> heights = {4, 5, 3, 2, 1};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 4, 1};
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    vector<int> heights = {35, 20, 24, 16, 14, 3, 45, 36, 1, 18, 22, 11, 36, 10, 2, 14, 43, 32, 28, 15, 8, 37, 14, 36, 22, 29, 30, 43, 37, 12, 4, 43, 30, 26, 46, 29, 15, 46, 41, 33, 6, 47, 34, 36, 35, 14, 44};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 4, 5, 8, 14, 30, 40, 20, 13, 11, 29, 15, 22, 45, 19, 36, 9, 10, 24, 2, 33, 18, 25, 35, 26, 32, 17, 39, 42, 44, 7, 12, 23, 43, 21, 28, 38, 16, 27, 31, 46, 6, 34, 37, 41};
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    vector<int> heights = {10, 3, 40, 21, 42, 37, 34, 33, 39, 33, 31, 32, 29, 4, 10, 39, 22, 11, 39, 29, 23, 29, 25, 36, 16, 8, 23, 4, 31, 15, 32, 40, 17, 30, 19, 17, 25, 10, 8, 21, 42, 38};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 13, 27, 25, 38, 14, 37, 17, 29, 24, 32, 35, 34, 3, 39, 16, 20, 26, 22, 36, 12, 19, 21, 33, 10, 28, 11, 30, 7, 9, 6, 23, 5, 41, 8, 15, 18, 2, 31, 4, 40};
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test221() {
    vector<int> heights = {3, 3, 3, 1, 2, 2, 2};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 221: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 221: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test222() {
    vector<int> heights = {3, 4, 2, 1, 3, 5, 1, 2};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 6, 7, 4, 1, 5};
    if(result == expected) {
        cout << "Test Case 222: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 222: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test223() {
    vector<int> heights = {4, 11, 9, 18, 13, 8, 5, 12, 17, 10, 2, 5, 17, 3, 11, 1, 6, 8, 13, 2, 12, 7, 20, 19, 18, 14, 3, 14, 16, 6, 15, 4, 1, 9, 15, 10, 19, 16, 20, 7};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 10, 15, 32, 19, 13, 26, 31, 6, 11, 16, 29, 21, 39, 5, 17, 2, 33, 9, 35, 1, 14, 7, 20, 4, 18, 25, 27, 30, 34, 28, 37, 8, 12, 3, 24, 23, 36, 22, 38};
    if(result == expected) {
        cout << "Test Case 223: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 223: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test224() {
    vector<int> heights = {47, 46, 45, 43, 42, 35, 38, 37, 36, 35, 34, 33, 32, 33, 34, 35, 36, 37, 38, 35, 42, 43, 45, 46, 47};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 9, 10, 11, 12, 13, 14, 15, 19, 8, 16, 7, 17, 6, 18, 20, 21, 22, 23, 24};
    if(result == expected) {
        cout << "Test Case 224: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 224: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test225() {
    vector<int> heights = {47, 46, 30, 20, 10, 5, 5, 5, 4, 4, 4, 3, 3, 2, 1};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    if(result == expected) {
        cout << "Test Case 225: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 225: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test226() {
    vector<int> heights = {1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45};
    if(result == expected) {
        cout << "Test Case 226: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 226: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test227() {
    vector<int> heights = {8, 3, 3, 2, 9, 5, 7, 1, 1, 10, 6, 8, 7, 9, 10, 5, 10, 5, 3, 2, 2, 3, 8, 7, 7, 9, 10, 1, 9, 2, 3, 7};
    TheBrickTowerMediumDivOne* pObj = new TheBrickTowerMediumDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 7, 8, 27, 19, 20, 29, 18, 21, 30, 5, 15, 17, 10, 6, 12, 23, 24, 31, 11, 22, 4, 13, 25, 28, 9, 14, 16, 26};
    if(result == expected) {
        cout << "Test Case 227: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 227: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23020799&rd=15176&pm=12161
********************************************************************************
#include <string> 
#include <vector> 
#include <map> 
#include <list> 
#include <set> 
#include <queue> 
#include <iostream> 
#include <sstream> 
#include <stack> 
#include <deque> 
#include <cmath> 
#include <memory.h> 
#include <cstdlib> 
#include <cstdio> 
#include <cctype> 
#include <algorithm> 
#include <utility> 
using namespace std; 
 
#define FOR(i,a,b) for(int (i)=(a);(i)<(b);(i)++) 
#define PB push_back 
#define MP make_pair 
#define ALL(a)  (a).begin(),(a).end() 
#define PII pair<int,int> 
#define VI vector<int> 
 
typedef unsigned long long ull; 
typedef long long ll; 
 
const double pi=3.141592653589793; 
const int INF=2000000000; 
 
class TheBrickTowerMediumDivOne { 
public: 
vector <int> find(vector <int> h) 
{ 
  vector<int> res; 
  vector<bool> used(h.size(),0); 
  int n = h.size(); 
  int d = INF; 
  FOR(i,0,n){ 
    if (h[i] <= d){ 
      d = h[i]; 
      res.PB(i); 
      used[i] = 1; 
    } 
  } 
  vector<pair<int,int> > b; 
  FOR(i,0,n) 
    if (!used[i]) 
      b.PB(MP(h[i],i)); 
  sort(ALL(b)); 
  FOR(i,0,b.size()) 
    res.PB(b[i].second); 
  return res; 
} 
 
 
}; 
  
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/