/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1862
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

class BritishCoins {
public:
    vector<int> coins(int pence);
};

vector<int> BritishCoins::coins(int pence) {
    vector<int> ret;
    return ret;
}


int test0() {
    int pence = 533;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 5};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int pence = 0;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int pence = 6;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 6};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int pence = 4091;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 0, 11};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int pence = 10000;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {41, 13, 4};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int pence = 72;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 6, 0};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int pence = 2400;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 0, 0};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int pence = 504;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 0};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int pence = 61;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 5, 1};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int pence = 76;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 6, 4};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int pence = 669;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 15, 9};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int pence = 889;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 14, 1};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int pence = 1201;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 0, 1};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int pence = 1303;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 8, 7};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int pence = 1363;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 13, 7};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int pence = 1499;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 4, 11};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int pence = 1584;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 12, 0};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int pence = 1845;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 13, 9};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int pence = 1849;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 14, 1};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int pence = 2580;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 15, 0};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int pence = 2682;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 3, 6};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int pence = 2808;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 14, 0};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int pence = 3505;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 12, 1};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int pence = 3937;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16, 8, 1};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int pence = 4022;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16, 15, 2};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int pence = 4179;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 8, 3};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int pence = 4319;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 19, 11};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int pence = 4382;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18, 5, 2};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int pence = 5261;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21, 18, 5};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int pence = 5819;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24, 4, 11};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int pence = 6524;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {27, 3, 8};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int pence = 6601;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {27, 10, 1};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int pence = 7148;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {29, 15, 8};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int pence = 7170;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {29, 17, 6};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int pence = 7192;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {29, 19, 4};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int pence = 7310;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 9, 2};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int pence = 7344;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 12, 0};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int pence = 7494;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {31, 4, 6};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int pence = 7533;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {31, 7, 9};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int pence = 7659;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {31, 18, 3};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int pence = 7946;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {33, 2, 2};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int pence = 8241;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {34, 6, 9};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int pence = 8685;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {36, 3, 9};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int pence = 9143;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {38, 1, 11};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int pence = 9258;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {38, 11, 6};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int pence = 9507;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {39, 12, 3};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int pence = 9600;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {40, 0, 0};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int pence = 9966;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {41, 10, 6};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int pence = 9874;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {41, 2, 10};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int pence = 240;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 0};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int pence = 533;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 5};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int pence = 239;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 19, 11};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int pence = 4091;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 0, 11};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int pence = 12;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int pence = 240;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 0};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int pence = 4091;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 0, 11};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int pence = 10000;
    BritishCoins* pObj = new BritishCoins();
    clock_t start = clock();
    vector<int> result = pObj->coins(pence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {41, 13, 4};
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=7371063&rd=6521&pm=1862
********************************************************************************
/* Hope I didn't write this just to exercise my fingers ...
#include <skills>
#include <inspiration>
#include <bulan> */
#include <string>
#include <vector>
#include <string.h>
#include <iostream>
#include <math.h>
#include <sstream>
using namespace std;
 
vector <string> snaptokenizer (string s, string ch)
{
  vector <string> ret;
  for(int p=0,p2;p<s.size();p=p2+1)
  {
    p2=s.find_first_of(ch,p);
    if(p2==-1) p2=s.size();
    if(p2-p>0) ret.push_back(s.substr(p,p2-p));
  }
  return ret;
}
 
class BritishCoins 
{
public:
vector <int> coins(int pence) 
{
  vector <int> sol;
  sol.resize(3);
  
  sol[0]=pence/240;
  pence%=240;
  sol[1]=pence/12;
  pence%=12;
  sol[2]=pence;
  return sol;
}
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/