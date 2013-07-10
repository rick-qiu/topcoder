/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11954
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

class GreatFairyWar {
public:
    int minHP(vector<int> dps, vector<int> hp);
};

int GreatFairyWar::minHP(vector<int> dps, vector<int> hp) {
    int ret;
    return ret;
}


int test0() {
    vector<int> dps = {1, 2};
    vector<int> hp = {3, 4};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> dps = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> hp = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> dps = {20, 12, 10, 10, 23, 10};
    vector<int> hp = {5, 7, 7, 5, 7, 7};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 1767;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> dps = {5, 7, 7, 5, 7, 7};
    vector<int> hp = {20, 12, 10, 10, 23, 10};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 1998;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> dps = {30, 2, 7, 4, 7, 8, 21, 14, 19, 12};
    vector<int> hp = {2, 27, 18, 19, 14, 8, 25, 13, 21, 30};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 11029;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> dps = {1};
    vector<int> hp = {1};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> dps = {8, 19, 7, 12, 16, 16, 10, 10, 10, 18, 14, 17, 8, 18, 12, 15};
    vector<int> hp = {17, 8, 9, 18, 11, 10, 11, 7, 7, 12, 13, 18, 17, 13, 13, 10};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 21938;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> dps = {5, 1, 5, 2, 7, 7, 6, 7, 5, 5, 1, 6, 5, 1, 5, 5, 2, 1, 1};
    vector<int> hp = {2, 5, 2, 3, 6, 5, 4, 2, 3, 2, 3, 7, 6, 5, 7, 2, 2, 5, 7};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 2585;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> dps = {5, 6, 6, 5, 4, 5, 4, 5};
    vector<int> hp = {4, 4, 4, 6, 6, 6, 5, 5};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 816;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> dps = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
    vector<int> hp = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 1056;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> dps = {12, 8, 15, 11, 10, 9, 10, 11, 15, 15, 11, 9, 14, 13, 12, 12, 11, 9, 10, 10, 10};
    vector<int> hp = {14, 13, 9, 15, 9, 14, 11, 8, 8, 9, 13, 14, 15, 9, 15, 9, 15, 15, 14, 12, 11};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 30283;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> dps = {2, 1, 2, 1, 2, 2, 1, 1, 2, 1, 1, 2, 2, 2};
    vector<int> hp = {1, 2, 2, 2, 2, 2, 1, 1, 1, 2, 2, 2, 2, 1};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 279;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> dps = {3, 5, 5, 5, 1, 1, 1, 2, 2, 2, 4, 2, 5, 5, 2, 1, 4, 1};
    vector<int> hp = {2, 4, 3, 1, 2, 2, 4, 4, 2, 1, 4, 3, 1, 5, 5, 1, 1, 2};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 1209;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> dps = {19, 19, 20, 19, 19, 20, 19, 19, 20, 19, 20, 19, 20, 20, 20, 19};
    vector<int> hp = {20, 20, 19, 20, 19, 19, 20, 19, 19, 19, 19, 20, 20, 20, 20, 19};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 51771;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> dps = {4, 7, 6, 2, 5, 3, 2, 6, 2, 5};
    vector<int> hp = {6, 6, 2, 7, 3, 7, 5, 4, 2, 2};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 1063;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> dps = {6, 3, 3, 3, 4, 8, 6, 5, 4, 8, 7, 7, 8, 2, 2, 2, 6, 5, 6, 2, 3, 3};
    vector<int> hp = {3, 5, 3, 3, 8, 5, 2, 3, 4, 5, 7, 3, 7, 4, 7, 6, 4, 8, 4, 6, 5, 8};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 5081;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> dps = {4, 6, 7, 4, 7, 5, 4, 4, 5, 5, 6, 5, 6, 4, 5, 6, 6, 5, 6, 4, 4, 7, 6, 5, 5, 6, 7, 6};
    vector<int> hp = {7, 4, 6, 7, 7, 4, 7, 6, 5, 4, 4, 5, 6, 7, 7, 5, 7, 6, 7, 6, 6, 5, 4, 4, 5, 6, 7, 5};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 12752;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> dps = {10, 11, 11};
    vector<int> hp = {11, 10, 10};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 682;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> dps = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> hp = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 105;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> dps = {9, 5, 1, 3, 10, 10, 9, 8, 4, 7, 8, 2, 9, 4, 6, 7, 9, 5, 1, 5, 10};
    vector<int> hp = {8, 1, 4, 6, 9, 5, 8, 9, 6, 4, 4, 10, 9, 8, 9, 9, 6, 1, 8, 3, 4};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 9028;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> dps = {8, 21, 20, 19, 25, 29, 12, 16, 27, 10, 16, 22, 23, 16, 9, 24};
    vector<int> hp = {22, 16, 20, 13, 23, 18, 21, 17, 13, 11, 18, 22, 15, 21, 17, 14};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 45412;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> dps = {6, 6, 3, 16, 12, 16, 16, 5, 18, 11, 17, 19, 14, 15, 10, 18, 9};
    vector<int> hp = {18, 4, 15, 17, 3, 8, 8, 18, 8, 4, 17, 19, 15, 4, 3, 15, 7};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 23109;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> dps = {25, 25, 13, 16, 18, 21, 19, 18, 14, 20};
    vector<int> hp = {20, 23, 18, 23, 27, 22, 28, 14, 13, 25};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 21604;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> dps = {5, 6, 5, 5, 5, 6, 5};
    vector<int> hp = {7, 7, 5, 5, 7, 7, 6};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 937;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> dps = {6, 13, 14, 15, 4, 6, 6, 13, 6};
    vector<int> hp = {11, 4, 14, 13, 5, 5, 4, 6, 15};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 3401;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> dps = {11, 14, 11, 14, 11, 11, 13, 11, 13, 14, 13, 11, 12, 10, 10, 9, 12, 10, 13, 12};
    vector<int> hp = {13, 9, 10, 13, 11, 9, 11, 14, 10, 10, 13, 13, 13, 14, 13, 9, 10, 13, 12, 14};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 27608;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> dps = {13, 13, 10, 11, 11, 10, 11, 13, 10, 11, 12, 10, 11, 12, 11, 12};
    vector<int> hp = {12, 12, 10, 12, 11, 11, 10, 13, 10, 12, 13, 11, 12, 10, 13, 13};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 17456;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> dps = {12, 10};
    vector<int> hp = {11, 11};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 352;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> dps = {16, 21, 18, 16, 21, 12, 13, 12, 13, 15, 13, 11, 16, 17, 11};
    vector<int> hp = {14, 18, 21, 14, 18, 13, 16, 12, 14, 19, 18, 18, 13, 16, 14};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 27282;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> dps = {6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6};
    vector<int> hp = {6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 2376;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> dps = {18, 13, 5, 12, 11, 5, 10, 13, 13, 14, 15, 12, 18};
    vector<int> hp = {9, 9, 7, 15, 7, 5, 18, 11, 13, 9, 13, 6, 16};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 11883;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> dps = {19, 18, 19, 19, 19, 17};
    vector<int> hp = {18, 18, 17, 19, 19, 17};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 6930;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> dps = {28, 28, 28, 26, 27, 25, 27, 28, 25, 27, 28, 25, 25, 25, 28, 27};
    vector<int> hp = {25, 27, 28, 26, 25, 28, 26, 27, 26, 25, 25, 28, 26, 28, 27, 28};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 95001;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> dps = {12, 12, 10, 13, 14, 14, 12, 11, 12, 13, 14, 12, 10, 14, 10, 13, 13, 10};
    vector<int> hp = {11, 13, 12, 11, 14, 10, 11, 14, 14, 11, 13, 11, 12, 14, 12, 12, 12, 12};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 24998;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> dps = {27, 26, 26, 29};
    vector<int> hp = {26, 29, 26, 29};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 7428;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> dps = {5, 2, 4, 5, 2, 3};
    vector<int> hp = {2, 1, 3, 1, 5, 1};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 138;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> dps = {11, 10, 8, 10, 9};
    vector<int> hp = {10, 10, 9, 8, 9};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 1326;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> dps = {2, 2, 1, 2, 2, 2, 1, 2, 2, 1, 2, 1, 1, 1, 2, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 2, 1, 2, 1};
    vector<int> hp = {1, 1, 1, 2, 1, 1, 2, 2, 2, 1, 1, 1, 2, 1, 2, 2, 2, 1, 2, 2, 1, 1, 2, 1, 1, 1, 1, 2, 2};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 833;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> dps = {13, 4, 5, 9, 7, 9};
    vector<int> hp = {4, 4, 6, 13, 4, 4};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 929;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> dps = {15, 14, 13, 14, 17, 14, 14, 16, 13, 17};
    vector<int> hp = {15, 14, 16, 12, 13, 15, 17, 16, 12, 15};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 11865;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> dps = {25, 29};
    vector<int> hp = {29, 26};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 2320;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> dps = {24, 23, 25, 23, 22};
    vector<int> hp = {23, 25, 24, 24, 25};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 8326;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> dps = {4, 4, 4, 9, 2, 7, 4, 3, 7, 4, 2};
    vector<int> hp = {4, 3, 6, 3, 9, 2, 2, 6, 8, 5, 2};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 1293;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> dps = {18, 19, 21, 22, 21, 22, 21, 19, 23, 18, 23, 18, 24, 19, 24, 22, 19, 21};
    vector<int> hp = {19, 18, 23, 22, 22, 20, 24, 22, 18, 22, 18, 24, 19, 19, 22, 19, 20, 24};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 74571;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> dps = {5, 7, 9, 12, 11, 7, 9, 8, 8, 5, 17, 3, 12, 3, 13, 7};
    vector<int> hp = {17, 15, 15, 9, 13, 8, 10, 9, 6, 17, 4, 3, 13, 16, 10, 13};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 13657;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> dps = {10, 14, 15, 14};
    vector<int> hp = {22, 8, 6, 4};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 1740;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> dps = {20, 24};
    vector<int> hp = {28, 22};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 1760;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> dps = {3, 3, 4, 10, 9, 4, 9, 5, 5, 4, 9, 4};
    vector<int> hp = {4, 11, 10, 7, 8, 5, 7, 8, 5, 6, 3, 3};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 3368;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> dps = {8, 22, 11, 10, 24, 23, 14, 14, 13, 24, 17, 18, 18, 4, 15, 5, 14, 10, 13, 6};
    vector<int> hp = {2, 8, 8, 19, 19, 7, 19, 12, 18, 18, 9, 19, 11, 25, 5, 15, 25, 5, 25, 9};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 34668;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> dps = {15, 18, 16};
    vector<int> hp = {21, 15, 18};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 1827;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> dps = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    vector<int> hp = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 702;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> dps = {22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22};
    vector<int> hp = {22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 44044;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> dps = {6, 6, 7, 7, 7, 6, 7, 6, 6, 7, 6, 6, 7};
    vector<int> hp = {7, 7, 6, 6, 6, 7, 7, 6, 6, 7, 7, 7, 6};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 3844;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> dps = {7, 7, 7, 7, 7, 7, 7};
    vector<int> hp = {7, 7, 7, 7, 7, 7, 7};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 1372;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> dps = {19, 19, 23, 23, 25, 25, 23, 24, 21, 23, 22, 27, 25, 25, 23, 25, 22, 23, 26, 24, 22, 27, 24, 27, 26, 27, 24, 25, 21, 25};
    vector<int> hp = {21, 22, 21, 26, 23, 24, 20, 23, 24, 25, 26, 22, 26, 21, 23, 25, 23, 23, 19, 22, 22, 19, 27, 21, 23, 24, 23, 25, 19, 20};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 259513;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> dps = {10, 11, 8, 12, 11, 9, 10, 10, 11, 8, 12, 10, 8, 10, 11, 12, 8};
    vector<int> hp = {12, 10, 11, 12, 8, 11, 10, 12, 10, 11, 8, 9, 9, 11, 9, 10, 11};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 15992;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> dps = {22, 19, 10, 14, 24, 28, 12, 10, 11, 7, 27, 9, 11, 12};
    vector<int> hp = {15, 8, 14, 21, 26, 14, 12, 10, 20, 11, 21, 16, 14, 28};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 23144;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> dps = {13, 14, 14, 13, 14, 13, 14, 14, 14, 14, 14, 14, 13, 13, 13, 14, 14, 14, 14, 14, 14, 14, 14, 14, 13, 13};
    vector<int> hp = {14, 14, 13, 14, 13, 14, 13, 14, 14, 14, 13, 14, 13, 14, 14, 14, 13, 14, 13, 14, 13, 14, 13, 14, 14, 14};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 65640;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> dps = {2, 4};
    vector<int> hp = {1, 1};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> dps = {15, 22, 11};
    vector<int> hp = {13, 22, 19};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 1559;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> dps = {20};
    vector<int> hp = {20};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 400;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> dps = {6, 7, 5, 6, 4, 5};
    vector<int> hp = {5, 5, 6, 3, 8, 7};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 572;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> dps = {19, 21, 26, 25, 14, 18, 24, 24, 14, 18, 20, 17, 19, 18, 20, 19, 17, 17, 14, 15};
    vector<int> hp = {19, 18, 14, 26, 24, 17, 26, 20, 20, 20, 17, 22, 20, 15, 23, 14, 17, 23, 16, 19};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 74847;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> dps = {7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7};
    vector<int> hp = {7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 19894;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> dps = {30, 11, 17, 15, 28, 22};
    vector<int> hp = {25, 28, 26, 3, 21, 12};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 9320;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> dps = {22, 22, 22, 21, 22};
    vector<int> hp = {22, 21, 22, 22, 22};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 7085;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> dps = {7, 13, 9, 13, 19, 11, 4, 11, 5, 5, 18, 18, 17, 9, 4, 13, 4, 4, 18};
    vector<int> hp = {21, 8, 6, 4, 14, 14, 5, 11, 20, 14, 7, 14, 17, 6, 21, 20, 11, 17, 9};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 23619;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> dps = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    vector<int> hp = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 760;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> dps = {8, 7, 7, 8, 9, 9, 9, 9, 9, 9, 9, 7, 8, 7, 8};
    vector<int> hp = {7, 8, 8, 8, 9, 7, 7, 7, 8, 7, 9, 7, 9, 9, 9};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 7632;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> dps = {15, 16, 10, 10, 17, 16, 13, 13, 9, 17, 15, 13, 9, 10, 15, 11};
    vector<int> hp = {17, 13, 16, 16, 11, 12, 9, 17, 12, 16, 11, 11, 15, 11, 14, 15};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 23739;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> dps = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> hp = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 435;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> dps = {16, 18, 17, 17, 18, 16, 16, 17, 18, 17, 15, 18, 16, 16, 17, 16, 16, 15, 17, 16, 18, 18, 18, 17, 15, 15};
    vector<int> hp = {18, 16, 15, 17, 15, 17, 16, 17, 17, 17, 16, 17, 18, 17, 17, 18, 17, 15, 16, 15, 15, 17, 18, 18, 18, 18};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 96313;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> dps = {9, 4, 9, 4, 8, 1, 8, 6, 8, 4, 4, 6, 9, 7, 2, 8, 2, 9, 2, 2, 5, 5, 6, 4, 4, 2, 3, 5};
    vector<int> hp = {8, 2, 1, 5, 7, 9, 6, 5, 4, 7, 5, 3, 5, 5, 3, 9, 4, 7, 9, 8, 5, 8, 3, 1, 3, 7, 5, 9};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 10142;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> dps = {23, 22, 20, 21, 22, 21, 22, 21, 20, 20, 22, 20, 23, 21, 21};
    vector<int> hp = {21, 22, 23, 20, 23, 20, 22, 22, 23, 20, 21, 21, 20, 23, 20};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 54687;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> dps = {12, 11, 11, 11, 11, 12, 12, 11, 12, 12, 12, 11, 11, 12, 11, 11, 11, 11, 12};
    vector<int> hp = {11, 12, 11, 12, 11, 11, 12, 12, 11, 11, 12, 12, 11, 12, 12, 12, 11, 11, 12};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 24884;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> dps = {15, 21, 22, 20, 19, 19};
    vector<int> hp = {28, 27, 23, 21, 24, 19};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 10306;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> dps = {22, 22, 26, 22, 25, 20, 28, 28, 27, 17, 21, 16};
    vector<int> hp = {23, 24, 28, 19, 28, 17, 28, 25, 16, 17, 27, 18};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 40493;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> dps = {27, 26, 25, 27, 26, 27, 25, 26, 27, 27, 27, 27};
    vector<int> hp = {26, 27, 26, 25, 26, 27, 26, 25, 26, 25, 27, 25};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 53895;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> dps = {4, 5, 5, 2, 4, 6, 6, 6};
    vector<int> hp = {5, 7, 7, 4, 4, 7, 7, 6};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 1061;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> dps = {18, 17, 16, 16, 16, 17, 20, 20, 20, 17, 20, 16, 18, 16, 18, 16, 16, 17, 19, 16, 20, 20, 20, 19, 19, 17, 20, 17, 20, 20};
    vector<int> hp = {16, 18, 16, 17, 19, 19, 18, 20, 17, 17, 20, 16, 16, 20, 18, 19, 19, 20, 20, 18, 17, 18, 18, 18, 16, 20, 19, 20, 16, 19};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 153511;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> dps = {9, 11, 9, 9, 2, 7, 2, 5, 10, 3, 2, 8, 11, 4, 9, 7, 9, 6, 5, 2};
    vector<int> hp = {6, 5, 4, 3, 6, 7, 5, 7, 5, 5, 7, 7, 11, 10, 9, 5, 10, 5, 10, 9};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 7733;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> dps = {7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7};
    vector<int> hp = {7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 7497;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> dps = {24, 24, 25, 25, 23, 24, 24, 25, 23, 24, 25, 25, 23, 23, 24, 23, 23, 23, 23, 23, 25, 23, 23, 25, 23, 24, 23, 23};
    vector<int> hp = {24, 23, 24, 24, 25, 23, 25, 23, 24, 24, 24, 24, 24, 23, 24, 23, 25, 25, 23, 23, 24, 23, 23, 24, 23, 23, 23, 24};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 228033;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> dps = {28, 28, 28, 27, 27, 28, 27, 28};
    vector<int> hp = {28, 28, 28, 27, 28, 28, 27, 27};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 27556;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> dps = {7, 8, 4, 7, 10, 10, 5, 4, 9, 10, 8, 8, 9, 5, 4, 10};
    vector<int> hp = {6, 6, 4, 4, 6, 5, 7, 9, 9, 10, 6, 3, 6, 4, 7, 7};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 6142;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> dps = {9, 9, 7, 11, 9, 8, 6, 10, 13, 6, 10, 4, 12, 10, 7, 9, 7, 7, 4, 13, 13, 4, 13, 5, 11, 11, 13, 13, 7};
    vector<int> hp = {8, 5, 8, 5, 9, 6, 13, 6, 6, 10, 8, 8, 9, 6, 10, 10, 7, 5, 8, 11, 13, 4, 6, 5, 11, 7, 12, 9, 12};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 31517;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> dps = {17, 20, 20, 19, 21, 17, 16, 16, 23, 22, 16, 22, 23, 24, 23, 19, 20, 16, 23, 16, 20, 22, 17};
    vector<int> hp = {19, 21, 19, 24, 22, 16, 22, 16, 21, 19, 16, 20, 20, 18, 18, 17, 17, 18, 19, 17, 24, 19, 24};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 106368;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> dps = {3, 1, 1, 3, 3, 3, 2, 1, 2, 3, 1, 2, 2, 1, 1, 1, 3, 3, 2, 2, 2, 1, 3, 3, 1, 2, 1, 3, 1};
    vector<int> hp = {2, 2, 3, 2, 1, 1, 3, 3, 3, 1, 2, 1, 3, 1, 2, 3, 3, 2, 1, 2, 1, 2, 2, 3, 1, 3, 2, 1, 2};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 1703;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> dps = {2, 2, 3, 4, 2, 4, 2, 2, 3, 3, 3, 4, 4, 4, 3, 2, 3, 4, 3, 3, 2, 3, 3, 2, 3, 3};
    vector<int> hp = {3, 3, 4, 4, 2, 4, 4, 3, 3, 2, 4, 4, 4, 4, 2, 2, 4, 4, 2, 2, 3, 4, 2, 3, 4, 3};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 3387;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> dps = {7, 6, 6, 6, 6, 8, 8, 6, 8, 8, 7, 7, 7, 9, 9, 7, 6, 8, 7, 6, 7};
    vector<int> hp = {6, 8, 9, 7, 8, 7, 9, 7, 7, 8, 6, 9, 9, 7, 7, 8, 7, 6, 7, 7, 9};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 12584;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> dps = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> hp = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 105;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> dps = {8, 2, 6, 13, 13};
    vector<int> hp = {6, 4, 9, 7, 3};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 897;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> dps = {15, 15, 11, 13, 11, 11};
    vector<int> hp = {13, 11, 12, 13, 12, 15};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 3095;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> dps = {22, 24, 25, 23, 17, 17, 24, 18, 17, 25, 16, 23, 18, 20, 19, 22, 21, 21, 20, 15, 21, 16, 18, 15, 25, 18};
    vector<int> hp = {22, 19, 22, 20, 16, 19, 18, 24, 20, 24, 17, 16, 18, 21, 16, 24, 18, 23, 25, 18, 16, 15, 18, 24, 15, 15};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 134756;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> dps = {6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6};
    vector<int> hp = {6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 9108;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> dps = {18, 14, 11, 14, 21, 21, 23};
    vector<int> hp = {8, 21, 8, 17, 17, 21, 16};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 7620;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> dps = {6, 6, 6, 6, 6, 6, 6, 6, 6};
    vector<int> hp = {6, 6, 6, 6, 6, 6, 6, 6, 6};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 1620;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> dps = {11, 12, 8, 11, 14, 8, 8, 8, 13};
    vector<int> hp = {11, 13, 12, 11, 16, 10, 8, 9, 11};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 5361;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> dps = {9, 9, 10, 9, 9, 9, 9, 9, 9, 10, 9, 10};
    vector<int> hp = {9, 10, 10, 9, 9, 10, 9, 9, 10, 10, 10, 9};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 6889;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> dps = {8, 8, 8, 8, 8, 8, 8, 8};
    vector<int> hp = {8, 8, 8, 8, 8, 8, 8, 8};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 2304;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> dps = {11, 7, 9, 7, 9, 11, 7, 10, 8, 11, 9, 8, 9, 9, 9};
    vector<int> hp = {10, 8, 7, 7, 11, 9, 8, 8, 10, 7, 11, 9, 10, 11, 9};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 9391;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> dps = {8};
    vector<int> hp = {16};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 128;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> dps = {8, 15, 6, 9, 8, 13, 10};
    vector<int> hp = {14, 4, 14, 15, 2, 14, 7};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 2908;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> dps = {12, 16, 17, 18, 16, 17, 13, 15, 14, 16, 17, 16, 18, 12, 17, 18, 12, 18, 14, 18};
    vector<int> hp = {15, 17, 13, 12, 18, 12, 16, 18, 14, 18, 17, 12, 18, 16, 14, 18, 13, 12, 17, 14};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 50600;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> dps = {11, 6, 12, 9, 14, 8, 10, 16, 16, 9};
    vector<int> hp = {8, 10, 7, 13, 6, 8, 8, 6, 10, 10};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 5516;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> dps = {4, 5, 5, 4, 5, 5, 6, 7, 5, 8, 4, 6};
    vector<int> hp = {6, 6, 4, 3, 3, 6, 7, 8, 4, 3, 5, 6};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 2222;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> dps = {20, 18, 20, 18, 14, 19, 15, 19, 21, 15, 20, 19, 20, 18, 17, 14};
    vector<int> hp = {17, 17, 14, 15, 15, 16, 20, 21, 17, 21, 21, 14, 17, 15, 19, 21};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 40961;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> dps = {11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 12, 12, 11, 11, 12, 12, 12, 12, 12};
    vector<int> hp = {12, 11, 12, 12, 11, 12, 12, 12, 11, 11, 12, 12, 12, 12, 12, 11, 12, 11, 12};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 25682;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> dps = {5, 5, 15, 15, 5, 4, 13, 11, 11, 12, 17, 10, 15, 5, 12, 17, 12, 3, 3, 16};
    vector<int> hp = {14, 14, 7, 14, 7, 8, 10, 15, 12, 13, 12, 6, 7, 17, 17, 12, 9, 17, 9, 18};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 25403;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> dps = {28, 19, 22, 29, 24, 21, 19, 24, 29, 23, 19, 23, 25, 26, 25, 19, 23, 20, 25, 22, 26, 27, 25, 26, 24, 22, 29, 19, 24};
    vector<int> hp = {20, 29, 21, 28, 28, 20, 22, 21, 28, 19, 22, 21, 28, 28, 23, 25, 25, 27, 25, 24, 21, 29, 22, 21, 27, 29, 29, 26, 27};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 249877;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> dps = {13, 25, 25, 21, 24, 24, 21, 21, 12, 14};
    vector<int> hp = {27, 16, 17, 19, 12, 24, 23, 18, 15, 21};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 20443;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> dps = {3, 2, 3, 2, 3};
    vector<int> hp = {2, 2, 3, 2, 2};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 86;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> dps = {1, 3, 1, 2, 3, 3, 1, 2, 3, 1, 1, 1, 3, 3, 1, 2, 2, 2, 3, 2, 2, 1, 2, 3, 3, 3, 1};
    vector<int> hp = {3, 1, 3, 3, 3, 3, 1, 2, 3, 3, 1, 2, 2, 2, 1, 2, 2, 1, 1, 2, 2, 2, 2, 2, 2, 3, 2};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 1710;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> dps = {22, 21, 22, 21, 22, 21};
    vector<int> hp = {21, 22, 22, 22, 22, 21};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 9750;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> dps = {6, 8, 8, 4, 4, 5, 4, 4, 5, 6, 5, 5, 5, 4, 8};
    vector<int> hp = {8, 6, 4, 4, 8, 6, 5, 7, 4, 7, 4, 4, 6, 7, 5};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 3677;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> dps = {29, 13, 27, 25, 25, 19, 29, 18, 20, 23, 13, 18, 26, 16, 14, 26, 24, 13, 24, 16, 22, 27, 17, 20, 29, 17, 26, 15, 24, 26};
    vector<int> hp = {26, 17, 18, 18, 17, 29, 29, 18, 21, 19, 29, 15, 26, 21, 15, 15, 16, 21, 17, 13, 14, 28, 20, 24, 18, 29, 24, 17, 28, 26};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 204074;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> dps = {1};
    vector<int> hp = {1};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> dps = {2, 2, 2, 2, 2, 2};
    vector<int> hp = {2, 2, 2, 2, 2, 2};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> dps = {8, 6, 7, 6, 6, 6, 7, 8, 7, 8, 8, 7, 8};
    vector<int> hp = {7, 7, 7, 6, 8, 6, 7, 6, 7, 8, 6, 7, 8};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 4546;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> dps = {27, 12, 24, 7, 20, 21, 12, 6, 20, 10, 25, 6, 20, 6, 15, 17, 10, 10, 7};
    vector<int> hp = {24, 24, 13, 15, 25, 24, 8, 15, 20, 22, 17, 13, 12, 23, 22, 14, 19, 6, 26};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 46030;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> dps = {13, 18, 16, 16, 13};
    vector<int> hp = {16, 14, 14, 12, 18};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 3310;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> dps = {7, 7, 7, 8, 7, 7, 7, 8};
    vector<int> hp = {8, 7, 7, 8, 8, 7, 7, 8};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 1980;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> dps = {23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23};
    vector<int> hp = {23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 100510;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> dps = {9, 11, 23, 17, 18, 23, 17, 11, 25};
    vector<int> hp = {8, 23, 25, 17, 16, 27, 18, 19, 21};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 15523;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> dps = {21, 20, 22, 25, 25, 26, 23, 25, 20, 23, 25, 20, 21, 24, 20, 24, 21, 21, 20, 26, 24, 20, 24, 22, 20, 21};
    vector<int> hp = {23, 26, 25, 24, 20, 24, 22, 25, 23, 21, 22, 21, 23, 24, 21, 20, 21, 25, 25, 21, 22, 23, 26, 23, 24, 24};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 179350;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> dps = {17, 17, 17, 17, 17, 17, 17, 17};
    vector<int> hp = {17, 17, 17, 17, 17, 17, 17, 17};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 10404;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> dps = {30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30};
    vector<int> hp = {30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 418500;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> dps = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> hp = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> dps = {30, 2, 7, 4, 7, 8, 21, 14, 19, 12};
    vector<int> hp = {2, 27, 18, 19, 14, 8, 25, 13, 21, 30};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 11029;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> dps = {1, 2};
    vector<int> hp = {3, 4};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> dps = {30, 1, 1, 1, 1};
    vector<int> hp = {30, 1, 1, 1, 1};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 1030;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> dps = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> hp = {30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 6300;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> dps = {1};
    vector<int> hp = {30};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> dps = {5, 4, 3, 2, 1};
    vector<int> hp = {30, 1, 2, 30, 30};
    GreatFairyWar* pObj = new GreatFairyWar();
    clock_t start = clock();
    int result = pObj->minHP(dps, hp);
    clock_t end = clock();
    delete pObj;
    int expected = 592;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23076369&rd=15179&pm=11954
********************************************************************************
#include<iostream> 
#include<vector> 
using namespace std; 
class GreatFairyWar 
{ 
public: 
  int minHP(vector <int> dps, vector <int> hp) 
  { 
  int l,ans; 
  l=dps.size(); 
  ans=0; 
    int arr[l]; 
    arr[l-1]=dps[l-1]; 
    for(int i=l-2;i>=0;i--) 
    arr[i]=arr[i+1]+dps[i]; 
    for(int i=0;i<l;i++) 
    { 
        ans+=(arr[i]*hp[i]); 
    } 
    return ans; 
  } 
};

********************************************************************************
*******************************************************************************/