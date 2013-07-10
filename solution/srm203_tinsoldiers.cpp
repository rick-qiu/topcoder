/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2910
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

class TinSoldiers {
public:
    int lineUps(vector<int> rankCounts);
};

int TinSoldiers::lineUps(vector<int> rankCounts) {
    int ret;
    return ret;
}


int test0() {
    vector<int> rankCounts = {2, 2, 1};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> rankCounts = {2, 2, 2};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> rankCounts = {5};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> rankCounts = {5, 1};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> rankCounts = {4, 5};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 66;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> rankCounts = {4, 2, 2, 5, 4};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 643245120;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> rankCounts = {5, 1, 1, 1};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 168;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> rankCounts = {5, 4, 3, 3};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 6306300;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> rankCounts = {3, 2};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> rankCounts = {2, 1, 4};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> rankCounts = {1, 4, 2, 4, 4};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 23648940;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> rankCounts = {1, 4};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> rankCounts = {2, 1, 2};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> rankCounts = {3, 3, 4};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 2100;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> rankCounts = {5, 5, 1, 4};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 1891890;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> rankCounts = {1, 5, 3};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 252;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> rankCounts = {4, 1, 4, 2};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 17340;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> rankCounts = {5, 2, 4, 3};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 1261260;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> rankCounts = {1, 5, 1, 2, 4};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 540540;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> rankCounts = {4, 4, 2, 1, 1};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 207900;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> rankCounts = {1, 5, 4, 3};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 180180;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> rankCounts = {4, 5, 5};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 126126;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> rankCounts = {5, 3, 2, 4};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 1261260;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> rankCounts = {5, 2, 2, 4};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 270360;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> rankCounts = {5, 4, 2};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 3480;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> rankCounts = {2, 1, 3, 2, 5};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 1081080;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> rankCounts = {2, 2, 1};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> rankCounts = {1, 2};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
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
    vector<int> rankCounts = {2, 4, 4, 4, 3};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 1072073520;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> rankCounts = {3, 4, 4};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 5790;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> rankCounts = {3, 3, 4};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 2100;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> rankCounts = {3, 4, 1};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 140;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> rankCounts = {3, 4, 4};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 5790;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> rankCounts = {2, 4, 5};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 3480;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> rankCounts = {4, 4, 3, 2};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 450540;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> rankCounts = {1, 2};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> rankCounts = {1, 2, 3, 2, 5};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 1081080;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> rankCounts = {2, 3};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> rankCounts = {5, 3};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> rankCounts = {5, 1};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> rankCounts = {5, 1, 2, 1, 3};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 166320;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> rankCounts = {4, 4};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> rankCounts = {4, 2};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> rankCounts = {4, 4, 5, 3};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 25225200;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> rankCounts = {2, 5, 1};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> rankCounts = {4, 5, 1, 5};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 1891890;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> rankCounts = {4, 4};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> rankCounts = {4, 4};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> rankCounts = {2, 4, 5, 3};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 1261260;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> rankCounts = {3, 2, 5, 3};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 360360;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> rankCounts = {1, 4, 4, 4, 5};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 1929727800;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> rankCounts = {5, 5, 5, 4};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 1466593128;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> rankCounts = {4, 4, 3, 3, 3};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 1429428000;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> rankCounts = {3, 3, 2, 4, 1};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 1801800;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> rankCounts = {5, 3, 3, 3, 3};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 1143542400;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> rankCounts = {4, 2, 1};
    TinSoldiers* pObj = new TinSoldiers();
    clock_t start = clock();
    int result = pObj->lineUps(rankCounts);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=275071&rd=5849&pm=2910
********************************************************************************
/*
 * Hey, stop reading this code right this instant!
 * You don't know what it could do to your fragile mind!
 */
 
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <deque>
#include <stack>
#include <cmath>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <climits>
#include <set>
#include <map>
#include <numeric>
#include <ctime>
#include <functional>
#include <regex.h>
#include <queue>
//#include <brains>  /* commented out to avoid compile error -- brains not found */
 
using namespace std;
 
#define debug(x) cout << #x << " = " << x << endl
#define len length()
#define si size()
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<vi> vvi;
typedef vector<vb> vvb;
typedef long long ii;
#define mod(A, B) ((((A) % (B)) + (B)) % (B))
#define b2e(A) (A).begin(), (A).end()
#define e2b(A) (A).rbegin(), (A).rend()
#define rev(A) std::reverse(b2e(A))
#define s(A) std::sort(b2e(A))
#define ss(A) std::stable_sort(b2e(A))
#define un(A) std::unique(b2e(A))
#define er(A) (A).erase(un(A), (A).end())
#define Fill(A,B) std::fill(b2e(A), B)
#define minelt(A) *min_element(b2e(A))
#define maxelt(A) *max_element(b2e(A))
#define nextp(A) next_permutation(b2e(A))
#define prevp(A) prev_permutation(b2e(A))
#define pb(x) push_back((x));
 
string itos (int i) {stringstream s; s << i; return s.str();}
string lltos (long long i) {stringstream s; s << i; return s.str();}
int ipow(int a, int b) {return (int) (std::pow((double) (a), (double) (b)));}
template <class T>
ostream& operator << (ostream& os, vector<T> temp) {
  os << "{";
  for (int i = 0; i < temp.si; i++) os << (i?", ":"") << temp[i];
  os << "}";
  return os;
}
template<class S,class T>
ostream& operator << (ostream &os ,const pair<S,T> &a) {
  os << "(" << a.first << ", " << a.second << ")";
  return os;
}
ii gcd(ii a, ii b) {if (a<0&&b<0) return gcd(-a,-b); if (a==0) return b; if (b==0) return a; if (a > b) return gcd(b, a); if (!(b % a)) return a; return gcd(a, b % a);}
//int dx[] = {1,0,-1,0}, dy[] = {0,1,0,-1};
//int dx[] = {1,1,1,0,0,-1,-1,-1}, dy[] = {1,0,-1,1,-1,1,0,-1};
 
/*
public class antimatter extends Idiot {
  String[] codeSolution(String[] problemStatement) {
    //re-code this method!
    //it always returns quickly, but is often incorrect (about 33% of the time)
    return null;
  }
}
*/
 
//----------------------------
 
class TinSoldiers {
  public:
  int lineUps(vector <int> rankCounts) {
    long long V = getTotal(rankCounts);
    long long Y = getPalin(rankCounts);
    debug(V); debug(Y);
    if ((V+Y)&1) cout << "uh-oh\n";
    return (V+Y)/2;
  }
  long long getPalin(vi x) {
    int s = 0;
    for (int i = 0; i < x.si; i++) s += x[i];
    if (s & 1) {
      //there must be one that is odd
      //the rest must be even
      int nodd = 0;
      int which = -1;
      for (int i = 0; i < x.si; i++) if (x[i] & 1) nodd++, which = i;
      if (nodd != 1) return 0;
      x[which]--;
      if (x[which] == 0) x.erase(x.begin() + which);
      return gp2(x);
    }
    else {
      //all must be even
      for (int i = 0; i < x.si; i++) if (x[i] & 1) return 0;
      return gp2(x);
    }
  }
  long long gp2(vi x) {
    //all even
    for (int i = 0; i < x.si; i++) x[i] /= 2;
    return getTotal(x);
  }
  long long getTotal(vi x) {
    int s = 0;
    for (int i = 0; i < x.si; i++) s += x[i];
    long long ret = 1;
    for (int i = 1; i <= s; i++) {
      ret *= i;
      for (int j = 0; j < x.si; j++) {
        if (!x[j]) continue;
        while (x[j] && !(ret % x[j])) {ret /= x[j]; x[j]--;}
      }
    }
    return ret;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/