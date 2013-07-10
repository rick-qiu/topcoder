/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11581
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

class PointErasing {
public:
    vector<int> getOutcomes(vector<int> y);
};

vector<int> PointErasing::getOutcomes(vector<int> y) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> y = {1, 2, 1, 1, 0, 4, 3};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 6};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> y = {0, 0, 4, 4, 8, 8, 4, 4};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> y = {522};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> y = {19, 19, 19, 19, 19, 19};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> y = {0, 1, 2, 3, 4};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> y = {7, 8, 8, 7, 6, 7, 9, 3, 5, 0};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4, 5};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> y = {3, 2, 3, 3, 4, 3, 4, 3, 3, 1, 5, 3};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 5, 6, 7, 9};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> y = {5, 5, 4, 4, 5, 8, 5, 5, 5, 5, 5, 9, 2, 0, 9, 4, 5, 5, 3, 4, 4, 4, 4, 7, 4};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 7, 8, 10, 11, 12, 13, 15, 16, 17};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> y = {1, 3, 1, 4, 0, 3, 1, 3};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 5, 6};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> y = {5, 5, 4, 4, 5, 8, 5, 5, 5, 5, 5, 9, 2, 0, 9, 4, 5, 5, 3, 4, 4, 4, 4, 7, 4, 5, 5, 4, 4, 5, 8, 5, 5, 5, 5, 5, 9, 2, 0, 9, 4, 5, 5, 3, 4, 4, 4, 4, 7, 4};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 10, 11, 13, 14, 15, 16, 18, 19, 20};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> y = {0};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> y = {1000000000};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> y = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {50};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> y = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {50};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> y = {714663, 714663};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> y = {1, 244218};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> y = {40613540, 16168720};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> y = {5965, 5965, 5965};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> y = {868037, 868037, 48227842};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> y = {227, 1452, 227};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> y = {43403, 179910169, 179910169};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> y = {59797769, 1, 1};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> y = {5991928, 52, 5991928};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> y = {141127197, 141127197, 318};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> y = {14649, 921833, 30562662};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> y = {3, 400364, 251};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> y = {428093, 1061, 723662};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> y = {254, 675461, 12};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> y = {326462, 39, 75};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> y = {42137453, 16365, 166};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> y = {915177142, 0, 42, 3, 91490203, 36, 669, 190, 2235271, 4, 5, 2235271, 20, 2235271, 222, 187, 437075, 2235271, 2235271, 2235271, 2235271, 2235271, 73193, 42, 2235271, 35216, 42, 2235271, 53, 2235271, 2235271, 16078734, 669, 241, 53, 2235271, 2235271, 1491990, 2235271, 2235271, 2235271, 2235271, 96, 2235271, 300256808, 2235271, 248957910, 10051, 2235271, 1844};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> y = {4443497, 10082, 10082, 2, 10082, 5864, 10082, 1166468, 13129326, 10082, 2137, 10082, 10082, 10082, 10082, 10082, 3537418, 10082, 10082, 344058861, 10082, 10082, 5864, 499, 991488525, 0, 4443497, 17202, 4443497, 4443497, 1166468, 4443497, 4443497, 11, 4443497, 4443497, 115042432, 4443497, 31153810, 539, 1, 4443497, 4443497, 165, 4443497, 5864, 4443497, 4443497, 4443497, 10082};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> y = {2760, 9, 3625974, 20491, 3625974, 3625974, 3625974, 3625974, 3625974, 3625974, 4463246, 3625974, 5526, 3625974, 685570201, 3625974, 3625974, 3625974, 3625974, 3625974, 598208, 3625974, 3625974, 3625974, 627289, 3625974, 3625974, 2501, 26, 17790, 3625974, 3625974, 3625974, 3625974, 78, 3625974, 344609, 3625974, 775172, 6923365, 3625974, 3625974, 3625974, 473522996, 3625974, 104650, 9, 7, 987376920, 0};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> y = {1294, 7574788, 7574788, 7574788, 7574788, 1146, 7574788, 70511226, 5721, 296, 845980809, 0, 845980809, 7574788, 66355904, 0, 376373, 845980809, 8, 0, 1294, 488223832, 7574788, 0, 845980809, 33165, 37, 18294079, 1294, 37, 33165, 296, 1294, 37, 1294, 18294079, 1294, 1294, 70511226, 1695, 1294, 1294, 1294, 482800038, 7574788};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> y = {2667, 5149981, 1213883, 3022052, 356, 166030, 3022052, 3022052, 3022052, 3022052, 21, 3022052, 3022052, 3022052, 3022052, 186, 3022052, 3022052, 285922179, 3022052, 805467778, 0, 2667, 3022052, 805467778, 805467778, 805467778, 805467778, 2667, 2667, 2781883, 8531928, 37938198, 0, 0, 148119, 2667, 2667, 389, 2667, 37938198, 2667, 2667, 2667, 3022052};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> y = {0, 0, 883049, 2330406, 1260434, 0, 333862280, 0, 2330406, 624, 0, 0, 0, 961417543, 2845, 0, 504964650, 3, 134444, 0, 961417543, 961417543, 961417543, 4344040, 624, 4969578, 624, 0, 624, 961417543, 149, 961417543, 0, 0, 961417543, 961417543, 961417543, 624, 961417543, 961417543, 0, 961417543, 9, 186, 961417543, 0, 624, 0, 961417543, 961417543};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> y = {863379710, 0, 3653, 5554639, 5554639, 5554639, 6452201, 6654726, 3653, 3653, 5554639, 5554639, 5554639, 5554639, 5554639, 3653, 3653, 5544376, 3653, 5554639, 5554639, 5554639, 5554639, 5554639, 351, 3653, 4913868, 5554639, 5554639, 148187711, 42256103, 109416455, 3653, 5554639, 5554639, 3653, 5554639, 3653, 5554639, 5554639, 3653, 5554639, 494452, 5554639, 5554639, 3653, 3653, 65939043, 23, 5554639};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 26};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> y = {3424334, 3424334, 3424334, 3780, 7072591, 3780, 3424334, 3646374, 13745, 3424334, 3424334, 3780, 3780, 3780, 3780, 3424334, 3424334, 3424334, 3780, 3424334, 3424334, 3424334, 3780, 3780, 0, 985902359, 3780, 207, 3780, 3424334, 3424334, 3424334, 3780, 6, 3424334, 3780, 3424334, 12, 3424334, 3424334, 94537, 3780, 3780, 3780, 3424334, 3424334, 9206, 218029, 2001, 3780};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> y = {681, 17361200, 681, 2, 681, 15, 681, 2, 17361200, 270, 34, 681, 17361200, 681, 681, 17361200, 11, 126026, 17361200, 89, 681, 52, 18, 23, 17361200, 1131084, 17361200, 681, 15554832, 716543369, 681, 17361200, 17361200, 124, 30, 121, 681, 256757, 681, 17361200, 2, 681, 681, 681, 17361200, 20920, 21, 681, 753449372, 0};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> y = {1563121, 1563121, 1824, 1563121, 1563121, 1563121, 1824, 1563121, 1563121, 1563121, 0, 18, 1112, 1824, 1824, 0, 1563121, 0, 1384, 1563121, 866993821, 866993821, 297, 866993821, 0, 1563121, 1563121, 342017, 1563121, 1563121, 1824, 560573275, 1563121, 585521622, 1824, 1824, 1824, 1563121, 1563121, 40182101, 1563121, 4, 2532, 1563121, 1824};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 11, 13, 14, 16, 17, 19, 20};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> y = {998535, 998535, 1490, 1490, 998535, 1490, 998535, 1490, 1490, 1490, 1490, 7845645, 998535, 998535, 998535, 994, 1490, 998535, 998535, 998535, 0, 998535, 127207733, 0, 907028433, 1490, 48, 1490, 998535, 907028433, 123734, 1490, 0, 998535, 907028433, 35311759, 1490, 998535, 1490, 998535, 124, 19132, 1195, 1490, 1490};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> y = {950808464, 0, 5088982, 5088982, 5088982, 5088982, 5088982, 5088982, 5088982, 5088982, 5088982, 5088982, 5088982, 5088982, 5088982, 5088982, 5088982, 705, 705, 5088982, 5088982, 5088982, 5088982, 5088982, 5088982, 5088982, 9157, 5088982, 5088982, 705, 5088982, 5088982, 5088982, 5088982, 1133715, 53416, 5088982, 5088982, 5088982, 211, 705, 5088982, 5088982, 5088982, 5088982, 5088982, 5088982, 705, 5088982, 5088982};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 10, 13, 17, 19, 26, 41};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> y = {2572262, 2572262, 2572262, 2572262, 2572262, 2572262, 2572262, 2572262, 2572262, 2572262, 2572262, 2572262, 2572262, 2572262, 2572262, 2572262, 313240104, 101639520, 313240104, 1010, 2572262, 1130731, 2572262, 2572262, 0, 515661381, 26, 1010, 16558, 1010, 2572262, 1010, 7578, 1010, 1010, 1010, 1010, 1010, 1010, 1763557, 1010, 1010, 1010, 2572262, 1010, 1010, 1010, 1010, 1010, 1010};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24, 25, 26, 27, 28, 29, 30, 33, 34, 35, 36, 37, 38, 39};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> y = {2988283, 2988283, 2988283, 2988283, 60710666, 1091, 2988283, 2988283, 2988283, 2988283, 2988283, 2988283, 2988283, 2988283, 2988283, 2988283, 2988283, 2988283, 2988283, 2988283, 2988283, 2988283, 2988283, 2988283, 2988283, 2988283, 2988283, 2988283, 2988283, 2988283, 2988283, 2988283, 2988283, 1091, 2988283, 8116597, 2988283, 2988283, 2988283, 2988283, 2988283, 2988283, 2988283, 2988283, 2988283, 2988283, 2988283, 2988283, 0, 582510503};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 7, 18, 19, 33, 34, 45, 46};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> y = {3651, 3651, 3651, 3651, 2135457, 3651, 3651, 3651, 3651, 3651, 657961611, 3651, 188650, 657961611, 0, 17, 0, 31932746, 657961611, 3651, 3651, 126281, 0, 2135457, 657961611, 3651, 2135457, 2135457, 2135457, 2135457, 2135457, 3651, 2135457, 2135457, 2135457, 2135457, 2135457, 2135457, 2135457, 2135457, 2135457, 40, 2135457, 2135457, 2135457};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 19, 23, 28, 33};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> y = {5991945, 5991945, 239844318, 47092, 5991945, 5991945, 5991945, 5991945, 5290, 15632, 5991945, 5991945, 5991945, 5991945, 5991945, 5991945, 5290, 5991945, 5991945, 5290, 0, 5290, 91, 0, 105, 17604, 0, 0, 1059, 981216148, 0, 0, 0, 5520, 981216148, 5290, 5290, 5290, 5290, 5290, 5290, 5290, 5290, 5290, 5290};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21, 23, 25, 27, 29, 31, 33};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> y = {982545851, 0, 5340702, 5340702, 5340702, 5340702, 5340702, 5340702, 5340702, 5340702, 5340702, 5340702, 5340702, 5340702, 5340702, 5340702, 5340702, 5340702, 5340702, 5340702, 5340702, 5340702, 5340702, 5340702, 5340702, 5340702, 5340702, 5340702, 5340702, 5340702, 5340702, 5340702, 5340702, 5340702, 5340702, 5340702, 5340702, 5340702, 5340702, 5340702, 5340702, 5340702, 5340702, 5340702, 5340702, 5340702, 5340702, 5340702, 5340702, 5340702};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {50};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> y = {1997290, 1997290, 1997290, 1997290, 1997290, 1997290, 1997290, 1997290, 1997290, 1997290, 1997290, 1997290, 1997290, 1997290, 1997290, 1997290, 1997290, 1997290, 1997290, 1997290, 1997290, 1997290, 1997290, 1997290, 0, 774620716, 2299, 2299, 2299, 2299, 2299, 2299, 2299, 2299, 2299, 2299, 2299, 2299, 2299, 2299, 2299, 2299, 2299, 2299, 2299, 2299, 2299, 2299, 2299, 2299};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {50};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> y = {436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 436, 888617302, 0};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {50};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> y = {2211324, 2211324, 2211324, 2211324, 2211324, 2211324, 2211324, 2211324, 2211324, 2211324, 0, 2211324, 919728917, 460, 0, 919728917, 0, 8161567, 0, 919728917, 0, 0, 394162902, 2211324, 919728917, 892, 892, 892, 892, 892, 892, 892, 892, 892, 892, 892, 892, 892, 892, 892, 892, 892, 892, 892, 892};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {40};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> y = {2362, 2362, 2362, 2362, 2362, 2362, 2362, 2362, 2362, 2362, 2362, 2362, 2362, 2362, 2362, 2362, 2362, 2362, 2362, 2362, 0, 744261754, 0, 744261754, 2362, 2362, 0, 744261754, 7985492, 744261754, 744261754, 744261754, 0, 2362, 744261754, 7985492, 7985492, 7985492, 7985492, 7985492, 7985492, 7985492, 7985492, 7985492, 7985492};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {41};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> y = {4567, 372, 298, 372, 3369192, 224873, 27557, 3674, 107239, 13055, 224873, 419, 40, 40, 426, 13055, 907156902, 28, 13206220, 2986940, 349089308, 207785, 4186688, 119, 0, 968520409, 7818812, 862414, 142, 70777037, 195, 3369192, 880, 11828846, 7, 298, 161, 294265924, 461, 20778, 146247292, 56726, 127587, 37, 10, 18282006, 304292, 119, 4186688, 4567};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> y = {52641, 4731, 126424, 2095, 7358, 5, 17, 33, 101003894, 1039372, 0, 937409232, 0, 123981211, 1085203, 0, 937409232, 0, 937409232, 52641, 937409232, 52641, 52641, 52641, 937409232, 60681767, 3, 3, 22849411, 28, 7, 35804663, 154502, 5, 10800860, 7358, 126424, 4996990, 181906, 130126198, 8, 154502, 101003894, 79, 52641};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> y = {73431, 2297261, 14156112, 7316911, 2295, 817614, 23825, 22573, 22573, 407612, 739842446, 28695125, 871, 56178811, 102521, 14156112, 9, 755708, 350933469, 358, 879835991, 6, 879835991, 0, 0, 0, 879835991, 879835991, 73431, 755708, 73431, 0, 0, 73431, 0, 7316911, 756131, 15066167, 42, 34294528, 358, 1077471, 5361, 4704754, 73431};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> y = {46433, 77083624, 46433, 169, 7463689, 546, 54711133, 2641353, 46433, 12947, 65, 876788105, 46433, 46433, 94, 46433, 15, 46433, 46433, 46433, 46433, 376834608, 7463689, 860548, 935530965, 0, 46433, 286846, 8576143, 600510, 46433, 3688470, 7823746, 2641353, 6599739, 46433, 6517192, 10231138, 46433, 46433, 46433, 1594129, 11899254, 77083624, 876788105, 186, 1343, 46433, 46433, 46433};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> y = {307801, 17422969, 774455072, 258938, 307801, 29550, 53567, 14, 88183235, 5, 957147507, 307801, 957147507, 307801, 307801, 307801, 307801, 0, 957147507, 11, 957147507, 4, 0, 307801, 0, 307801, 225027, 79447, 797767028, 18, 28694, 955783404, 79356541, 307801, 307801, 141276, 307801, 307801, 307801, 307801, 186667052, 307801, 868690305, 5407255, 307801};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 10, 11, 12, 13, 14, 15, 16, 17, 18};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> y = {196703, 45352403, 24943423, 3250, 100, 147438577, 28234, 11, 196703, 196703, 196703, 61582219, 6224, 372, 319213638, 196703, 20, 196703, 19733, 147438577, 958997621, 958997621, 1, 958997621, 0, 0, 0, 0, 196703, 196703, 0, 196703, 196703, 0, 958997621, 1179, 196703, 196703, 196703, 61582219, 242061570, 1333385, 123, 196703, 196703};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 14, 15, 16, 17, 18, 19, 20, 21};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> y = {80040, 80040, 173, 19076, 80040, 80040, 80040, 80040, 80040, 47812, 1929, 15043, 80040, 80040, 80040, 80040, 80040, 80040, 9837, 4, 29902, 1240, 80040, 80040, 991956857, 0, 80040, 247844, 80040, 80040, 80040, 125156, 80040, 44107, 296, 80040, 80040, 80040, 80040, 80040, 80040, 80040, 80040, 80040, 80040, 80040, 80040, 797, 80040, 80040};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 7, 9, 10, 11, 12, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> y = {36239, 159483283, 36239, 71317, 143872298, 36239, 258310, 36239, 36239, 36239, 0, 0, 884392, 651, 889436585, 36239, 7266471, 0, 1036, 1036, 8980, 36239, 0, 889436585, 889436585, 36239, 185740304, 22052, 36239, 36239, 33753014, 262, 36239, 36239, 36239, 36239, 20, 36239, 36239, 36239, 36239, 36239, 36239, 36239, 36239};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> y = {39220, 39220, 39220, 9, 39220, 39220, 39220, 39220, 39220, 39220, 39220, 39220, 39220, 39220, 39220, 39220, 1683, 39220, 39220, 39220, 826466742, 826466742, 826466742, 39220, 826466742, 25776, 1076, 253, 826466742, 0, 826466742, 826466742, 826466742, 826466742, 0, 39220, 39220, 1683, 51, 39220, 3109981, 39220, 39220, 39220, 39220};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18, 19, 20, 21, 30, 31, 32, 33, 34, 35, 36};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> y = {126976, 126976, 126976, 126976, 126976, 126976, 126976, 126976, 126976, 126976, 126976, 126976, 126976, 126976, 126976, 126976, 126976, 126976, 126976, 126976, 126976, 126976, 126976, 126976, 0, 644563977, 126976, 126976, 126976, 126976, 126976, 126976, 126976, 126976, 126976, 126976, 126976, 126976, 126976, 126976, 126976, 126976, 126976, 126976, 126976, 126976, 126976, 126976, 126976, 126976};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {50};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> y = {13319, 13319, 13319, 13319, 13319, 13319, 13319, 13319, 13319, 13319, 967628564, 185138, 0, 967628564, 0, 3510, 0, 595173, 13319, 967628564, 13319, 0, 13319, 248412427, 967628564, 13319, 13319, 13319, 13319, 13319, 13319, 13319, 13319, 13319, 13319, 13319, 13319, 13319, 13319, 13319, 13319, 13319, 13319, 13319, 13319};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {38};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> y = {47558, 47558, 47558, 47558, 47558, 47558, 47558, 47558, 47558, 47558, 47558, 47558, 47558, 47558, 47558, 47558, 47558, 47558, 47558, 47558, 970030225, 47558, 608, 0, 970030225, 0, 71, 47558, 0, 16020372, 0, 275, 2705233, 271508, 0, 47558, 47558, 47558, 47558, 47558, 47558, 47558, 47558, 47558, 47558};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {37};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> y = {83997, 184486104, 83997, 3784, 83997, 83997, 1, 1, 1, 1, 1, 1, 391809264, 391809264, 391809264, 391809264, 391809264, 3784, 3784, 3784, 3784, 83997, 3784, 3784, 3784, 3784, 3784, 3784, 3784, 3784, 7, 3784, 3784, 3784, 3784, 3784, 3784, 3784, 3784, 3784, 3784};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> y = {44216, 44216, 44216, 1049, 44216, 44216, 44216, 44216, 44216, 44216, 44216, 44216, 44216, 44216, 44216, 44216, 44216, 44216, 44216, 44216, 44216, 44216, 44216, 0, 39361041, 39361041, 1049, 1049, 1049, 1049, 1049, 1049, 1049, 1049, 1049, 1049, 1049, 1049, 44216, 1049, 1049, 1049, 1049, 1049, 2, 1049, 1049, 1049, 1049};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 15, 22, 27, 29, 34, 41, 46};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> y = {428093, 428093, 428093, 428093, 428093, 1061, 428093, 428093, 428093, 428093, 675461, 428093, 1061, 428093, 428093, 428093, 428093, 428093, 428093, 428093, 428093, 3, 3, 3, 723662, 1061, 1061, 428093, 1061, 1061, 1061, 1061, 1061, 1061, 1061, 1061, 1061, 1061, 1061, 1061, 1061, 1061, 1061, 1061, 12, 1061};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> y = {27748, 27748, 27748, 27748, 25470, 27748, 27748, 27748, 27748, 1885155, 27748, 25470, 27748, 27748, 27748, 27748, 27748, 27748, 27748, 27748, 13, 13, 13, 35232310, 35232310, 35232310, 35232310, 25470, 25470, 27748, 25470, 25470, 25470, 25470, 25470, 25470, 25470, 25470, 25470, 25470, 25470, 25470, 25470, 25470, 25470, 25470, 27748, 25470, 25470, 25470};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 15, 18, 19, 22, 23, 26, 27, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> y = {10685, 10685, 6815, 10685, 10685, 2659168, 10685, 10685, 10685, 10685, 10685, 10685, 10685, 10685, 6815, 10685, 1, 1, 1, 1, 384041977, 384041977, 384041977, 6815, 6815, 6815, 6815, 10685, 6815, 6815, 6815, 6815, 6815, 6815, 6815, 6815, 6815, 6815, 6815, 6815, 6815, 6815, 6815, 6815, 4050, 6815};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> y = {22995, 22995, 6641, 22995, 22995, 6641, 22995, 22995, 22995, 22995, 22995, 22995, 22995, 22995, 45050, 22995, 121550348, 121550348, 121550348, 121550348, 149, 149, 149, 149, 149, 45050, 45050, 45050, 45050, 22995, 45050, 45050, 45050, 45050, 45050, 45050, 45050, 45050, 45050, 45050, 45050, 45050, 45050, 45050, 45050, 45050, 22995, 45050, 45050, 45050};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 15, 16, 17, 24, 25, 30, 31, 32, 33, 34, 35, 36, 37, 40, 41, 44, 45};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> y = {496217, 496217, 510, 496217, 496217, 496217, 496217, 496217, 496217, 496217, 496217, 613117, 496217, 496217, 510, 496217, 496217, 496217, 496217, 0, 0, 57298872, 57298872, 57298872, 510, 496217, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 510, 93, 510, 510, 510, 510, 510};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> y = {2432846, 2432846, 2432846, 11298160, 2432846, 2432846, 2432846, 2432846, 2432846, 2432846, 2432846, 2432846, 11298160, 2432846, 2432846, 11298160, 2432846, 2432846, 2432846, 2432846, 897057813, 897057813, 897057813, 897057813, 897057813, 11299, 11298160, 2432846, 11298160, 11298160, 11298160, 11298160, 11298160, 11298160, 11298160, 11298160, 11298160, 11298160, 11298160, 11298160, 11298160, 11298160, 11298160, 11298160, 355707062, 11298160, 11298160, 11298160, 11298160};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 14, 21, 22, 23, 24, 27, 28, 29, 30, 37, 38, 39, 40, 43, 44};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> y = {2657, 2657, 2820, 2657, 2657, 2657, 2657, 2657, 2657, 2657, 2657, 2657, 2097, 2657, 22, 437666049, 437666049, 2097, 2097, 2097, 2657, 2097, 2097, 2097, 2097, 2097, 2097, 2097, 2097, 2097, 2097, 2097, 2097, 2097, 2097, 2097, 2097, 2097, 2097, 2097, 2097, 2097, 2097, 2097, 2097, 2097, 2097, 2097, 73, 2097};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 7, 9, 10, 15, 16, 18, 19, 33, 34, 36, 37, 42, 43, 45, 46};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> y = {5902801, 5902801, 1201162, 5902801, 5902801, 5902801, 5902801, 5902801, 5902801, 5902801, 5902801, 5902801, 281923884, 5902801, 951962733, 627, 281923884, 281923884, 281923884, 5902801, 281923884, 281923884, 281923884, 281923884, 281923884, 281923884, 281923884, 281923884, 281923884, 281923884, 281923884, 281923884, 281923884, 281923884, 281923884, 281923884, 281923884, 281923884, 281923884, 281923884, 281923884, 281923884, 281923884, 281923884, 281923884, 281923884, 281923884, 5902801, 281923884, 281923884};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 7, 15, 16, 33, 34, 36, 37, 42, 43, 45, 46};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> y = {1222, 1920034, 1222, 1222, 1222, 44, 1222, 3, 319717563, 319717563, 44, 44, 44, 44, 44, 44, 44, 44, 44, 1222, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 18, 44};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 6, 8, 9, 14, 15, 17, 18, 32, 33, 35, 36, 41, 42, 44, 45};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> y = {49636065, 409325, 49636065, 49636065, 49636065, 409325, 49636065, 14, 199317474, 199317474, 409325, 409325, 409325, 409325, 409325, 409325, 409325, 409325, 409325, 49636065, 409325, 409325, 409325, 409325, 409325, 409325, 409325, 409325, 409325, 409325, 409325, 409325, 409325, 409325, 409325, 409325, 409325, 409325, 409325, 409325, 409325, 409325, 409325, 409325, 409325, 409325, 409325, 709, 409325, 409325};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 9, 10, 15, 18, 19, 33, 36, 37, 42, 45, 46};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> y = {405356, 32612926, 405356, 405356, 405356, 405356, 405356, 405356, 405356, 405356, 405356, 40042, 405356, 405356, 405356, 8, 101926943, 101926943, 101926943, 40042, 405356, 40042, 40042, 40042, 40042, 40042, 40042, 40042, 40042, 40042, 40042, 40042, 40042, 40042, 40042, 40042, 40042, 40042, 40042, 40042, 40042, 40042, 40042, 40042, 40042, 40042, 40042, 40042, 40, 40042};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 7, 9, 10, 15, 16, 18, 19, 33, 34, 36, 37, 42, 43, 45, 46};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> y = {1791242, 1791242, 7084, 1791242, 1791242, 1791242, 1791242, 1791242, 1791242, 1791242, 1791242, 1791242, 4500078, 1791242, 1791242, 1791242, 47288148, 2, 4500078, 1791242, 4500078, 4500078, 4500078, 4500078, 4500078, 4500078, 4500078, 4500078, 4500078, 4500078, 4500078, 4500078, 4500078, 4500078, 4500078, 4500078, 4500078, 4500078, 4500078, 4500078, 4500078, 4500078, 4500078, 4500078, 4500078, 4500078, 4500078, 30841084, 4500078, 4500078};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 7, 9, 10, 15, 16, 18, 19, 33, 34, 36, 37, 42, 43, 45, 46};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> y = {10902, 17594, 10902, 10902, 10902, 10902, 17594, 10902, 10902, 10902, 10902, 8144, 10902, 10902, 10902, 10902, 8144, 10902, 10902, 10902, 8144, 10902, 10902, 10902, 19, 19, 19, 6342639, 8144, 8144, 8144, 10902, 8144, 8144, 8144, 8144, 8144, 10902, 8144, 8144, 8144, 8144, 10902, 8144, 8144, 8144, 8144, 10902, 8144, 8144};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 10, 11, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 37, 38, 41};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> y = {23506, 6106, 23506, 23506, 23506, 358848, 23506, 23506, 23506, 358848, 23506, 23506, 23506, 23506, 23506, 6106, 23506, 23506, 23506, 23506, 6106, 23506, 23506, 23506, 23506, 17, 53232473, 53232473, 6106, 6106, 6106, 23506, 6106, 6106, 6106, 6106, 6106, 2462, 6106, 6106, 6106, 23506, 6106, 6106, 6106, 2462, 6106, 6106};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 39};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> y = {114693, 7712684, 114693, 114693, 114693, 114693, 114693, 120, 114693, 114693, 114693, 114693, 7712684, 114693, 114693, 114693, 114693, 7712684, 114693, 114693, 114693, 114693, 120, 114693, 114693, 114693, 69, 8791666, 120, 120, 120, 114693, 120, 120, 120, 120, 120, 91, 120, 120, 120, 120, 114693, 120, 120, 120, 120, 120, 91, 120};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 41};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> y = {36315, 37582, 36315, 36315, 36315, 37582, 36315, 36315, 36315, 36315, 37582, 36315, 36315, 36315, 36315, 36315, 37582, 36315, 36315, 36315, 36315, 12622, 36315, 36315, 36315, 36315, 36315, 3, 624005, 12622, 12622, 12622, 12622, 36315, 12622, 12622, 12622, 36315, 12622, 12622, 12622, 36315, 12622, 12622, 12622, 12622, 12622, 36315, 12622};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 7, 9, 11, 12, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 35, 36, 40};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> y = {98608, 134223, 98608, 98608, 98608, 98608, 2490, 98608, 98608, 98608, 134223, 98608, 98608, 98608, 98608, 98608, 134223, 98608, 98608, 98608, 98608, 2490, 98608, 98608, 98608, 98608, 218, 113146373, 2490, 2490, 2490, 2490, 2490, 98608, 2490, 2490, 2490, 1075, 2490, 2490, 2490, 2490, 2490, 1075, 2490, 2490, 2490, 2490, 1075, 2490};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 7, 8, 9, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 41};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> y = {70277, 1578, 70277, 70277, 70277, 70277, 70277, 209499, 70277, 70277, 70277, 70277, 1578, 70277, 70277, 70277, 209499, 70277, 70277, 70277, 70277, 70277, 209499, 70277, 70277, 70277, 70277, 696122298, 226, 209499, 209499, 209499, 209499, 70277, 209499, 209499, 209499, 209499, 209499, 356068, 209499, 209499, 209499, 70277, 209499, 209499, 209499, 209499, 70277, 209499};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 7, 8, 9, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 41};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> y = {195761, 52696, 195761, 195761, 195761, 445245, 195761, 195761, 195761, 445245, 195761, 195761, 195761, 445245, 195761, 195761, 195761, 195761, 195761, 52696, 195761, 195761, 195761, 195761, 195761, 277, 1609210, 52696, 52696, 52696, 195761, 52696, 52696, 52696, 52696, 369, 52696, 52696, 52696, 52696, 52696, 195761, 52696, 52696, 52696, 52696, 52696, 369, 52696, 52696};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 41};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> y = {33375, 4666, 33375, 33375, 33375, 33375, 33375, 33375, 555192, 33375, 33375, 33375, 33375, 33375, 555192, 33375, 33375, 33375, 33375, 4666, 33375, 33375, 33375, 33375, 33375, 33375, 278, 1771115, 4666, 4666, 4666, 4666, 4666, 4666, 33375, 4666, 4666, 4666, 4666, 4666, 4666, 33375, 4666, 4666, 4666, 4666, 4666, 33375, 4666};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 8, 9, 10, 13, 14, 15, 16, 18, 19, 20, 21, 24, 25, 26, 27, 30, 31, 32, 33, 36, 38, 42};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> y = {9863, 9863, 198, 9863, 9863, 9863, 9863, 9863, 378283, 9863, 9863, 9863, 9863, 9863, 9863, 198, 9863, 9863, 9863, 9863, 9863, 9863, 198, 9863, 9863, 9863, 9863, 9863, 5, 7168927, 198, 198, 198, 198, 198, 9863, 198, 198, 198, 198, 198, 198, 16, 198, 198, 198, 198, 198, 16, 198};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 10, 11, 15, 16, 17, 20, 21, 22, 25, 26, 27, 28, 31, 32, 33, 37, 38, 43};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> y = {78, 53, 78, 78, 78, 78, 78, 78, 53, 78, 78, 78, 78, 78, 53, 78, 78, 78, 78, 78, 53, 78, 78, 78, 78, 78, 78, 0, 0, 167983, 167983, 53, 53, 53, 53, 78, 53, 53, 53, 53, 78, 53, 53, 53, 53, 53, 53, 24, 53, 53};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 11, 13, 15, 17, 18, 19, 21, 22, 23, 24, 26, 27, 28, 29, 31, 32, 33, 35, 37, 39, 43};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> y = {2483090, 2556733, 2483090, 2483090, 2483090, 2483090, 2483090, 2556733, 2483090, 2483090, 2483090, 2483090, 2483090, 2483090, 2556733, 2483090, 2483090, 2483090, 2483090, 34649, 2483090, 2483090, 2483090, 2483090, 2483090, 2483090, 7, 7, 522092517, 522092517, 522092517, 34649, 34649, 34649, 34649, 34649, 2483090, 34649, 34649, 34649, 34649, 34649, 34649, 2483090, 34649, 34649, 34649, 34649, 2483090, 34649};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 11, 12, 13, 16, 17, 18, 22, 23, 24, 26, 27, 28, 32, 33, 34, 37, 38, 39, 43};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> y = {169, 169, 169, 64786188, 169, 169, 169, 169, 169, 64786188, 169, 169, 169, 169, 169, 115, 169, 169, 169, 169, 115, 169, 169, 169, 169, 169, 0, 540837749, 115, 115, 115, 115, 169, 115, 115, 115, 115, 169, 115, 115, 115, 115, 7, 115, 115, 115, 115};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 13, 14, 17, 18, 19, 21, 22, 23, 25, 26, 27, 28, 30, 31, 32, 35, 36, 40};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> y = {9938753, 16086361, 9938753, 9938753, 9938753, 9938753, 153573, 9938753, 9938753, 9938753, 9938753, 153573, 9938753, 9938753, 9938753, 9938753, 9938753, 9938753, 153573, 9938753, 9938753, 9938753, 9938753, 9938753, 9938753, 9, 9, 9, 135441860, 153573, 153573, 153573, 153573, 153573, 9938753, 153573, 153573, 153573, 153573, 9938753, 153573, 153573, 153573, 153573, 153573, 2422, 153573, 153573, 153573, 153573};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 37, 38, 39, 43};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> y = {4144170, 4144170, 4144170, 4144170, 84997749, 4144170, 4144170, 4144170, 4144170, 4144170, 69387, 4144170, 4144170, 4144170, 4144170, 4144170, 69387, 4144170, 4144170, 4144170, 4144170, 4144170, 84997749, 4144170, 4144170, 4144170, 4144170, 112980624, 112980624, 112980624, 11974, 84997749, 84997749, 84997749, 84997749, 4144170, 84997749, 84997749, 84997749, 84997749, 84997749, 4144170, 84997749, 84997749, 84997749, 84997749, 84997749, 98905143, 84997749, 84997749};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 14, 15, 18, 19, 20, 23, 24, 25, 28, 29, 30, 33, 34, 35, 38, 39, 43};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> y = {39717, 31, 39717, 39717, 39717, 39717, 1163624, 39717, 39717, 39717, 39717, 39717, 1163624, 39717, 39717, 39717, 39717, 39717, 39717, 1163624, 39717, 39717, 39717, 39717, 39717, 39717, 776751794, 7, 1163624, 1163624, 1163624, 1163624, 1163624, 1163624, 39717, 1163624, 1163624, 1163624, 1163624, 1163624, 1163624, 400318879, 1163624, 1163624, 1163624, 1163624, 39717, 1163624, 1163624, 1163624};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 10, 11, 12, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 33, 34, 35, 37, 39, 43};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> y = {633333, 633333, 44730, 633333, 633333, 633333, 633333, 633333, 633333, 44730, 633333, 633333, 633333, 633333, 633333, 633333, 11028696, 633333, 633333, 633333, 633333, 44730, 633333, 633333, 633333, 633333, 9, 197598375, 44730, 44730, 44730, 44730, 44730, 44730, 633333, 44730, 44730, 44730, 44730, 44730, 44730, 20420, 44730, 44730, 44730, 44730, 44730, 633333, 44730};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 9, 10, 11, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 36, 37, 38, 42};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> y = {174534, 174534, 1471591, 174534, 174534, 174534, 174534, 174534, 174534, 47479, 174534, 174534, 174534, 174534, 47479, 174534, 174534, 174534, 174534, 47479, 174534, 174534, 174534, 174534, 7, 72315324, 47479, 47479, 47479, 47479, 47479, 47479, 174534, 47479, 47479, 47479, 47479, 47479, 47479, 174534, 47479, 47479, 47479, 47479, 47479, 2125, 47479, 47479, 47479};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 11, 12, 13, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 36, 37, 38, 42};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> y = {0, 4, 2, 1, 2, 2, 3, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 2};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> y = {2, 26, 8, 13, 36, 55, 25, 23, 51, 45, 17, 47, 63, 64, 43, 13, 20, 59, 38, 17, 62, 21, 15, 50, 16, 64, 11, 15, 36, 39, 23, 43, 17, 35, 18, 18, 63, 28, 41, 30, 48, 11, 1, 47, 64, 12, 35, 5, 50, 53};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> y = {104049400, 104049400, 6862293, 827397890, 529736365, 554435232, 168972506, 10555692, 104049400, 28991180, 80582766, 168972506, 308036332, 737846973, 272073168, 48101890, 422196748, 1025232, 6862293, 467962000, 1025232, 420848452, 57948765, 550704096, 152556148, 220448440, 255452760, 347762541, 305319768, 58108099, 302323670, 502089410, 1025232, 510226857, 150960000, 36818682, 108850365, 550704096, 46168950, 183523151, 580257216, 127118631, 168972506, 550704096, 16045800, 76789944, 296212630, 259661055, 10555692, 483016400};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> y = {1, 2, 1, 1, 0, 4, 3, 5, 5, 4, 4, 5, 8, 5, 5, 5, 5, 5, 9, 2, 0, 9, 4, 5, 5, 3, 4, 4, 4, 4, 7, 4};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 7, 8, 9, 10, 11, 12, 13};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> y = {128959394, 692901014, 436085874, 748533631, 776550280, 289134332, 807385196, 556889023, 95168427, 888844002, 353699825, 809912669, 686611922, 777811292, 912905317, 45033382, 698004710, 51427208, 532780647, 755994994, 808052927, 778205366, 822530700, 168547992, 373798977, 890856879, 469573117, 80335149, 702214256, 7523373, 381141486, 831173649, 700424386, 817227359, 432223632, 329491018, 106361690, 239608827, 886380040, 201530117, 980969181, 92596216, 11442785, 667581102, 870407508, 776864453, 565130835, 420928569, 680808012, 97911481};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> y = {1, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> y = {100, 101, 100, 97, 100, 105, 100, 93, 100, 109, 100, 89, 100, 113, 100, 85, 100, 117, 100, 81, 100, 121, 100, 77, 100, 125, 100, 73, 100, 129, 100, 69, 100, 133, 100, 65, 100, 137, 100, 61, 100, 141, 100, 57, 100, 145, 100, 53, 100, 149};
    PointErasing* pObj = new PointErasing();
    clock_t start = clock();
    vector<int> result = pObj->getOutcomes(y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22777893&rd=14547&pm=11581
********************************************************************************
#include <string> 
#include <vector> 
#include <iostream> 
#include <sstream> 
#include <algorithm> 
#include <numeric> 
#include <set> 
#include <map> 
#include <queue> 
#include <cmath> 
#include <cstdio> 
#include <cstring> 
using namespace std; 
 
#define FORE(it, c) for(typeof(c.begin()) it=c.begin(); it!=c.end(); it++) 
 
int inside[50][50][50]; 
 
class PointErasing { 
  public: 
  int between(int a, int b, int c){ 
    return a<b && b<c || a>b && b>c; 
  } 
  int insidef(int ax, int ay, int bx, int by, int cx, int cy){ 
    return between(ax, bx, cx) && between(ay, by, cy); 
  } 
  vector <int> getOutcomes(vector <int> y) { 
    memset(inside, 0, sizeof(inside)); 
    int candie[50]={0}, mustdie[50]={0}; 
    int n=y.size(); 
    if(n<3) 
      return vector<int>(1, n); 
    for(int i=0; i<n; i++){ 
      for(int j=0; j<n; j++) 
      for(int k=0; k<n; k++){ 
        inside[i][j][k]=insidef(j, y[j], i, y[i], k, y[k]); 
        if(inside[i][j][k]) 
          candie[i]=1; 
      } 
    } 
    for(int i=0; i<n; i++) 
    for(int j=0; j<n; j++) 
    for(int k=0; k<n; k++) 
      if(!candie[j] && !candie[k] && inside[i][j][k]) 
        mustdie[i]=1; 
    set<long long> masks; 
    for(int j=0; j<n; j++) 
    for(int k=0; k<n; k++){ 
      long long mask=0; 
      for(int i=0; i<n; i++) 
        if(!mustdie[i] && inside[i][j][k]) 
          mask|=1ll<<i; 
      masks.insert(mask); 
    } 
    set<pair<long long, int> > poss; 
    poss.insert(make_pair(0ll, 0)); 
    FORE(it, masks){ 
      FORE(p, poss){ 
        long long mask=*it; 
        if(p->first==0 || (mask&p->first)!=p->first){ 
          poss.insert(make_pair(mask, p->second+__builtin_popcountll(mask&~p->first))); 
        } 
      } 
    } 
    int found[51]={0}; 
    FORE(p, poss) 
      found[p->second]=1; 
    vector<int> res; 
    int must=0; 
    for(int i=0; i<n; i++) 
      if(mustdie[i]) 
        must++; 
    for(int i=50; i>=0; i--) 
      if(found[i]) 
        res.push_back(n-(must+i)); 
    return res; 
  } 
   
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/