/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7239
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

class ByteLand {
public:
    int buildCastles(vector<int> road, vector<int> distance, vector<int> castle, int k);
};

int ByteLand::buildCastles(vector<int> road, vector<int> distance, vector<int> castle, int k) {
    int ret;
    return ret;
}


int test0() {
    vector<int> road = {1, 2, 3, 4, 0};
    vector<int> distance = {1, 1, 1, 1, 1};
    vector<int> castle = {};
    int k = 1;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
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
    vector<int> road = {1, 2, 0};
    vector<int> distance = {1, 2, 3};
    vector<int> castle = {2};
    int k = 1;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
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
    vector<int> road = {0, 1};
    vector<int> distance = {1, 1};
    vector<int> castle = {1};
    int k = 1;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
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
    vector<int> road = {0, 4, 3, 2, 3};
    vector<int> distance = {1, 3, 1, 2, 2};
    vector<int> castle = {0, 2};
    int k = 1;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
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
    vector<int> road = {2, 1, 4, 4, 1};
    vector<int> distance = {1, 2, 1, 2, 3};
    vector<int> castle = {0, 1};
    int k = 1;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> road = {3, 2, 1, 2, 0};
    vector<int> distance = {2, 1, 3, 1, 3};
    vector<int> castle = {3, 4};
    int k = 1;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> road = {0, 2, 0, 0, 2, 2, 8, 3, 8, 7};
    vector<int> distance = {10, 9, 1, 8, 1, 3, 7, 2, 8, 1};
    vector<int> castle = {3, 4, 6};
    int k = 3;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> road = {0, 0, 5, 8, 9, 5, 0, 4, 7, 0};
    vector<int> distance = {9, 2, 1, 2, 3, 8, 3, 1, 8, 10};
    vector<int> castle = {1, 3, 8};
    int k = 3;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> road = {6, 8, 0, 9, 1, 6, 5, 7, 6, 5};
    vector<int> distance = {3, 8, 8, 10, 8, 4, 10, 9, 2, 1};
    vector<int> castle = {2, 3, 8};
    int k = 2;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> road = {17, 10, 14, 18, 10, 17, 9, 0, 17, 5, 2, 19, 17, 11, 17, 0, 8, 0, 19, 0};
    vector<int> distance = {10, 2, 4, 8, 7, 10, 8, 9, 9, 1, 2, 6, 1, 9, 4, 3, 8, 5, 4, 5};
    vector<int> castle = {5, 7, 12};
    int k = 5;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> road = {9, 19, 3, 1, 7, 3, 0, 19, 4, 4, 4, 3, 10, 13, 1, 10, 12, 1, 11, 19};
    vector<int> distance = {5, 10, 6, 9, 9, 10, 2, 3, 2, 2, 1, 3, 1, 4, 4, 10, 9, 7, 1, 4};
    vector<int> castle = {6, 10, 15};
    int k = 2;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> road = {12, 0, 19, 2, 4, 13, 13, 4, 17, 5, 9, 17, 5, 8, 19, 8, 12, 0, 8, 4};
    vector<int> distance = {3, 4, 9, 4, 2, 5, 4, 7, 7, 1, 6, 9, 4, 5, 1, 8, 8, 4, 2, 7};
    vector<int> castle = {10, 14, 16};
    int k = 2;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> road = {11, 5, 16, 15, 17, 16, 11, 9, 19, 9, 4, 12, 5, 9, 9, 11, 10, 16, 9, 3};
    vector<int> distance = {1, 2, 3, 1, 8, 5, 7, 8, 7, 3, 6, 10, 8, 2, 5, 5, 10, 7, 6, 9};
    vector<int> castle = {7, 13, 19};
    int k = 3;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> road = {5, 9, 14, 8, 11, 10, 10, 6, 0, 11, 18, 2, 18, 4, 1, 8, 1, 13, 13, 12};
    vector<int> distance = {4, 8, 8, 10, 7, 6, 8, 8, 5, 7, 1, 2, 8, 7, 1, 1, 7, 3, 7, 9};
    vector<int> castle = {1, 3, 17};
    int k = 3;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> road = {14, 1, 2, 2, 14, 15, 7, 7, 10, 6, 6, 0, 3, 3, 17, 12, 7, 5, 14, 1};
    vector<int> distance = {6, 1, 2, 6, 7, 4, 5, 5, 9, 4, 8, 3, 7, 10, 7, 4, 8, 5, 1, 8};
    vector<int> castle = {0, 8, 19};
    int k = 2;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
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
    vector<int> road = {15, 3, 8, 7, 2, 6, 13, 3, 13, 3, 14, 0, 11, 9, 14, 18, 8, 9, 5, 12};
    vector<int> distance = {7, 8, 10, 10, 5, 6, 2, 4, 8, 2, 6, 4, 5, 6, 3, 7, 4, 9, 1, 7};
    vector<int> castle = {6, 7, 13};
    int k = 3;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> road = {5, 8, 13, 15, 8, 3, 12, 0, 1, 19, 11, 2, 15, 8, 5, 11, 6, 16, 18, 11};
    vector<int> distance = {1, 6, 6, 9, 10, 4, 1, 8, 8, 10, 5, 5, 8, 1, 10, 6, 6, 4, 8, 9};
    vector<int> castle = {0, 3, 9};
    int k = 5;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> road = {10, 9, 5, 13, 15, 1, 11, 18, 3, 17, 14, 13, 16, 7, 4, 13, 6, 13, 10, 10};
    vector<int> distance = {3, 3, 2, 8, 8, 6, 7, 6, 1, 8, 8, 1, 8, 3, 7, 5, 6, 8, 4, 1};
    vector<int> castle = {4, 5, 7};
    int k = 6;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> road = {12, 6, 1, 18, 13, 14, 0, 15, 8, 12, 17, 15, 1, 14, 4, 8, 14, 1, 15, 16};
    vector<int> distance = {9, 10, 3, 4, 7, 1, 7, 9, 7, 6, 4, 2, 4, 6, 2, 7, 2, 2, 5, 1};
    vector<int> castle = {11, 15, 17};
    int k = 4;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> road = {28, 28, 7, 6, 14, 7, 21, 24, 0, 5, 29, 14, 4, 1, 19, 23, 3, 19, 22, 22, 23, 3, 8, 15, 22, 19, 24, 22, 22, 12};
    vector<int> distance = {94, 73, 23, 31, 9, 67, 30, 63, 61, 91, 80, 12, 45, 4, 55, 46, 87, 99, 45, 51, 71, 20, 34, 30, 35, 6, 41, 31, 60, 63};
    vector<int> castle = {4, 12, 14, 15, 25};
    int k = 7;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 94;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> road = {23, 4, 27, 26, 4, 26, 19, 10, 29, 14, 5, 17, 12, 11, 27, 2, 11, 2, 23, 17, 29, 4, 18, 18, 28, 22, 22, 5, 7, 26};
    vector<int> distance = {1, 24, 31, 10, 72, 37, 46, 31, 39, 37, 45, 34, 66, 9, 78, 45, 92, 89, 57, 7, 86, 78, 63, 66, 6, 34, 89, 90, 91, 28};
    vector<int> castle = {0, 1, 12, 18, 25};
    int k = 4;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 115;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> road = {3, 6, 8, 4, 5, 14, 18, 0, 29, 7, 7, 3, 20, 17, 1, 18, 23, 28, 13, 0, 5, 6, 8, 4, 26, 16, 21, 0, 8, 9};
    vector<int> distance = {42, 63, 49, 90, 19, 14, 26, 19, 16, 27, 28, 44, 20, 80, 11, 73, 39, 16, 3, 12, 87, 38, 70, 45, 14, 18, 83, 97, 8, 24};
    vector<int> castle = {7, 8, 10, 11, 16};
    int k = 10;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> road = {15, 21, 26, 25, 26, 2, 13, 9, 3, 12, 2, 27, 0, 17, 19, 23, 3, 8, 14, 20, 23, 1, 14, 29, 10, 9, 7, 12, 16, 23};
    vector<int> distance = {24, 4, 7, 42, 30, 54, 86, 83, 43, 1, 67, 47, 88, 38, 15, 77, 23, 20, 7, 78, 22, 50, 1, 7, 90, 84, 66, 99, 18, 15};
    vector<int> castle = {0, 1, 4, 19, 24};
    int k = 4;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 96;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> road = {8, 3, 10, 2, 8, 10, 9, 14, 8, 8, 0, 16, 22, 20, 3, 21, 21, 12, 14, 29, 13, 17, 17, 22, 24, 21, 16, 17, 2, 16};
    vector<int> distance = {25, 44, 73, 45, 76, 1, 17, 27, 27, 77, 67, 68, 14, 30, 28, 9, 73, 9, 1, 17, 49, 87, 96, 6, 71, 93, 29, 77, 82, 21};
    vector<int> castle = {1, 4, 13, 15, 16};
    int k = 9;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 68;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> road = {11, 6, 28, 9, 3, 24, 16, 0, 29, 7, 9, 7, 19, 9, 20, 8, 17, 16, 13, 4, 26, 5, 4, 14, 29, 7, 18, 14, 20, 5};
    vector<int> distance = {87, 84, 44, 5, 54, 9, 51, 42, 41, 11, 11, 52, 78, 100, 72, 98, 10, 91, 56, 64, 16, 32, 61, 72, 88, 40, 49, 7, 77, 42};
    vector<int> castle = {2, 8, 16, 18, 23};
    int k = 5;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> road = {11, 9, 8, 22, 21, 8, 2, 13, 8, 24, 14, 5, 23, 24, 3, 28, 1, 26, 1, 13, 4, 10, 23, 0, 18, 16, 15, 20, 3, 25};
    vector<int> distance = {21, 15, 35, 90, 90, 47, 20, 74, 10, 28, 58, 44, 86, 4, 20, 99, 64, 12, 95, 85, 27, 31, 98, 42, 73, 86, 99, 78, 89, 84};
    vector<int> castle = {17, 18, 19, 25, 29};
    int k = 4;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 149;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> road = {18, 17, 9, 4, 18, 8, 21, 3, 13, 16, 13, 13, 10, 24, 10, 4, 2, 10, 23, 3, 3, 9, 21, 2, 7, 26, 27, 25, 16, 19};
    vector<int> distance = {6, 57, 17, 27, 21, 56, 75, 95, 89, 61, 71, 42, 96, 63, 58, 26, 40, 100, 39, 13, 84, 24, 72, 17, 86, 71, 34, 46, 27, 100};
    vector<int> castle = {14, 17, 20, 23, 29};
    int k = 4;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 133;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> road = {18, 15, 5, 2, 6, 25, 24, 17, 13, 27, 7, 18, 18, 6, 18, 10, 1, 21, 12, 18, 19, 12, 23, 14, 0, 14, 28, 15, 1, 18};
    vector<int> distance = {27, 22, 57, 63, 44, 53, 10, 41, 42, 53, 100, 89, 74, 98, 88, 84, 8, 69, 66, 42, 19, 85, 47, 2, 1, 29, 36, 49, 95, 30};
    vector<int> castle = {2, 6, 10, 14, 24};
    int k = 6;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> road = {16, 26, 6, 16, 0, 10, 5, 18, 3, 4, 5, 29, 21, 24, 24, 5, 14, 0, 1, 6, 20, 19, 3, 8, 15, 2, 6, 18, 13, 1};
    vector<int> distance = {15, 80, 20, 11, 18, 70, 12, 55, 61, 37, 89, 86, 46, 82, 32, 72, 17, 97, 34, 98, 15, 44, 60, 68, 54, 15, 51, 13, 95, 36};
    vector<int> castle = {13, 14, 25, 26, 29};
    int k = 4;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 125;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> road = {0, 41, 14, 45, 16, 49, 46, 34, 21, 12, 13, 41, 17, 39, 32, 36, 17, 14, 31, 38, 20, 3, 49, 18, 0, 27, 35, 12, 5, 36, 44, 7, 29, 10, 4, 45, 12, 0, 32, 33, 14, 47, 27, 31, 36, 9, 19, 4, 25, 2};
    vector<int> distance = {95, 96, 56, 94, 64, 9, 23, 1, 21, 80, 89, 18, 37, 18, 28, 43, 16, 40, 94, 98, 76, 60, 45, 53, 44, 33, 12, 63, 89, 39, 66, 83, 35, 73, 29, 50, 81, 51, 3, 2, 31, 91, 71, 19, 61, 50, 62, 76, 90, 7};
    vector<int> castle = {0, 8, 15, 16, 18, 21, 22, 23, 31, 39};
    int k = 10;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 87;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> road = {38, 23, 5, 12, 1, 7, 43, 4, 11, 46, 34, 1, 16, 4, 13, 15, 15, 38, 6, 21, 12, 24, 39, 32, 42, 49, 33, 25, 22, 24, 47, 12, 49, 4, 25, 3, 13, 20, 7, 24, 16, 43, 28, 34, 47, 41, 1, 13, 32, 10};
    vector<int> distance = {87, 95, 85, 26, 28, 80, 26, 13, 57, 48, 39, 4, 63, 88, 11, 38, 41, 26, 58, 48, 1, 76, 91, 81, 62, 89, 74, 13, 54, 56, 75, 40, 51, 60, 66, 30, 91, 43, 94, 47, 42, 32, 51, 4, 19, 13, 41, 12, 38, 50};
    vector<int> castle = {1, 2, 10, 21, 26, 37, 39, 41, 45, 46};
    int k = 10;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 85;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> road = {0, 26, 35, 2, 37, 2, 33, 27, 46, 26, 24, 38, 9, 26, 41, 30, 40, 34, 41, 27, 35, 1, 19, 12, 4, 40, 1, 47, 37, 3, 43, 38, 32, 29, 42, 19, 33, 28, 47, 30, 4, 23, 20, 14, 49, 11, 46, 39, 47, 37};
    vector<int> distance = {69, 84, 91, 90, 48, 46, 81, 49, 93, 70, 5, 39, 10, 37, 18, 3, 8, 3, 81, 5, 85, 37, 78, 5, 3, 29, 19, 49, 18, 66, 38, 87, 1, 29, 76, 100, 26, 8, 1, 70, 30, 5, 8, 39, 93, 77, 93, 100, 80, 25};
    vector<int> castle = {5, 6, 13, 14, 15, 16, 20, 31, 33, 38};
    int k = 10;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 93;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> road = {3, 19, 8, 33, 47, 7, 10, 6, 9, 30, 37, 15, 37, 26, 7, 16, 20, 9, 45, 45, 15, 12, 10, 0, 32, 25, 14, 22, 43, 48, 30, 49, 19, 38, 34, 16, 47, 45, 25, 9, 25, 12, 24, 14, 40, 32, 30, 11, 43, 27};
    vector<int> distance = {9, 9, 41, 19, 9, 75, 96, 76, 100, 90, 74, 80, 89, 93, 20, 25, 62, 67, 20, 87, 26, 47, 1, 53, 62, 92, 35, 44, 3, 28, 22, 11, 88, 14, 81, 48, 40, 76, 23, 39, 65, 48, 18, 5, 41, 89, 30, 54, 56, 1};
    vector<int> castle = {3, 8, 20, 24, 32, 34, 36, 41, 47, 49};
    int k = 3;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 128;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> road = {48, 38, 39, 30, 36, 29, 6, 8, 19, 22, 8, 39, 29, 0, 27, 10, 3, 34, 10, 46, 17, 7, 37, 3, 17, 22, 26, 21, 10, 27, 47, 11, 16, 37, 41, 4, 18, 47, 14, 39, 22, 22, 28, 1, 22, 6, 11, 27, 40, 21};
    vector<int> distance = {74, 10, 82, 64, 16, 49, 88, 44, 20, 48, 21, 68, 11, 39, 57, 53, 93, 27, 52, 58, 16, 74, 32, 95, 75, 5, 51, 36, 84, 43, 10, 58, 53, 91, 73, 68, 39, 60, 11, 11, 7, 83, 30, 18, 22, 38, 22, 66, 64, 73};
    vector<int> castle = {6, 10, 12, 21, 22, 24, 26, 28, 47, 48};
    int k = 11;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 73;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> road = {21, 4, 23, 11, 28, 42, 1, 37, 4, 11, 46, 38, 42, 15, 11, 29, 36, 27, 42, 10, 3, 23, 8, 9, 49, 33, 23, 26, 43, 21, 47, 14, 27, 22, 27, 6, 16, 28, 45, 22, 42, 41, 10, 34, 6, 22, 14, 44, 1, 8};
    vector<int> distance = {8, 5, 32, 16, 17, 32, 1, 90, 10, 46, 61, 9, 60, 91, 81, 89, 47, 49, 20, 92, 71, 62, 86, 81, 48, 92, 53, 12, 89, 56, 21, 96, 61, 4, 63, 29, 87, 64, 18, 96, 9, 31, 4, 21, 21, 36, 61, 19, 84, 80};
    vector<int> castle = {1, 3, 9, 23, 28, 36, 38, 40, 44, 46};
    int k = 11;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> road = {23, 8, 27, 37, 36, 13, 2, 5, 11, 11, 35, 14, 33, 5, 2, 43, 23, 37, 25, 35, 41, 15, 31, 29, 5, 19, 19, 9, 47, 15, 32, 22, 25, 11, 10, 11, 25, 12, 17, 36, 25, 4, 2, 10, 10, 4, 6, 35, 44, 31};
    vector<int> distance = {23, 86, 99, 55, 17, 7, 24, 86, 66, 24, 54, 100, 48, 79, 62, 8, 43, 37, 23, 62, 25, 100, 66, 77, 13, 28, 34, 69, 14, 78, 52, 36, 15, 50, 90, 31, 56, 66, 68, 73, 41, 21, 73, 88, 100, 34, 48, 94, 22, 22};
    vector<int> castle = {2, 4, 8, 12, 19, 20, 25, 34, 37, 47};
    int k = 4;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 178;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> road = {5, 49, 3, 5, 41, 35, 12, 6, 3, 35, 48, 23, 9, 35, 24, 42, 32, 17, 15, 3, 23, 12, 26, 43, 37, 10, 42, 48, 15, 4, 37, 20, 3, 41, 27, 46, 28, 40, 2, 31, 27, 2, 7, 36, 38, 33, 30, 22, 3, 45};
    vector<int> distance = {29, 27, 60, 7, 72, 97, 69, 16, 97, 84, 20, 85, 7, 76, 78, 34, 72, 6, 74, 27, 90, 3, 31, 97, 89, 21, 30, 21, 44, 35, 16, 24, 62, 27, 30, 85, 24, 98, 1, 72, 34, 72, 56, 40, 99, 33, 73, 23, 91, 99};
    vector<int> castle = {0, 1, 6, 11, 27, 29, 30, 41, 43, 46};
    int k = 12;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 76;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> road = {29, 19, 6, 5, 0, 40, 30, 47, 42, 2, 32, 14, 7, 21, 12, 42, 46, 34, 34, 46, 36, 13, 48, 17, 40, 39, 18, 48, 3, 14, 41, 32, 35, 47, 39, 35, 40, 20, 34, 32, 22, 17, 48, 31, 40, 11, 25, 38, 47, 9};
    vector<int> distance = {85, 35, 25, 84, 54, 15, 75, 72, 14, 80, 88, 7, 14, 73, 57, 4, 8, 47, 76, 94, 81, 98, 13, 80, 81, 4, 93, 59, 42, 42, 20, 79, 28, 45, 14, 81, 59, 40, 52, 24, 20, 91, 83, 85, 63, 39, 88, 22, 37, 63};
    vector<int> castle = {2, 11, 15, 18, 26, 29, 32, 41, 44, 47};
    int k = 10;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 92;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> road = {33, 23, 6, 10, 17, 21, 43, 28, 10, 44, 1, 31, 35, 35, 16, 49, 23, 5, 23, 11, 18, 38, 30, 31, 17, 29, 25, 2, 21, 29, 30, 6, 3, 36, 18, 22, 7, 11, 0, 19, 8, 4, 3, 45, 39, 19, 44, 15, 24, 17};
    vector<int> distance = {77, 45, 8, 57, 77, 78, 37, 4, 82, 60, 86, 14, 68, 41, 52, 36, 13, 9, 50, 14, 80, 8, 18, 33, 53, 59, 4, 99, 24, 29, 69, 1, 25, 28, 9, 53, 57, 97, 57, 38, 56, 94, 3, 23, 34, 54, 11, 46, 14, 60};
    vector<int> castle = {10, 11, 13, 18, 20, 27, 31, 38, 40, 43};
    int k = 10;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 77;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> road = {44, 47, 25, 43, 3, 49, 47, 45, 32, 1, 39, 7, 16, 36, 10, 7, 34, 33, 7, 3, 0, 1, 6, 48, 35, 49, 42, 13, 0, 28, 16, 45, 27, 41, 38, 32, 40, 37, 27, 24, 38, 17, 34, 7, 5, 46, 16, 42, 31, 23};
    vector<int> distance = {927498, 646582, 436475, 872504, 889133, 824112, 857055, 432025, 246626, 997005, 502405, 84542, 510050, 578583, 322135, 719991, 607515, 727527, 774528, 288445, 151052, 633169, 565312, 76438, 648276, 244819, 39636, 422942, 712063, 570267, 619467, 639560, 216848, 572293, 28415, 622332, 396404, 885469, 570709, 159381, 882474, 73113, 760274, 908875, 651695, 82408, 628865, 775562, 326287, 919745};
    vector<int> castle = {1, 5, 11, 12, 18, 26, 30, 37, 38, 39};
    int k = 10;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 872504;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> road = {27, 48, 12, 26, 40, 27, 10, 45, 47, 18, 26, 20, 30, 1, 45, 27, 9, 11, 38, 47, 5, 45, 36, 19, 13, 12, 8, 1, 25, 40, 4, 2, 38, 17, 30, 30, 46, 40, 26, 43, 8, 2, 14, 41, 3, 11, 18, 14, 24, 8};
    vector<int> distance = {944162, 42833, 547704, 60248, 173452, 929419, 762812, 537963, 701620, 575137, 42953, 125427, 583841, 340594, 807694, 522124, 486824, 809540, 495964, 394400, 16433, 108775, 739054, 827199, 917316, 281060, 150712, 605986, 619176, 132189, 950346, 563338, 175021, 498049, 139937, 864824, 427467, 419101, 402786, 645438, 994237, 962091, 770864, 94430, 819036, 94909, 616553, 822211, 420800, 112516};
    vector<int> castle = {2, 8, 12, 15, 24, 34, 36, 41, 43, 48};
    int k = 10;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 866013;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> road = {38, 39, 6, 38, 27, 31, 6, 27, 19, 44, 16, 9, 9, 45, 46, 20, 47, 6, 19, 14, 18, 5, 6, 34, 40, 14, 10, 38, 10, 14, 24, 48, 3, 32, 39, 33, 13, 45, 12, 32, 41, 28, 43, 3, 23, 39, 23, 22, 48, 44};
    vector<int> distance = {504238, 41767, 751951, 619644, 454503, 169591, 422710, 136666, 67781, 3070, 707430, 546005, 827421, 246486, 328339, 393810, 893769, 246902, 646055, 101083, 253537, 262299, 829962, 310332, 497052, 207537, 719972, 961575, 334010, 853722, 593019, 838247, 895488, 344969, 974242, 866343, 30911, 396951, 3008, 98691, 916373, 710437, 161047, 743793, 473274, 489385, 137602, 883394, 252639, 300008};
    vector<int> castle = {1, 5, 8, 24, 25, 26, 28, 32, 36, 39};
    int k = 3;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1524484;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> road = {3, 34, 39, 23, 25, 31, 34, 28, 40, 26, 0, 28, 23, 44, 2, 7, 47, 45, 47, 6, 23, 21, 14, 12, 29, 22, 40, 9, 5, 26, 11, 8, 11, 2, 33, 38, 33, 17, 18, 25, 46, 20, 3, 19, 14, 7, 28, 13, 5, 26};
    vector<int> distance = {813071, 88029, 154350, 169385, 723544, 566729, 101407, 897384, 64641, 87064, 976262, 469102, 719374, 798425, 224656, 859658, 854466, 164941, 55177, 541334, 809316, 404623, 291755, 384569, 69042, 849519, 880327, 570523, 384933, 179982, 128999, 714355, 784362, 799700, 883739, 507905, 882781, 501497, 921640, 947421, 588561, 414254, 932874, 307934, 212678, 157529, 683943, 67143, 322469, 739120};
    vector<int> castle = {0, 3, 9, 26, 29, 32, 33, 34, 35, 41};
    int k = 10;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 882781;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> road = {12, 9, 38, 24, 8, 28, 30, 38, 25, 22, 8, 35, 25, 33, 20, 4, 11, 15, 47, 29, 34, 25, 14, 27, 7, 18, 14, 9, 49, 25, 46, 12, 34, 36, 38, 45, 15, 18, 33, 40, 40, 44, 27, 15, 27, 49, 20, 41, 14, 19};
    vector<int> distance = {139071, 670049, 483897, 324038, 982079, 608056, 25356, 539595, 514667, 156055, 913121, 588663, 412469, 748005, 60750, 62607, 360300, 814665, 130726, 632786, 868257, 571168, 996530, 293734, 281836, 417109, 431733, 475406, 535700, 482550, 768077, 191123, 668950, 768325, 31512, 651028, 892732, 56867, 190623, 407398, 729273, 620095, 512413, 141742, 368099, 573162, 204348, 244751, 904178, 851425};
    vector<int> castle = {4, 16, 20, 26, 27, 28, 34, 35, 37, 42};
    int k = 10;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 768325;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> road = {3, 12, 2, 3, 36, 13, 32, 17, 31, 6, 16, 3, 0, 28, 44, 1, 41, 42, 3, 20, 16, 40, 5, 10, 8, 25, 37, 34, 32, 21, 14, 35, 33, 18, 40, 21, 31, 23, 40, 12, 29, 7, 16, 32, 35, 12, 35, 27, 6, 38};
    vector<int> distance = {273200, 645724, 595529, 149856, 199584, 234637, 641733, 974224, 713973, 696917, 928695, 85590, 765253, 380131, 540608, 64745, 96854, 110540, 213718, 455245, 884954, 951850, 379052, 76772, 899234, 897039, 827735, 423969, 582368, 858541, 287157, 855568, 20616, 882685, 521775, 736552, 633673, 679859, 710775, 347645, 376776, 155821, 433234, 658380, 52303, 490194, 723124, 149157, 600733, 453194};
    vector<int> castle = {0, 1, 3, 9, 25, 37, 41, 42, 43, 45};
    int k = 10;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 837839;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> road = {26, 5, 35, 2, 6, 9, 10, 32, 5, 37, 4, 41, 16, 7, 34, 40, 13, 16, 33, 15, 5, 27, 18, 14, 4, 11, 11, 49, 20, 49, 0, 48, 4, 37, 0, 12, 46, 13, 44, 1, 0, 48, 42, 19, 5, 26, 11, 20, 44, 44};
    vector<int> distance = {515138, 941601, 387324, 824108, 524117, 409928, 529920, 529529, 677127, 731292, 849080, 476077, 767441, 987034, 722166, 192843, 712646, 16362, 687358, 253042, 255365, 627761, 247690, 872410, 672430, 781598, 357688, 60841, 3920, 828285, 246187, 519058, 769885, 633510, 343165, 810353, 559789, 389436, 856233, 236915, 120728, 705312, 229343, 404520, 692345, 951508, 113714, 921342, 484221, 801072};
    vector<int> castle = {2, 10, 21, 24, 31, 32, 35, 36, 40, 47};
    int k = 10;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 872410;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> road = {19, 38, 49, 5, 49, 14, 9, 37, 1, 42, 1, 28, 3, 45, 47, 0, 4, 11, 41, 26, 34, 24, 12, 15, 48, 10, 27, 21, 47, 31, 11, 18, 19, 13, 25, 18, 27, 34, 5, 28, 26, 8, 9, 32, 3, 6, 32, 9, 19, 23};
    vector<int> distance = {530236, 902054, 924900, 871498, 811921, 172898, 373810, 339400, 173621, 878507, 545331, 898285, 246577, 675900, 382298, 731552, 397320, 485177, 660137, 753027, 596357, 404915, 979935, 836566, 154847, 340090, 126675, 118629, 784999, 580396, 217603, 315234, 482450, 142502, 703084, 810722, 831752, 76893, 150122, 5372, 471752, 695452, 903656, 718328, 887704, 802305, 449880, 285023, 287481, 110016};
    vector<int> castle = {2, 6, 23, 24, 25, 28, 29, 33, 37, 49};
    int k = 5;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1252317;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> road = {8, 9, 23, 12, 42, 46, 13, 34, 17, 36, 37, 19, 44, 15, 22, 48, 44, 46, 29, 11, 45, 16, 42, 31, 20, 20, 6, 49, 29, 31, 23, 37, 40, 48, 1, 34, 44, 16, 19, 14, 3, 8, 35, 49, 23, 7, 49, 19, 5, 28};
    vector<int> distance = {649533, 320402, 609647, 734476, 697135, 291070, 521898, 948293, 819569, 614077, 858874, 808244, 744967, 776817, 739544, 57068, 888851, 424190, 898485, 788222, 12304, 790940, 946681, 715689, 154441, 598906, 422048, 274940, 678426, 416404, 956271, 327958, 253157, 82269, 578785, 950291, 373338, 617035, 898583, 709258, 747463, 273808, 33853, 492429, 50624, 773396, 65849, 455827, 197586, 480685};
    vector<int> castle = {4, 10, 15, 25, 28, 29, 31, 35, 40, 47};
    int k = 10;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 898583;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> road = {33, 26, 19, 39, 45, 6, 29, 32, 40, 13, 40, 2, 21, 42, 33, 46, 40, 31, 22, 27, 17, 22, 17, 42, 3, 48, 7, 40, 29, 13, 0, 12, 40, 22, 2, 35, 28, 33, 17, 20, 47, 9, 22, 20, 4, 7, 16, 46, 38, 41};
    vector<int> distance = {795324, 686008, 60366, 413941, 834000, 788621, 507192, 440759, 822862, 980771, 264873, 357864, 767433, 778963, 721586, 636687, 581650, 525516, 22471, 529919, 870336, 339718, 333029, 503509, 894940, 57535, 466518, 706056, 960481, 276157, 777949, 755804, 478516, 354666, 686096, 312516, 143287, 193287, 753274, 966148, 690409, 534498, 324011, 457842, 313460, 561949, 94528, 411461, 87464, 633350};
    vector<int> castle = {7, 9, 15, 18, 25, 26, 29, 34, 45, 49};
    int k = 10;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1043960;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> road = {0, 0, 0, 0, 0, 1, 2, 2, 7, 2, 5, 6, 8, 9, 6, 2, 3, 4, 2, 12, 17, 13, 10, 18, 21, 21, 3, 13, 19, 24, 27, 2, 10, 28, 29, 2, 20, 16, 28, 24, 4, 38, 26, 14, 24, 0, 26, 12, 45, 9};
    vector<int> distance = {901248, 799129, 618730, 531690, 540159, 973332, 998390, 996131, 629399, 896680, 679159, 568995, 547243, 865539, 891503, 962247, 546835, 540293, 869112, 986195, 722036, 787926, 883703, 552604, 715840, 593438, 851585, 957512, 653737, 550017, 531499, 575631, 849146, 670876, 607321, 909952, 664854, 605710, 906082, 794254, 502390, 605888, 883896, 549633, 971427, 775398, 532526, 538908, 815691, 901639};
    vector<int> castle = {6, 26, 42};
    int k = 3;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3266471;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> road = {0, 0, 0, 0, 1, 2, 5, 6, 5, 2, 9, 5, 5, 4, 8, 4, 2, 7, 9, 3, 2, 16, 1, 5, 3, 8, 5, 17, 2, 18, 14, 0, 28, 12, 32, 32, 28, 32, 7, 20, 0, 6, 9, 38, 21, 19, 21, 46, 18, 5};
    vector<int> distance = {988387, 858090, 713250, 608934, 737044, 520822, 782655, 675552, 644086, 858015, 639163, 846370, 664231, 552872, 659632, 896499, 530765, 997399, 553622, 747226, 889038, 687748, 757240, 724989, 969753, 668127, 915206, 564488, 626892, 886415, 766211, 635925, 765151, 500107, 765506, 522841, 520930, 548160, 698394, 685663, 926822, 858204, 532032, 611700, 911076, 712312, 528845, 962488, 730357, 603115};
    vector<int> castle = {29, 36, 44};
    int k = 3;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2491633;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> road = {0, 0, 1, 2, 1, 0, 3, 2, 5, 4, 3, 3, 1, 0, 1, 10, 4, 3, 3, 9, 15, 12, 6, 2, 6, 23, 8, 5, 0, 5, 6, 27, 8, 5, 19, 13, 30, 16, 12, 35, 35, 29, 22, 7, 11, 42, 42, 8, 0, 33};
    vector<int> distance = {782698, 750265, 656651, 636015, 775813, 802244, 518178, 763849, 698840, 503456, 961598, 714830, 800245, 626298, 616497, 878295, 946726, 819046, 802095, 549771, 729537, 837856, 612653, 633770, 526978, 900877, 554585, 890394, 983251, 731670, 634411, 786595, 502581, 811709, 922610, 778395, 634600, 961436, 562890, 833440, 964892, 524487, 568917, 785783, 650785, 685414, 684724, 597511, 525106, 986819};
    vector<int> castle = {13, 16, 49};
    int k = 3;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2569430;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> road = {0, 0, 1, 1, 2, 2, 0, 3, 2, 0, 3, 3, 10, 9, 5, 6, 11, 8, 9, 11, 3, 16, 10, 4, 4, 3, 7, 3, 0, 3, 11, 12, 28, 15, 25, 3, 3, 26, 37, 2, 34, 20, 8, 16, 40, 23, 7, 42, 20, 14};
    vector<int> distance = {604262, 989572, 729236, 814166, 786612, 784301, 708793, 701810, 864471, 590239, 784937, 699284, 858301, 710586, 963805, 519307, 838340, 691969, 984302, 713390, 677389, 928988, 581037, 881352, 644426, 905184, 623546, 765219, 626619, 966863, 666098, 751528, 956434, 915981, 586340, 763692, 720928, 795133, 965502, 585399, 906020, 771085, 805330, 764320, 981671, 769134, 804274, 840657, 981750, 809223};
    vector<int> castle = {14, 19, 46};
    int k = 3;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3208932;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> road = {0, 0, 1, 1, 3, 2, 0, 2, 2, 0, 7, 6, 5, 1, 7, 10, 9, 9, 11, 3, 17, 19, 3, 2, 4, 1, 20, 5, 19, 24, 12, 18, 24, 4, 6, 10, 25, 22, 0, 20, 10, 18, 23, 20, 39, 30, 11, 46, 20, 3};
    vector<int> distance = {724869, 903080, 654713, 849986, 993622, 922920, 647444, 603197, 794693, 892565, 769991, 667587, 693595, 844135, 543640, 797690, 937001, 551890, 887952, 611533, 904476, 511359, 840482, 614559, 541897, 653424, 757561, 535065, 792672, 860263, 910133, 517540, 783989, 564845, 867526, 798257, 508412, 535617, 901454, 803105, 948829, 692091, 970693, 642423, 536225, 534979, 960760, 993874, 586869, 848712};
    vector<int> castle = {2, 7, 41};
    int k = 3;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3061627;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> road = {0, 0, 1, 2, 1, 3, 2, 1, 5, 8, 0, 1, 3, 8, 12, 6, 3, 11, 11, 9, 3, 20, 19, 21, 13, 8, 8, 24, 11, 2, 22, 13, 15, 12, 33, 19, 5, 27, 22, 19, 34, 11, 12, 0, 31, 42, 41, 18, 45, 15};
    vector<int> distance = {852353, 854728, 670509, 880153, 893705, 502943, 889360, 905908, 942894, 747277, 564810, 874189, 506559, 690249, 932035, 709104, 976941, 873994, 889975, 696910, 601620, 979953, 929639, 878258, 543881, 522006, 502160, 610820, 530275, 895431, 983876, 882629, 770805, 675031, 783428, 664509, 698621, 672787, 591063, 641514, 940712, 655873, 515702, 967918, 866769, 947738, 677021, 843709, 842378, 587643};
    vector<int> castle = {46, 47, 48};
    int k = 3;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3265014;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> road = {0, 0, 0, 2, 1, 0, 4, 6, 1, 5, 0, 2, 0, 0, 4, 6, 7, 11, 6, 15, 0, 9, 0, 12, 10, 15, 14, 20, 6, 1, 13, 19, 0, 19, 25, 9, 18, 1, 15, 17, 8, 9, 4, 12, 10, 28, 43, 15, 32, 8};
    vector<int> distance = {730555, 557142, 867493, 623300, 845155, 917759, 859754, 996191, 576315, 678120, 632518, 781819, 508037, 591101, 640093, 871512, 936040, 761957, 798819, 521471, 631285, 713880, 680140, 964405, 879477, 576556, 918641, 989043, 801781, 676802, 503936, 552982, 754591, 892076, 676282, 620392, 830482, 556683, 637230, 906797, 734803, 769748, 709262, 742841, 881496, 870002, 634999, 817536, 631958, 954465};
    vector<int> castle = {0, 5, 27};
    int k = 3;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2285059;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> road = {0, 0, 0, 1, 0, 4, 4, 3, 6, 1, 8, 7, 6, 5, 10, 14, 8, 7, 8, 10, 12, 15, 1, 19, 4, 8, 12, 25, 21, 22, 21, 8, 15, 19, 21, 6, 9, 29, 32, 26, 32, 35, 38, 14, 12, 32, 21, 5, 39, 13};
    vector<int> distance = {618882, 739098, 888926, 924485, 849526, 720930, 865087, 777489, 705540, 780801, 585752, 974040, 885506, 954457, 532128, 558677, 960157, 777798, 810007, 966575, 929146, 664076, 506045, 720114, 512961, 796147, 812390, 687144, 872913, 843203, 614067, 991795, 602947, 523639, 916280, 952474, 744570, 802013, 750609, 950110, 603460, 836362, 944796, 988966, 811465, 997571, 568290, 792268, 796016, 878297};
    vector<int> castle = {9, 16, 28};
    int k = 3;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3415112;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> road = {0, 0, 1, 2, 3, 0, 1, 4, 4, 6, 7, 4, 2, 2, 3, 12, 8, 14, 12, 2, 16, 12, 21, 19, 22, 3, 7, 19, 6, 10, 18, 28, 12, 10, 11, 15, 0, 27, 18, 12, 28, 20, 21, 8, 9, 20, 15, 35, 37, 43};
    vector<int> distance = {582450, 951220, 639925, 922144, 629822, 781035, 850774, 600692, 738806, 678347, 851051, 901092, 568939, 886944, 549944, 556158, 525163, 997756, 827148, 659270, 587725, 516621, 760411, 964097, 668866, 786160, 579342, 507803, 517882, 684070, 524836, 600333, 655937, 685409, 543123, 806406, 987091, 914545, 907099, 725896, 592891, 778796, 647634, 682478, 665739, 718226, 738636, 711549, 715981, 565784};
    vector<int> castle = {18, 21, 24};
    int k = 3;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2630490;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> road = {0, 0, 0, 1, 2, 1, 2, 0, 5, 2, 7, 0, 9, 2, 5, 8, 13, 0, 14, 10, 2, 4, 20, 5, 13, 19, 25, 13, 5, 4, 3, 1, 2, 31, 29, 8, 27, 34, 24, 21, 2, 29, 9, 5, 18, 22, 7, 25, 18, 11};
    vector<int> distance = {765922, 594236, 527750, 637798, 542661, 658503, 768958, 743929, 546530, 986548, 816016, 738264, 827837, 581273, 759740, 941045, 805215, 669655, 854620, 505721, 672725, 614046, 824422, 924887, 904733, 825085, 753194, 755063, 901608, 564743, 849639, 667530, 658979, 877390, 825975, 722287, 556539, 615579, 966217, 603070, 622774, 802879, 861981, 950611, 904800, 621720, 912302, 710014, 812022, 766921};
    vector<int> castle = {0, 38, 42};
    int k = 3;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2548958;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> road = {0, 0, 0, 2, 2, 3, 5, 2, 0, 7, 5, 10, 1, 6, 3, 11, 14, 16, 2, 9, 7, 18, 4, 1, 0, 14, 3, 1, 17, 3, 3, 22, 12, 23, 9, 34, 1, 18, 12, 28, 8, 22, 39, 6, 33, 20, 21, 18, 15, 32};
    vector<int> distance = {966269, 786618, 675318, 539466, 651936, 689652, 524966, 706621, 516008, 777388, 518335, 827111, 972717, 870206, 568493, 974391, 649257, 972703, 578767, 715805, 625128, 635485, 799318, 684751, 521933, 725772, 894504, 815299, 610746, 761896, 618650, 597661, 548514, 793968, 637128, 700450, 504267, 682741, 927719, 540922, 980776, 946054, 868033, 953492, 836906, 957173, 927883, 986163, 929875, 527296};
    vector<int> castle = {11, 25, 46};
    int k = 3;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2821587;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> road = {0, 0, 0, 0, 3, 0, 2, 0, 0, 6, 7, 4, 3, 6, 1, 13, 6, 15, 0, 11, 1, 18, 5, 15, 7, 8, 12, 15, 1, 4, 2, 23, 23, 1, 7, 14, 3, 13, 5, 36, 3, 15, 11, 14, 15, 16, 11, 43, 30, 14};
    vector<int> distance = {832211, 880270, 802270, 645693, 859944, 688529, 887058, 846428, 525309, 676366, 576173, 937739, 669749, 869144, 631215, 847848, 930466, 520889, 587901, 891532, 868656, 987912, 870651, 723030, 862494, 504949, 805108, 736562, 997817, 583901, 630391, 830027, 964171, 932661, 996368, 844762, 641836, 883425, 711836, 687792, 580437, 808656, 646177, 750187, 677800, 798040, 618681, 608265, 818929, 727229};
    vector<int> castle = {20, 42, 44};
    int k = 3;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2365001;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> road = {0, 0, 0, 0, 3, 2, 3, 1, 5, 2, 7, 10, 7, 4, 3, 1, 13, 11, 17, 16, 1, 2, 12, 15, 22, 2, 23, 16, 0, 15, 8, 29, 4, 21, 21, 3, 6, 16, 31, 7, 4, 9, 12, 30, 29, 24, 2, 37, 23, 12};
    vector<int> distance = {554953, 524752, 700956, 551196, 934833, 934634, 686767, 932532, 987240, 549566, 971322, 768723, 627506, 859912, 981468, 824374, 644545, 992522, 856083, 843685, 865138, 873671, 787358, 563488, 809799, 971931, 973629, 826950, 801475, 786746, 633561, 856428, 811498, 855164, 928271, 766978, 789797, 615037, 720156, 797683, 685251, 691478, 566405, 833404, 551389, 547873, 678424, 716582, 561041, 534506};
    vector<int> castle = {7};
    int k = 1;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 4322105;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> road = {0, 0, 1, 0, 0, 1, 2, 6, 0, 1, 3, 8, 1, 8, 6, 10, 7, 8, 6, 9, 15, 2, 5, 18, 10, 8, 8, 2, 17, 26, 16, 5, 16, 25, 5, 21, 26, 8, 17, 35, 36, 19, 10, 37, 32, 6, 1, 23, 20, 9};
    vector<int> distance = {858847, 976153, 845786, 980854, 829633, 684427, 781284, 920342, 604756, 636867, 571316, 930618, 921276, 611209, 787439, 944307, 970657, 628203, 594850, 992426, 739655, 965175, 532944, 974587, 951737, 520483, 579328, 844332, 611375, 774036, 940643, 970222, 770835, 786429, 971722, 621114, 991503, 753005, 562102, 596259, 889873, 633419, 547523, 831795, 744628, 855609, 776101, 735931, 983812, 891598};
    vector<int> castle = {};
    int k = 1;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 5196097;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> road = {0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48};
    vector<int> distance = {919973, 768172, 977773, 631485, 790573, 507625, 929965, 625795, 848518, 864753, 613213, 573093, 584341, 787133, 791072, 654684, 648254, 919250, 696555, 642632, 779851, 500828, 953142, 586654, 532567, 800629, 723554, 952886, 572121, 696563, 902879, 512740, 964735, 880651, 644225, 775954, 908924, 574190, 901749, 757441, 959590, 535608, 830535, 564577, 822741, 642253, 719262, 970996, 561503, 936464};
    vector<int> castle = {};
    int k = 1;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 18312141;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> road = {0, 0, 1, 2, 3, 3, 4, 5, 6, 8, 7, 10, 10, 11, 13, 14, 13, 15, 16, 16, 19, 20, 20, 20, 22, 22, 23, 26, 27, 26, 29, 29, 29, 32, 33, 34, 34, 34, 35, 37, 37, 39, 40, 41, 43, 42, 43, 46, 47, 47};
    vector<int> distance = {740015, 910923, 510043, 541018, 909830, 858566, 639571, 841956, 878820, 980791, 692945, 738967, 823879, 990758, 821263, 973748, 789202, 763360, 511567, 709395, 782294, 619008, 799340, 507376, 585547, 935611, 908844, 523933, 722507, 970291, 756726, 983169, 881213, 787416, 524186, 811689, 666628, 663758, 653644, 566095, 665195, 867237, 805062, 509720, 878641, 646971, 983468, 667842, 930978, 995035};
    vector<int> castle = {10};
    int k = 2;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 5745567;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> road = {6, 12, 9, 13, 11, 9, 1, 3, 6, 12, 4, 7, 8, 3, 2, 15, 13};
    vector<int> distance = {206563, 444965, 93414, 507580, 722734, 846444, 921701, 672902, 602092, 682491, 201095, 449076, 286417, 212249, 541291, 930203, 60184};
    vector<int> castle = {};
    int k = 12;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 212249;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> road = {1, 1, 1, 3};
    vector<int> distance = {716269, 237225, 427671, 464556};
    vector<int> castle = {2, 1};
    int k = 2;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> road = {1, 0};
    vector<int> distance = {5, 10};
    vector<int> castle = {};
    int k = 1;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> road = {6, 10, 13, 15, 6, 21, 24, 17, 15, 22, 2, 19, 9, 1, 12, 3, 23, 13, 11, 12, 6, 1, 6, 21, 12};
    vector<int> distance = {4, 4, 5, 3, 3, 6, 9, 2, 7, 2, 8, 4, 6, 2, 2, 10, 8, 8, 3, 2, 3, 4, 10, 5, 9};
    vector<int> castle = {3, 14, 21};
    int k = 12;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> road = {29, 7, 33, 16, 24, 12, 20, 2, 11, 33, 4, 12, 10, 30, 25, 2, 32, 18, 14, 8, 20, 21, 27, 19, 22, 30, 3, 15, 21, 1, 4, 20, 18, 11};
    vector<int> distance = {7, 1, 4, 4, 5, 6, 10, 3, 8, 7, 5, 6, 10, 8, 2, 1, 10, 2, 4, 8, 5, 8, 1, 6, 4, 1, 4, 4, 9, 10, 6, 4, 2, 1};
    vector<int> castle = {29, 23, 3, 7, 16, 17, 26, 11, 6, 27};
    int k = 20;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> road = {9, 1, 1, 5, 9, 9, 5, 7, 9, 10, 0, 11};
    vector<int> distance = {6, 1, 5, 7, 7, 1, 6, 5, 5, 1, 2, 7};
    vector<int> castle = {1, 0, 2, 9};
    int k = 8;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> road = {7, 9, 4, 17, 2, 1, 27, 31, 35, 8, 13, 3, 9, 11, 32, 28, 2, 27, 15, 0, 1, 35, 14, 3, 9, 4, 24, 4, 26, 35, 30, 29, 1, 31, 28, 1, 31, 24, 2};
    vector<int> distance = {10, 10, 4, 4, 8, 5, 3, 10, 7, 2, 8, 8, 5, 6, 3, 3, 8, 3, 1, 2, 3, 4, 10, 6, 5, 7, 7, 1, 7, 1, 4, 2, 3, 1, 7, 4, 8, 3, 3};
    vector<int> castle = {34, 12, 25};
    int k = 2;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> road = {20, 18, 6, 16, 24, 9, 2, 6, 4, 25, 25, 8, 4, 9, 10, 22, 23, 24, 13, 0, 2, 20, 1, 2, 25, 3, 16};
    vector<int> distance = {10, 9, 6, 8, 8, 9, 9, 4, 8, 9, 2, 8, 10, 9, 4, 2, 6, 1, 8, 1, 9, 7, 6, 6, 4, 3, 2};
    vector<int> castle = {16, 20, 6, 4, 19, 18, 22, 11};
    int k = 8;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> road = {0, 1, 0};
    vector<int> distance = {7, 5, 5};
    vector<int> castle = {0};
    int k = 2;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> road = {7, 10, 13, 31, 27, 1, 24, 11, 20, 7, 18, 19, 27, 14, 18, 26, 21, 1, 4, 21, 16, 26, 4, 18, 29, 28, 8, 31, 25, 19, 28, 29};
    vector<int> distance = {5, 10, 2, 7, 5, 4, 8, 2, 4, 6, 2, 2, 2, 3, 1, 4, 5, 1, 10, 1, 4, 1, 5, 6, 7, 6, 6, 2, 3, 7, 7, 9};
    vector<int> castle = {5, 30, 17};
    int k = 24;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> road = {34, 34, 34, 18, 32, 30, 10, 35, 12, 16, 37, 10, 19, 36, 7, 14, 13, 17, 28, 19, 33, 19, 20, 14, 17, 13, 26, 7, 30, 29, 20, 28, 30, 4, 6, 14, 20, 27, 1};
    vector<int> distance = {8, 5, 5, 1, 6, 7, 5, 6, 6, 6, 7, 10, 7, 4, 2, 6, 3, 10, 1, 10, 3, 6, 7, 8, 3, 1, 7, 6, 2, 3, 5, 4, 2, 2, 7, 5, 1, 7, 5};
    vector<int> castle = {10, 0, 29, 31, 33};
    int k = 33;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
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
    vector<int> road = {16, 14, 8, 0, 0, 11, 28, 5, 24, 0, 6, 22, 28, 10, 9, 27, 6, 16, 5, 16, 12, 20, 11, 27, 5, 7, 10, 19, 4};
    vector<int> distance = {2, 4, 8, 6, 4, 7, 6, 1, 6, 8, 5, 4, 8, 8, 4, 9, 4, 10, 8, 1, 8, 10, 3, 3, 7, 3, 5, 10, 3};
    vector<int> castle = {18, 16, 24, 14, 10};
    int k = 13;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> road = {25, 13, 13, 0, 21, 19, 4, 23, 26, 16, 7, 23, 26, 3, 17, 8, 8, 14, 1, 25, 11, 5, 11, 5, 13, 5, 5};
    vector<int> distance = {8, 4, 7, 7, 5, 8, 1, 2, 3, 10, 5, 10, 5, 6, 10, 4, 5, 2, 5, 8, 4, 4, 6, 10, 7, 8, 7};
    vector<int> castle = {9, 23, 14, 12, 19};
    int k = 22;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> road = {5, 3, 1, 5, 0, 0};
    vector<int> distance = {8, 6, 1, 8, 6, 10};
    vector<int> castle = {};
    int k = 3;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
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
    vector<int> road = {11, 0, 1, 0, 3, 3, 7, 3, 13, 8, 1, 0, 3, 8};
    vector<int> distance = {9, 1, 4, 6, 7, 7, 9, 1, 5, 10, 2, 4, 6, 5};
    vector<int> castle = {7};
    int k = 10;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> road = {41, 11, 43, 27, 15, 5, 36, 9, 17, 15, 12, 10, 16, 6, 8, 30, 5, 40, 21, 1, 35, 21, 21, 42, 21, 2, 14, 28, 36, 10, 39, 28, 18, 10, 22, 31, 36, 31, 40, 32, 22, 5, 28, 22};
    vector<int> distance = {1, 4, 2, 7, 1, 1, 5, 3, 4, 10, 8, 3, 8, 7, 6, 4, 9, 4, 10, 8, 10, 3, 2, 8, 3, 4, 2, 5, 2, 9, 6, 8, 9, 1, 6, 3, 3, 4, 8, 10, 3, 5, 2, 6};
    vector<int> castle = {7};
    int k = 41;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> road = {44, 41, 19, 17, 17, 5, 36, 31, 20, 30, 3, 2, 23, 20, 31, 18, 2, 7, 23, 20, 21, 11, 5, 29, 16, 28, 19, 33, 15, 24, 9, 23, 8, 40, 35, 19, 11, 19, 32, 15, 21, 1, 41, 9, 39, 19};
    vector<int> distance = {1, 2, 3, 2, 3, 6, 4, 3, 1, 7, 10, 9, 5, 6, 2, 1, 10, 4, 2, 5, 9, 7, 8, 3, 10, 2, 1, 3, 6, 7, 2, 1, 2, 1, 3, 7, 1, 4, 10, 9, 8, 1, 10, 4, 1, 7};
    vector<int> castle = {34, 39, 15, 37, 36, 8};
    int k = 38;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> road = {24, 7, 15, 6, 27, 28, 18, 23, 34, 22, 43, 28, 15, 10, 43, 44, 23, 22, 8, 0, 16, 44, 45, 45, 30, 5, 38, 2, 4, 12, 0, 23, 25, 5, 17, 3, 42, 10, 5, 18, 14, 4, 40, 2, 32, 31};
    vector<int> distance = {3, 4, 5, 7, 7, 1, 7, 9, 6, 8, 3, 4, 10, 6, 10, 7, 6, 2, 2, 3, 7, 6, 9, 8, 5, 4, 2, 8, 5, 9, 6, 8, 9, 7, 4, 8, 9, 5, 6, 2, 8, 5, 7, 4, 3, 2};
    vector<int> castle = {12, 19, 3};
    int k = 43;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> road = {31, 7, 35, 3, 26, 20, 16, 24, 38, 28, 19, 0, 7, 28, 21, 4, 25, 24, 25, 38, 27, 15, 22, 2, 4, 35, 15, 1, 10, 24, 17, 23, 0, 15, 42, 16, 21, 9, 7, 6, 36, 10, 31};
    vector<int> distance = {10, 6, 8, 9, 2, 1, 3, 7, 3, 9, 1, 1, 6, 10, 7, 10, 4, 7, 3, 8, 3, 8, 7, 4, 9, 8, 6, 8, 4, 7, 1, 5, 4, 1, 4, 3, 2, 7, 2, 9, 5, 8, 10};
    vector<int> castle = {21, 13, 11, 8, 41};
    int k = 35;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> road = {47, 17, 12, 45, 45, 20, 42, 9, 44, 42, 15, 4, 14, 11, 23, 2, 22, 0, 7, 20, 15, 12, 2, 14, 11, 20, 43, 12, 3, 3, 38, 32, 11, 7, 5, 3, 0, 35, 18, 1, 8, 17, 24, 4, 3, 40, 8, 15, 31};
    vector<int> distance = {10, 4, 1, 8, 2, 10, 2, 2, 4, 4, 3, 10, 1, 8, 8, 3, 9, 1, 10, 5, 5, 7, 7, 3, 2, 8, 3, 6, 1, 10, 10, 3, 8, 6, 7, 6, 5, 2, 8, 10, 3, 5, 2, 3, 2, 9, 10, 3, 8};
    vector<int> castle = {20};
    int k = 43;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> road = {41, 39, 16, 33, 15, 36, 16, 2, 17, 38, 40, 37, 10, 13, 25, 36, 16, 34, 38, 15, 23, 28, 3, 7, 2, 29, 28, 38, 0, 29, 3, 11, 30, 35, 26, 11, 13, 16, 17, 4, 9, 20};
    vector<int> distance = {7, 1, 9, 4, 2, 9, 10, 2, 2, 6, 9, 2, 2, 7, 1, 4, 8, 8, 8, 1, 3, 10, 7, 3, 4, 5, 6, 1, 1, 8, 3, 4, 1, 7, 4, 8, 7, 7, 2, 1, 2, 3};
    vector<int> castle = {6, 31, 8, 1};
    int k = 38;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> road = {45, 1, 22, 13, 34, 31, 10, 5, 27, 22, 30, 43, 29, 44, 1, 44, 33, 46, 31, 13, 47, 11, 43, 36, 38, 47, 14, 44, 35, 0, 15, 1, 20, 44, 13, 38, 21, 41, 14, 43, 11, 37, 7, 2, 37, 12, 3, 35, 18, 15};
    vector<int> distance = {2, 4, 2, 6, 8, 4, 3, 4, 6, 5, 7, 10, 10, 5, 10, 5, 4, 7, 7, 2, 9, 5, 4, 5, 3, 10, 10, 1, 7, 1, 4, 5, 3, 7, 10, 9, 2, 10, 1, 8, 7, 1, 9, 7, 9, 3, 6, 6, 10, 4};
    vector<int> castle = {};
    int k = 49;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
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
    vector<int> road = {13, 28, 17, 41, 45, 5, 25, 18, 9, 34, 6, 17, 34, 46, 16, 38, 9, 15, 16, 11, 22, 43, 42, 0, 12, 0, 24, 29, 27, 45, 13, 8, 26, 41, 3, 27, 21, 0, 47, 13, 13, 17, 29, 0, 37, 33, 17, 10, 33};
    vector<int> distance = {8, 10, 7, 6, 5, 9, 4, 2, 5, 2, 9, 8, 7, 7, 8, 8, 9, 7, 1, 6, 6, 1, 2, 3, 8, 3, 7, 3, 10, 6, 5, 1, 1, 9, 8, 4, 2, 8, 3, 9, 10, 8, 2, 6, 10, 2, 9, 8, 7};
    vector<int> castle = {};
    int k = 49;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> road = {0, 0, 0, 1};
    vector<int> distance = {1, 1, 1, 1000000};
    vector<int> castle = {3};
    int k = 1;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> road = {0, 0, 1, 0};
    vector<int> distance = {1, 1, 1, 1000000};
    vector<int> castle = {3};
    int k = 1;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> road = {1, 2, 3, 4, 5, 0, 6, 8, 9, 10, 11, 12, 13, 14, 11, 20, 20, 20, 20, 20, 20};
    vector<int> distance = {42, 8468, 6335, 6501, 9170, 5725, 1479, 9359, 6963, 4465, 5706, 8146, 3282, 6828, 9962, 492, 2996, 1943, 4828, 5437, 1};
    vector<int> castle = {1, 4, 17, 18};
    int k = 10;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 5706;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> road = {0, 1, 43, 10, 13, 33, 15, 8, 18, 21, 4, 23, 3, 42, 2, 14, 45, 18, 38, 16, 34, 42, 35, 15, 8, 16, 23, 12, 41, 13, 24, 7, 43, 14, 38, 48, 24, 44, 41, 1, 7, 7, 25, 1, 29, 0, 38, 32, 38, 35};
    vector<int> distance = {557508, 206031, 681086, 592852, 955457, 644056, 998372, 243781, 676166, 295696, 85891, 772322, 495279, 881684, 509967, 573323, 953194, 684834, 338712, 7608, 705351, 988938, 774046, 749573, 197708, 143648, 913599, 784196, 589281, 864710, 689372, 287834, 93644, 628921, 280026, 877185, 161235, 273189, 543686, 960793, 174365, 157070, 268122, 177458, 576796, 498156, 285190, 155945, 609766, 739690};
    vector<int> castle = {};
    int k = 20;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 772322;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> road = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 6, 10, 11, 5, 8, 15, 3, 12, 2, 1, 2, 7, 6, 19, 13, 14, 6, 22, 15, 16, 11, 8, 27, 5, 2, 26, 12, 7, 10, 15, 4, 5, 6, 7, 8, 7, 6, 5, 4, 3};
    vector<int> distance = {513929, 979802, 634022, 723058, 133069, 898167, 961393, 18456, 175011, 478042, 176229, 377373, 484421, 544919, 413784, 898537, 575198, 594324, 798315, 664370, 566413, 803526, 776091, 268980, 759956, 241873, 806862, 999170, 906996, 497281, 702305, 420925, 477084, 336327, 660336, 126505, 750846, 621729, 661313, 925857, 616124, 353895, 819582, 100545, 898814, 233367, 515434, 990364, 344043, 313750};
    vector<int> castle = {37, 8, 26, 28, 38, 34, 3};
    int k = 15;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 898814;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> road = {22, 9, 12, 49, 28, 5, 41, 1, 17, 10, 26, 47, 13, 32, 25, 38, 25, 29, 9, 22, 32, 40, 10, 12, 46, 13, 6, 13, 33, 0, 4, 48, 13, 2, 27, 4, 40, 6, 38, 29, 4, 41, 19, 31, 12, 6, 8, 45, 17, 27};
    vector<int> distance = {85640, 359567, 43681, 489099, 678099, 788971, 463630, 206602, 107262, 646584, 791577, 166680, 821875, 26606, 597112, 576529, 100642, 942055, 758419, 513302, 407623, 151755, 975475, 240205, 196007, 292640, 466320, 889475, 37953, 712689, 29524, 106952, 884278, 881562, 854125, 343913, 82349, 300332, 955298, 309809, 688477, 325429, 47984, 347704, 503969, 283103, 724902, 416062, 462004, 829175};
    vector<int> castle = {1, 2, 3, 4, 10, 23, 12, 30, 15};
    int k = 20;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 463630;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> road = {0, 0, 1, 2, 3};
    vector<int> distance = {1, 1, 1, 1, 1};
    vector<int> castle = {4};
    int k = 1;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> road = {0, 0, 1, 2, 3, 4, 5};
    vector<int> distance = {3, 3, 3, 3, 3, 3, 3};
    vector<int> castle = {};
    int k = 2;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> road = {1, 2, 2};
    vector<int> distance = {1, 1, 1};
    vector<int> castle = {};
    int k = 1;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> road = {33, 36, 27, 15, 43, 35, 36, 42, 49, 21, 12, 27, 40, 9, 13, 26, 40, 26, 22, 36, 11, 18, 17, 29, 32, 30, 12, 23, 17, 35, 29, 2, 22, 8, 19, 17, 43, 6, 11, 42, 29, 23, 21, 19, 34, 37, 48, 24, 15, 49};
    vector<int> distance = {566414, 803527, 776092, 268981, 759957, 241874, 806863, 999171, 906997, 497282, 702306, 420926, 477085, 336328, 660337, 126506, 750847, 621730, 661314, 925858, 616125, 353896, 819583, 100546, 898815, 233368, 515435, 990365, 344044, 313751, 171088, 426809, 117277, 947179, 695789, 393585, 705404, 502652, 392755, 612400, 999933, 95061, 549677, 993369, 947740, 210013, 636227, 698587, 348095, 297540};
    vector<int> castle = {};
    int k = 14;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1179391;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> road = {2, 2, 3, 3};
    vector<int> distance = {2, 2, 3, 1};
    vector<int> castle = {3};
    int k = 1;
    ByteLand* pObj = new ByteLand();
    clock_t start = clock();
    int result = pObj->buildCastles(road, distance, castle, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22652597&rd=10669&pm=7239
********************************************************************************
#include<stdio.h> 
#include<stdlib.h> 
#include<ctype.h> 
#include<string.h> 
#include<math.h> 
 
#include<queue> 
#include<iostream> 
#include<sstream> 
#include<vector> 
#include<string> 
#include<set> 
#include<map> 
#include<list> 
#include<utility> 
#include<algorithm> 
using namespace std;  
#define INF 1000000000 
 
bool isok( int n, vector <int> &p, vector <int> &d, vector <int> &c, vector< vector< pair<int, int> > > &child, int k, int M ) 
{ 
  vector<int> dres( n, 0 ); 
  vector<int> remain( n, M ); 
  vector<int> nearest( n, INF ); 
  queue<int> wl; 
  for( int i = 0; i < n; i ++ ){ 
    dres[i] = child[i].size(); 
    if( dres[i] == 0 ) 
      wl.push( i ); 
    if( c[i] ) 
      nearest[i] = 0; 
  } 
 
  int nc = 0; 
  while( !wl.empty() ){ 
    int i = wl.front(); 
    wl.pop(); 
 
    if( remain[i] >= nearest[i] ) 
      ; // OK 
    else if( d[i] <= remain[i] ){ 
      // let's go parent 
      remain[p[i]] = min( remain[p[i]], remain[i] - d[i] ); 
    } 
    else{ 
      nc ++; 
      nearest[i] = 0; 
    } 
    if( nearest[i] < INF ) 
      nearest[p[i]] = min( nearest[p[i]], nearest[i] + d[i] ); 
 
    if( -- dres[p[i]] <= 0 ) 
      wl.push( p[i] ); 
  } 
 
  // circles 
  for( int i = 0; i < n; i ++ ){ 
    if( dres[i] > 0 ){ 
      vector< int > D, N, R; 
      D.push_back( d[i] ); 
      N.push_back( nearest[i] ); 
      R.push_back( remain[i] ); 
      dres[i] = 0; 
      cerr << i << ", " << d[i] << "/"<< nearest[i]  << "/"<<remain[i] << endl; 
      for( int j = p[i]; j != i; j = p[j] ){ 
        D.push_back( d[j] ); 
        N.push_back( nearest[j] ); 
        R.push_back( remain[j] ); 
        cerr << j << ", " << d[j] << "/"<< nearest[j]  << "/"<<remain[j] << endl; 
        dres[j] = 0; 
      } 
      int m = D.size(); 
      vector< int > OK( m, 0 ); 
      for( int s = 0; s < m; s ++ ){ 
        for( int t = 0, dt = 0; t < m; dt += D[(s+t)%m], t ++ ){ 
          int tt = (s+t)%m; 
          cerr << s << t << tt << N[s] << R[s] << endl; 
          if( N[s] + dt <= R[tt] ) 
            OK[tt] = 1; 
          if( N[tt] + dt <= R[s] ) 
            OK[s] = 1; 
        } 
      } 
      int allOK = 1; 
      for( int s = 0; s < m; s ++ ){ 
        cerr << OK[s] << endl; 
        if( !OK[s] ){ 
          allOK = 0; 
        } 
      } 
 
      if( !allOK ){ 
        int minnt = INT_MAX; 
        for( int s = 0; s < m; s ++ ){ 
          int thisnt = 1; 
          for( int t = 1, dt = D[s], ds = -1; t < m; dt += D[(s+t)%m], t ++ ){ 
            int tt = (s+t)%m; 
            if( OK[tt] == 0 && dt > R[tt] ){ 
              if( ds < 0 || R[tt] < ds ) 
                ds = R[tt]; 
            } 
            if( ds >= 0 ){ 
              if( ds >= D[tt] ) 
                ds -= D[tt]; 
              else{ 
                ds = -1; 
                dt = 0; 
                thisnt ++; 
              } 
            } 
          } 
          minnt = min( minnt, thisnt ); 
        } 
        nc += minnt; 
        cerr << minnt << endl; 
      } 
    } 
  } 
  cerr << M << " -> " << nc << endl; 
  return ( nc <= k ); 
} 
 
class ByteLand { 
  public: 
  int buildCastles(vector <int> r, vector <int> d, vector <int> c, int k) { 
    int n = r.size(); 
    vector< vector< pair<int, int> > > child( n ); 
    for( int i = 0; i < n; i ++ ) 
      child[r[i]].push_back( pair<int,int>( i, d[i] ) ); 
    vector< int > C( n, 0 ); 
    for( int i = 0; i < c.size(); i ++ ) 
      C[c[i]] = 1; 
 
    int L = -1, R = 1000000 * 50; 
    while( L < R - 1 ){ 
      int M = (L + R) / 2; 
      if( isok( n, r, d, C, child, k, M ) ) 
        R = M; 
      else 
        L = M; 
    } 
    return R; 
  } 
//BEGIN CUT HERE 
 
 
//END CUT HERE 
}; 
 
// Master Spark! 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/