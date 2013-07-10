/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12200
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

class BlockTower {
public:
    int getTallest(vector<int> blockHeights);
};

int BlockTower::getTallest(vector<int> blockHeights) {
    int ret;
    return ret;
}


int test0() {
    vector<int> blockHeights = {4, 7};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> blockHeights = {7, 4};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> blockHeights = {7};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> blockHeights = {4};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> blockHeights = {48, 1, 50, 1, 50, 1, 48};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 196;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> blockHeights = {49, 2, 49, 2, 49};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 147;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> blockHeights = {44, 3, 44, 3, 44, 47, 2, 47, 2, 47, 2};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 273;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> blockHeights = {1, 2, 3, 4, 5};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> blockHeights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> blockHeights = {2, 3, 4};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> blockHeights = {1};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> blockHeights = {50};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> blockHeights = {50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 675;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> blockHeights = {50, 1, 50, 1, 50, 1, 50, 1, 50, 1, 50};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 300;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> blockHeights = {50, 1, 50, 1, 50, 1, 49, 2, 49, 2, 49, 2, 49, 2};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 347;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> blockHeights = {24, 20, 3, 9, 20, 12, 27, 16, 30, 29, 43, 8, 27, 38, 42, 1, 25, 34, 8, 23, 27, 22, 47, 39, 41, 41, 44, 12, 24, 36, 19, 37, 46, 9, 27, 22, 34, 12, 46, 41, 36, 42, 11, 45, 20, 2, 27, 46, 50, 19};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 765;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> blockHeights = {30, 14, 2, 49, 41, 50, 10, 14, 29, 34, 9, 11, 12, 16, 46, 20, 46, 48, 38, 43, 4, 39, 43, 11, 46, 10, 43, 20, 45, 12, 29, 18, 47, 41, 14, 10, 35, 10, 35, 43, 21, 22, 48, 40, 22, 3, 47, 47, 34, 13};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 965;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> blockHeights = {23, 34, 18, 1, 28, 28, 33, 35, 16, 11, 16, 15, 1, 30, 11, 28, 16, 28, 3, 10, 28, 42, 47, 44, 18, 43, 10, 14, 25, 45, 17, 11, 40, 45, 17, 25, 10, 35, 47, 17, 37, 18, 25, 14, 49, 23, 39, 3, 45, 47};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 979;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> blockHeights = {44, 29, 22, 33, 20, 2, 5, 10, 39, 43, 3, 43, 27, 27, 47, 45, 44, 22, 28, 40, 12, 24, 30, 48, 34, 35, 34, 22, 14, 4, 33, 20, 15, 50, 15, 27, 45, 6, 34, 18, 19, 17, 24, 19, 28, 19, 23, 1, 26, 34};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 709;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> blockHeights = {17, 26, 27, 10, 28, 7, 26, 14, 32, 3, 14, 20, 19, 47, 3, 42, 32, 33, 32, 24, 32, 38, 39, 10, 42, 2, 37, 10, 36, 17, 42, 49, 44, 15, 9, 43, 7, 50, 21, 21, 14, 43, 22, 26, 30, 38, 34, 5, 49, 34};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 824;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> blockHeights = {47, 32, 49, 24, 13, 32, 4, 34, 10, 14, 14, 19, 17, 18, 49, 3, 45, 2, 16, 28, 34, 21, 32, 43, 38, 31, 1, 15, 7, 3, 13, 20, 33, 12, 16, 19, 4, 49, 3, 5, 22, 35, 43, 38, 48, 43, 5, 39, 8, 29};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 734;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> blockHeights = {22, 8, 20, 32, 25, 37, 35, 47, 34, 18, 36, 6, 15, 3, 16, 25, 10, 31, 3, 36, 42, 33, 19, 8, 22, 8, 24, 43, 24, 29, 49, 23, 6, 36, 43, 2, 3, 7, 46, 4, 29, 37, 44, 28, 15, 49, 35, 36, 28, 23};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 740;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> blockHeights = {23, 38, 3, 19, 28, 40, 28, 17, 10, 33, 16, 49, 1, 50, 20, 5, 42, 2, 6, 7, 5, 25, 35, 39, 37, 44, 42, 22, 22, 6, 33, 16, 5, 42, 37, 47, 41, 16, 49, 27, 46, 14, 17, 17, 44, 20, 8, 42, 24, 34};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 722;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> blockHeights = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 150;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> blockHeights = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> blockHeights = {9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 450;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> blockHeights = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 500;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> blockHeights = {19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 950;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> blockHeights = {49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 10, 10, 27, 34, 4, 35, 38, 40, 22, 21, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 1158;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> blockHeights = {49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 3, 18, 9, 45, 24, 26, 2, 5, 30, 33, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 1100;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> blockHeights = {49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 34, 1, 36, 31, 13, 1, 39, 37, 11, 12, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 1113;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> blockHeights = {49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 47, 35, 15, 6, 6, 22, 17, 24, 11, 48, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 1106;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> blockHeights = {31, 48};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> blockHeights = {13, 30, 12, 7};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> blockHeights = {23, 3, 24, 35, 24};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> blockHeights = {37, 24, 12, 24, 33, 50, 1, 20, 47, 24, 37, 15, 36, 42, 9, 42, 5, 42, 16, 8, 35, 23, 32};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 398;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> blockHeights = {24, 44, 31, 18, 22, 11, 26, 33, 49, 33, 13, 20, 2, 46, 27, 50, 43, 29, 44, 16, 4, 19, 29, 38};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 409;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> blockHeights = {18, 42, 41, 1, 22, 39, 35, 3, 13, 26, 43, 23, 26, 7, 28, 23, 49, 41, 14, 48, 40, 22, 19, 35, 38, 11, 6, 38, 38, 48, 19, 24, 20, 3, 15, 2};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 516;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> blockHeights = {29, 39, 46, 36, 37, 36, 20, 30, 49, 28, 30, 37, 15, 34, 35, 4, 4, 43, 35, 31, 5, 26, 3, 5, 37, 7, 26, 15, 28, 20, 13, 15, 1, 28, 1, 18, 40};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 524;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> blockHeights = {46, 14, 15, 23, 43, 15, 5, 38, 19, 20, 11, 40, 16, 6, 36, 6, 39, 48, 42, 40, 18, 21, 6, 39, 46, 38, 47, 31, 14, 29, 33, 17, 37, 33, 13, 48, 12, 41};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 741;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> blockHeights = {26, 3, 28, 18, 2, 33, 27, 47, 48, 6, 47, 18, 13, 31, 36, 24, 16, 49, 9, 21, 39, 11, 47, 38, 32, 22, 45, 14, 18, 34, 2, 33, 12, 35, 11, 47, 44, 42, 37};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 656;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> blockHeights = {2, 34, 47, 22, 45, 45, 44, 20, 24, 14, 19, 25, 41, 19, 32, 23, 47, 46, 13, 22, 24, 36, 35, 15, 15, 43, 8, 40, 39, 7, 26, 17, 49, 9, 4, 15, 22, 48, 11, 5, 37, 43, 31, 41};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 772;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> blockHeights = {16, 38, 38, 23, 37, 28, 22, 39, 26, 2, 8, 45, 2, 30, 48, 44, 25, 2, 33, 49, 22, 6, 6, 10, 35, 19, 11, 15, 2, 41, 14, 46, 24, 33, 44, 41, 38, 18, 43, 49, 36, 7, 28, 31, 15, 12, 18, 40, 33, 17};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 799;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> blockHeights = {1, 49, 1};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> blockHeights = {1, 48, 1};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> blockHeights = {2, 47, 2};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> blockHeights = {3, 30, 3};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> blockHeights = {1, 2, 1, 2, 1, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> blockHeights = {2, 24, 20, 10, 22, 18, 39, 18, 46, 27};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 187;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> blockHeights = {25, 33, 18, 13, 24, 41, 4, 44, 42, 49};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 181;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> blockHeights = {42, 1, 1, 9, 48, 18, 9, 21, 4, 34};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 146;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> blockHeights = {16, 29, 50, 4, 34, 27, 10, 47, 44, 21};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 199;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> blockHeights = {36, 25, 23, 19, 49, 9, 23, 46, 32, 39};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 223;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> blockHeights = {7, 10, 30, 21, 23, 26, 1, 42, 5, 24};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 132;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> blockHeights = {7, 37, 27, 10, 50, 19, 33, 22, 26, 14};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 123;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> blockHeights = {8, 16, 9, 8, 32, 9, 37, 9, 41, 37};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 197;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> blockHeights = {43, 49, 46, 11, 5, 20, 20, 35, 21, 31};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 195;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> blockHeights = {44, 50, 22, 29, 41, 14, 34, 24, 22, 36};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 246;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> blockHeights = {44, 16, 39, 4, 42, 11, 18, 24, 26, 13};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 187;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> blockHeights = {13, 43, 34, 4, 49, 27, 5, 12, 12, 25};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 162;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> blockHeights = {5, 1, 15, 17, 17, 12, 39, 31, 37, 43};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 205;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> blockHeights = {28, 19, 40, 33, 13, 28, 4, 37, 15, 17};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 183;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> blockHeights = {19, 32, 21, 36, 22, 50, 30, 36, 29, 5};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 240;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> blockHeights = {45, 7, 8, 4, 20, 13, 26, 30, 42, 10};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 140;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> blockHeights = {2, 49, 26, 33, 46, 37, 5, 40, 21, 28};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 147;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> blockHeights = {6, 21, 48, 5, 10, 46, 38, 25, 34, 42};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 224;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> blockHeights = {19, 10, 33, 2, 27, 50, 35, 26, 18, 9};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 123;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> blockHeights = {36, 5, 49, 42};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> blockHeights = {18, 3, 9, 48, 15, 28, 45, 49, 45};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 233;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> blockHeights = {50, 27, 43, 37, 34, 33};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 190;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> blockHeights = {12, 33, 48, 13, 31};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 104;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> blockHeights = {39, 29, 33, 30, 43, 47};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 191;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> blockHeights = {15, 21, 33, 17, 11, 30, 31, 7, 2};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 135;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> blockHeights = {13, 32, 7};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> blockHeights = {34, 15, 29, 28, 30, 42, 46, 38, 2, 23, 30};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 250;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> blockHeights = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 2500;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> blockHeights = {23, 48, 47, 38, 12, 20, 37, 31, 33, 19, 41, 42, 49, 24, 34, 15, 45, 43, 40, 46, 37, 10, 19, 49, 11, 24, 48, 7, 20, 21, 36, 31, 49, 15, 47, 7, 38, 44, 5, 20, 3, 33, 48, 19, 28, 21, 49, 43, 12, 25};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 922;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> blockHeights = {4, 7};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> blockHeights = {33, 43, 47, 22, 11, 18, 26, 9, 1, 13, 31, 13, 24, 43, 13, 36, 23, 13, 35, 29, 21, 6, 38, 43, 1, 11, 47, 2, 32, 24, 16, 41, 42, 18, 44, 9, 47, 29, 2, 28, 18, 26, 18, 47, 44, 27, 22, 45, 11, 50};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 736;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> blockHeights = {10, 7, 7, 7, 10, 7, 7, 7, 20};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> blockHeights = {44, 3, 44, 3, 44, 47, 2, 47, 2, 47, 2};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 273;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> blockHeights = {9, 8, 7, 6, 5};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> blockHeights = {1, 3, 4, 5};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> blockHeights = {1, 1, 1, 4};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> blockHeights = {7, 5, 3, 1};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> blockHeights = {4, 7, 20, 3, 3, 2, 2, 2, 3, 3, 2, 2, 2, 2};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> blockHeights = {1, 50};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> blockHeights = {1, 5, 7, 6, 45, 34, 15, 23, 34, 44, 23, 1, 1, 1, 6, 5, 6, 6, 6, 6, 6, 6, 6, 7, 8, 8, 8, 8, 8, 8, 28, 30, 32, 44, 49, 48, 48, 45, 40, 40, 40, 40, 32, 30, 30, 16, 14, 14, 14, 12};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 766;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> blockHeights = {11, 6, 6, 6};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> blockHeights = {3, 3, 3, 3, 50};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> blockHeights = {1, 2, 1, 5};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> blockHeights = {48, 1, 50, 1, 50, 1, 48};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 196;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> blockHeights = {3, 5, 10};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> blockHeights = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> blockHeights = {3, 4, 4, 4, 4};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> blockHeights = {15, 14, 18, 15, 24, 2, 17, 21, 19, 19, 25, 24, 1};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 160;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> blockHeights = {2, 47, 2, 48};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> blockHeights = {3, 3, 10, 3, 1, 1, 1, 1, 11, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> blockHeights = {2, 1, 1, 1, 2};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> blockHeights = {3, 3, 3, 14};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> blockHeights = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 12};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> blockHeights = {5, 4, 3, 2, 1};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> blockHeights = {5, 2, 2, 2, 2};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> blockHeights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 33, 50, 34, 45, 50, 50, 34, 23, 34, 23, 45, 23, 5, 3, 2, 6, 34, 23, 21, 22, 4, 34, 34, 34, 44, 33, 45, 45, 34, 45, 34, 42, 30, 34, 34, 45, 50, 45};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 811;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> blockHeights = {1, 1, 1, 30, 30};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> blockHeights = {44, 3, 44, 3, 44, 46, 2, 47, 2, 47, 2, 2};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 274;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> blockHeights = {2, 1, 1, 33, 40};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> blockHeights = {1, 1, 1, 1, 1, 1, 1, 2};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> blockHeights = {1, 1, 4};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> blockHeights = {2, 3, 4, 5, 6, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 40, 45, 46, 47, 48, 49};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 652;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> blockHeights = {10, 19, 10, 10};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> blockHeights = {3, 3, 4};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> blockHeights = {15, 14, 18, 15, 24, 2, 17, 21, 19, 19, 25, 24, 1, 29, 35, 18, 21, 20, 24, 29};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 274;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> blockHeights = {4, 3, 5};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> blockHeights = {31, 7, 20};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> blockHeights = {4, 6, 13, 14, 21, 23, 22, 24, 15, 18, 23, 27};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 138;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> blockHeights = {15, 14, 18, 15, 24, 2, 17, 21, 19, 19, 25, 24, 1, 29, 35, 18, 21, 20, 24, 29, 19, 22, 25, 18, 27, 28};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 345;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> blockHeights = {3, 3, 10, 3, 1, 1, 1, 1, 11, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 68;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> blockHeights = {7, 7, 4};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> blockHeights = {4, 7, 20, 3, 3, 2, 2, 2, 3, 3, 2, 2, 2, 2, 4, 7, 20, 3, 3, 2, 2, 2, 2};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> blockHeights = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> blockHeights = {27, 23, 26};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> blockHeights = {2, 2, 2, 9, 6, 4, 3, 9, 4, 2, 2, 11};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> blockHeights = {34, 37, 28, 16, 44, 36, 37, 43, 50, 22, 13, 28, 41, 10, 14, 27, 41, 27, 23, 37, 12, 19, 18, 30, 33, 31, 13, 24, 18, 36, 30, 3, 23, 9, 20, 18, 44, 7, 12, 43, 30, 24, 22, 20, 35, 38, 49, 25, 16};
    BlockTower* pObj = new BlockTower();
    clock_t start = clock();
    int result = pObj->getTallest(blockHeights);
    clock_t end = clock();
    delete pObj;
    int expected = 752;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22769865&rd=15181&pm=12200
********************************************************************************
#include<cstdio> 
#include<cstring> 
#include<cstdlib> 
#include<cctype> 
#include<cmath> 
#include<iostream> 
#include<fstream> 
#include<string> 
#include<vector> 
#include<queue> 
#include<map> 
#include<algorithm> 
#include<set> 
#include<sstream> 
#include<stack> 
using namespace std; 
 
struct BlockTower{ 
 
int getTallest(vector <int> blockHeights) 
 
{ 
           int ret; 
           int dp[60]; 
           int a,b,c; 
           vector<int>v; 
           v=blockHeights; 
           for(a=0;a<=v.size();a++) dp[a]=0; 
           ret=0; 
           for(a=0;a<v.size();a++){ 
                 if(!a){ dp[a]=v[a]; continue; } 
                 c=0; 
                 for(b=a-1;b>=0;b--){ 
                       if(v[a]%2==0 && v[b]%2==1) continue; 
                       c=max(c,dp[b]); 
                 } 
                 dp[a]=c+v[a]; 
                 ret=max(ret,dp[a]); 
           } 
           ret=max(ret,dp[0]); 
           return ret; 
} 
 
 
 
}; 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/