/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11813
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

class FoxAndVacation {
public:
    int maxCities(int total, vector<int> d);
};

int FoxAndVacation::maxCities(int total, vector<int> d) {
    int ret;
    return ret;
}


int test0() {
    int total = 5;
    vector<int> d = {2, 2, 2};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int total = 5;
    vector<int> d = {5, 6, 1};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
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
    int total = 5;
    vector<int> d = {6, 6, 6};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int total = 6;
    vector<int> d = {1, 1, 1, 1, 1};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int total = 10;
    vector<int> d = {7, 1, 5, 6, 1, 3, 4};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int total = 50;
    vector<int> d = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int total = 21;
    vector<int> d = {14, 2, 16, 9, 9, 5, 5, 23, 25, 20, 8, 25, 6, 12, 3, 2, 4, 5, 10, 14, 19, 12, 25, 15, 14};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int total = 14;
    vector<int> d = {11, 4, 3};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int total = 50;
    vector<int> d = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int total = 38;
    vector<int> d = {15, 12, 17, 11, 23, 19, 6, 19, 30, 19, 13, 27, 23, 12, 3, 14, 18, 22, 35, 36, 4};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int total = 13;
    vector<int> d = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int total = 32;
    vector<int> d = {1, 1, 2, 2, 2, 2, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 1, 1};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int total = 16;
    vector<int> d = {5, 8, 17, 13, 15, 13, 23, 7, 15, 5, 23, 10, 2, 13, 20, 5, 1, 21, 6, 10, 8, 25, 2, 20, 2, 12, 13, 25, 25, 24, 24, 21, 13, 11, 3, 18, 2, 5, 5, 12, 6, 11, 8, 6, 6, 1, 23};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int total = 10;
    vector<int> d = {1, 37, 6, 37, 45, 38, 6, 47, 41, 42, 40, 30, 15, 9, 40, 41, 12, 37, 24, 17, 12, 47, 28, 17, 3, 10, 32, 8, 26, 39, 6, 16, 9, 46, 24, 29, 16, 2, 24, 10, 27, 3, 4, 44, 14, 47};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int total = 49;
    vector<int> d = {1, 1, 1, 3, 1, 1, 1, 2, 3, 1, 3, 1, 3, 1, 3, 3, 1, 3, 1, 1, 3, 3, 1, 2, 3, 3};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int total = 18;
    vector<int> d = {14, 13, 3, 10, 6, 11, 4, 1, 16, 2, 16, 3, 11, 5, 9, 14, 8, 18, 13};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int total = 4;
    vector<int> d = {15, 18, 9, 2, 21, 20, 20, 14, 24, 33, 3, 33, 5, 3, 1, 31, 19, 21, 23, 29, 6, 14, 15, 3, 24, 29, 33, 21, 13, 7, 20, 30, 26, 33, 18, 19, 22, 3, 11, 21, 32, 30};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int total = 25;
    vector<int> d = {1, 6, 2, 4, 3, 3, 6, 2, 7, 2, 3, 5, 1, 1, 1, 1, 4, 6, 5, 2, 4, 5, 5, 4, 4, 3};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int total = 48;
    vector<int> d = {4, 5, 2, 3, 5, 5, 3, 1, 3, 5, 5, 5, 4};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int total = 23;
    vector<int> d = {5, 32, 6, 12, 2, 22, 9, 11, 26, 7, 20, 5, 24, 31, 19, 6, 33, 11, 29, 6, 29, 3};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int total = 47;
    vector<int> d = {9, 31, 32, 15, 13, 27, 19, 9, 10, 9, 14, 20, 25, 8, 6, 8, 10, 14, 7, 19, 18, 27, 1, 30};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int total = 46;
    vector<int> d = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int total = 39;
    vector<int> d = {14, 16, 7, 17, 10, 8, 12, 15, 5, 3, 16, 10, 10, 3, 7, 4, 17, 11, 4, 6, 9, 18, 5, 6, 16, 1, 3, 17, 18, 11, 8, 16, 13, 17, 14, 8, 5, 10, 7, 2, 12};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int total = 18;
    vector<int> d = {20, 5, 11, 21, 20, 14, 3, 15, 17, 4, 6, 4, 11, 16, 23};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int total = 31;
    vector<int> d = {20, 3, 6, 17, 12, 1, 1, 10, 18, 18, 18, 8, 4, 11, 11, 12};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int total = 16;
    vector<int> d = {8, 3, 5, 5, 14, 7, 8, 1, 10, 9, 5, 6, 10, 3, 1, 7, 5, 10, 12, 15, 12, 1, 9, 1, 14, 6, 4, 3, 7, 2, 15, 5, 2, 14, 13, 9, 5, 13, 16, 11, 7, 15, 10};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int total = 28;
    vector<int> d = {1, 1, 1};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int total = 33;
    vector<int> d = {12, 4, 13, 20, 10, 4};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int total = 50;
    vector<int> d = {14, 14, 8, 11, 16, 4, 15, 19};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
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
    int total = 3;
    vector<int> d = {11, 9, 26, 20};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int total = 43;
    vector<int> d = {6, 34, 4, 44, 14};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int total = 26;
    vector<int> d = {24, 10, 7, 40, 32, 18, 7, 24, 40, 35, 19, 32, 16, 28, 17, 29, 38, 2, 2, 20, 33, 16, 6, 24, 30, 25, 5, 20, 34, 26, 12};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int total = 22;
    vector<int> d = {11, 4, 28, 20, 30, 3, 3, 1, 27, 1, 14, 14, 27, 27, 22, 2, 21, 18, 30, 23, 31, 3, 26, 15, 20, 28, 6, 11, 17, 11, 13, 23, 10, 7};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int total = 37;
    vector<int> d = {5, 1, 3, 6, 8, 12, 13, 3, 5, 3, 3, 6, 8, 12, 3, 9, 4, 2, 5, 5, 8, 9, 1, 9, 3, 5, 4, 7};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int total = 39;
    vector<int> d = {12, 12, 3, 15};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int total = 46;
    vector<int> d = {3, 4, 2, 1, 3, 3, 3, 4, 1, 4, 1, 1, 1, 2, 3, 4};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int total = 42;
    vector<int> d = {17, 3, 6, 9, 8, 16, 10, 6, 2, 15, 9, 3, 14, 22, 1, 22, 8, 13, 20, 3, 19, 17, 6, 16, 22, 1, 1, 8, 6, 17, 5, 5, 17, 18};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int total = 22;
    vector<int> d = {8, 1, 1, 2, 6, 4, 4, 4, 2, 3, 10, 2, 9, 1, 5, 8, 2, 1, 2, 3, 9, 1, 10, 1, 9, 7, 8, 4, 6, 2, 9, 2, 7, 4, 7, 7, 5, 5, 4, 7, 8, 8, 7, 10};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int total = 37;
    vector<int> d = {28, 31, 27};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int total = 17;
    vector<int> d = {8, 5, 14, 10, 13};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int total = 43;
    vector<int> d = {8, 17, 10, 2, 22, 7, 17, 15, 13, 14, 16, 4, 10, 18, 22, 11, 11, 22, 8, 17, 11, 10, 9, 8, 11, 12, 20, 4, 9, 19, 2, 5, 8, 13, 5, 3, 19, 19, 22, 18, 11, 7, 13, 17, 21, 8, 8};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int total = 14;
    vector<int> d = {2, 2, 2, 2, 2, 1, 2, 1, 2, 2, 1, 1, 2, 1, 2, 1, 2, 1, 2, 2, 1, 1, 1, 2, 2, 1, 2, 1, 1, 1};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int total = 39;
    vector<int> d = {4, 2, 4, 10, 6, 4, 1, 6, 6, 10, 10, 11, 10, 3, 4, 11, 10, 3, 4, 10, 5, 9, 6, 9, 8, 7, 4, 1, 2, 2, 9, 3, 9, 3, 8, 4, 1, 11, 7, 3, 6, 10, 6, 10, 10, 1};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int total = 25;
    vector<int> d = {26, 5, 32, 4, 7, 37, 30};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int total = 15;
    vector<int> d = {1, 2, 3, 5, 1, 5, 2, 1, 5, 2, 1, 4, 4, 4, 2, 7, 7, 5, 6};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int total = 13;
    vector<int> d = {6, 3, 1, 1, 4, 2, 3, 2, 2, 5, 4, 3};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int total = 27;
    vector<int> d = {28, 21, 2, 16, 18, 16, 9, 5, 1, 12, 17, 23, 22, 20, 15, 16, 1, 20, 25, 22, 6, 22, 15, 28, 9, 14, 25, 8, 14};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int total = 28;
    vector<int> d = {13, 21, 12, 4, 1, 17, 13, 6, 9, 5, 3, 8, 1, 13, 4, 12, 16, 13, 10, 23, 11, 19, 23, 11, 16, 13, 3, 22, 12, 6, 20, 23, 10, 17, 9, 24, 7, 21};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int total = 49;
    vector<int> d = {1, 2, 2, 1, 2, 1, 2, 2, 1, 1, 1, 1, 2, 2, 2, 2};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int total = 32;
    vector<int> d = {21, 17, 9};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int total = 50;
    vector<int> d = {2, 10, 10, 8, 6, 6, 6, 6, 7, 5, 11, 7, 8, 5, 6, 1, 4, 4, 10, 11, 11, 1, 3, 2, 2, 8, 1, 6, 1, 2, 11, 4, 6, 9, 2, 5, 11, 3, 11, 4};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int total = 24;
    vector<int> d = {5, 2, 7, 9, 11, 6, 2, 3, 1, 6, 8, 4, 11, 2, 10, 11, 7, 11, 7, 8, 7, 8, 8, 3, 11, 7, 10, 7, 6, 10, 5, 7, 9, 8, 7, 9, 8, 11, 3, 10, 8, 3, 2, 6};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int total = 40;
    vector<int> d = {13, 14, 2, 15, 1, 12, 6, 6, 16, 16, 8, 11, 11, 15, 8, 5, 12, 5, 7, 17, 8, 11, 1, 7, 13};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int total = 45;
    vector<int> d = {30, 13, 4, 24, 15, 13, 17, 10, 12, 13, 29, 14, 28, 28, 15, 28, 8, 2, 27, 17, 5, 24, 27, 13, 25, 4, 7, 4, 1, 15, 29, 19, 20, 29, 9, 5, 6, 15, 15, 20, 11, 26, 29, 20, 7, 12, 24};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int total = 13;
    vector<int> d = {5, 10, 3, 5, 11, 17, 11, 12, 3, 11, 6, 13, 3, 12, 2, 17, 5, 2, 8, 11, 13, 6, 3, 10, 1, 10, 8, 4, 16, 6, 5, 15, 2, 14, 11, 4, 3};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int total = 39;
    vector<int> d = {3, 11, 11, 2, 6, 7, 8, 4, 11, 13, 2, 12, 5, 6, 3, 11, 1, 1, 8, 7, 8, 9, 8, 4, 5, 7, 11, 1, 7, 11, 13, 5, 3, 1, 5, 10, 13, 5, 10, 10};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int total = 14;
    vector<int> d = {15, 10, 18, 3, 6, 1, 15, 2, 4, 4, 11, 6, 5, 15, 5, 6, 1, 7};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int total = 24;
    vector<int> d = {10, 2, 9, 3, 2, 3, 6, 2, 8, 2, 9, 5, 4, 2, 2, 3, 9, 6, 6, 3, 4, 3, 5, 7, 3, 2, 10, 5, 4, 9, 9, 1, 5, 8, 5};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int total = 28;
    vector<int> d = {3, 2, 2, 1, 3, 3, 2, 2, 1, 3, 2, 3, 1, 1, 3, 3, 3, 3, 3, 1, 2, 2, 1, 2, 2};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int total = 35;
    vector<int> d = {47, 36, 22, 27, 16, 26, 5, 50, 10, 2, 7, 24};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int total = 44;
    vector<int> d = {17, 23, 6, 16, 15, 2, 13, 29, 28, 24, 21, 1, 12, 28, 27, 27, 19, 18, 25, 22, 25, 26, 17, 1, 17, 6, 24, 21, 6, 19, 14, 26, 9};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int total = 46;
    vector<int> d = {28, 14, 23, 22, 30, 30, 20, 6, 32, 23, 30, 9};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int total = 14;
    vector<int> d = {30, 17, 26, 31, 33, 19, 16, 16};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int total = 10;
    vector<int> d = {9, 23, 9, 31, 36, 37, 14, 8, 21, 7, 43, 16, 21, 40, 7};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int total = 14;
    vector<int> d = {14, 9, 2, 15, 4, 9, 10, 8, 5, 19, 26, 26, 7, 8, 13, 21, 13, 2};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int total = 11;
    vector<int> d = {10, 9, 4, 8, 5, 12, 1, 6, 7, 3, 6, 2, 2, 14, 11, 15, 6, 8, 6, 3, 10, 13, 13, 6, 16, 14, 16, 2, 4, 13, 6, 14, 7, 10};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int total = 42;
    vector<int> d = {7, 1, 3, 8, 3, 3, 1, 2, 3, 7, 13, 6, 3, 6, 3, 14, 12, 9, 8, 6, 13, 5, 6, 7, 7, 4, 6, 4, 14, 7, 6, 8, 3, 11, 12, 3, 3, 14, 13, 9, 14};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int total = 29;
    vector<int> d = {23, 4, 22, 11, 12, 12, 12, 21, 17, 12, 23, 15, 20, 7, 21, 11, 13, 11};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int total = 34;
    vector<int> d = {19, 6, 1, 1, 10, 19, 16, 18, 15, 22, 8, 5, 3, 2, 1, 16};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int total = 5;
    vector<int> d = {7, 1, 2, 3, 8, 4, 4};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int total = 22;
    vector<int> d = {6, 12, 18, 22, 19, 14, 8, 3, 36, 15, 25, 20, 30, 28, 8, 33, 31, 22, 7, 14, 10, 19, 13, 3, 17, 1, 19, 11, 30, 6, 8, 8, 19, 27, 20, 27, 38};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int total = 49;
    vector<int> d = {3, 12, 2, 8, 30, 5, 2, 27, 13, 7, 12, 9, 28, 13, 23, 17, 20, 23, 27, 25, 14, 27, 4, 2, 9, 21, 29};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int total = 27;
    vector<int> d = {7};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int total = 26;
    vector<int> d = {12, 8, 6, 6, 4, 1, 1, 9, 2, 1, 9, 12, 13, 3, 3, 4, 11, 11, 3, 5, 7, 10, 8, 10, 13, 6, 7, 3, 10, 5};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int total = 28;
    vector<int> d = {15, 14, 28, 39, 25, 8, 12, 18, 2, 33, 28, 31};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int total = 19;
    vector<int> d = {39, 23, 16, 30, 32, 6};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
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
    int total = 19;
    vector<int> d = {19, 13, 16, 18, 11, 14, 4, 2, 16, 17, 11, 18, 14, 13, 8, 5, 1, 6, 13, 6, 2, 17, 6, 3, 19, 19, 2, 20, 14, 3, 16, 4, 15, 11, 3, 2, 11, 10, 5, 12, 14, 13, 19, 11, 4, 15};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int total = 6;
    vector<int> d = {16, 18, 31, 21, 29, 14, 5, 29, 1, 30, 30, 24, 18, 17, 42, 4, 14, 41, 11, 39, 6, 11, 22, 31, 16, 13, 24, 31, 42, 33, 13, 25, 7, 19, 41, 22, 13, 4, 11, 8, 21, 22, 33};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int total = 34;
    vector<int> d = {40, 18, 14, 2, 41, 5, 14, 6, 6, 20, 5, 10, 36};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int total = 13;
    vector<int> d = {1, 23, 14, 13, 7, 10, 15, 5, 20, 19, 25, 13, 28, 27, 16, 29, 22, 18, 26, 1, 2, 22};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int total = 46;
    vector<int> d = {14, 15, 16, 1, 16, 7, 17, 3, 16, 12, 17, 7, 16, 11, 12, 4, 13, 3, 4, 12};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int total = 23;
    vector<int> d = {44, 36, 20, 18, 38, 26, 1, 5, 5, 12, 20, 32, 39, 21, 40, 34, 26, 21, 43, 21, 11, 38, 37, 6, 19, 27, 43, 47, 14, 5, 42, 17, 19, 22, 30, 28, 33, 35, 29};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int total = 46;
    vector<int> d = {8, 8, 6, 3, 3, 6, 3, 8, 7, 11, 10, 10, 7, 7, 2, 3, 6, 1, 7, 3, 9, 6, 11, 5, 9, 8, 1};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int total = 22;
    vector<int> d = {3, 2, 2, 1, 3, 3};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int total = 49;
    vector<int> d = {15, 7, 3, 6, 15, 5, 5, 1, 2, 15, 5, 8, 3, 15, 12, 12, 11, 6, 10, 8, 10, 11, 7, 3, 1, 11, 8, 13, 6};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int total = 44;
    vector<int> d = {14, 33, 14, 28, 14, 1, 19, 26, 15, 30, 5, 12, 22, 9, 13, 4, 14};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int total = 32;
    vector<int> d = {19, 12, 13, 8, 3, 10, 10, 4, 9, 5, 2, 3};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int total = 42;
    vector<int> d = {13, 21, 18, 6, 10, 17, 5, 9, 8, 9, 12, 19, 1, 12, 8};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int total = 5;
    vector<int> d = {16, 25, 13, 23, 7, 20, 13, 9, 12, 28, 8, 21, 22, 6, 9, 7, 30, 2, 14, 10, 21, 7, 10, 24, 17, 3, 14, 9, 16, 18, 12, 9, 11, 15, 20, 5};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int total = 12;
    vector<int> d = {26, 6, 6, 27, 19, 1, 4, 6, 27, 5, 12, 1, 29, 14, 6, 3};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int total = 12;
    vector<int> d = {15, 26, 11, 9, 1, 2, 25};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int total = 43;
    vector<int> d = {10, 4, 10, 13, 8, 4, 9, 9, 10, 9, 12, 5, 11, 12, 9, 10, 4, 3, 7, 13, 12, 1, 4, 7, 7, 2, 9, 4, 12, 11, 5, 2, 13, 13, 3, 5, 12, 7, 9, 2, 4};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int total = 18;
    vector<int> d = {21, 15, 19, 38, 40, 40, 29, 26, 34, 11, 33, 32, 14, 6, 2, 35, 24, 25, 3, 14, 22, 10, 27, 13, 29, 10, 5};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int total = 21;
    vector<int> d = {31, 26, 13, 5, 6, 26, 21, 11, 7, 5, 4, 15, 28, 29, 25, 26, 30, 20, 22, 30, 12, 1, 19, 7, 8, 18, 34, 11, 29, 15, 32, 20, 19, 30, 29, 26, 10, 7, 18, 2, 8, 19, 6, 23, 18, 19};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int total = 38;
    vector<int> d = {8, 4, 6, 6, 8, 2, 2, 3, 2, 5, 4};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int total = 45;
    vector<int> d = {2, 7, 11, 17, 2, 9, 18, 16, 16, 8, 5, 18, 5, 17, 16, 5, 4, 13, 16, 10, 9, 3, 18, 15, 9, 5, 14, 7, 11, 3, 6, 17, 9, 7};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int total = 37;
    vector<int> d = {2, 1, 21, 25, 10, 18, 2, 30, 21, 27, 14, 8, 8, 9, 30, 7, 14, 28, 9, 12, 14, 17, 7, 25, 26, 11, 24, 29, 14, 31, 25, 18, 30, 8, 12, 31};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int total = 45;
    vector<int> d = {3, 1, 3, 2, 1, 3, 2, 2, 1, 2, 3, 3, 2, 3, 3, 2, 3, 3, 3, 3, 2, 2, 2, 2, 2, 3, 1, 2, 3, 2, 3, 1, 3};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int total = 12;
    vector<int> d = {25, 21, 26, 8, 8, 21, 1, 6, 28, 2, 6, 14, 10, 8, 26, 10, 11, 15, 6, 10, 17, 3, 26, 29, 24, 5, 11, 27, 14, 25, 4};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int total = 7;
    vector<int> d = {50, 32, 39, 40, 19, 49, 25, 46, 7, 29, 12, 23, 19, 17, 12, 15, 41, 36, 26, 45, 16, 2, 3, 9, 13};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int total = 37;
    vector<int> d = {33, 1, 21, 29, 12, 11, 30, 4, 3, 41, 7, 38, 2, 8, 15, 34, 29, 19, 42, 12, 27, 22};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int total = 44;
    vector<int> d = {18, 17, 7, 28, 29, 9, 6, 17, 26, 7, 11, 28, 14, 11, 27, 31};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int total = 45;
    vector<int> d = {19, 20, 2, 1, 6, 20, 13, 7, 2, 22, 8, 21, 19, 9, 22, 22, 19, 20, 3, 8, 6, 8, 15, 4, 5, 5, 19, 14, 11, 5, 17, 7, 22, 2};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int total = 44;
    vector<int> d = {29, 13, 17, 33, 31, 7, 36, 17, 20, 39, 13, 8, 30, 36, 25, 6, 13, 35, 13, 34, 27, 40, 25, 40, 35, 21};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int total = 38;
    vector<int> d = {33};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int total = 45;
    vector<int> d = {23, 19, 15, 24, 34, 27, 17, 18, 6, 35, 17, 4, 23, 34, 8, 32, 32, 19, 10, 16, 2, 21, 32, 30, 4, 22};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int total = 9;
    vector<int> d = {1, 2, 3, 6};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int total = 1;
    vector<int> d = {1};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int total = 5;
    vector<int> d = {5};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int total = 10;
    vector<int> d = {2, 2, 2, 2, 2};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int total = 21;
    vector<int> d = {14, 2, 16, 9, 9, 5, 5, 23, 25, 20, 8, 25, 6, 12, 3, 2, 4, 5, 10, 14, 19, 12, 25, 15, 14};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int total = 2;
    vector<int> d = {1, 1, 1};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int total = 6;
    vector<int> d = {1, 1, 1, 1, 1};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int total = 10;
    vector<int> d = {7, 1, 5, 6, 1, 3, 4};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int total = 50;
    vector<int> d = {1, 1};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int total = 50;
    vector<int> d = {1};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int total = 10;
    vector<int> d = {2, 2, 2, 2};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int total = 5;
    vector<int> d = {1, 1, 1, 1, 1};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int total = 6;
    vector<int> d = {5, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int total = 5;
    vector<int> d = {2, 2, 2};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int total = 5;
    vector<int> d = {2, 2, 1};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int total = 5;
    vector<int> d = {1, 1, 1, 1, 1, 1, 1};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int total = 50;
    vector<int> d = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int total = 3;
    vector<int> d = {3};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int total = 10;
    vector<int> d = {1};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int total = 6;
    vector<int> d = {1};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int total = 2;
    vector<int> d = {2};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int total = 10;
    vector<int> d = {1, 2, 3};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int total = 10;
    vector<int> d = {9, 1, 2, 3, 4};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int total = 50;
    vector<int> d = {1, 2};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int total = 12;
    vector<int> d = {5, 7, 3};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int total = 50;
    vector<int> d = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int total = 5;
    vector<int> d = {2, 1};
    FoxAndVacation* pObj = new FoxAndVacation();
    clock_t start = clock();
    int result = pObj->maxCities(total, d);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23065874&rd=15183&pm=11813
********************************************************************************
#include<stdio.h>    
#include<string.h>    
#include <string> 
#include <cmath> 
#include <iostream> 
#include <map> 
#include<vector>    
#include<queue> 
#include<algorithm>    
#define fr(i,s,n) for(int i=s;i<n;i++) 
#define pf printf 
#define sf scanf 
#define sfv1(a) scanf("%d",&a) 
#define sfv2(n,m) scanf("%d%d",&n,&m) 
#define sfv3(u,v,w) scanf("%d%d%d",&u,&v,&w) 
#define sfstr(c) scanf("%s",c) 
#define pfv1(a) printf("%d\n",a) 
#define fi freopen("in.txt","r",stdin) 
#define fo freopen("out.txt","w",stdout) 
#define cl(a) memset(a,0,sizeof(a)) 
#define me(a,x) memset(a,x,sizeof(a)) 
using namespace std; 
 
 
 
class FoxAndVacation 
{ 
public: 
  int maxCities(int total, vector <int> d) 
  { 
    sort(d.begin(),d.end()); 
    int len = d.size(); 
    int ans=0; 
    fr(i,0,len){ 
      if (total >= d[i]){ 
        total-=d[i]; 
        ans++; 
      } 
    } 
    return ans; 
  } 
 
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/