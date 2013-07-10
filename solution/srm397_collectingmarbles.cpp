/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8746
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

class CollectingMarbles {
public:
    int mostMarbles(vector<int> marblesWeights, int bagCapacity, int numberOfBags);
};

int CollectingMarbles::mostMarbles(vector<int> marblesWeights, int bagCapacity, int numberOfBags) {
    int ret;
    return ret;
}


int test0() {
    vector<int> marblesWeights = {2, 2, 2, 2, 2};
    int bagCapacity = 5;
    int numberOfBags = 2;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
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
    vector<int> marblesWeights = {1, 3, 5, 2, 4};
    int bagCapacity = 5;
    int numberOfBags = 2;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> marblesWeights = {7, 6, 6, 5};
    int bagCapacity = 12;
    int numberOfBags = 2;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> marblesWeights = {2, 2, 2};
    int bagCapacity = 1;
    int numberOfBags = 10;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
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
    vector<int> marblesWeights = {9, 10, 2, 8, 9};
    int bagCapacity = 10;
    int numberOfBags = 5;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> marblesWeights = {9, 6, 7, 1, 10};
    int bagCapacity = 5;
    int numberOfBags = 3;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
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
    vector<int> marblesWeights = {6, 2, 7, 8, 6};
    int bagCapacity = 19;
    int numberOfBags = 1;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
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
    vector<int> marblesWeights = {1, 2, 2, 2, 10};
    int bagCapacity = 7;
    int numberOfBags = 1;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
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
    vector<int> marblesWeights = {8, 3, 3, 4, 7};
    int bagCapacity = 10;
    int numberOfBags = 2;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> marblesWeights = {3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6};
    int bagCapacity = 9;
    int numberOfBags = 3;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> marblesWeights = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int bagCapacity = 20;
    int numberOfBags = 3;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
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
    vector<int> marblesWeights = {7, 11, 7, 7, 11, 13, 14, 7, 11};
    int bagCapacity = 18;
    int numberOfBags = 3;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> marblesWeights = {2, 9, 4, 9, 2, 2, 1, 5, 2, 8, 5, 3};
    int bagCapacity = 8;
    int numberOfBags = 3;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
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
    vector<int> marblesWeights = {7, 15, 15, 15, 3, 15, 9, 4, 3, 7, 12, 3};
    int bagCapacity = 15;
    int numberOfBags = 2;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> marblesWeights = {11, 8, 9, 12, 4, 12, 2, 14, 2, 5, 12, 15};
    int bagCapacity = 13;
    int numberOfBags = 8;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> marblesWeights = {15, 12, 14, 9, 3, 8, 12, 12, 4, 1, 15, 6};
    int bagCapacity = 15;
    int numberOfBags = 5;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> marblesWeights = {2, 10, 3, 15, 6, 14, 13, 7, 14, 10, 6, 5};
    int bagCapacity = 19;
    int numberOfBags = 4;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
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
    vector<int> marblesWeights = {5, 15, 3, 1, 12, 4, 2, 11, 4, 8, 11, 6, 1};
    int bagCapacity = 3;
    int numberOfBags = 7;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> marblesWeights = {12, 7, 1, 1, 8, 6, 2, 13, 2, 14, 8, 6};
    int bagCapacity = 13;
    int numberOfBags = 9;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> marblesWeights = {13, 10, 13, 14, 6, 11, 11, 14, 11, 11, 15, 1, 7};
    int bagCapacity = 18;
    int numberOfBags = 6;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> marblesWeights = {3, 14, 10, 10, 6, 8, 1, 10, 10, 7, 15, 12, 11};
    int bagCapacity = 10;
    int numberOfBags = 4;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
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
    vector<int> marblesWeights = {10, 6, 11, 1, 2, 12, 6, 9, 10, 4, 3, 12};
    int bagCapacity = 18;
    int numberOfBags = 2;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> marblesWeights = {4, 6, 10, 9, 2, 13, 4, 15, 5, 4, 5, 11};
    int bagCapacity = 11;
    int numberOfBags = 3;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> marblesWeights = {13, 14, 5, 7, 6, 12, 12, 2, 7, 5, 1, 11};
    int bagCapacity = 5;
    int numberOfBags = 6;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
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
    vector<int> marblesWeights = {4, 3, 8, 3, 14, 12, 2, 3, 5, 3, 8};
    int bagCapacity = 4;
    int numberOfBags = 6;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
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
    vector<int> marblesWeights = {14, 1, 3, 2, 11, 3, 4, 5, 5, 14, 6, 15};
    int bagCapacity = 13;
    int numberOfBags = 2;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> marblesWeights = {2, 6, 1, 6, 11, 3, 10, 6, 10, 5, 12, 15};
    int bagCapacity = 14;
    int numberOfBags = 5;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> marblesWeights = {8, 8, 9, 15, 11, 19, 14, 1, 6, 14, 8, 10, 7};
    int bagCapacity = 11;
    int numberOfBags = 1;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
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
    vector<int> marblesWeights = {13, 1, 10, 3, 4, 4, 9, 13, 4, 13, 11, 11, 11};
    int bagCapacity = 6;
    int numberOfBags = 10;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> marblesWeights = {3, 8, 6, 13, 7, 4, 13, 5, 1, 10, 1, 5};
    int bagCapacity = 15;
    int numberOfBags = 5;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> marblesWeights = {14, 6, 3, 3, 4, 7, 8, 14, 9, 4, 1, 11};
    int bagCapacity = 18;
    int numberOfBags = 2;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> marblesWeights = {8, 10, 9, 2, 3, 9, 3, 3, 5, 5, 5, 3};
    int bagCapacity = 10;
    int numberOfBags = 5;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> marblesWeights = {9, 12, 8, 16, 11, 7, 15, 16, 8, 1, 7, 19};
    int bagCapacity = 10;
    int numberOfBags = 9;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
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
    vector<int> marblesWeights = {8, 15, 15, 7, 19, 5, 11, 17, 12, 4, 16, 13};
    int bagCapacity = 14;
    int numberOfBags = 4;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> marblesWeights = {8, 17, 9, 2, 13, 17, 14, 20, 4, 15, 4, 2};
    int bagCapacity = 17;
    int numberOfBags = 5;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> marblesWeights = {20, 20, 16, 12, 19, 12, 14, 7, 16, 17, 2, 8};
    int bagCapacity = 10;
    int numberOfBags = 8;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> marblesWeights = {9, 12, 13, 14, 11, 9, 20, 8, 15, 14, 4, 8};
    int bagCapacity = 12;
    int numberOfBags = 4;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> marblesWeights = {11, 4, 4, 5, 2, 19, 13, 3, 18, 4, 11, 5};
    int bagCapacity = 13;
    int numberOfBags = 6;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> marblesWeights = {18, 16, 12, 18, 15, 6, 11, 10, 14, 17, 15, 13};
    int bagCapacity = 13;
    int numberOfBags = 5;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> marblesWeights = {19, 6, 1, 12, 1, 11, 7, 11, 15, 9, 10, 19};
    int bagCapacity = 16;
    int numberOfBags = 1;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> marblesWeights = {13, 7, 19, 16, 17, 4, 12, 11, 16, 14, 18, 10};
    int bagCapacity = 13;
    int numberOfBags = 4;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> marblesWeights = {12, 20, 2, 18, 10, 8, 18, 12, 6, 3, 13, 14};
    int bagCapacity = 12;
    int numberOfBags = 4;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> marblesWeights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2};
    int bagCapacity = 20;
    int numberOfBags = 10;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> marblesWeights = {4, 4, 5, 5, 10, 12};
    int bagCapacity = 20;
    int numberOfBags = 2;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> marblesWeights = {4, 4, 5, 5, 10, 12, 4, 4, 5, 5, 10, 12, 13};
    int bagCapacity = 20;
    int numberOfBags = 4;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> marblesWeights = {9, 11, 10, 10, 8, 12, 20, 20, 20, 20, 20, 20, 20};
    int bagCapacity = 20;
    int numberOfBags = 10;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> marblesWeights = {1};
    int bagCapacity = 1;
    int numberOfBags = 1;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> marblesWeights = {20};
    int bagCapacity = 1;
    int numberOfBags = 1;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> marblesWeights = {1};
    int bagCapacity = 20;
    int numberOfBags = 1;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> marblesWeights = {1, 2, 4, 1, 2, 2, 3, 1, 4, 4, 2, 5, 3};
    int bagCapacity = 20;
    int numberOfBags = 10;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> marblesWeights = {11, 11, 8, 13, 7, 10, 12, 9, 14, 6, 6, 10, 6};
    int bagCapacity = 20;
    int numberOfBags = 10;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> marblesWeights = {5, 7, 3, 6, 3, 5, 8, 5};
    int bagCapacity = 17;
    int numberOfBags = 2;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> marblesWeights = {4, 7, 7, 7, 4, 4, 4, 6, 4, 4, 7};
    int bagCapacity = 15;
    int numberOfBags = 4;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> marblesWeights = {12, 12, 2, 17, 9, 10, 17, 13, 3, 7, 11, 5, 7};
    int bagCapacity = 18;
    int numberOfBags = 3;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> marblesWeights = {4, 9, 8, 5, 6, 6, 4, 4, 9, 8, 6, 5};
    int bagCapacity = 14;
    int numberOfBags = 4;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> marblesWeights = {3, 2, 2, 3, 3, 2, 2, 3, 2, 3, 2, 3};
    int bagCapacity = 9;
    int numberOfBags = 2;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> marblesWeights = {6, 9, 5, 7, 9, 7, 11, 3, 3, 8, 7, 11, 5};
    int bagCapacity = 16;
    int numberOfBags = 5;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> marblesWeights = {12, 11, 8, 4, 3, 3, 3, 15, 9, 9, 15, 4};
    int bagCapacity = 17;
    int numberOfBags = 6;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> marblesWeights = {2, 2, 2, 2, 3, 6, 5, 6, 6, 2, 5, 3, 2};
    int bagCapacity = 7;
    int numberOfBags = 7;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> marblesWeights = {17, 4, 15, 8, 5, 14, 11, 5, 6, 17, 4, 14, 7};
    int bagCapacity = 17;
    int numberOfBags = 8;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> marblesWeights = {2, 9, 3, 12, 7, 11, 6, 10, 4, 10, 3, 5};
    int bagCapacity = 10;
    int numberOfBags = 3;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> marblesWeights = {6, 11, 13, 19, 11, 5, 2, 14, 7, 10, 15, 15};
    int bagCapacity = 20;
    int numberOfBags = 4;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> marblesWeights = {4, 10, 3, 10, 10, 4, 7, 5, 9, 5, 10};
    int bagCapacity = 18;
    int numberOfBags = 5;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> marblesWeights = {8, 4, 7, 12, 4, 12, 3, 12, 11, 13};
    int bagCapacity = 16;
    int numberOfBags = 6;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> marblesWeights = {4, 4, 1, 1, 3, 2, 2, 3, 4, 4, 4, 4, 1};
    int bagCapacity = 6;
    int numberOfBags = 7;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> marblesWeights = {4, 9, 8, 9, 8, 5, 5, 4, 9, 7, 7, 9};
    int bagCapacity = 13;
    int numberOfBags = 8;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> marblesWeights = {17, 13, 9, 14, 10, 6, 5, 14, 4, 14, 9, 11, 12};
    int bagCapacity = 18;
    int numberOfBags = 9;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> marblesWeights = {13, 10, 5, 13, 11, 10, 9, 11, 5, 12, 5, 7, 11};
    int bagCapacity = 15;
    int numberOfBags = 10;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> marblesWeights = {8, 3, 3, 10, 5, 9, 7, 5, 3, 5};
    int bagCapacity = 9;
    int numberOfBags = 3;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> marblesWeights = {8, 7, 6, 8, 5, 5, 7, 6, 7, 8};
    int bagCapacity = 18;
    int numberOfBags = 4;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> marblesWeights = {8, 6, 8, 7, 5, 5, 6, 6, 5, 6, 4, 7, 6};
    int bagCapacity = 17;
    int numberOfBags = 5;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> marblesWeights = {6, 7, 4, 8, 7, 9, 9, 11, 4, 7, 3, 6};
    int bagCapacity = 14;
    int numberOfBags = 6;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> marblesWeights = {7, 8, 8, 12, 5, 14, 14, 5, 14, 11, 11};
    int bagCapacity = 18;
    int numberOfBags = 7;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> marblesWeights = {9, 4, 5, 5, 15, 9, 7, 15, 9, 11, 16, 16};
    int bagCapacity = 17;
    int numberOfBags = 8;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> marblesWeights = {8, 17, 14, 11, 5, 14, 16, 6, 17, 11, 7, 10, 14};
    int bagCapacity = 20;
    int numberOfBags = 9;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> marblesWeights = {14, 13, 5, 9, 13, 9, 14, 7, 5, 5, 12, 11, 13};
    int bagCapacity = 15;
    int numberOfBags = 10;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> marblesWeights = {14, 13, 12, 14, 14, 14, 13, 12, 14, 14, 14, 13, 14};
    int bagCapacity = 20;
    int numberOfBags = 10;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
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
    vector<int> marblesWeights = {1, 1, 1, 1, 1, 1, 1, 19, 19, 19, 19, 19, 19};
    int bagCapacity = 20;
    int numberOfBags = 10;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> marblesWeights = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    int bagCapacity = 4;
    int numberOfBags = 10;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> marblesWeights = {1, 3, 5, 2, 4};
    int bagCapacity = 5;
    int numberOfBags = 2;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
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
    vector<int> marblesWeights = {2, 2, 2};
    int bagCapacity = 1;
    int numberOfBags = 10;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> marblesWeights = {1, 4, 8, 10, 9, 6, 5, 4, 3, 8, 6, 7};
    int bagCapacity = 10;
    int numberOfBags = 6;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> marblesWeights = {4, 7, 19, 16, 14, 16, 7, 13, 10, 2, 3, 8, 11};
    int bagCapacity = 20;
    int numberOfBags = 8;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> marblesWeights = {1, 2, 3, 4, 4};
    int bagCapacity = 7;
    int numberOfBags = 2;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> marblesWeights = {1, 2, 3, 4, 6, 1, 10, 10, 9, 10, 14, 15, 16};
    int bagCapacity = 20;
    int numberOfBags = 6;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> marblesWeights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    int bagCapacity = 20;
    int numberOfBags = 10;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> marblesWeights = {3, 1, 7, 4, 8, 2, 1, 4, 4, 11, 5, 11, 8};
    int bagCapacity = 12;
    int numberOfBags = 3;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> marblesWeights = {2, 6, 7, 7, 8, 9, 10, 2, 1, 11};
    int bagCapacity = 11;
    int numberOfBags = 5;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> marblesWeights = {1, 3, 5, 2, 7, 9, 11, 13, 15, 17};
    int bagCapacity = 16;
    int numberOfBags = 3;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> marblesWeights = {1, 11, 12, 4, 7, 5, 13, 1};
    int bagCapacity = 10;
    int numberOfBags = 1;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> marblesWeights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    int bagCapacity = 15;
    int numberOfBags = 3;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> marblesWeights = {3, 5, 6, 7, 4, 1, 8, 7, 2, 17, 10, 11, 10};
    int bagCapacity = 8;
    int numberOfBags = 5;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> marblesWeights = {5, 3, 2, 2, 1};
    int bagCapacity = 3;
    int numberOfBags = 10;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
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
    vector<int> marblesWeights = {7, 4, 9, 2, 3, 6};
    int bagCapacity = 5;
    int numberOfBags = 4;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> marblesWeights = {1, 2, 3, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int bagCapacity = 6;
    int numberOfBags = 3;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> marblesWeights = {1, 2, 3, 4, 5, 6, 7, 9, 11, 13, 14, 15, 20};
    int bagCapacity = 7;
    int numberOfBags = 3;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
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
    vector<int> marblesWeights = {1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2};
    int bagCapacity = 3;
    int numberOfBags = 6;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> marblesWeights = {1, 1, 2, 3};
    int bagCapacity = 3;
    int numberOfBags = 2;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> marblesWeights = {8, 2, 2, 2};
    int bagCapacity = 10;
    int numberOfBags = 1;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> marblesWeights = {1, 1, 1, 2, 2, 2};
    int bagCapacity = 3;
    int numberOfBags = 3;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> marblesWeights = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    int bagCapacity = 20;
    int numberOfBags = 10;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> marblesWeights = {6, 4, 3};
    int bagCapacity = 8;
    int numberOfBags = 1;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> marblesWeights = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    int bagCapacity = 20;
    int numberOfBags = 10;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> marblesWeights = {18, 10, 4, 7, 2, 9, 4, 7, 14, 19, 16, 13, 11};
    int bagCapacity = 15;
    int numberOfBags = 10;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> marblesWeights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int bagCapacity = 13;
    int numberOfBags = 6;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> marblesWeights = {4, 11, 15, 8, 9, 17, 20, 14, 7, 6, 5, 19, 16};
    int bagCapacity = 19;
    int numberOfBags = 6;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> marblesWeights = {1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1};
    int bagCapacity = 20;
    int numberOfBags = 1;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> marblesWeights = {8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int bagCapacity = 20;
    int numberOfBags = 10;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> marblesWeights = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8};
    int bagCapacity = 18;
    int numberOfBags = 10;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> marblesWeights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 15, 3, 5};
    int bagCapacity = 20;
    int numberOfBags = 10;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> marblesWeights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    int bagCapacity = 7;
    int numberOfBags = 3;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
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
    vector<int> marblesWeights = {1, 2, 3, 4, 5, 4, 4, 6, 5, 4, 5, 5, 6};
    int bagCapacity = 8;
    int numberOfBags = 3;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> marblesWeights = {1, 1, 1, 1, 1, 5, 5};
    int bagCapacity = 5;
    int numberOfBags = 2;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> marblesWeights = {5, 3, 2, 4, 4, 2};
    int bagCapacity = 10;
    int numberOfBags = 2;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> marblesWeights = {2, 2, 2, 2, 2, 2, 2, 1, 2, 3, 2, 4, 2};
    int bagCapacity = 4;
    int numberOfBags = 7;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> marblesWeights = {5, 3, 2, 2, 1, 4, 1, 2, 3, 4, 1, 3, 2};
    int bagCapacity = 20;
    int numberOfBags = 10;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> marblesWeights = {20, 19, 18, 17, 16, 15, 15, 14, 13, 12, 13, 1, 5};
    int bagCapacity = 20;
    int numberOfBags = 10;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> marblesWeights = {1, 4, 5, 5, 7};
    int bagCapacity = 11;
    int numberOfBags = 2;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
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
    vector<int> marblesWeights = {5, 3, 2, 2, 2, 2, 2};
    int bagCapacity = 9;
    int numberOfBags = 2;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> marblesWeights = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int bagCapacity = 20;
    int numberOfBags = 10;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> marblesWeights = {1, 2, 3, 4, 1, 3, 4, 2, 3, 1, 4, 2, 3};
    int bagCapacity = 20;
    int numberOfBags = 10;
    CollectingMarbles* pObj = new CollectingMarbles();
    clock_t start = clock();
    int result = pObj->mostMarbles(marblesWeights, bagCapacity, numberOfBags);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22694437&rd=12169&pm=8746
********************************************************************************
#include <iostream> 
#include <fstream> 
#include <stdio.h> 
#include <iomanip> 
#include <algorithm> 
#include <string> 
#include <cctype> 
#include <sstream> 
#include <vector> 
#include <map> 
#include <set> 
#include <stack> 
#include <queue> 
#include <functional> 
#include <stdarg.h> 
#include <stdlib.h> 
#include <iterator> 
#include <math.h> 
#include <complex> 
#include <bitset> 
#include <iostream> 
#include <fstream> 
#include <stdio.h> 
#include <iomanip> 
#include <algorithm> 
#include <string> 
#include <cctype> 
#include <sstream> 
#include <vector> 
#include <map> 
#include <set> 
#include <stack> 
#include <queue> 
#include <functional> 
#include <stdarg.h> 
#include <stdlib.h> 
#include <iterator> 
#include <math.h> 
#include <complex> 
#include <bitset> 
#include <iostream> 
#include <fstream> 
#include <stdio.h> 
#include <iomanip> 
#include <algorithm> 
#include <string> 
#include <cctype> 
#include <sstream> 
#include <vector> 
#include <map> 
#include <set> 
#include <stack> 
#include <queue> 
#include <functional> 
#include <stdarg.h> 
#include <stdlib.h> 
#include <iterator> 
#include <math.h> 
#include <complex> 
#include <numeric> 
#include <iostream> 
#include <fstream> 
#include <stdio.h> 
#include <iomanip> 
#include <algorithm> 
#include <string> 
#include <cctype> 
#include <sstream> 
#include <vector> 
#include <map> 
#include <set> 
#include <stack> 
#include <queue> 
#include <functional> 
#include <stdarg.h> 
#include <stdlib.h> 
#include <iterator> 
#include <math.h> 
#include <complex> 
#include <numeric> 
#include <iostream> 
#include <fstream> 
#include <stdio.h> 
#include <iomanip> 
#include <algorithm> 
#include <string> 
#include <cctype> 
#include <sstream> 
#include <vector> 
#include <map> 
#include <set> 
#include <stack> 
#include <queue> 
#include <functional> 
#include <stdarg.h> 
#include <stdlib.h> 
#include <iterator> 
#include <math.h> 
#include <complex> 
#include <numeric> 
#include <iostream> 
#include <fstream> 
#include <stdio.h> 
#include <iomanip> 
#include <algorithm> 
#include <string> 
#include <cctype> 
#include <sstream> 
#include <vector> 
#include <map> 
#include <set> 
#include <stack> 
#include <queue> 
#include <functional> 
#include <stdarg.h> 
#include <stdlib.h> 
#include <iterator> 
#include <math.h> 
#include <complex> 
#include <numeric> 
#include <iostream> 
#include <fstream> 
#include <stdio.h> 
#include <iomanip> 
#include <algorithm> 
#include <string> 
#include <cctype> 
#include <sstream> 
#include <vector> 
#include <map> 
#include <set> 
#include <stack> 
#include <queue> 
#include <functional> 
#include <stdarg.h> 
#include <stdlib.h> 
#include <iterator> 
#include <math.h> 
#include <complex> 
#include <numeric> 
#include <iostream> 
#include <fstream> 
#include <stdio.h> 
#include <iomanip> 
#include <algorithm> 
#include <string> 
#include <cctype> 
#include <sstream> 
#include <vector> 
#include <map> 
#include <set> 
#include <stack> 
#include <queue> 
#include <functional> 
#include <stdarg.h> 
#include <stdlib.h> 
#include <iterator> 
#include <math.h> 
#include <complex> 
#include <numeric> 
#include <iostream> 
#include <fstream> 
#include <stdio.h> 
#include <iomanip> 
#include <algorithm> 
#include <string> 
#include <cctype> 
#include <sstream> 
#include <vector> 
#include <map> 
#include <set> 
#include <stack> 
#include <queue> 
#include <functional> 
#include <stdarg.h> 
#include <stdlib.h> 
#include <iterator> 
#include <math.h> 
#include <complex> 
#include <numeric> 
using namespace std; 
 
typedef complex<double> point; 
typedef complex<double> Vector; 
typedef pair<point, point> Segment; 
typedef pair<int, int> pii; 
typedef pair<int, string> pis; 
typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef vector<vvi> vvvi; 
typedef vector<long long> vLL; 
typedef vector<pii> vpii; 
typedef vector<string> vs; 
typedef pair<pii, pii> ppii; 
typedef long long LL; 
typedef long double LD; 
 
#define f(i, n)          for(int i = 0; i < n; i++) 
#define fo(i, a, b)        for(int i = a; i <= b; i++) 
#define fx(it, x)        for(typeof((x).begin()) it = (x).begin(); it != (x).end();++it) 
#define popcount(n)        __builtin_popcount(n) 
#define clz(n)          __builtin_clz(n) 
#define ctz(n)          __builtin_ctz(n) 
#define gcd(a, b)        __gcd(a, b) 
#define X            real() 
#define Y            imag() 
#define nom            first 
#define den            second 
#define sz(a)          (int(a.size())) 
#define pb            push_back 
#define all(v)          v.begin(), v.end() 
#define PI            acos(-1.0) 
#define EPS            1e-9 
#define EQ(a, b)        (abs(a - b) < eps) 
#define sqr(a)          ((a) * (a)) 
#define cl(x, el)        memset(x, el, sizeof(x)) 
#define wait          system("pause") 
#define Get_Time(time)      (double)((double)(clock() - time) / (double)CLOCKS_PER_SEC) 
#define INF            (1e60) 
#define MAX            (1 << 28) 
#define MIN            (- MAX) 
#define MAX_N          (15) 
 
inline LL strtoint(const string &s) {stringstream ss;ss<<s;LL ret;ss>>ret;return ret;} 
inline string inttostr(const LL &a) {stringstream ss;ss<<a;string ret;ss>>ret;return ret;} 
 
 
vi states; 
int dp[1 << MAX_N]; 
 
 
class CollectingMarbles 
{ 
public: 
 
int mostMarbles(vector <int> marblesWeights, int bagCapacity, int numberOfBags) 
{ 
int N = sz(marblesWeights); 
int ret = 0; 
   
   
  f(i, 1 << N) dp[i] = MAX; 
   
  dp[0] = 0; 
   
  f(mask, 1 << N) 
  { 
    int sum = 0; 
     
    f(i, N) if(mask & (1 << i)) sum += marblesWeights[i]; 
     
    if(sum <= bagCapacity) 
    { 
      f(i, 1 << N) if(!(i & mask) && dp[i] < numberOfBags) 
      { 
        dp[i | mask] = min(dp[i | mask], dp[i] + 1); 
      } 
    } 
  } 
   
  f(mask, 1 << N) if(dp[mask] <= numberOfBags) ret = max(ret, popcount(mask)); 
   
   
  return ret; 
} 
 
};

********************************************************************************
*******************************************************************************/