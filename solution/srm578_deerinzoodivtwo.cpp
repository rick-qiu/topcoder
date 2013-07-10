/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12540
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

class DeerInZooDivTwo {
public:
    vector<int> getminmax(int N, int K);
};

vector<int> DeerInZooDivTwo::getminmax(int N, int K) {
    vector<int> ret;
    return ret;
}


int test0() {
    int N = 1;
    int K = 0;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 1;
    int K = 1;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 1;
    int K = 2;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 2;
    int K = 0;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 2;
    int K = 1;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 2;
    int K = 2;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 2;
    int K = 3;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 2;
    int K = 4;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 3;
    int K = 0;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 3;
    int K = 1;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 3;
    int K = 2;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 3;
    int K = 3;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 3;
    int K = 4;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 3;
    int K = 5;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 3;
    int K = 6;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 10;
    int K = 0;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 10};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 519;
    int K = 345;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {174, 346};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 942;
    int K = 1427;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 228};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 958;
    int K = 1267;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 324};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 975;
    int K = 49;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {926, 950};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 267;
    int K = 271;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 131};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 337;
    int K = 325;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 174};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 796;
    int K = 1589;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 683;
    int K = 250;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {433, 558};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 566;
    int K = 403;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {163, 364};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 172;
    int K = 91;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {81, 126};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 370;
    int K = 393;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 173};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 915;
    int K = 1104;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 363};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 912;
    int K = 1711;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 56};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 68;
    int K = 77;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 29};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 778;
    int K = 697;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {81, 429};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 106;
    int K = 76;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 68};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 142;
    int K = 160;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 62};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 301;
    int K = 275;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {26, 163};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 364;
    int K = 12;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {352, 358};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 306;
    int K = 339;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 136};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 363;
    int K = 156;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {207, 285};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 126;
    int K = 39;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {87, 106};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 970;
    int K = 58;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {912, 941};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 655;
    int K = 1289;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 10};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 227;
    int K = 177;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {50, 138};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 984;
    int K = 139;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {845, 914};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 977;
    int K = 433;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {544, 760};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 649;
    int K = 533;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {116, 382};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 780;
    int K = 1290;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 135};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 883;
    int K = 412;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {471, 677};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 937;
    int K = 1434;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 220};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 80;
    int K = 93;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 33};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 348;
    int K = 378;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 159};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 603;
    int K = 729;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 238};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 402;
    int K = 597;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 103};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 161;
    int K = 292;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 15};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 887;
    int K = 1153;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 310};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 654;
    int K = 321;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {333, 493};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 435;
    int K = 355;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {80, 257};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 275;
    int K = 340;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 105};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 14;
    int K = 19;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 4};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 206;
    int K = 350;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 31};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 113;
    int K = 49;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {64, 88};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 287;
    int K = 82;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {205, 246};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 614;
    int K = 1015;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 106};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 965;
    int K = 609;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {356, 660};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 969;
    int K = 517;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {452, 710};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 882;
    int K = 1091;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 336};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 434;
    int K = 107;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {327, 380};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 100;
    int K = 193;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 100;
    int K = 100;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 50};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 100;
    int K = 0;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 100};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 5;
    int K = 2;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 650;
    int K = 350;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {300, 475};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 5;
    int K = 10;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 10;
    int K = 5;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 7};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 7;
    int K = 3;
    DeerInZooDivTwo* pObj = new DeerInZooDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->getminmax(N, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 5};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23117611&rd=15498&pm=12540
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
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
 
 
class DeerInZooDivTwo {
public:
  vector <int> getminmax(int N, int K) {
    int maxx, minn;
    if (K % 2 == 0) {
      maxx = N - (K/2);
    } else {
      maxx = N - (K/2) - 1;
    }
    if ( N - K > 0) {
      minn = N - K;
    } else {
      minn = 0;
    }
    
    vector<int> v(2);
      v[0] = minn;
      v[1] = maxx;
    
    return v;
  }
};
 
 
 
//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/