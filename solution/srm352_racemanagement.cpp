/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7822
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

class RaceManagement {
public:
    double getPayoutFactor(vector<int> probability, vector<int> amounts, int minimumMoney);
};

double RaceManagement::getPayoutFactor(vector<int> probability, vector<int> amounts, int minimumMoney) {
    double ret;
    return ret;
}


int test0() {
    vector<int> probability = {30};
    vector<int> amounts = {100};
    int minimumMoney = 10;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> probability = {50, 40};
    vector<int> amounts = {300, 200};
    int minimumMoney = 100;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = 2.076923076923077;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> probability = {10, 10, 10};
    vector<int> amounts = {100, 100, 100};
    int minimumMoney = 12;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = 10.851851851851851;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> probability = {30, 20, 10};
    vector<int> amounts = {100, 200, 300};
    int minimumMoney = 100;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = 6.861635220125786;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> probability = {50};
    vector<int> amounts = {100};
    int minimumMoney = 1000;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> probability = {0};
    vector<int> amounts = {100};
    int minimumMoney = 100;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = -2.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> probability = {0};
    vector<int> amounts = {100};
    int minimumMoney = 200;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> probability = {100};
    vector<int> amounts = {100};
    int minimumMoney = 100;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> probability = {100};
    vector<int> amounts = {0};
    int minimumMoney = 100;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> probability = {100};
    vector<int> amounts = {100};
    int minimumMoney = 10;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> probability = {49, 31, 3, 3};
    vector<int> amounts = {637, 361, 549, 601};
    int minimumMoney = 388;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = 5.5642566807308;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> probability = {91, 9, 0, 0, 0};
    vector<int> amounts = {745, 811, 481, 941, 903};
    int minimumMoney = 181;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = 4.93420791796551;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> probability = {34, 65, 0};
    vector<int> amounts = {621, 729, 86};
    int minimumMoney = 188;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = 2.2278088144009933;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> probability = {56, 14, 29, 1, 0};
    vector<int> amounts = {604, 548, 839, 764, 236};
    int minimumMoney = 817;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = 5.764322718740284;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> probability = {37, 30, 28, 4, 1};
    vector<int> amounts = {863, 188, 796, 614, 96};
    int minimumMoney = 511;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = 6.341439206765301;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> probability = {21, 59};
    vector<int> amounts = {105, 660};
    int minimumMoney = 287;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5094744786707782;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> probability = {91, 9};
    vector<int> amounts = {241, 655};
    int minimumMoney = 147;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = 2.655841341366748;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> probability = {80, 12, 1, 7, 0};
    vector<int> amounts = {315, 363, 215, 46, 702};
    int minimumMoney = 310;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = 5.245643792496961;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> probability = {97, 0, 2, 0, 1};
    vector<int> amounts = {641, 55, 827, 299, 840};
    int minimumMoney = 349;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = 2.8296004811766347;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> probability = {9, 18, 29, 18, 4};
    vector<int> amounts = {323, 5, 157, 256, 690};
    int minimumMoney = 209;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = 15.088961223920425;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> probability = {52, 38, 5, 2, 1};
    vector<int> amounts = {874, 739, 312, 65, 707};
    int minimumMoney = 325;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = 5.069966826773921;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> probability = {0, 0, 0, 0};
    vector<int> amounts = {100, 100, 100, 100};
    int minimumMoney = 350;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = -2.0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> probability = {20, 20, 20, 20, 20};
    vector<int> amounts = {10, 10, 10, 10, 10};
    int minimumMoney = 1000;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
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
    vector<int> probability = {50, 50};
    vector<int> amounts = {10, 10};
    int minimumMoney = 500;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> probability = {1, 1, 1, 1, 1};
    vector<int> amounts = {500, 500, 500, 500, 500};
    int minimumMoney = 750;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = 71.87142489796517;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> probability = {0, 100, 0, 0};
    vector<int> amounts = {100, 0, 200, 500};
    int minimumMoney = 450;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = -2.0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> probability = {0, 50, 0, 0, 50};
    vector<int> amounts = {10, 0, 20, 70, 0};
    int minimumMoney = 370;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> probability = {0, 0, 100, 0, 0};
    vector<int> amounts = {0, 0, 180, 0, 0};
    int minimumMoney = 950;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
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
    vector<int> probability = {0, 0, 30, 0, 50};
    vector<int> amounts = {0, 0, 70, 0, 80};
    int minimumMoney = 100;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2987012987012987;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> probability = {0, 0, 0, 0, 100};
    vector<int> amounts = {0, 0, 0, 0, 40};
    int minimumMoney = 50;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> probability = {20, 20, 1, 20, 1};
    vector<int> amounts = {10, 500, 10, 10, 500};
    int minimumMoney = 70;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = 13.155002944240612;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> probability = {100};
    vector<int> amounts = {20};
    int minimumMoney = 100;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
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
    vector<int> probability = {100};
    vector<int> amounts = {0};
    int minimumMoney = 50;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
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
    vector<int> probability = {0};
    vector<int> amounts = {0};
    int minimumMoney = 60;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> probability = {0};
    vector<int> amounts = {170};
    int minimumMoney = 50;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = -2.0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> probability = {0};
    vector<int> amounts = {890};
    int minimumMoney = 420;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = -2.0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> probability = {50, 40};
    vector<int> amounts = {300, 200};
    int minimumMoney = 100;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = 2.076923076923077;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> probability = {20, 18, 14, 32, 12};
    vector<int> amounts = {140, 200, 180, 120, 320};
    int minimumMoney = 294;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = 8.47036366123654;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> probability = {15, 16, 17, 18, 19};
    vector<int> amounts = {29, 28, 27, 26, 25};
    int minimumMoney = 50;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = 6.837560730100021;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> probability = {100};
    vector<int> amounts = {0};
    int minimumMoney = 101;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> probability = {10, 50, 5, 15, 19};
    vector<int> amounts = {60, 100, 25, 75, 105};
    int minimumMoney = 50;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = 6.337901176815901;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> probability = {0};
    vector<int> amounts = {100};
    int minimumMoney = 120;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
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
    vector<int> probability = {0, 10, 30, 20};
    vector<int> amounts = {0, 0, 0, 0};
    int minimumMoney = 10;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> probability = {0};
    vector<int> amounts = {100};
    int minimumMoney = 101;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> probability = {25, 24, 23, 12, 10};
    vector<int> amounts = {111, 222, 333, 444, 555};
    int minimumMoney = 987;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = 4.9323538208695;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> probability = {10, 10, 33, 44, 1};
    vector<int> amounts = {166, 266, 366, 466, 566};
    int minimumMoney = 666;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = 5.44652321557496;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> probability = {20, 30, 40};
    vector<int> amounts = {100, 100, 100};
    int minimumMoney = 100;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = 3.424778761061947;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> probability = {30, 20, 15, 35};
    vector<int> amounts = {100, 50, 20, 60};
    int minimumMoney = 10;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = 6.79713278162712;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> probability = {34, 12, 22, 11};
    vector<int> amounts = {100, 333, 222, 11};
    int minimumMoney = 15;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = 9.034966967256441;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> probability = {0};
    vector<int> amounts = {50};
    int minimumMoney = 100;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> probability = {30, 13, 35, 2, 3};
    vector<int> amounts = {0, 0, 1, 1, 999};
    int minimumMoney = 133;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = 72.33154747359897;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> probability = {0};
    vector<int> amounts = {100};
    int minimumMoney = 100;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = -2.0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> probability = {0};
    vector<int> amounts = {100};
    int minimumMoney = 110;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> probability = {0};
    vector<int> amounts = {0};
    int minimumMoney = 1;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> probability = {50};
    vector<int> amounts = {100};
    int minimumMoney = 1000;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> probability = {0, 0};
    vector<int> amounts = {0, 0};
    int minimumMoney = 1;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> probability = {0, 100};
    vector<int> amounts = {20, 20};
    int minimumMoney = 10;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> probability = {10, 50, 5, 10, 10};
    vector<int> amounts = {100, 200, 300, 400, 500};
    int minimumMoney = 250;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = 10.04264670156143;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> probability = {0, 0, 0};
    vector<int> amounts = {10, 10, 10};
    int minimumMoney = 1000;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> probability = {30, 20, 10, 20, 6};
    vector<int> amounts = {300, 800, 250, 30, 150};
    int minimumMoney = 900;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = 3.451335457162043;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> probability = {0, 100};
    vector<int> amounts = {100, 0};
    int minimumMoney = 200;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> probability = {0};
    vector<int> amounts = {10};
    int minimumMoney = 100;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> probability = {0};
    vector<int> amounts = {100};
    int minimumMoney = 1000;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> probability = {100};
    vector<int> amounts = {0};
    int minimumMoney = 1000;
    RaceManagement* pObj = new RaceManagement();
    clock_t start = clock();
    double result = pObj->getPayoutFactor(probability, amounts, minimumMoney);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22685946&rd=10709&pm=7822
********************************************************************************
#include <vector>
#include <string>
using namespace std;
 
struct RaceManagement {
 
double getPayoutFactor(vector <int> probability, vector <int> amounts, int minimumMoney)
{
    double exp_money_0 = 0, exp_money_1 = 0;
    vector<double> true_prob;
    
    for (int i = 0; i < probability.size(); ++ i)
    {
        double p = probability[i] / 100.0;
        for (int j = 0; j < probability.size(); ++ j)
        {
            if (i != j) p *= 1 - probability[j] / 100.0;
        }
        true_prob.push_back(p);
    }
    
    for (int i = 0; i < probability.size(); ++ i)
    {
        exp_money_0 += amounts[i];
        exp_money_1 -= amounts[i] * true_prob[i];
    }
    
    if (exp_money_1 == 0) return exp_money_0 >= minimumMoney ? -2 : -1;
    
    double s = (minimumMoney - exp_money_0) / exp_money_1 - 1;
    if (s < 0) return -1;
    return s;
}
 
};

********************************************************************************
*******************************************************************************/