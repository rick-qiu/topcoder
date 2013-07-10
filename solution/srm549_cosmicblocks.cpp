/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12034
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

class CosmicBlocks {
public:
    int getNumOrders(vector<int> blockTypes, int minWays, int maxWays);
};

int CosmicBlocks::getNumOrders(vector<int> blockTypes, int minWays, int maxWays) {
    int ret;
    return ret;
}


int test0() {
    vector<int> blockTypes = {2, 2, 2};
    int minWays = 1;
    int maxWays = 1;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
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
    vector<int> blockTypes = {1, 1, 1, 1, 1, 1};
    int minWays = 720;
    int maxWays = 720;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
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
    vector<int> blockTypes = {2, 2};
    int minWays = 1;
    int maxWays = 2;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
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
    vector<int> blockTypes = {1, 2};
    int minWays = 1;
    int maxWays = 2;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> blockTypes = {1};
    int minWays = 1;
    int maxWays = 1;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> blockTypes = {1, 2, 4, 8};
    int minWays = 5;
    int maxWays = 30;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> blockTypes = {1, 2, 4, 8, 16, 32};
    int minWays = 1;
    int maxWays = 720;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 4348;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> blockTypes = {1500, 1500, 1500, 1500, 1500, 7500};
    int minWays = 1;
    int maxWays = 720;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 11963;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> blockTypes = {7500, 7500, 7500, 7500, 7500, 7500};
    int minWays = 1;
    int maxWays = 720;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 14202;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> blockTypes = {7500, 3750, 1875, 937, 468, 200};
    int minWays = 1;
    int maxWays = 720;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 8110;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> blockTypes = {1, 2, 1, 2, 3, 9};
    int minWays = 1;
    int maxWays = 720;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 3180;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> blockTypes = {1, 1, 8, 8, 27, 27};
    int minWays = 1;
    int maxWays = 720;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 3198;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> blockTypes = {2, 5132, 5981};
    int minWays = 624;
    int maxWays = 641;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> blockTypes = {372, 2784, 790};
    int minWays = 138;
    int maxWays = 467;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
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
    vector<int> blockTypes = {5472, 4987, 3903, 5033, 5762, 6908};
    int minWays = 282;
    int maxWays = 710;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> blockTypes = {30, 30, 60, 120, 240, 480};
    int minWays = 1;
    int maxWays = 720;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 8499;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> blockTypes = {30, 30, 60, 120, 240, 480};
    int minWays = 360;
    int maxWays = 360;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> blockTypes = {30, 30, 60, 120, 240, 480};
    int minWays = 180;
    int maxWays = 180;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 112;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> blockTypes = {30, 30, 60, 120, 240, 480};
    int minWays = 45;
    int maxWays = 45;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> blockTypes = {653};
    int minWays = 1;
    int maxWays = 403;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
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
    vector<int> blockTypes = {6049};
    int minWays = 1;
    int maxWays = 410;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> blockTypes = {3594};
    int minWays = 1;
    int maxWays = 146;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> blockTypes = {2768};
    int minWays = 1;
    int maxWays = 632;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> blockTypes = {1190};
    int minWays = 1;
    int maxWays = 304;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
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
    vector<int> blockTypes = {4400};
    int minWays = 1;
    int maxWays = 406;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> blockTypes = {3840, 4758};
    int minWays = 1;
    int maxWays = 199;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> blockTypes = {5563, 2440};
    int minWays = 1;
    int maxWays = 96;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> blockTypes = {4179, 6315};
    int minWays = 1;
    int maxWays = 553;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> blockTypes = {2684, 4685};
    int minWays = 1;
    int maxWays = 605;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> blockTypes = {2847, 4315};
    int minWays = 1;
    int maxWays = 706;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> blockTypes = {1791, 4451};
    int minWays = 1;
    int maxWays = 81;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
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
    vector<int> blockTypes = {6558, 4968, 4052};
    int minWays = 1;
    int maxWays = 378;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> blockTypes = {889, 2759, 5658};
    int minWays = 1;
    int maxWays = 69;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> blockTypes = {64, 6978, 6970};
    int minWays = 1;
    int maxWays = 56;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> blockTypes = {6211, 4589, 401};
    int minWays = 1;
    int maxWays = 661;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> blockTypes = {2186, 4938, 758};
    int minWays = 1;
    int maxWays = 393;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> blockTypes = {2448, 6574, 7103};
    int minWays = 1;
    int maxWays = 337;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> blockTypes = {6010, 2692, 2469, 59};
    int minWays = 1;
    int maxWays = 110;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> blockTypes = {1203, 3691, 4140, 2890};
    int minWays = 1;
    int maxWays = 39;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> blockTypes = {4570, 442, 4421, 1796};
    int minWays = 1;
    int maxWays = 150;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> blockTypes = {3132, 6982, 152, 4390};
    int minWays = 1;
    int maxWays = 328;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> blockTypes = {535, 131, 5069, 3947};
    int minWays = 1;
    int maxWays = 71;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> blockTypes = {3346, 6404, 4982, 2542};
    int minWays = 1;
    int maxWays = 249;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> blockTypes = {7363, 1429, 6780, 3180, 2675};
    int minWays = 1;
    int maxWays = 402;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 498;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> blockTypes = {2765, 2674, 2225, 7025, 6118};
    int minWays = 1;
    int maxWays = 688;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 501;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> blockTypes = {6124, 5410, 2565, 4659, 1611};
    int minWays = 1;
    int maxWays = 508;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 501;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> blockTypes = {1692, 6684, 3177, 1009, 1313};
    int minWays = 1;
    int maxWays = 484;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 538;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> blockTypes = {4925, 1900, 3561, 7444, 1724};
    int minWays = 1;
    int maxWays = 147;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 516;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> blockTypes = {2836, 5221, 3228, 2841, 6049};
    int minWays = 1;
    int maxWays = 376;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 520;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> blockTypes = {7186, 2891, 1984, 3400, 5837, 6100};
    int minWays = 1;
    int maxWays = 646;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 7865;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> blockTypes = {397, 1378, 6648, 5841, 5335, 3708};
    int minWays = 1;
    int maxWays = 660;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 7637;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> blockTypes = {6451, 3210, 704, 1393, 3470, 5670};
    int minWays = 1;
    int maxWays = 318;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 7522;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> blockTypes = {3908, 6514, 149, 2131, 2703, 2476};
    int minWays = 1;
    int maxWays = 558;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 7871;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> blockTypes = {4134, 4114, 5897, 5591, 2230, 3414};
    int minWays = 1;
    int maxWays = 482;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 8135;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> blockTypes = {1224, 4826, 1923, 3428, 3711, 6468};
    int minWays = 1;
    int maxWays = 279;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 7819;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> blockTypes = {1, 2, 3, 4, 5, 6};
    int minWays = 1;
    int maxWays = 720;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 4445;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> blockTypes = {7500, 1000, 7500, 1000, 7500};
    int minWays = 8;
    int maxWays = 88;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 448;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> blockTypes = {7500, 1000, 7500, 1000, 7500, 1000};
    int minWays = 1;
    int maxWays = 720;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 9242;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> blockTypes = {300, 400, 699, 1098, 999, 7500};
    int minWays = 1;
    int maxWays = 720;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 8585;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> blockTypes = {8, 88, 888, 888, 88, 8};
    int minWays = 1;
    int maxWays = 30;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 3227;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> blockTypes = {9, 18, 26, 35, 44, 53};
    int minWays = 1;
    int maxWays = 720;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 8146;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> blockTypes = {7500, 7499, 7498, 7497, 7496, 7495};
    int minWays = 1;
    int maxWays = 720;
    CosmicBlocks* pObj = new CosmicBlocks();
    clock_t start = clock();
    int result = pObj->getNumOrders(blockTypes, minWays, maxWays);
    clock_t end = clock();
    delete pObj;
    int expected = 8195;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22263204&rd=15171&pm=12034
********************************************************************************
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
 
class CosmicBlocks {
public:
  int getNumOrders(vector <int>, int, int);
};
 
vector <int> a;
int ans, cnt;
int n, minw, maxw, height[9], total[9];
int g[9][9];
int b[9], c[9];
int ok[9], deg[9];
 
void find(int v) {
  if (v == n) {
    cnt++;
    return;
  }
  for (int i=0;i<n;i++)
    if (ok[i] && deg[i] == 0) {
      for (int j=0;j<n;j++)
        if (g[i][j]) deg[j]--;
      ok[i] = 0;
      find(v+1);
      ok[i] = 1;
      for (int j=0;j<n;j++)
        if (g[i][j]) deg[j]++;
    }
}
 
int m, fin, last[33], was[33];
int ss[555], ff[555], cc[555], f[555], obr[555], pred[555];
 
void add(int x,int y,int z,int xx,int yy) {
  m++;
  ss[m] = x;
  ff[m] = y;
  cc[m] = z;
  f[m] = xx;
  obr[m] = yy;
  pred[m] = last[x];
  last[x] = m;
}
 
int flow(int v, int w) {
  if (v == fin) return w;
  was[v] = 1;
  int r = 0, j = last[v], ww, t;
  while (j > 0) {
    if (cc[j] > f[j] && !was[ff[j]]) {
      ww = cc[j]-f[j];
      if (w-r < ww) ww = w-r;
      t = flow(ff[j],ww);
      if (t > 0) {
        f[j] += t;
        if (obr[j] != 0) f[obr[j]] -= t;
        r += t;
        if (r == w) break;
      }
    }
    j = pred[j];
  }
  return r;
}
 
void go(int v, int w) {
  if (v == n) {
    for (int i=0;i<n;i++) {
      if (height[i] == 0) continue;
      int sum = 0;
      for (int j=0;j<n;j++)
        if (g[i][j]) sum += a[j];
      if (sum < a[i]) return;
    }
    for (int i=0;i<n;i++) {
      b[i] = a[i];
      c[i] = a[i];
    }
    for (int i=0;i<n;i++)
      for (int j=0;j<n;j++)
        if (g[i][j]) {
          b[i]--; c[j]--;
          if (b[i] < 0 || c[j] < 0) return;
        }
    for (int q=0;q<n;q++) {
      memset(last,0,sizeof(last));
      int need = 0, n1 = 0, n2 = 0;
      int num[33];
      m = 0;
      for (int i=0;i<n;i++)
        if (height[i] == q+1) {
          n1++;
          add(0,n1,b[i],0,0);
          need += b[i];
          num[i] = n1;
        }
      for (int i=0;i<n;i++)
        if (height[i] == q) n2++;
      fin = n1+n2+1;
      int id = n1;
      for (int i=0;i<n;i++)
        if (height[i] == q) {
          id++;
          add(id,fin,c[i],0,0);
          num[i] = id;
        }
      for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
          if (g[i][j] && height[i] == q+1 && height[j] == q) {
            add(num[i],num[j],1000000,0,m+2);
            add(num[j],num[i],0,0,m);
          }
      while (1) {
        for (int i=0;i<=fin;i++) was[i] = 0;
        int t = flow(0,1000000);
        if (t == 0) break;
        need -= t;
      }
      if (need > 0) return;
    }
    for (int i=0;i<n;i++) ok[i] = 1;
    for (int i=0;i<n;i++) deg[i] = 0;
    for (int i=0;i<n;i++)
      for (int j=0;j<n;j++)
        if (g[i][j]) deg[j]++;
    cnt = 0;
    find(0);
    if (minw <= cnt && cnt <= maxw) ans++;
    return;
  }
  g[v][w] = 0;
  if (w < n-1) go(v,w+1);
  else go(v+1,0);
  if (height[v] == height[w]+1) {
    g[v][w] = 1;
    if (w < n-1) go(v,w+1);
    else go(v+1,0);
    g[v][w] = 0;
  }
}
 
void rec(int v) {
  if (v == n) {
    for (int i=0;i<n-1;i++)
      if (total[i] < total[i+1]) return;
    go(0,0);
    return;
  }
  for (int i=0;i<n;i++) {
    height[v] = i;
    total[i] += a[v];
    rec(v+1);
    total[i] -= a[v];
  }
}
 
int CosmicBlocks::getNumOrders(vector <int> a, int minWays, int maxWays) {
  ::a = a;
  n = a.size();
  minw = minWays;
  maxw = maxWays;
  for (int i=0;i<n;i++) total[i] = 0;
  ans = 0;
  rec(0);
  return ans;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/