/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6409
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

class UnfairDivision {
public:
    int albertsShare(vector<int> assets);
};

int UnfairDivision::albertsShare(vector<int> assets) {
    int ret;
    return ret;
}


int test0() {
    vector<int> assets = {50, 90, 10, 100};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> assets = {5, 5, 5};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> assets = {1, 1, 1, 1, 1, 1, 1, 1, 1};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> assets = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> assets = {2, 1, 3};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> assets = {95, 85, 94, 41};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 85;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> assets = {84, 49, 63, 31, 33};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> assets = {33, 52, 10, 80, 77, 49};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 85;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> assets = {56, 53, 4, 24, 59, 2, 52};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> assets = {45, 24, 72, 29, 79, 69, 5, 97};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 102;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> assets = {98, 79, 38, 5, 82, 74, 38, 23, 76};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 137;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> assets = {10, 66, 62, 75, 36, 35, 76, 74, 21, 46};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 141;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> assets = {52, 22, 33, 29, 79, 60, 42, 59, 4, 98, 19};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 136;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> assets = {80, 99, 21, 49, 49, 37, 68, 87, 31, 80, 24, 60};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> assets = {29, 33, 34, 80, 51, 15, 5, 19, 42, 6, 6, 100, 12};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 124;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> assets = {50, 34, 80, 86, 24, 29, 12, 5, 49, 43, 60, 71, 72, 5};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 164;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> assets = {56, 11, 52, 95, 21, 90, 53, 53, 10, 67, 6, 38, 4, 100, 75};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 223;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> assets = {9, 64, 94, 70, 83, 16, 41, 68, 75, 95, 84, 95, 74, 44, 73, 26};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 312;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> assets = {44, 58, 60, 49, 67, 63, 70, 77, 75, 38, 52, 39, 17, 39, 15, 7, 98};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 278;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> assets = {11, 55, 34, 51, 59, 2, 11, 53, 29, 70, 11, 73, 37, 14, 47, 23, 18, 31};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 170;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> assets = {66, 16, 72, 38, 94, 86, 47, 74, 58, 61, 61, 54, 59, 9, 17, 9, 90, 77, 97};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 299;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> assets = {89, 87, 75, 79, 92, 43, 37, 100, 30, 52, 76, 71, 100, 5, 40, 54, 37, 47, 49, 37};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 369;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> assets = {83, 76, 28, 68, 4, 97, 33, 78, 18, 32, 80, 66, 52, 58, 50, 25, 99, 76, 27, 72, 53};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 356;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> assets = {83, 68, 58, 51, 26, 10, 74, 28, 72, 78, 2, 24, 2, 92, 38, 52, 15, 1, 61, 35, 5, 77};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 286;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> assets = {44, 80, 24, 18, 97, 41, 29, 8, 52, 51, 100, 59, 46, 76, 23, 46, 7, 60, 64, 25, 24, 75, 95};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 350;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> assets = {52, 64, 88, 85, 20, 90, 76, 51, 17, 79, 33, 51, 99, 39, 66, 77, 23, 96, 92, 80, 85, 65, 12, 23};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 475;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> assets = {21, 29, 70, 71, 1, 4, 10, 54, 68, 21, 30, 27, 10, 45, 13, 67, 51, 25, 5, 20, 76, 92, 42, 91, 85};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 310;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> assets = {44, 35, 61, 71, 81, 94, 14, 82, 19, 3, 5, 12, 3, 82, 15, 14, 54, 80, 11, 86, 99, 88, 93, 14, 20, 2};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 386;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> assets = {12, 99, 9, 13, 9, 1, 77, 43, 98, 69, 84, 35, 94, 7, 98, 57, 90, 32, 21, 40, 92, 62, 97, 1, 72, 49, 68};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 441;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> assets = {64, 28, 44, 80, 58, 7, 13, 88, 68, 31, 11, 87, 28, 46, 13, 11, 36, 47, 78, 81, 58, 21, 93, 98, 64, 27, 90, 4};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 450;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> assets = {20, 65, 15, 92, 85, 66, 17, 18, 65, 15, 15, 36, 42, 37, 63, 86, 14, 75, 10, 83, 11, 43, 82, 66, 53, 59, 99, 30, 28};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 458;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> assets = {74, 15, 23, 53, 32, 58, 41, 76, 59, 13, 92, 32, 28, 28, 54, 45, 33, 8, 29, 26, 1, 47, 78, 50, 62, 40, 38, 35, 47, 72};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 422;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> assets = {25, 86, 5, 50, 80, 62, 2, 88, 48, 59, 5, 5, 75, 70, 98, 13, 51, 4, 17, 16, 65, 6, 45, 30, 19, 92, 48, 54, 5, 85, 50};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 434;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> assets = {15, 75, 85, 46, 84, 93, 32, 11, 46, 57, 96, 61, 71, 48, 1, 46, 91, 75, 45, 77, 24, 17, 54, 22, 40, 94, 38, 82, 88, 57, 51, 22};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 548;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> assets = {10, 54, 4, 27, 96, 16, 70, 54, 27, 11, 58, 82, 35, 28, 94, 82, 4, 82, 88, 8, 7, 85, 96, 48, 25, 1, 78, 84, 67, 45, 35, 97, 25};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 509;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> assets = {41, 11, 67, 79, 98, 39, 52, 31, 52, 18, 84, 29, 7, 19, 67, 89, 13, 75, 57, 69, 69, 67, 73, 5, 9, 50, 35, 1, 94, 24, 5, 68, 72, 56};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 492;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> assets = {83, 5, 79, 6, 53, 33, 53, 71, 29, 81, 23, 37, 86, 84, 16, 15, 91, 69, 22, 34, 47, 8, 59, 15, 34, 42, 33, 29, 12, 42, 12, 81, 18, 3, 99};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 487;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> assets = {19, 50, 82, 74, 76, 42, 32, 62, 4, 52, 61, 74, 66, 93, 59, 31, 33, 100, 36, 74, 72, 66, 53, 57, 60, 88, 47, 54, 56, 100, 68, 37, 16, 36, 26, 40};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 628;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> assets = {24, 46, 72, 72, 10, 39, 74, 70, 27, 82, 59, 14, 32, 50, 45, 8, 79, 8, 17, 5, 25, 97, 91, 43, 42, 21, 94, 84, 48, 69, 57, 48, 35, 28, 5, 13, 34};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 536;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> assets = {31, 43, 74, 68, 52, 52, 51, 26, 45, 57, 9, 18, 52, 56, 73, 46, 13, 31, 25, 79, 48, 31, 21, 31, 73, 88, 95, 69, 23, 37, 24, 30, 3, 59, 51, 77, 48, 100};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 578;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> assets = {32, 49, 16, 97, 13, 69, 57, 88, 45, 11, 61, 45, 22, 98, 52, 66, 42, 28, 59, 46, 39, 79, 30, 89, 23, 34, 22, 9, 3, 36, 56, 94, 37, 18, 66, 54, 65, 21, 21};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 559;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> assets = {100, 53, 40, 86, 20, 28, 56, 63, 35, 91, 48, 72, 2, 69, 71, 50, 40, 27, 3, 81, 34, 24, 20, 24, 20, 40, 92, 77, 64, 56, 98, 86, 50, 59, 88, 39, 72, 36, 3, 58};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 645;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> assets = {50, 24, 75, 67, 11, 21, 5, 47, 85, 94, 68, 45, 6, 93, 23, 6, 57, 31, 69, 48, 24, 94, 21, 62, 94, 61, 60, 97, 82, 86, 63, 60, 60, 4, 24, 2, 92, 1, 5, 37, 28};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 641;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> assets = {98, 22, 37, 37, 80, 6, 29, 94, 69, 97, 52, 23, 99, 84, 75, 36, 31, 65, 2, 70, 38, 53, 75, 32, 10, 13, 60, 24, 42, 10, 2, 93, 23, 29, 37, 2, 84, 71, 91, 78, 65, 17};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 644;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> assets = {22, 8, 14, 60, 47, 6, 72, 78, 30, 83, 71, 12, 47, 60, 79, 69, 2, 67, 87, 39, 27, 64, 85, 55, 12, 97, 96, 64, 77, 84, 75, 25, 62, 67, 54, 37, 91, 60, 97, 48, 78, 12, 10};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 760;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> assets = {74, 39, 96, 73, 58, 34, 13, 89, 86, 63, 51, 74, 30, 70, 20, 84, 99, 7, 5, 34, 68, 80, 38, 71, 69, 43, 5, 45, 8, 83, 35, 70, 42, 43, 8, 62, 34, 4, 57, 45, 34, 14, 74, 32};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 695;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> assets = {33, 36, 71, 6, 3, 100, 79, 7, 52, 48, 48, 45, 57, 5, 54, 7, 31, 62, 82, 33, 14, 6, 63, 46, 17, 31, 98, 51, 5, 53, 80, 41, 96, 62, 84, 44, 98, 73, 30, 61, 88, 88, 73, 7, 58};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 704;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> assets = {27, 100, 87, 96, 80, 31, 47, 8, 92, 35, 89, 100, 43, 58, 80, 25, 56, 82, 49, 44, 47, 83, 66, 93, 57, 39, 75, 57, 81, 19, 76, 16, 5, 14, 88, 87, 38, 20, 48, 34, 62, 35, 89, 72, 58, 33};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 835;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> assets = {90, 16, 68, 22, 14, 52, 98, 57, 14, 16, 43, 37, 59, 95, 4, 41, 28, 12, 6, 80, 16, 14, 91, 92, 11, 73, 81, 71, 59, 74, 74, 68, 51, 18, 92, 57, 74, 25, 5, 68, 15, 60, 52, 29, 12, 15, 86};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 727;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> assets = {70, 92, 54, 17, 37, 15, 58, 89, 61, 24, 97, 47, 30, 51, 74, 99, 49, 2, 30, 95, 78, 45, 15, 44, 80, 15, 55, 27, 37, 96, 44, 95, 81, 64, 76, 25, 59, 27, 47, 43, 2, 84, 100, 53, 85, 90, 74, 90};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 855;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> assets = {32, 33, 79, 57, 46, 40, 47, 8, 11, 45, 76, 53, 68, 42, 88, 48, 73, 52, 71, 15, 59, 73, 47, 16, 73, 24, 62, 63, 28, 40, 33, 32, 88, 87, 14, 24, 55, 14, 85, 59, 16, 3, 57, 1, 12, 69, 24, 48, 83};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 739;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> assets = {41, 47, 92, 11, 62, 86, 39, 51, 61, 38, 23, 27, 93, 23, 34, 79, 90, 24, 100, 22, 39, 10, 8, 88, 67, 50, 100, 61, 45, 14, 38, 21, 89, 10, 39, 3, 25, 4, 52, 2, 70, 69, 91, 8, 84, 7, 46, 53, 9, 80};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 741;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> assets = {619, 6, 927, 342, 165, 889, 330, 939, 275, 538, 579, 453, 912, 271, 408, 662, 853, 127, 701, 186, 711, 733, 800, 176, 945, 660, 314, 393, 156, 677, 299, 81, 953, 196, 885, 325, 269, 55, 738, 183, 301, 469, 221, 978, 191, 655, 761, 565, 120, 120};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 7653;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> assets = {725, 251, 791, 98, 53, 344, 115, 922, 7, 957, 530, 407, 655, 775, 567, 469, 129, 11, 153, 255, 272, 640, 682, 77, 13, 317, 57, 261, 715, 96, 745, 878, 761, 174, 404, 945, 865, 404, 769, 352, 930, 253, 309, 208, 814, 218, 628, 779, 7, 430};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 6966;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> assets = {704, 443, 67, 358, 849, 359, 630, 39, 683, 652, 962, 245, 540, 969, 298, 347, 434, 170, 684, 418, 152, 823, 612, 285, 72, 865, 543, 819, 36, 499, 299, 762, 973, 936, 384, 761, 2, 83, 554, 90, 420, 648, 293, 763, 333, 414, 457, 327, 665, 647};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 7798;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> assets = {984, 671, 967, 674, 489, 598, 716, 697, 513, 747, 797, 804, 421, 685, 454, 960, 219, 647, 302, 489, 87, 436, 896, 182, 23, 469, 969, 701, 817, 806, 692, 401, 501, 287, 196, 31, 550, 558, 186, 30, 351, 862, 657, 308, 890, 958, 629, 443, 170, 436};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 9078;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> assets = {318, 236, 627, 974, 364, 412, 666, 811, 566, 47, 506, 824, 77, 27, 724, 107, 164, 387, 233, 880, 445, 939, 942, 902, 983, 956, 25, 267, 748, 59, 551, 667, 711, 605, 189, 680, 301, 69, 865, 676, 18, 907, 528, 236, 767, 352, 635, 804, 858, 424};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 8309;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> assets = {570, 404, 696, 217, 978, 916, 887, 159, 911, 317, 866, 524, 758, 745, 184, 947, 171, 16, 258, 71, 565, 446, 753, 744, 347, 429, 749, 363, 694, 262, 493, 87, 582, 125, 862, 618, 767, 951, 612, 182, 603, 166, 133, 137, 880, 935, 671, 384, 378, 581};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 8203;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> assets = {956, 376, 444, 315, 736, 35, 724, 283, 967, 370, 86, 193, 332, 913, 924, 472, 301, 332, 275, 983, 160, 781, 585, 823, 324, 573, 565, 616, 779, 762, 291, 14, 639, 88, 587, 839, 724, 536, 795, 393, 476, 428, 201, 13, 750, 604, 784, 835, 789, 716};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 8759;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> assets = {436, 103, 169, 92, 478, 84, 632, 933, 133, 770, 481, 845, 589, 151, 667, 815, 413, 753, 772, 797, 405, 532, 862, 3, 380, 961, 555, 853, 25, 343, 734, 280, 700, 955, 47, 767, 999, 627, 697, 30, 944, 736, 61, 772, 918, 423, 367, 275, 853, 28};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 8497;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> assets = {985, 922, 695, 366, 895, 895, 904, 473, 552, 417, 581, 895, 658, 914, 834, 415, 351, 365, 169, 349, 897, 941, 6, 203, 301, 751, 912, 515, 135, 150, 774, 181, 527, 582, 929, 421, 445, 402, 228, 802, 362, 445, 104, 436, 916, 371, 976, 529, 414, 985};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 9238;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> assets = {768, 958, 885, 792, 846, 457, 927, 16, 465, 263, 779, 198, 660, 833, 873, 278, 581, 298, 641, 744, 476, 893, 490, 53, 858, 485, 670, 1000, 937, 695, 228, 158, 47, 815, 369, 812, 619, 880, 303, 21, 247, 813, 122, 604, 534, 519, 314, 853, 669, 140};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 9067;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> assets = {5, 4, 6};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> assets = {40, 19, 1, 1, 19, 1, 40};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> assets = {1, 1, 1, 1, 1, 1, 1, 1, 1};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
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

int test65() {
    vector<int> assets = {497, 956, 833, 172, 624, 939, 931, 819, 831, 892, 395, 853, 618, 229, 888, 358, 811, 995, 628, 390, 995, 91, 910, 878, 905, 670, 581, 876, 692, 378, 461, 650, 478, 650, 904, 149, 584, 443, 501, 621, 576, 156, 721, 302, 764, 680, 681, 776, 785, 426};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 10477;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> assets = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> assets = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> assets = {3, 5, 8, 2, 2, 1, 7, 9, 7, 7, 7, 6, 5, 2, 1, 6, 5};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> assets = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> assets = {1, 50, 2, 49, 3, 48, 4, 47, 5, 46, 6, 45, 7, 44, 8, 43, 9, 42, 10, 41, 11, 40, 12, 39, 13, 38, 14, 37, 15, 36, 16, 35, 17, 34, 18, 33, 19, 32, 20, 31, 21, 30, 22, 29, 23, 28, 24, 27, 25, 26};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 408;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> assets = {1, 1, 4, 1, 100, 1, 1, 7, 1};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> assets = {1, 2, 5, 4, 2, 9, 6, 3, 3, 2};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> assets = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> assets = {3, 1, 2, 3};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
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
    vector<int> assets = {506, 254, 29, 148, 740};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 254;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> assets = {7, 17, 13, 29, 53, 91, 79};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> assets = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 414;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> assets = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> assets = {3, 5, 8, 2, 2, 1, 7, 9, 7, 7, 7, 6, 5, 2, 1, 6, 5, 1, 1000, 12, 42, 65};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> assets = {3, 1, 1, 1, 1, 2};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> assets = {110, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> assets = {4, 5, 1, 2};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> assets = {1000, 1, 1};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
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
    vector<int> assets = {100, 10, 100};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> assets = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 16000;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> assets = {50, 90, 10, 100, 67, 50, 90, 10, 100, 67, 50, 90, 10, 100, 67, 50, 90, 10, 100, 67, 50, 90, 10, 100, 67, 50, 90, 10, 100, 67, 50, 90, 10, 100, 67, 50, 90, 10, 100, 67, 50, 90, 10, 100, 67};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 901;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> assets = {69, 187, 990, 930, 934, 354, 869};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 1223;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> assets = {1, 2, 3, 90, 4, 5, 6, 7, 8, 9};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> assets = {5, 5, 5, 1};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
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
    vector<int> assets = {100, 10, 90, 50};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> assets = {2, 1, 1, 1, 1};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> assets = {44, 44, 66, 77, 88};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 66;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> assets = {2, 2, 1};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> assets = {5, 4, 3, 2, 1};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
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
    vector<int> assets = {3, 2, 1};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> assets = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 11, 2, 3, 3, 2, 6, 6, 7, 9, 9, 4, 9, 9, 9, 7, 6, 5, 5, 4, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> assets = {5, 1, 5, 5};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> assets = {15, 18, 654, 54, 64, 34, 84, 44, 59, 229, 29, 1, 26, 32, 556, 84, 2, 654, 987, 23, 654, 369, 42, 258, 638, 247, 258, 358, 38, 65, 45, 54, 21, 879, 358, 5, 65, 3, 65, 65, 35, 65, 35, 65, 63, 63, 9, 45, 12, 123};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 2639;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> assets = {50, 5, 50};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> assets = {123, 435, 1, 43, 46, 23, 432, 5, 43, 13, 13, 213, 32, 253, 13, 324, 999, 999, 214, 1, 13, 314, 53, 21, 323, 435, 13, 353, 123, 123, 123, 6, 3, 6, 1, 456, 23, 345, 23, 234, 432, 5, 43, 13, 13, 1, 13, 314, 53, 21};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 2374;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> assets = {11, 10, 10, 11};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> assets = {346, 239, 689, 329, 645};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 585;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> assets = {50, 50, 10, 10, 10, 10, 10, 10};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> assets = {100, 1, 1, 1, 1, 1};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> assets = {3, 3, 3, 1};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
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
    vector<int> assets = {300, 100, 200, 300};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> assets = {5, 5, 5, 5, 100};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
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

int test108() {
    vector<int> assets = {100, 100, 4, 3, 2, 1};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> assets = {40, 19, 1, 1, 19, 1, 40};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> assets = {1, 1, 1, 1, 1, 1, 1, 1, 1};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> assets = {497, 956, 833, 172, 624, 939, 931, 819, 831, 892, 395, 853, 618, 229, 888, 358, 811, 995, 628, 390, 995, 91, 910, 878, 905, 670, 581, 876, 692, 378, 461, 650, 478, 650, 904, 149, 584, 443, 501, 621, 576, 156, 721, 302, 764, 680, 681, 776, 785, 426};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 10477;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> assets = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> assets = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> assets = {3, 5, 8, 2, 2, 1, 7, 9, 7, 7, 7, 6, 5, 2, 1, 6, 5};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> assets = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> assets = {1, 50, 2, 49, 3, 48, 4, 47, 5, 46, 6, 45, 7, 44, 8, 43, 9, 42, 10, 41, 11, 40, 12, 39, 13, 38, 14, 37, 15, 36, 16, 35, 17, 34, 18, 33, 19, 32, 20, 31, 21, 30, 22, 29, 23, 28, 24, 27, 25, 26};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 408;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> assets = {1, 1, 4, 1, 100, 1, 1, 7, 1};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> assets = {1, 2, 5, 4, 2, 9, 6, 3, 3, 2};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> assets = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> assets = {3, 1, 2, 3};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> assets = {506, 254, 29, 148, 740};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 254;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> assets = {7, 17, 13, 29, 53, 91, 79};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> assets = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 414;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> assets = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> assets = {3, 5, 8, 2, 2, 1, 7, 9, 7, 7, 7, 6, 5, 2, 1, 6, 5, 1, 1000, 12, 42, 65};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> assets = {3, 1, 1, 1, 1, 2};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> assets = {110, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> assets = {4, 5, 1, 2};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> assets = {1000, 1, 1};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> assets = {100, 10, 100};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> assets = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 16000;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> assets = {50, 90, 10, 100, 67, 50, 90, 10, 100, 67, 50, 90, 10, 100, 67, 50, 90, 10, 100, 67, 50, 90, 10, 100, 67, 50, 90, 10, 100, 67, 50, 90, 10, 100, 67, 50, 90, 10, 100, 67, 50, 90, 10, 100, 67};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 901;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> assets = {69, 187, 990, 930, 934, 354, 869};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 1223;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> assets = {1, 2, 3, 90, 4, 5, 6, 7, 8, 9};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> assets = {5, 5, 5, 1};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> assets = {100, 10, 90, 50};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> assets = {2, 1, 1, 1, 1};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> assets = {44, 44, 66, 77, 88};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 66;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> assets = {2, 2, 1};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> assets = {5, 4, 3, 2, 1};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> assets = {3, 2, 1};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> assets = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 11, 2, 3, 3, 2, 6, 6, 7, 9, 9, 4, 9, 9, 9, 7, 6, 5, 5, 4, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> assets = {5, 1, 5, 5};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> assets = {15, 18, 654, 54, 64, 34, 84, 44, 59, 229, 29, 1, 26, 32, 556, 84, 2, 654, 987, 23, 654, 369, 42, 258, 638, 247, 258, 358, 38, 65, 45, 54, 21, 879, 358, 5, 65, 3, 65, 65, 35, 65, 35, 65, 63, 63, 9, 45, 12, 123};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 2639;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> assets = {50, 5, 50};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> assets = {123, 435, 1, 43, 46, 23, 432, 5, 43, 13, 13, 213, 32, 253, 13, 324, 999, 999, 214, 1, 13, 314, 53, 21, 323, 435, 13, 353, 123, 123, 123, 6, 3, 6, 1, 456, 23, 345, 23, 234, 432, 5, 43, 13, 13, 1, 13, 314, 53, 21};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 2374;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> assets = {11, 10, 10, 11};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> assets = {346, 239, 689, 329, 645};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 585;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> assets = {50, 50, 10, 10, 10, 10, 10, 10};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> assets = {100, 1, 1, 1, 1, 1};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> assets = {3, 3, 3, 1};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> assets = {300, 100, 200, 300};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> assets = {5, 5, 5, 5, 100};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> assets = {100, 100, 4, 3, 2, 1};
    UnfairDivision* pObj = new UnfairDivision();
    clock_t start = clock();
    int result = pObj->albertsShare(assets);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test134() == 0 ? ++passed : ++failed;
    test135() == 0 ? ++passed : ++failed;
    test136() == 0 ? ++passed : ++failed;
    test137() == 0 ? ++passed : ++failed;
    test138() == 0 ? ++passed : ++failed;
    test139() == 0 ? ++passed : ++failed;
    test140() == 0 ? ++passed : ++failed;
    test141() == 0 ? ++passed : ++failed;
    test142() == 0 ? ++passed : ++failed;
    test143() == 0 ? ++passed : ++failed;
    test144() == 0 ? ++passed : ++failed;
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15231364&rd=9826&pm=6409
********************************************************************************
#include <algorithm> 
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
#include <queue> 
#include <set> 
#include <map> 
#include <cstdio> 
#include <cstdlib> 
#include <cctype> 
#include <cmath> 
#include <list> 
using namespace std; 
#define forn(i,n) for(int i=0;i<(int)(n);++i) 
#define forsn(i,s,n) for(int i=s;i<(int)(n);++i) 
#define forall(i,c) for(typeof(c.begin()) i=c.begin();i!=c.end();++i) 
 
class UnfairDivision { 
public: 
    int albertsShare(vector <int> v) { 
        int res=0; 
        int s=0; 
        forn(i,v.size()) s+=v[i]; 
        forsn(a,1,v.size()) { 
          vector<int> m(3); 
          forsn(b,1,v.size())if (b!=a) { 
            vector<int> p(3); 
            int ip=0; 
            forn(i,v.size()) { 
              if (i==a) ip++; 
              if (i==b) ip++; 
              p[ip]+=v[i]; 
            } 
            sort(p.begin(), p.end(), greater<int>()); 
            swap(p[0],p[1]); 
            m=max(m,p); 
          } 
          res>?=m[2]; 
        } 
        return res; 
    } 
 
}; 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/