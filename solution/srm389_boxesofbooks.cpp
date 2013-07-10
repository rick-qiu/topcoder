/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8559
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

class BoxesOfBooks {
public:
    int boxes(vector<int> weights, int maxWeight);
};

int BoxesOfBooks::boxes(vector<int> weights, int maxWeight) {
    int ret;
    return ret;
}


int test0() {
    vector<int> weights = {1, 1, 1, 7, 7, 7};
    int maxWeight = 8;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
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
    vector<int> weights = {1};
    int maxWeight = 1;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
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
    vector<int> weights = {1, 15, 1, 15, 1, 15, 1, 15, 1, 15};
    int maxWeight = 15;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> weights = {};
    int maxWeight = 1;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> weights = {5, 5, 5, 5, 5, 5};
    int maxWeight = 10;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> weights = {1, 13, 12, 2};
    int maxWeight = 13;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> weights = {1, 7, 1, 7, 1, 7};
    int maxWeight = 8;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
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
    vector<int> weights = {7, 7, 7, 1, 1, 1};
    int maxWeight = 8;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> weights = {};
    int maxWeight = 10;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> weights = {3, 3, 1, 4};
    int maxWeight = 4;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> weights = {6, 7, 1};
    int maxWeight = 7;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> weights = {5};
    int maxWeight = 10;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> weights = {};
    int maxWeight = 20;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
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
    vector<int> weights = {1, 7, 1, 7};
    int maxWeight = 8;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> weights = {6, 2, 6, 2};
    int maxWeight = 6;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
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
    vector<int> weights = {30, 50, 20};
    int maxWeight = 50;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> weights = {1, 4, 2, 3};
    int maxWeight = 4;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> weights = {1, 9, 1, 9, 1, 9};
    int maxWeight = 10;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> weights = {4, 4, 3, 3};
    int maxWeight = 7;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> weights = {5, 5, 1, 1};
    int maxWeight = 6;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> weights = {8, 9, 2};
    int maxWeight = 10;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> weights = {};
    int maxWeight = 2;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> weights = {3, 5, 7};
    int maxWeight = 8;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> weights = {2, 5, 3, 4};
    int maxWeight = 7;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> weights = {2, 1, 2, 1};
    int maxWeight = 2;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> weights = {1, 7, 1, 7, 1, 7};
    int maxWeight = 7;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> weights = {1, 2, 1};
    int maxWeight = 2;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
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
    vector<int> weights = {3, 5, 1, 4, 6, 2};
    int maxWeight = 6;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> weights = {4, 5, 5, 3};
    int maxWeight = 9;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
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
    vector<int> weights = {5, 5, 5, 5, 5, 5};
    int maxWeight = 10;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> weights = {51, 51, 51, 51, 51};
    int maxWeight = 100;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> weights = {1, 1, 1, 7, 7, 7};
    int maxWeight = 8;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> weights = {12, 1, 11, 2, 10, 3, 4, 5, 6, 6, 1};
    int maxWeight = 12;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> weights = {};
    int maxWeight = 7;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> weights = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    int maxWeight = 1000;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> weights = {96, 758, 465, 581, 802, 790, 599, 272, 544, 641, 600, 420, 129, 600, 810, 264, 340, 849, 405, 415, 420, 115, 836, 124, 681, 535, 620, 309, 182, 201, 841, 214, 608, 848};
    int maxWeight = 849;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> weights = {19, 22, 2, 90, 81, 19, 87, 59, 72, 51, 86, 25, 51, 12, 39, 15, 66, 23, 78, 43, 19, 71, 15, 35, 76, 41, 55, 28, 50, 10, 78, 3, 27, 46, 77, 54, 75, 37, 57, 48, 59, 29};
    int maxWeight = 92;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> weights = {5, 250, 304, 157, 292, 53, 352, 209, 97, 22, 122, 46, 165, 55, 94, 151, 60, 58, 185, 28, 215, 250, 359, 174, 70, 121, 173, 190, 317, 286, 222, 65, 275, 216, 105, 48, 162, 96, 356, 184, 285};
    int maxWeight = 365;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> weights = {465, 618, 513, 264, 181, 523, 603, 114, 291, 25, 660, 256, 325, 382, 646, 127, 694, 478, 2, 696, 523, 232, 183, 641, 284, 147, 376, 192, 570, 648, 116, 97, 9, 59, 76, 354, 478, 489};
    int maxWeight = 707;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> weights = {15, 4, 30, 16, 35, 17, 36, 37, 27, 1, 26, 29, 23, 45, 28, 46, 39, 10, 24, 43, 43, 47, 26, 17, 30, 5, 29, 2, 36, 3, 35, 5, 13, 28};
    int maxWeight = 48;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> weights = {370, 99, 200, 102, 68, 362, 246, 133, 274, 385, 52, 324, 186, 125, 88, 278, 241, 277, 387, 312, 17, 239, 316, 300, 320, 374, 251, 301, 266, 72, 109};
    int maxWeight = 389;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> weights = {684, 709, 313, 719, 100, 328, 127, 672, 477, 527, 788, 405, 132, 712, 86, 341, 600, 338, 835, 11, 490, 680, 152, 291, 87, 108, 44, 371, 788, 588, 299, 565, 738, 326, 712, 339, 101, 379, 815, 712};
    int maxWeight = 844;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> weights = {201, 128, 69, 133, 19, 254, 201, 75, 128, 78, 220, 38, 250, 109, 292, 28, 240, 27, 295, 67, 35, 299, 165, 275, 115, 89, 138, 33, 55, 63, 129, 85, 66, 212, 281, 168, 29, 106, 219, 100, 258, 266, 149, 79, 59, 13, 206, 90, 110, 252};
    int maxWeight = 299;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> weights = {999, 1, 1};
    int maxWeight = 999;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> weights = {171, 123, 535, 146, 597, 153, 151, 408, 9, 110, 90, 46, 579, 617, 401, 108, 51, 106, 644, 571, 482, 380, 437, 429, 149, 533, 457, 73, 623, 496, 438, 82, 170, 447, 146, 29};
    int maxWeight = 665;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> weights = {254, 265, 431, 436, 218, 347, 217, 574, 209, 420, 559, 416, 458, 338, 466, 387, 426, 335, 79, 337, 570, 508, 123, 187, 232, 487, 304, 348, 199, 176, 519, 188, 272, 165, 512, 132, 257, 303};
    int maxWeight = 597;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> weights = {367, 86, 186, 105, 302, 250, 303, 3, 141, 124, 133, 228, 179, 188, 123, 41, 245, 302, 245, 269, 253, 269, 335, 126, 346, 338, 383, 1, 205, 370, 198, 349, 24, 35, 304, 296, 252, 330, 62, 108, 172, 375, 263, 370, 359, 293, 9, 69, 43, 61};
    int maxWeight = 393;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> weights = {9, 194, 285, 486, 192, 924, 885, 311, 900, 586, 324, 614, 773, 124, 391, 689, 951, 606, 112, 191, 542, 408, 300, 38, 220, 308, 707, 563, 82, 799, 94, 148, 472, 232, 135, 675, 348, 209, 592, 611, 669, 526, 833, 892, 888, 364, 233, 607, 844, 235};
    int maxWeight = 962;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> weights = {4, 7, 2, 6, 2, 2, 6, 5, 8, 7, 3, 6, 3, 8, 7, 1, 8, 2, 7, 2, 2, 2, 8, 7, 4, 6, 8, 8, 7, 7, 7, 8, 7, 6, 1, 6, 5, 2, 5, 8, 5, 3, 3, 3, 5, 7, 4, 3, 1, 6};
    int maxWeight = 8;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> weights = {168, 278, 377, 304, 224, 391, 135, 134, 73, 387, 371, 377, 373, 22, 338, 119, 248, 117, 371, 50, 372, 285, 344, 38, 358, 320, 55, 46, 175, 324, 45, 317, 129, 238, 310, 3, 352, 192, 251, 290, 131, 222, 361, 383, 110, 238, 27, 308, 196, 270};
    int maxWeight = 395;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> weights = {52, 657, 624, 524, 18, 430, 170, 683, 244, 703, 396, 139, 701, 329, 377, 49, 327, 599, 319, 26, 69, 267, 108, 388, 86, 505, 144, 638, 279, 701, 494, 561, 430, 68, 446, 278, 90, 671, 523, 259, 211, 86, 23, 265, 210, 723, 440, 479, 556, 247};
    int maxWeight = 736;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> weights = {178, 92, 135, 58, 185, 9, 144, 73, 37, 113, 65, 160, 121, 185, 74, 145, 103, 97, 82, 47, 121, 106, 99, 20, 76, 164, 116, 102, 121, 89, 143, 72, 178, 79, 134, 103, 19, 156, 92, 161, 171, 37, 36, 105, 57, 94, 186, 156, 147, 40};
    int maxWeight = 191;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> weights = {695, 168, 506, 26, 772, 15, 632, 292, 360, 287, 447, 221, 69, 813, 252, 731, 219, 798, 628, 45, 266, 13, 355, 126, 484, 249, 450, 534, 660, 668, 109, 373, 131, 796, 355, 258, 345, 622, 543, 690, 800, 475, 794, 8, 525, 685, 737, 766, 93, 100};
    int maxWeight = 828;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> weights = {83, 67, 86, 166, 67, 105, 111, 161, 99, 55, 24, 86, 16, 64, 164, 111, 14, 82, 44, 164, 81, 112, 120, 100, 135, 30, 102, 68, 125, 160, 117, 70, 71, 77, 43, 116, 111, 31, 125, 77, 157, 22, 14, 69, 109, 36, 72, 136, 64, 132};
    int maxWeight = 170;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> weights = {28, 146, 116, 258, 274, 229, 16, 6, 115, 59, 112, 314, 108, 89, 190, 323, 88, 75, 137, 91, 155, 11, 144, 178, 33, 255, 42, 231, 249, 81, 309, 299, 261, 236, 143, 145, 179, 189, 130, 186, 136, 124, 192, 173, 105, 249, 136, 239, 100, 127};
    int maxWeight = 329;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> weights = {145, 383, 156, 20, 235, 17, 177, 301, 832, 424, 306, 12, 607, 828, 602, 532, 566, 81, 816, 708, 351, 693, 808, 232, 403, 211, 796, 258, 288, 121, 478, 157, 200, 781, 721, 350, 236, 856, 767, 830, 604, 871, 698, 458, 295, 350, 567, 163, 65, 426};
    int maxWeight = 898;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> weights = {931, 737, 937, 341, 170, 453, 729, 759, 29, 865, 341, 92, 807, 458, 462, 408, 449, 239, 234, 808, 618, 424, 181, 884, 915, 849, 234, 66, 739, 989, 992, 864, 797, 738, 626, 324, 558, 792, 799, 406, 352, 428, 706, 159, 677, 234, 924, 455};
    int maxWeight = 1000;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> weights = {315, 392, 819, 501, 124, 669, 494, 971, 81, 61, 342, 132, 373, 225, 858, 816, 359, 814, 896, 817, 232, 250, 822, 697, 149, 156, 408, 456, 448, 916, 722, 708, 85, 173, 538, 291, 705, 712, 771, 647, 191, 157};
    int maxWeight = 1000;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> weights = {961, 582, 713, 445, 582, 264, 384, 562, 227, 38, 942, 367, 382, 616, 515, 584, 177, 331, 392, 726, 384, 894, 98, 128, 359, 32, 465, 207, 386, 50, 279, 668, 344, 664, 359, 661, 938, 139, 846};
    int maxWeight = 1000;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> weights = {346, 237, 595, 605, 536, 481, 150, 773, 279, 234, 942, 407, 948, 384, 911, 992, 87, 906, 54, 735, 997, 720, 739, 941, 593, 339, 639, 596, 95, 977, 9, 512, 631};
    int maxWeight = 1000;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> weights = {1, 3, 2, 1, 2, 2, 1, 3, 3, 3, 2, 1, 3, 2, 3, 1, 2, 3, 3, 2, 2, 2, 2, 1, 3, 1, 2, 3, 2, 2, 3, 2, 1, 1, 3, 1, 3, 3, 1, 2, 1, 1, 1, 1, 3, 1, 2, 3, 3, 2};
    int maxWeight = 3;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> weights = {3, 1, 1, 5, 2, 4, 5, 5, 1, 4, 3, 4, 5, 1, 1, 4, 1, 5, 4, 1, 4, 5, 1, 5, 2, 5, 4, 2, 2, 5, 5, 3, 4, 1, 2, 5, 1, 4, 2, 4, 1, 2, 3, 5, 4, 5, 4, 3, 2, 5};
    int maxWeight = 5;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> weights = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    int maxWeight = 3;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> weights = {10, 7, 8, 6, 2, 5, 1, 8, 3, 5, 6, 9, 2, 3, 7, 5, 9, 2, 4, 3, 2, 3, 7, 2, 4, 3, 4, 9, 2, 7, 9, 10, 8, 10, 1, 8, 8, 5, 3, 7, 4, 3, 4, 3, 5, 6, 3, 2, 10, 5};
    int maxWeight = 262;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
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
    vector<int> weights = {10, 7, 8, 6, 2, 5, 1, 8, 3, 5, 6, 9, 2, 3, 7, 5, 9, 2, 4, 3, 2, 3, 7, 2, 4, 3, 4, 9, 2, 7, 9, 10, 8, 10, 1, 8, 8, 5, 3, 7, 4, 3, 4, 3, 5, 6, 3, 2, 10, 5};
    int maxWeight = 261;
    BoxesOfBooks* pObj = new BoxesOfBooks();
    clock_t start = clock();
    int result = pObj->boxes(weights, maxWeight);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22677505&rd=11123&pm=8559
********************************************************************************
#include <iostream> 
#include <vector> 
#include <queue> 
#include <string> 
#include <cctype> 
#include <cmath> 
#include <list> 
#include <iomanip> 
#include <sstream> 
#include <algorithm> 
#include <map> 
#include <set> 
using namespace std; 
 
class BoxesOfBooks { 
 public: 
  int boxes(vector <int> weights, int maxWeight) 
  { 
   if (weights.size()<1) return 0; 
   int ans=1,cur=weights[0]; 
   for (int i=1;i<weights.size();i++) 
   { 
    if (cur+weights[i]<=maxWeight) { cur+=weights[i]; continue; } 
    ans++; cur=weights[i]; 
   } 
   return ans; 
  } 
};

********************************************************************************
*******************************************************************************/