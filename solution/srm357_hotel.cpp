/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6254
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

class Hotel {
public:
    int marketCost(int minCustomers, vector<int> customers, vector<int> cost);
};

int Hotel::marketCost(int minCustomers, vector<int> customers, vector<int> cost) {
    int ret;
    return ret;
}


int test0() {
    int minCustomers = 10;
    vector<int> customers = {1, 2, 3};
    vector<int> cost = {3, 2, 1};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int minCustomers = 10;
    vector<int> customers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> cost = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int minCustomers = 12;
    vector<int> customers = {5, 1};
    vector<int> cost = {3, 1};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int minCustomers = 100;
    vector<int> customers = {9, 11, 4, 7, 2, 8};
    vector<int> cost = {4, 9, 3, 8, 1, 9};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int minCustomers = 99;
    vector<int> customers = {3, 5, 7, 9, 13, 17};
    vector<int> cost = {17, 13, 9, 7, 5, 3};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int minCustomers = 1000;
    vector<int> customers = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> cost = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int minCustomers = 999;
    vector<int> customers = {2, 3, 5, 7, 11, 13, 17, 19};
    vector<int> cost = {2, 3, 5, 7, 11, 13, 17, 19};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 999;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int minCustomers = 1;
    vector<int> customers = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> cost = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int minCustomers = 99;
    vector<int> customers = {100};
    vector<int> cost = {100};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int minCustomers = 1000;
    vector<int> customers = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> cost = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int minCustomers = 1000;
    vector<int> customers = {99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99};
    vector<int> cost = {99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 1089;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int minCustomers = 1000;
    vector<int> customers = {99};
    vector<int> cost = {100};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 1100;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int minCustomers = 1000;
    vector<int> customers = {99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81, 80};
    vector<int> cost = {100, 99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 1011;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int minCustomers = 1000;
    vector<int> customers = {1};
    vector<int> cost = {100};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 100000;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int minCustomers = 18;
    vector<int> customers = {29, 81, 93, 62, 2, 68, 28, 57, 97, 23, 40, 56, 75, 79, 85, 11, 88, 69};
    vector<int> cost = {89, 4, 90, 37, 30, 87, 93, 92, 28, 39, 23, 74, 66, 61, 76, 36, 4, 48};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int minCustomers = 11;
    vector<int> customers = {11, 31, 26, 42, 79, 70, 65, 17, 95, 94, 30};
    vector<int> cost = {7, 29, 12, 88, 22, 61, 59, 80, 8, 39, 89};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int minCustomers = 13;
    vector<int> customers = {31, 90, 100, 54, 52, 51, 50, 41, 98, 19, 76, 8, 13};
    vector<int> cost = {12, 21, 50, 23, 5, 81, 24, 11, 35, 22, 76, 18, 24};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int minCustomers = 20;
    vector<int> customers = {93, 62, 36, 18, 81, 18, 100, 79, 63, 13, 63, 86, 33, 88, 56, 37, 95, 65, 49, 63};
    vector<int> cost = {98, 58, 82, 28, 33, 3, 36, 39, 12, 67, 32, 61, 11, 61, 68, 33, 66, 31, 36, 36};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int minCustomers = 18;
    vector<int> customers = {5, 49, 29, 68, 78, 55, 46, 85, 51, 44, 77, 8, 61, 95, 94, 30, 3, 27};
    vector<int> cost = {48, 15, 92, 72, 28, 81, 90, 50, 40, 61, 94, 56, 81, 24, 61, 10, 95, 99};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int minCustomers = 4;
    vector<int> customers = {49, 56, 93, 73};
    vector<int> cost = {69, 30, 65, 17};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int minCustomers = 8;
    vector<int> customers = {30, 10, 48, 10, 36, 38, 84, 86};
    vector<int> cost = {42, 17, 75, 25, 70, 10, 85, 76};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int minCustomers = 16;
    vector<int> customers = {93, 33, 85, 2, 79, 91, 32, 37, 71, 35, 61, 27, 72, 37, 14, 17};
    vector<int> cost = {22, 30, 11, 90, 48, 37, 42, 85, 14, 28, 23, 79, 62, 37, 22, 74};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int minCustomers = 50;
    vector<int> customers = {1, 20, 25};
    vector<int> cost = {5, 40, 55};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 110;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int minCustomers = 500;
    vector<int> customers = {1, 20, 25};
    vector<int> cost = {5, 40, 55};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int minCustomers = 26;
    vector<int> customers = {5, 7, 2};
    vector<int> cost = {25, 35, 10};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 130;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int minCustomers = 26;
    vector<int> customers = {5, 7, 3};
    vector<int> cost = {26, 36, 15};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 131;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int minCustomers = 261;
    vector<int> customers = {50, 70, 30, 30, 1};
    vector<int> cost = {26, 36, 15, 15, 1};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 132;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int minCustomers = 12;
    vector<int> customers = {5, 1};
    vector<int> cost = {3, 1};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int minCustomers = 10;
    vector<int> customers = {1, 2, 3};
    vector<int> cost = {3, 2, 1};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int minCustomers = 100;
    vector<int> customers = {9, 11, 4, 7, 2, 8};
    vector<int> cost = {4, 9, 3, 8, 1, 9};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int minCustomers = 1000;
    vector<int> customers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    vector<int> cost = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int minCustomers = 993;
    vector<int> customers = {62, 1};
    vector<int> cost = {1, 2};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int minCustomers = 1000;
    vector<int> customers = {1, 9, 5};
    vector<int> cost = {33, 10, 6};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 1112;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int minCustomers = 1000;
    vector<int> customers = {99};
    vector<int> cost = {100};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 1100;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int minCustomers = 1000;
    vector<int> customers = {99};
    vector<int> cost = {1};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int minCustomers = 999;
    vector<int> customers = {1, 2, 3};
    vector<int> cost = {25, 50, 100};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 24975;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int minCustomers = 50;
    vector<int> customers = {8, 9};
    vector<int> cost = {7, 8};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int minCustomers = 14;
    vector<int> customers = {2, 4, 8};
    vector<int> cost = {3, 4, 8};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int minCustomers = 1000;
    vector<int> customers = {99};
    vector<int> cost = {99};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 1089;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int minCustomers = 14;
    vector<int> customers = {9, 6, 2};
    vector<int> cost = {12, 8, 3};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int minCustomers = 14;
    vector<int> customers = {6, 8, 10};
    vector<int> cost = {6, 8, 9};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int minCustomers = 33;
    vector<int> customers = {30, 16, 1, 33, 40, 50, 60, 70, 80, 90, 100, 100, 100, 6, 7, 8, 9, 10, 11, 12};
    vector<int> cost = {10, 6, 3, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 8, 9, 10, 11, 12};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int minCustomers = 5;
    vector<int> customers = {5, 100};
    vector<int> cost = {2, 1};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int minCustomers = 6;
    vector<int> customers = {5, 3};
    vector<int> cost = {3, 2};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int minCustomers = 999;
    vector<int> customers = {3, 98, 98, 98, 98, 78, 7, 78, 78, 78, 78, 78, 78, 78, 2, 32, 3, 32, 32};
    vector<int> cost = {32, 32, 1, 3, 3, 4, 75, 32, 32, 1, 3, 3, 32, 32, 32, 1, 3, 2, 3};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int minCustomers = 100;
    vector<int> customers = {9, 10, 1};
    vector<int> cost = {4, 5, 2};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int minCustomers = 5;
    vector<int> customers = {4, 5};
    vector<int> cost = {2, 3};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int minCustomers = 55;
    vector<int> customers = {50, 4, 1};
    vector<int> cost = {10, 2, 1};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int minCustomers = 23;
    vector<int> customers = {5, 7, 11};
    vector<int> cost = {5, 6, 7};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int minCustomers = 1000;
    vector<int> customers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    vector<int> cost = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int minCustomers = 100;
    vector<int> customers = {98, 99};
    vector<int> cost = {100, 100};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int minCustomers = 5;
    vector<int> customers = {10, 20, 30};
    vector<int> cost = {30, 20, 10};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int minCustomers = 192;
    vector<int> customers = {100, 96};
    vector<int> cost = {100, 98};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 196;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int minCustomers = 3;
    vector<int> customers = {95, 92, 100, 86};
    vector<int> cost = {94, 91, 99, 92};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 91;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int minCustomers = 1;
    vector<int> customers = {100};
    vector<int> cost = {1};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int minCustomers = 12;
    vector<int> customers = {1, 2, 3, 4, 5};
    vector<int> cost = {2, 2, 2, 2, 2};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int minCustomers = 1;
    vector<int> customers = {1, 100};
    vector<int> cost = {100, 1};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int minCustomers = 401;
    vector<int> customers = {20, 21};
    vector<int> cost = {19, 21};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 382;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int minCustomers = 999;
    vector<int> customers = {99, 50};
    vector<int> cost = {100, 51};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 1018;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int minCustomers = 997;
    vector<int> customers = {97, 95, 91, 70, 25, 91, 94, 99, 100, 5, 1, 25, 92, 96, 94, 99, 99, 97, 91, 31};
    vector<int> cost = {81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 2, 25, 4};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int minCustomers = 1;
    vector<int> customers = {99, 1, 2, 3};
    vector<int> cost = {1, 50, 50, 50};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int minCustomers = 1000;
    vector<int> customers = {39, 1};
    vector<int> cost = {1, 100};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int minCustomers = 9;
    vector<int> customers = {5, 1, 3};
    vector<int> cost = {12, 3, 8};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int minCustomers = 10;
    vector<int> customers = {6, 5};
    vector<int> cost = {12, 11};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int minCustomers = 110;
    vector<int> customers = {70, 30, 10};
    vector<int> cost = {6, 3, 2};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int minCustomers = 1000;
    vector<int> customers = {99, 100, 78};
    vector<int> cost = {91, 99, 79};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 953;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int minCustomers = 4;
    vector<int> customers = {3, 2};
    vector<int> cost = {3, 2};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int minCustomers = 19;
    vector<int> customers = {9, 5};
    vector<int> cost = {3, 2};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int minCustomers = 102;
    vector<int> customers = {7, 9};
    vector<int> cost = {7, 2};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int minCustomers = 1000;
    vector<int> customers = {83, 17, 15, 27, 21, 63, 62, 59, 49, 48, 8, 19, 95, 2, 10, 89, 92, 34, 52, 66};
    vector<int> cost = {14, 86, 44, 81, 34, 16, 18, 57, 25, 64, 36, 27, 35, 90, 31, 24, 21, 86, 39, 69};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 175;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int minCustomers = 1000;
    vector<int> customers = {21, 27, 24, 20, 29, 24, 28, 28, 22, 24, 25, 25, 21, 27, 21, 21, 25, 22, 27, 26};
    vector<int> cost = {21, 24, 22, 23, 22, 22, 21, 26, 28, 25, 27, 26, 21, 28, 29, 22, 27, 29, 25, 24};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 755;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int minCustomers = 20;
    vector<int> customers = {12, 15, 5};
    vector<int> cost = {3, 3, 2};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int minCustomers = 62;
    vector<int> customers = {61, 31};
    vector<int> cost = {30, 20};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int minCustomers = 18;
    vector<int> customers = {11, 1, 6};
    vector<int> cost = {5, 1, 3};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int minCustomers = 20;
    vector<int> customers = {10};
    vector<int> cost = {100};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int minCustomers = 2;
    vector<int> customers = {1, 5};
    vector<int> cost = {100, 1};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int minCustomers = 10;
    vector<int> customers = {9, 5};
    vector<int> cost = {6, 5};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int minCustomers = 10;
    vector<int> customers = {100};
    vector<int> cost = {100};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int minCustomers = 1000;
    vector<int> customers = {1};
    vector<int> cost = {100};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 100000;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int minCustomers = 1;
    vector<int> customers = {1};
    vector<int> cost = {1};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int minCustomers = 5;
    vector<int> customers = {50, 4, 1};
    vector<int> cost = {4, 2, 1};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int minCustomers = 20;
    vector<int> customers = {4, 6, 7};
    vector<int> cost = {5, 6, 8};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int minCustomers = 100;
    vector<int> customers = {9, 11, 4, 7, 2, 8};
    vector<int> cost = {4, 9, 3, 8, 2, 9};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int minCustomers = 8;
    vector<int> customers = {6, 4};
    vector<int> cost = {6, 5};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int minCustomers = 41;
    vector<int> customers = {5, 7};
    vector<int> cost = {50, 69};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 407;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int minCustomers = 1000;
    vector<int> customers = {80, 99, 98};
    vector<int> cost = {100, 100, 100};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 1100;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int minCustomers = 1;
    vector<int> customers = {3, 1, 10};
    vector<int> cost = {1, 2, 3};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int minCustomers = 90;
    vector<int> customers = {60, 90, 1};
    vector<int> cost = {50, 90, 2};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int minCustomers = 10;
    vector<int> customers = {5, 4};
    vector<int> cost = {20, 15};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int minCustomers = 15;
    vector<int> customers = {6, 1, 50, 49, 48};
    vector<int> cost = {5, 1, 50, 49, 48};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int minCustomers = 100;
    vector<int> customers = {12, 10, 1};
    vector<int> cost = {12, 11, 100};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 104;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int minCustomers = 180;
    vector<int> customers = {50, 20, 10};
    vector<int> cost = {30, 17, 9};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 116;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int minCustomers = 743;
    vector<int> customers = {5, 1, 1, 2, 3, 1, 2, 3, 1, 2, 3, 3};
    vector<int> cost = {3, 1, 3, 3, 2, 1, 1, 2, 3, 2, 3, 2};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 372;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int minCustomers = 1000;
    vector<int> customers = {1, 99};
    vector<int> cost = {100, 1};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int minCustomers = 1000;
    vector<int> customers = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> cost = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 11, 1};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int minCustomers = 5;
    vector<int> customers = {2, 3};
    vector<int> cost = {90, 100};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 190;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int minCustomers = 11;
    vector<int> customers = {3, 5};
    vector<int> cost = {3, 5};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int minCustomers = 999;
    vector<int> customers = {97, 98, 97, 98, 99, 97, 98, 97, 98, 99, 97, 98, 97, 98, 99, 97, 98, 97, 98, 99};
    vector<int> cost = {93, 97, 98, 97, 98, 99, 97, 98, 97, 98, 99, 97, 98, 97, 98, 99, 97, 98, 97, 98};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int minCustomers = 1000;
    vector<int> customers = {9};
    vector<int> cost = {9};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 1008;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int minCustomers = 999;
    vector<int> customers = {99, 1};
    vector<int> cost = {1, 100};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int minCustomers = 1000;
    vector<int> customers = {100, 99};
    vector<int> cost = {2, 1};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int minCustomers = 1000;
    vector<int> customers = {1, 100, 50};
    vector<int> cost = {1, 100, 50};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int minCustomers = 1000;
    vector<int> customers = {99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99};
    vector<int> cost = {99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 1089;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int minCustomers = 111;
    vector<int> customers = {10, 7};
    vector<int> cost = {30, 28};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 354;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int minCustomers = 1000;
    vector<int> customers = {99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99};
    vector<int> cost = {55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 605;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int minCustomers = 1;
    vector<int> customers = {10, 2, 3};
    vector<int> cost = {3, 2, 1};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int minCustomers = 4;
    vector<int> customers = {2, 3};
    vector<int> cost = {3, 4};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int minCustomers = 9;
    vector<int> customers = {5, 7, 4};
    vector<int> cost = {4, 3, 2};
    Hotel* pObj = new Hotel();
    clock_t start = clock();
    int result = pObj->marketCost(minCustomers, customers, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15604398&rd=10766&pm=6254
********************************************************************************
#include <algorithm> 
#include <cmath> 
#include <cstdio> 
#include <set> 
#include <map> 
#include <cstdlib> 
#include <cstring> 
#include <vector> 
#include <string> 
#include <sstream> 
#include <iostream> 
using namespace std; 
#define FORC( V, it ) for( __typeof( (V).begin() ) it = (V).begin(); it != (V).end(); ++it ) 
const int MAXL = 1000; 
const int MAXN = 50; 
const int MAXX = 10000; 
const int INF = 987654321; 
const double EPS = 1e-9; 
char buff[MAXL+1]; 
 
 
vector< int > A; 
vector< int > B; 
 
int dp[MAXX]; 
 
int rek( int jos )  
{ 
    if ( jos < 0 ) return 0; 
    int &ref = dp[jos]; 
    if ( ref != -1 ) return ref; 
    if ( jos == 0 ) return ( ref = 0 ); 
 
    ref = INF; 
    for( int i = 0; i < ( int )A.size(); ++i )  
        ref = min( ref, rek( jos - A[i] ) + B[i] ); 
    return ref; 
         
} 
 
class Hotel { 
public: 
    int marketCost( int minCustomers, vector <int> customers, vector <int> cost ) { 
        A = customers; 
        B = cost; 
        memset( dp, -1, sizeof ( dp ) );  
        return rek( minCustomers ); 
    } 
}; 
 
 
 
 
 
 
 
 
 
// Powered by FileEdit
// Powered by moj 3.0 beta 11 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/