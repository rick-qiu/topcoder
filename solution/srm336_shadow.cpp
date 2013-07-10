/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7336
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

class Shadow {
public:
    double area(vector<int> tree, vector<int> light);
};

double Shadow::area(vector<int> tree, vector<int> light) {
    double ret;
    return ret;
}


int test0() {
    vector<int> tree = {1, 1, 1, 10, 1, 1};
    vector<int> light = {5, 5, 5};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> tree = {1, 3, 1, 10, 1, 1};
    vector<int> light = {2, 2, 2};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> tree = {1, 1, 1, 2, 2, 2};
    vector<int> light = {3, 3, 3};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 15.75;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> tree = {1, 1, 1, 3, 3, 3};
    vector<int> light = {2, 2, 2};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> tree = {1, 1, 1, 3, 3, 3};
    vector<int> light = {2, 5, 2};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 25.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> tree = {1, 1, 1, 3, 1, 3};
    vector<int> light = {2, 2, 2};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 16.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> tree = {8, 1, 1, 8, 3, 3};
    vector<int> light = {10, 5, 2};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 9.375;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> tree = {1, 1, 2, 2, 2, 2};
    vector<int> light = {3, 3, 3};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 3.375;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> tree = {2, 1, 1, 2, 2, 2};
    vector<int> light = {3, 3, 3};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 3.375;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> tree = {1, 1, 2, 2, 2, 2};
    vector<int> light = {3, 3, 3};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 3.375;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> tree = {4, 7, 3, 7, 5, 9};
    vector<int> light = {2, 8, 8};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 1493.3333333333335;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> tree = {5, 3, 2, 2, 1, 10};
    vector<int> light = {6, 6, 10};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 106.24000000000001;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> tree = {4, 10, 5, 9, 10, 6};
    vector<int> light = {9, 2, 1};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> tree = {3, 10, 6, 7, 9, 2};
    vector<int> light = {10, 7, 10};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> tree = {9, 1, 6, 8, 3, 7};
    vector<int> light = {9, 6, 4};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 6.5600000000000005;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> tree = {2, 1, 3, 10, 9, 5};
    vector<int> light = {1, 7, 2};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> tree = {5, 3, 6, 5, 9, 7};
    vector<int> light = {5, 5, 8};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> tree = {8, 9, 2, 10, 4, 4};
    vector<int> light = {6, 9, 5};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> tree = {1, 9, 1, 3, 10, 3};
    vector<int> light = {3, 7, 3};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> tree = {3, 2, 4, 4, 1, 9};
    vector<int> light = {7, 1, 4};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> tree = {8, 8, 7, 5, 10, 8};
    vector<int> light = {10, 9, 1};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> tree = {4, 3, 9, 10, 10, 8};
    vector<int> light = {2, 2, 10};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> tree = {1, 3, 4, 10, 9, 4};
    vector<int> light = {10, 6, 3};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> tree = {3, 3, 3, 2, 7, 2};
    vector<int> light = {7, 2, 4};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> tree = {8, 3, 7, 6, 2, 5};
    vector<int> light = {4, 4, 7};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 88.0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> tree = {9, 8, 1, 2, 4, 5};
    vector<int> light = {7, 5, 7};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> tree = {3, 8, 5, 3, 7, 9};
    vector<int> light = {1, 3, 3};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> tree = {7, 9, 8, 6, 1, 8};
    vector<int> light = {6, 2, 1};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> tree = {1, 7, 5, 4, 6, 7};
    vector<int> light = {10, 3, 8};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> tree = {7, 6, 7, 3, 6, 4};
    vector<int> light = {10, 4, 6};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> tree = {6, 4, 8, 7, 7, 2};
    vector<int> light = {9, 10, 9};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 120.83333333333334;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> tree = {1, 2, 9, 10, 10, 8};
    vector<int> light = {7, 8, 6};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> tree = {8, 10, 8, 6, 4, 1};
    vector<int> light = {10, 8, 7};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> tree = {6, 8, 9, 10, 2, 5};
    vector<int> light = {5, 2, 9};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> tree = {7, 6, 9, 6, 5, 2};
    vector<int> light = {9, 3, 1};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> tree = {1, 7, 5, 5, 1, 2};
    vector<int> light = {2, 5, 10};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> tree = {9, 10, 9, 8, 1, 2};
    vector<int> light = {3, 2, 7};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> tree = {6, 1, 8, 10, 1, 5};
    vector<int> light = {9, 7, 10};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 16.333333333333336;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> tree = {4, 6, 6, 7, 4, 2};
    vector<int> light = {10, 3, 2};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> tree = {1, 2, 1, 7, 3, 5};
    vector<int> light = {9, 7, 2};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 77.91;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> tree = {8, 10, 2, 7, 5, 8};
    vector<int> light = {6, 5, 2};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> tree = {1, 9, 5, 4, 1, 10};
    vector<int> light = {2, 5, 6};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> tree = {6, 6, 7, 3, 7, 5};
    vector<int> light = {8, 3, 4};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> tree = {1, 1, 1, 5, 10, 1};
    vector<int> light = {8, 2, 1};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> tree = {5, 1, 7, 5, 9, 8};
    vector<int> light = {5, 5, 5};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> tree = {3, 5, 3, 5, 7, 3};
    vector<int> light = {1, 6, 3};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> tree = {1, 3, 1, 10, 4, 5};
    vector<int> light = {5, 2, 5};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> tree = {5, 5, 5, 5, 7, 5};
    vector<int> light = {6, 6, 6};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> tree = {5, 5, 5, 6, 5, 6};
    vector<int> light = {3, 3, 3};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> tree = {1, 1, 1, 1, 5, 5};
    vector<int> light = {1, 3, 6};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> tree = {2, 2, 2, 3, 3, 3};
    vector<int> light = {1, 1, 1};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> tree = {1, 1, 1, 3, 3, 1};
    vector<int> light = {4, 2, 1};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> tree = {1, 1, 1, 1, 10, 1};
    vector<int> light = {2, 2, 2};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> tree = {2, 2, 2, 2, 4, 2};
    vector<int> light = {1, 3, 2};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> tree = {1, 1, 1, 1, 1, 3};
    vector<int> light = {1, 1, 10};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> tree = {5, 1, 5, 6, 2, 6};
    vector<int> light = {2, 1, 2};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> tree = {1, 1, 1, 2, 2, 2};
    vector<int> light = {3, 3, 5};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 22.5;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> tree = {1, 1, 1, 2, 2, 2};
    vector<int> light = {3, 3, 5};
    Shadow* pObj = new Shadow();
    clock_t start = clock();
    double result = pObj->area(tree, light);
    clock_t end = clock();
    delete pObj;
    double expected = 22.5;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8357090&rd=10660&pm=7336
********************************************************************************
// another fine solution by misof
// #includes {{{
#include <algorithm>
#include <numeric>
 
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
 
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cassert>
 
#include <cmath>
#include <complex>
using namespace std;
// }}}
 
/////////////////// PRE-WRITTEN CODE FOLLOWS, LOOK DOWN FOR THE SOLUTION ////////////////////////////////
 
// pre-written code {{{
#define REP(i,n) for(int i=0;i<(int)(n);++i)
// }}}
 
/////////////////// CODE WRITTEN DURING THE COMPETITION FOLLOWS ////////////////////////////////
 
#define COORD_TYPE double // data type used to store the coordinates: %d || %lld || %lf || %Lf
typedef complex<COORD_TYPE> point;
typedef vector<point> poly; // if used to store a polygon, don't repeat the first vertex
 
#define EPSILON (1e-7) // epsilon used for computations involving doubles ; dec to 1e-9 for %Lf
 
// safe comparison function according to [argument,size]: compare_arg {{{
template<class T> bool compare_arg(const complex<T> &A, const complex<T> &B) { 
  // [0,0] ide uplne na zaciatok
  if (are_equal(B,point(0,0))) return 0;
  if (are_equal(A,point(0,0))) return 1;
  // chceme poradie: pod osou x zlava doprava, kladna poloos, nad osou sprava dolava, zaporna poloos
  int sgnA = signum(imag(A));
  int sgnB = signum(imag(B));
  if (sgnA == 0) if (signum(real(A))<0) sgnA = 2;
  if (sgnB == 0) if (signum(real(B))<0) sgnB = 2;
  if (sgnA != sgnB) return (sgnA < sgnB);
  // v ramci polroviny sortime podla clockwise
  if (counterclockwise(A,B)) return 1;
  if (clockwise(A,B)) return 0;
  // a ak sa este nerozhodlo, podla vzdialenosti, blizsie skor
  return (square_size(A) < square_size(B));
}
// }}}
// safe comparison functions acc. to [x,y] and [y,x]: compare_XY, compare_YX {{{
template<class T> bool compare_YX(const complex<T> &A, const complex<T> &B) { if (!is_zero(imag(A)-imag(B))) return (is_negative(imag(A)-imag(B))); return (is_negative(real(A)-real(B))); }
// }}}
 
// safe comparison with 0: is_zero, is_negative, is_positive, signum {{{
bool is_negative(double x) { return x < -EPSILON; } bool is_zero(double x) { return fabs(x) <= EPSILON; } bool is_positive(double x) { return x > EPSILON; }
template<class T> int signum(const T &A) { if (is_zero(A)) return 0; if (is_negative(A)) return -1; return 1; }
// }}}
// safe equality test for points {{{ 
template<class T> bool are_equal(const complex<T> &A, const complex<T> &B) { return is_zero(real(B)-real(A)) && is_zero(imag(B)-imag(A)); }
// }}}
// cross-product, dot_product, square_size (=dot_product(A,A)) for 2D vectors {{{
template<class T> T square_size(const complex<T> &A) { return real(A) * real(A) + imag(A) * imag(A); }
template<class T> T cross_product(const complex<T> &A, const complex<T> &B) { return real(A) * imag(B) - real(B) * imag(A); }
// }}}
// safe colinearity and orientation tests: colinear, clockwise, counterclockwise {{{
template<class T> bool clockwise(const complex<T> &B, const complex<T> &C) { return is_negative( cross_product( B, C )); }
template<class T> bool counterclockwise(const complex<T> &A, const complex<T> &B, const complex<T> &C) { return is_positive( cross_product( B-A, C-A )); }
template<class T> bool counterclockwise(const complex<T> &B, const complex<T> &C) { return is_positive( cross_product( B, C )); }
// }}}
 
// polygon area: twice_signed_poly_area, poly_area {{{
template<class T> T twice_signed_poly_area(const vector< complex<T> > &V) { T res = 0; for (unsigned int i=0; i<V.size(); i++) res += cross_product( V[i], V[(i+1)%V.size()] ); return res; }
template<class T> T poly_area(const vector< complex<T> > &V) { return fabs(0.5 * twice_signed_poly_area(V)); }
// }}}
// compute a CCW convex hull with no unnecessary points: convex_hull {{{
template<class T> vector< complex<T> > convex_hull( vector< complex<T> > V ) { 
  // handle boundary cases
  if (V.size() == 2) if (are_equal(V[0],V[1])) V.pop_back();
  if (V.size() <= 2) return V;
  // find the bottommost point -- this can be optimized!
  sort(V.begin(), V.end(), compare_YX<COORD_TYPE> );
 
  complex<T> offset = V[0];
  for (unsigned int i=0; i<V.size(); i++) V[i] -= offset;
  sort(V.begin()+1, V.end(), compare_arg<COORD_TYPE> );
 
  int count = 2;
  vector<int> hull(V.size()+2);
  for (unsigned int i=0; i<2; i++) hull[i]=i;
 
  for (unsigned int i=2; i<V.size(); i++) {
    while (count>=2 && !counterclockwise( V[hull[count-2]], V[hull[count-1]], V[i] ) ) count--;
    hull[count++]=i;
  }
  
  vector< complex<T> > res;
  for (int i=0; i<count; i++) res.push_back( V[hull[i]] + offset );
 
  if (res.size()==2) if (are_equal(res[0],res[1])) res.pop_back();
  return res;
}
 
// }}}
 
int tx[2], ty[2], tz[2];
int lx, ly, lz;
 
class Shadow {
public:
  double area(vector <int> ttt, vector <int> lll) {
    tx[0] = ttt[0]; ty[0] = ttt[1]; tz[0] = ttt[2];
    tx[1] = ttt[3]; ty[1] = ttt[4]; tz[1] = ttt[5];
    if (tx[0]>tx[1]) swap(tx[0],tx[1]);
    if (ty[0]>ty[1]) swap(ty[0],ty[1]);
    if (tz[0]>tz[1]) swap(tz[0],tz[1]);
    lx = lll[0]; ly = lll[1]; lz = lll[2];
 
    if (tx[0]<lx && lx<tx[1])
      if (ty[0]<ly && ly<ty[1])
        if (tz[0]<lz && lz<tz[1])
          return -1.0; // everywhere
 
    int dim = 0;
    dim += (tx[0] < tx[1]);
    dim += (ty[0] < ty[1]);
    dim += (tz[0] < tz[1]);
 
    if (dim <= 1) return 0.0; // point/line casts no shadows
 
    if (ly <= ty[0]) return 0.0; // light below object
 
    if (dim == 2) {
      // we can still see a line
      if (tx[0]==tx[1]) if (lx==tx[0]) return 0.0;
      if (ty[0]==ty[1]) if (ly==ty[0]) return 0.0;
      if (tz[0]==tz[1]) if (lz==tz[0]) return 0.0;
    }
 
    // now we surely see something
    if (ty[1] >= ly) return -1.0; // infinite
 
    // a ideme premietat
    poly P;
 
    REP(i,2) REP(j,2) REP(k,2) {
      double sx=lx, sy=ly, sz=lz;
      double bx=tx[i], by=ty[j], bz=tz[k];
 
      double dx=sx-bx, dy=sy-by, dz=sz-bz;
 
      double mult = sy / dy;
      P.push_back( point( sx - mult*dx, sz - mult * dz ));
    }
 
    poly Q = convex_hull(P);
    return poly_area(Q);
  }
 
 
};
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/