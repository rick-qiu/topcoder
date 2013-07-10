/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8541
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

class TrophyShelf {
public:
    vector<int> countVisible(vector<int> trophies);
};

vector<int> TrophyShelf::countVisible(vector<int> trophies) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> trophies = {1, 2, 3, 4, 5};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 1};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> trophies = {5, 5, 5, 5};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> trophies = {1, 2, 5, 2, 1};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> trophies = {1, 4, 2, 5, 3, 7, 1};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 2};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> trophies = {50};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> trophies = {1, 2};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> trophies = {10, 1, 10};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> trophies = {1, 10, 1};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> trophies = {1, 2, 4, 4, 5, 5, 6, 1, 1, 1, 1};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 2};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> trophies = {5, 1, 2, 3, 4, 5, 6};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> trophies = {5, 1, 2, 4, 7};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> trophies = {6, 5, 4, 3, 2, 1, 5};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> trophies = {7, 4, 2, 1, 5};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> trophies = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {50, 1};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> trophies = {50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 50};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> trophies = {1, 2, 3, 4, 7, 10, 2, 3, 4, 1, 2, 3, 4, 10, 1, 2, 3, 10, 10, 10, 11};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 1};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> trophies = {1, 5, 5, 5, 5, 5, 10};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 1};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> trophies = {10, 5, 5, 5, 1};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> trophies = {10, 10, 1, 1};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> trophies = {1, 1, 5, 1};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> trophies = {31, 60, 67, 70, 69, 84, 17, 33, 42, 67, 63, 43, 47, 96, 81, 55, 34, 63, 69, 54, 15, 79, 28, 65, 12, 18, 19, 85, 33, 72, 90, 88, 10, 90, 58, 84, 18, 1, 68};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 4};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> trophies = {23, 43, 67, 68, 26, 24, 98, 85, 13, 28, 31, 50, 7, 48, 36, 83, 19, 46, 18, 83, 24, 48, 89, 100, 3, 84, 100, 54, 70, 1, 64};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 3};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> trophies = {17, 79, 81};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 1};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> trophies = {11, 68, 42, 19, 60, 59, 70, 36, 70, 94, 56, 37, 69, 3, 68, 46, 47, 24, 40, 26, 65, 79};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 2};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> trophies = {59, 9, 18, 18, 89, 53, 10, 86, 8, 98, 66, 17, 25, 53, 45, 34, 90, 65, 64};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> trophies = {100};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> trophies = {1};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> trophies = {100, 100};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> trophies = {1, 1};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> trophies = {62, 4, 95, 77, 10, 55, 57, 40, 47, 55, 1, 98, 86, 81, 36, 21, 40, 73, 23, 97, 39, 86, 40, 29, 11, 94, 90, 45, 71, 96, 80, 73, 24, 94, 99, 53, 79, 28, 11, 15, 93, 82, 61, 92, 56, 23, 59, 26, 5, 57};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 5};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> trophies = {86, 97, 59, 87, 51, 6, 79, 92, 41, 84, 36, 21, 74, 22, 26, 19, 57, 48, 45, 51, 94, 6, 9, 92, 69};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> trophies = {60, 47, 37, 97, 4, 34, 33, 92, 18, 61, 67, 29, 58, 39, 1, 74, 52, 53, 8, 25, 8, 95, 52, 94, 16, 23};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> trophies = {56, 37, 13, 96, 81, 81, 73, 42, 4, 65, 77, 8, 14, 42, 78, 62, 94, 95, 32, 90, 87, 3, 58};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 5};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> trophies = {74, 21, 34, 37, 37, 41, 52, 42, 98, 50, 62, 8, 37, 76};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> trophies = {90, 1, 45, 77, 30, 77, 51, 94, 13, 87, 53, 72, 12, 38, 100, 1, 96, 76, 18, 81, 20, 48, 75, 86, 36, 46, 31, 46, 36, 28, 54, 73};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> trophies = {6, 80, 4, 17, 75, 60, 49, 46, 75, 71, 43, 87, 86, 100, 43, 67, 6, 27, 17, 18, 57, 59, 22, 76, 42, 87, 80, 28, 40, 5, 21, 43, 90, 50, 16, 43, 48, 79, 22, 22, 40, 34, 49, 71, 59, 3, 58, 90};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 2};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> trophies = {26, 67, 44, 26, 93, 58, 63, 47, 55, 57, 88, 38, 30, 95, 10, 5, 66, 95};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 1};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> trophies = {98, 60, 60, 36, 34, 9, 85, 46, 49, 86, 24, 62, 18, 88, 100, 54, 32, 69, 39, 43, 95, 7, 19, 67, 28, 93, 39, 4, 43, 98, 28, 45, 35, 2, 57, 56, 94, 26, 87, 100, 14, 99, 89};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> trophies = {95, 1, 84, 36, 63, 3, 25, 49, 35, 91, 82, 89, 21, 38, 77, 42, 75, 63, 64, 7, 74, 16, 73, 84, 100, 76, 53, 86, 88, 12, 39, 36, 72, 49, 64, 98, 7, 46, 98, 98};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> trophies = {1, 62, 27, 5, 99, 94, 21, 48, 83, 35, 32, 13, 86, 44, 87, 19, 1, 59, 100, 58, 34};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 3};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> trophies = {49, 3, 3, 5, 76, 88, 61, 50, 69, 92, 90, 40, 90, 47, 64, 7, 44, 1};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 5};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> trophies = {35, 26, 59, 86, 97, 90, 98, 100, 92, 57, 8, 28, 84, 93, 9, 6, 3, 88, 86, 50, 14, 47, 41, 89, 63, 78, 48, 88, 70};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 5};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> trophies = {31, 15, 35, 85, 25, 84, 38, 50, 77, 61, 18, 56, 40, 95, 86, 46, 45, 30, 11, 62, 45, 7, 48, 6, 34, 61};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> trophies = {27, 56, 10, 85, 54, 30, 78, 100, 63, 66, 76, 35, 43, 46, 64, 34, 88, 71, 35, 27, 76, 16, 54};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> trophies = {55, 60};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> trophies = {51, 1, 75, 95, 95, 82, 52, 52, 57, 95, 11, 7, 31, 38, 53, 83, 5, 98, 10, 81, 79, 36, 23, 35, 12, 58, 75, 26, 39, 96, 24, 100, 54, 16, 39, 42, 62, 38, 25, 35, 36, 6, 89, 78, 96, 82, 48, 11, 62};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 4};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> trophies = {47, 43, 50, 94, 24, 76, 93, 2, 43, 52, 21, 86, 35, 41, 31, 71, 96, 40, 35, 46, 58, 45, 30, 52, 83, 41, 41, 60, 84, 58, 87, 91, 39, 64, 95, 35, 75, 10, 35, 85, 11, 45, 9, 79};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> trophies = {71, 36, 15, 4, 13, 79, 15, 53, 37, 81, 57, 10, 23, 34, 20, 20, 14, 66, 57};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> trophies = {67, 77, 90, 3, 42, 73, 7, 3, 23, 85, 15, 37, 78, 84, 98, 8};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 2};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> trophies = {43, 81, 79, 14, 54, 30, 89, 4, 31, 10, 92, 81, 11, 26, 10, 70, 79, 92, 32, 7, 17, 31, 21, 25, 99, 64, 34, 1, 42, 88, 31, 2, 98, 16, 79, 55, 59, 84, 41, 62, 10, 71};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 4};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> trophies = {81, 4, 87, 43, 75, 80};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> trophies = {22, 44, 62, 28, 27, 46, 72, 30};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 2};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> trophies = {16, 80, 24, 79, 44, 63, 32, 32, 61, 81, 46, 41, 65, 24, 42, 43, 74, 7, 81, 48, 9, 53, 96, 56, 99, 89, 7, 28, 84};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 3};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> trophies = {44, 83, 64, 38, 57, 20};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> trophies = {39, 20, 26, 89, 74, 37, 27, 34, 72, 63, 86, 28, 5, 92, 94, 35, 63, 54, 68, 35, 2, 51, 45, 75, 66, 92, 61};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 3};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> trophies = {45, 80, 69, 59, 10, 28, 70};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> trophies = {41, 21, 45, 58};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 1};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> trophies = {69, 25, 34, 69, 52, 80, 44, 84, 66, 89, 72, 23, 58, 91, 94, 61, 55, 77, 79, 91, 65, 4, 16, 16, 86, 15, 65, 94, 14, 25, 24, 22, 94};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 1};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> trophies = {23, 85, 77, 39, 36, 18, 87, 35, 66, 33, 70, 94, 23};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 2};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> trophies = {51, 37, 18, 97, 49, 75, 21, 36, 75, 58, 48, 38, 56, 40, 16, 100, 57, 6, 65, 83, 46, 49, 34, 91, 87, 55, 54, 39, 99, 20, 22, 93, 81, 52, 14, 62, 52, 96, 59, 65, 54, 98};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> trophies = {47, 78, 41, 97, 77, 70, 61, 86, 61, 62, 58, 66, 11, 90, 93, 88, 99, 99, 89, 48, 77, 10, 88, 8, 58, 39, 69, 21, 43, 34, 85, 84, 66, 99, 70, 4, 64, 16, 18};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> trophies = {75, 82, 82, 7, 90, 27, 43, 88, 69, 87, 83, 9, 44, 33, 6};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 7};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> trophies = {67, 65, 81, 6, 47, 67, 75, 88, 40};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 2};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> trophies = {95, 16, 22, 17, 60, 72, 57, 89, 49, 21, 29, 60, 35, 76, 73, 87, 82, 100, 87, 8, 36, 96, 79, 82, 73, 61, 14, 62, 2, 65, 29, 43, 74, 3, 54};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 5};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> trophies = {81, 39, 30, 46, 81, 74, 94, 39, 20, 85, 47, 48, 29, 22, 18, 85, 41, 87, 48, 35, 37, 80, 90, 87, 2, 66, 37, 73, 41, 45, 16, 71, 76, 40, 25, 93, 45, 11, 12, 62, 14, 45, 68, 13, 86, 9, 94, 44, 23};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> trophies = {67, 61, 86, 27, 1, 75, 79, 88, 43, 50, 64};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 2};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> trophies = {89, 95, 62, 32, 6, 15, 89, 69, 42, 54, 28, 55, 42, 28, 43, 25, 57, 63, 70, 33, 52, 92, 47, 99, 93, 13, 88, 23, 29, 32, 46, 43, 30, 70, 13, 8, 83, 93, 1, 66, 99, 25, 84, 26, 32, 86, 67, 22, 97, 32};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> trophies = {53, 82, 84, 40, 35, 36, 38, 54, 92, 25, 92, 73, 78, 22, 89, 69, 55, 22, 57, 46, 79, 94, 83, 10, 99, 42, 92, 46, 39, 72, 79, 30, 58, 21, 50, 30, 100, 40, 69, 54, 69, 63, 66, 68, 42, 20, 8, 85, 49, 20};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 4};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> trophies = {79, 10, 36, 28, 46, 49, 95, 87, 93, 34, 17, 98, 22, 6, 32, 82, 17, 45, 42, 44, 20, 66, 89, 25, 92, 28, 70, 78, 26, 58, 78, 89, 70, 90, 29, 15, 95, 70, 86, 72, 8, 12, 37, 84, 11, 98, 100, 79, 74, 92};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 2};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> trophies = {57, 86, 39, 69, 5, 61, 52, 69, 94, 94, 41, 76, 66, 39, 23, 94, 26, 20, 74, 94, 61, 91, 48, 40, 37, 66, 48, 11, 12, 92, 29, 1, 34, 59, 7, 99, 89, 99, 2, 91, 99, 13, 61, 100, 81, 76, 92, 74, 47, 65};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 4};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> trophies = {84, 14, 43, 9, 15, 74, 57, 51, 43, 3, 14, 54, 57, 23, 13, 6, 88, 43, 59, 44, 3, 16, 6, 54, 30, 52, 74, 91, 99, 79, 80, 60, 99, 27, 86, 36, 31, 29, 18, 9, 38, 62, 32, 16, 51, 54, 35, 68, 21, 37};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> trophies = {95, 100, 65, 66, 44, 94, 59, 88, 44, 74, 78, 71, 45, 17, 60, 51, 87, 2, 46, 6, 30, 18, 90, 65, 36, 81, 31, 66, 9, 18, 13, 95, 26, 30, 23, 6, 49, 76, 39, 97, 56, 99, 14, 58, 12, 35, 76, 31, 24, 25};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 5};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> trophies = {92, 96, 55, 41, 96, 23, 53, 28, 95, 59, 35, 29, 73, 21, 62, 28, 75, 44, 88, 30, 95, 96, 51, 20, 53, 52, 14, 80, 43, 63, 27, 58, 18, 15, 23, 62, 90, 37, 59, 56, 6, 74, 5, 78, 61, 20, 67, 61, 54, 29};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 7};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> trophies = {71, 24, 58, 82, 55, 36, 10, 62, 96, 68, 7, 7, 16, 5, 53, 41, 36, 19, 72, 28, 36, 21, 9, 35, 98, 38, 92, 13, 30, 97, 78, 69, 30, 84, 1, 99, 84, 18, 76, 74, 97, 23, 76, 42, 31, 98, 58, 55, 27, 2};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 6};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> trophies = {82, 10, 81, 38, 36, 56, 60, 99, 45, 91, 72, 25, 52, 99, 99, 86, 35, 26, 60, 42, 63, 23, 93, 45, 4, 67, 96, 36, 40, 37, 11, 4, 57, 87, 38, 69, 2, 14, 44, 63, 15, 61, 58, 84, 40, 79, 99, 18, 79, 90};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> trophies = {9, 38, 84, 79, 94, 69, 17, 81, 46, 99, 97, 2, 96, 32, 90, 46, 96, 1, 44, 40, 5, 48, 51, 60, 49, 53, 74, 68, 79, 23, 10, 15, 22, 3, 17, 53, 96, 43, 61, 81, 6, 10, 81, 100, 10, 58, 43, 12, 4, 62};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 2};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> trophies = {1, 4, 2, 5, 3, 7, 1};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 2};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> trophies = {1, 4, 2, 5};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 1};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> trophies = {1, 2, 3, 2};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 2};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> trophies = {7, 6, 5};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> trophies = {3, 2, 1};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> trophies = {5, 2, 10, 2, 5};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> trophies = {1};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> trophies = {1, 2, 1, 4, 5};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 1};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> trophies = {1, 2, 3, 4, 5};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 1};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> trophies = {3, 5, 5, 5};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> trophies = {1, 8, 2, 5, 6};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> trophies = {1, 2, 1, 7};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 1};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> trophies = {3, 3, 4, 5, 6, 7};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 1};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> trophies = {100};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> trophies = {8, 1, 2, 3, 4, 5, 5, 6};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> trophies = {1, 3, 2};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> trophies = {1, 2, 1, 2, 3, 2, 1, 2, 1};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> trophies = {1, 2, 6, 4, 5, 2, 1};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> trophies = {1, 5, 2, 2, 6};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 1};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> trophies = {1, 3, 2, 3, 4, 5};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 1};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> trophies = {1, 3, 1, 2, 4, 2};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 2};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> trophies = {10, 1, 1, 2, 5};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> trophies = {5, 2, 3, 4, 9};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> trophies = {5, 5, 5, 5, 5, 5};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> trophies = {4, 2, 5, 3, 7};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 1};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> trophies = {8, 1, 10, 3, 12, 4, 5, 11};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 2};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> trophies = {4, 3, 5, 7, 2};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 2};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> trophies = {1, 5, 2};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> trophies = {3, 2, 2, 2, 1};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> trophies = {1, 2, 3, 2, 4, 5};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 1};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> trophies = {1, 4, 2, 4, 3, 7, 1};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 2};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> trophies = {5, 4, 3, 2, 1};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 5};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> trophies = {7, 1, 2, 3, 4, 5};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> trophies = {1, 2, 1, 4};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 1};
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> trophies = {6, 3, 5, 3, 1};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> trophies = {10};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> trophies = {9, 5, 6, 7, 8};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> trophies = {1, 2, 5, 2, 1};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3};
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> trophies = {5};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> trophies = {3, 1, 2};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> trophies = {5, 1, 2, 6};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1};
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> trophies = {5, 4};
    TrophyShelf* pObj = new TrophyShelf();
    clock_t start = clock();
    vector<int> result = pObj->countVisible(trophies);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22705203&rd=11120&pm=8541
********************************************************************************
#include <iostream> 
#include <sstream> 
#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
#include <memory> 
#include <cctype> 
#include <string> 
#include <vector> 
#include <list> 
#include <queue> 
#include <deque> 
#include <stack> 
#include <map> 
#include <set> 
#include <algorithm> 
#include <functional>
#include <bitset>
using namespace std;
class TrophyShelf {
  public:
  vector <int> countVisible(vector <int> vi) {
      vector<int> q;
  int i,cnt=0,cur=0;
  for(i=0;i<vi.size();i++){
    if(vi[i]>cur){
      cnt++;
    cur=vi[i];
    }
  }
  q.push_back(cnt);
  cur=0;
  cnt=0;
  for(i=vi.size()-1;i>=0;i--){
    if(vi[i]>cur){
      cnt++;
    cur=vi[i];
    }
  }
  q.push_back(cnt);
  return q;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/