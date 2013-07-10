/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2014
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

class Watchtower {
public:
    vector<int> orderByArea(vector<int> x, vector<int> y);
};

vector<int> Watchtower::orderByArea(vector<int> x, vector<int> y) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> x = {10, 50};
    vector<int> y = {10, 50};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> x = {0, 1, 98, 97};
    vector<int> y = {0, 99, 98, 3};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 2, 1, 0};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> x = {25};
    vector<int> y = {25};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> x = {10, 40, 50, 50, 90};
    vector<int> y = {10, 40, 50, 75, 50};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4, 1, 0, 2};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> x = {6, 19, 38, 47, 49, 61, 63, 65, 65, 71, 85};
    vector<int> y = {74, 52, 70, 95, 1, 55, 79, 0, 32, 93, 99};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 8, 5, 4, 0, 2, 7, 6, 3, 10, 9};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> x = {4, 11, 12, 16, 29, 37, 43, 56, 56, 68, 82, 86, 94, 96};
    vector<int> y = {89, 4, 74, 59, 39, 13, 63, 8, 56, 97, 80, 7, 44, 44};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 8, 4, 6, 11, 7, 12, 9, 3, 5, 2, 1, 0, 13};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> x = {7, 18, 19, 20, 22, 25, 27, 32, 32, 41, 52, 71, 77, 78, 94};
    vector<int> y = {65, 43, 20, 54, 25, 23, 47, 3, 65, 83, 28, 64, 40, 49, 20};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 9, 10, 14, 0, 8, 13, 2, 12, 7, 1, 6, 5, 3, 4};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> x = {3, 3, 16, 19, 21, 34, 45, 51, 52, 56, 61, 64, 70, 87, 89, 93};
    vector<int> y = {11, 13, 50, 77, 40, 100, 87, 57, 33, 28, 98, 69, 98, 27, 70, 27};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 3, 14, 13, 4, 7, 2, 11, 8, 6, 15, 12, 0, 1, 5, 10};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> x = {0, 1, 1, 9, 17, 29, 30, 32, 47, 50, 56, 60, 77, 78, 87, 95, 96};
    vector<int> y = {13, 2, 71, 55, 78, 53, 48, 13, 5, 35, 75, 51, 94, 82, 7, 49, 4};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 10, 15, 11, 14, 9, 13, 7, 3, 8, 12, 6, 5, 0, 2, 16, 1};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> x = {34, 56, 62, 68, 70};
    vector<int> y = {4, 48, 6, 64, 10};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 1, 0, 4, 2};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x = {12, 43, 78, 85, 94};
    vector<int> y = {59, 73, 80, 29, 30};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 1, 2, 4};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> x = {2, 6, 44, 50, 58, 61, 63, 70, 83, 86, 94, 100};
    vector<int> y = {72, 54, 95, 5, 25, 72, 91, 63, 79, 9, 88, 82};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4, 3, 7, 9, 5, 0, 2, 8, 6, 10, 11};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> x = {18, 21, 21, 27, 38, 97};
    vector<int> y = {67, 55, 93, 40, 64, 30};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 3, 4, 2, 0, 1};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> x = {2, 31, 33, 36, 56, 58, 76, 80};
    vector<int> y = {84, 6, 67, 46, 93, 53, 38, 66};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 1, 3, 7, 2, 4, 0, 5};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> x = {8, 9, 11, 12, 14, 23, 24, 31, 34, 40, 50, 57, 69, 77, 80, 92, 100};
    vector<int> y = {44, 12, 59, 44, 90, 39, 26, 25, 81, 44, 43, 70, 48, 79, 54, 2, 77};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 7, 8, 13, 14, 11, 12, 4, 10, 2, 1, 9, 16, 5, 6, 0, 3};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x = {14, 16, 31, 39, 42, 64, 70, 90, 97};
    vector<int> y = {28, 41, 28, 91, 60, 41, 48, 11, 86};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 2, 6, 7, 4, 8, 1, 5, 0};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> x = {12, 23, 44, 52, 78};
    vector<int> y = {93, 69, 52, 31, 91};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4, 1, 2, 0};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> x = {5, 14, 23, 25, 28, 46, 57, 58, 59, 61, 76, 82, 86, 90, 93, 93};
    vector<int> y = {78, 60, 99, 53, 77, 0, 52, 37, 35, 65, 34, 29, 95, 66, 33, 48};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 3, 9, 12, 4, 11, 13, 1, 2, 6, 8, 0, 7, 14, 10, 15};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> x = {10, 11, 16, 16, 19, 21, 29, 32, 37, 46, 50, 58, 63, 71, 83, 92, 92};
    vector<int> y = {89, 45, 13, 69, 52, 41, 40, 24, 87, 61, 56, 35, 13, 27, 81, 15, 90};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 8, 2, 15, 13, 12, 7, 11, 3, 10, 9, 0, 1, 16, 6, 4, 5};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> x = {9, 25, 30, 37, 41, 47, 51, 54, 66, 67, 87, 89, 89, 93, 96, 100, 100};
    vector<int> y = {3, 85, 17, 92, 16, 98, 21, 0, 29, 76, 76, 53, 80, 27, 17, 23, 78};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 9, 8, 11, 6, 0, 14, 12, 3, 13, 7, 5, 4, 10, 16, 15};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x = {5, 31, 45, 49, 52, 52, 84, 91, 99};
    vector<int> y = {40, 42, 98, 21, 49, 73, 98, 6, 21};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 0, 5, 4, 2, 6, 1, 8, 7};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> x = {10, 14, 28, 33, 37, 38, 41, 41, 46, 49, 51, 63, 66, 67, 77, 78};
    vector<int> y = {94, 18, 38, 98, 29, 18, 13, 59, 5, 6, 16, 7, 35, 58, 79, 90};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 7, 13, 2, 1, 14, 11, 0, 15, 3, 4, 10, 5, 6, 8, 9};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> x = {0, 0, 5, 14, 14, 19, 24, 30, 30, 35, 48, 53, 61, 67, 83, 86, 90};
    vector<int> y = {75, 91, 15, 56, 71, 72, 39, 65, 91, 47, 6, 68, 51, 73, 25, 35, 98};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 14, 10, 15, 12, 2, 8, 6, 16, 9, 11, 3, 7, 1, 5, 4, 0};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> x = {14, 32, 39, 43, 44, 47, 48, 56, 62, 62, 71, 77, 90, 92, 96, 97};
    vector<int> y = {83, 80, 94, 67, 65, 16, 43, 41, 49, 97, 44, 38, 38, 100, 11, 84};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 0, 6, 15, 14, 9, 12, 4, 8, 11, 1, 3, 2, 10, 7, 13};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> x = {2, 16, 28, 30, 30, 33, 37, 37, 43, 52, 56, 57, 60, 70, 72, 94, 96};
    vector<int> y = {40, 71, 14, 25, 81, 79, 14, 52, 3, 78, 91, 63, 48, 38, 0, 24, 53};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 16, 1, 13, 7, 15, 2, 0, 11, 3, 4, 14, 12, 9, 6, 8, 5};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> x = {11, 19, 24, 58, 67, 67, 73, 73, 84};
    vector<int> y = {20, 62, 93, 6, 47, 93, 89, 92, 39};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 4, 8, 3, 2, 6, 5, 7};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> x = {0, 15, 20, 30, 34, 54, 61, 74, 76, 76, 78, 79, 81, 86, 89, 90};
    vector<int> y = {65, 31, 12, 35, 66, 52, 89, 59, 18, 68, 4, 8, 17, 15, 98, 71};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 2, 6, 0, 3, 5, 8, 7, 1, 15, 13, 14, 9, 10, 12, 11};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> x = {3, 7, 11, 16, 24, 47, 54, 60, 65, 79, 80, 94, 100};
    vector<int> y = {25, 99, 78, 86, 77, 76, 88, 19, 76, 50, 35, 32, 66};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 0, 8, 5, 4, 9, 11, 12, 6, 2, 10, 3, 1};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> x = {2, 4, 12, 12, 15, 24, 36, 43, 45, 50, 53, 57, 66, 77, 93, 94};
    vector<int> y = {32, 25, 24, 66, 70, 86, 43, 52, 56, 38, 87, 26, 34, 33, 95, 65};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 11, 10, 2, 15, 5, 8, 6, 14, 3, 4, 12, 9, 0, 1, 7};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> x = {0, 2, 9, 11, 12, 25, 26, 45, 57, 59, 67, 69, 78, 83, 85, 88, 99, 99};
    vector<int> y = {46, 86, 77, 73, 12, 79, 77, 55, 4, 1, 1, 65, 34, 70, 93, 49, 11, 45};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 4, 12, 11, 14, 8, 5, 0, 13, 6, 16, 3, 15, 10, 1, 17, 2, 9};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> x = {4, 18, 18, 30, 34, 37, 38, 50, 56, 69, 71, 75, 80, 82, 82, 85, 86, 88, 99};
    vector<int> y = {46, 2, 44, 80, 100, 97, 95, 50, 2, 83, 32, 16, 0, 46, 56, 11, 95, 12, 25};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 7, 2, 9, 1, 14, 8, 10, 0, 16, 13, 6, 11, 18, 17, 4, 12, 15, 5};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> x = {3, 5, 31, 33, 35, 48, 49};
    vector<int> y = {56, 89, 28, 70, 17, 86, 96};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 5, 2, 3, 6, 0, 1};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> x = {1, 6, 14, 21, 23, 26, 31, 34, 39, 48, 50, 56, 60, 72, 76, 79, 82, 94, 97, 100};
    vector<int> y = {31, 93, 71, 70, 16, 95, 40, 77, 67, 92, 13, 60, 98, 98, 67, 69, 90, 90, 16, 27};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 6, 4, 11, 18, 19, 14, 15, 2, 0, 9, 8, 17, 5, 3, 1, 16, 7, 12, 13};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> x = {3, 11, 18, 21, 29, 34, 44, 53, 61, 65, 77, 83, 88};
    vector<int> y = {59, 87, 74, 24, 0, 44, 44, 49, 77, 51, 19, 81, 48};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 8, 3, 11, 12, 2, 1, 4, 5, 9, 0, 6, 7};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> x = {7, 9, 31, 61, 82};
    vector<int> y = {22, 81, 4, 15, 90};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4, 1, 0, 2};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> x = {1, 2, 9, 12, 13, 16, 32, 41, 42, 43, 52, 73, 78};
    vector<int> y = {99, 20, 78, 69, 31, 10, 0, 5, 46, 2, 61, 96, 76};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 10, 8, 9, 11, 3, 4, 2, 7, 5, 0, 1, 6};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> x = {5, 7, 11, 15, 15, 34, 39, 40, 42, 46, 46, 48, 50, 53, 63, 70, 85, 86, 90, 95};
    vector<int> y = {14, 56, 19, 83, 87, 84, 24, 73, 57, 40, 55, 66, 8, 38, 81, 45, 2, 80, 56, 63};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 16, 14, 1, 17, 12, 2, 6, 18, 5, 3, 4, 13, 8, 7, 9, 0, 11, 19, 10};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> x = {7, 11, 17, 17, 18, 22, 23, 27, 30, 36, 53, 54, 57, 58, 64, 83, 89, 95};
    vector<int> y = {26, 43, 60, 96, 60, 45, 61, 54, 8, 28, 10, 24, 38, 54, 78, 55, 36, 78};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 16, 3, 17, 10, 15, 13, 0, 8, 9, 12, 6, 2, 11, 7, 1, 5, 4};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> x = {11, 12, 21, 28, 28, 29, 33, 47, 48, 57, 70, 81, 86, 90, 97};
    vector<int> y = {31, 41, 49, 29, 88, 99, 71, 2, 21, 16, 78, 96, 66, 8, 60};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 6, 13, 12, 4, 9, 2, 8, 3, 0, 11, 14, 7, 5, 1};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> x = {13, 22, 28, 28, 32, 33, 35, 37, 54, 58, 61, 73, 74, 77, 82, 86, 91, 96, 99};
    vector<int> y = {41, 99, 45, 91, 26, 81, 30, 86, 76, 60, 65, 97, 23, 27, 36, 25, 82, 88, 8};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 0, 12, 14, 16, 2, 9, 5, 6, 8, 11, 10, 1, 3, 15, 7, 18, 17, 13};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> x = {6, 7, 13, 13, 17, 27, 32, 34, 36, 52, 53, 54, 63, 70, 74, 75, 80, 83, 86, 89};
    vector<int> y = {5, 17, 17, 33, 75, 70, 53, 61, 76, 25, 99, 98, 68, 7, 69, 26, 26, 65, 42, 19};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 4, 17, 3, 12, 6, 18, 14, 8, 2, 19, 13, 11, 15, 7, 0, 5, 10, 1, 16};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> x = {3, 7, 8, 17, 17, 23, 34, 36, 40, 41, 45, 51, 63, 70, 70, 71, 83, 90, 94, 98};
    vector<int> y = {24, 53, 74, 83, 93, 31, 76, 74, 72, 57, 55, 95, 76, 59, 64, 94, 98, 7, 30, 19};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 17, 18, 13, 10, 0, 1, 14, 16, 12, 4, 11, 2, 9, 15, 6, 3, 8, 19, 7};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> x = {4, 10, 26, 28, 31, 32, 36, 37, 46, 51, 53, 64, 66, 67, 68, 68, 72, 77, 91, 97};
    vector<int> y = {55, 10, 1, 1, 52, 27, 28, 74, 80, 19, 30, 86, 13, 34, 1, 43, 45, 12, 45, 79};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 0, 11, 4, 19, 17, 18, 8, 1, 5, 16, 9, 15, 10, 13, 6, 12, 3, 14, 2};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> x = {0, 0, 1, 19, 29, 32, 43, 52, 55, 56, 70, 73, 74, 79, 92, 93, 94, 95, 99, 100};
    vector<int> y = {12, 81, 38, 50, 61, 85, 63, 65, 49, 8, 65, 44, 63, 71, 37, 19, 54, 6, 47, 5};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 13, 5, 3, 0, 8, 1, 11, 4, 15, 7, 2, 16, 14, 6, 10, 17, 12, 18, 19};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> x = {4, 11, 12, 16, 20, 25, 29, 37, 43, 49, 54, 56, 64, 65, 65, 68, 82, 86, 94, 96};
    vector<int> y = {89, 4, 74, 59, 20, 32, 39, 13, 78, 7, 71, 56, 22, 19, 52, 97, 80, 7, 44, 44};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16, 8, 3, 17, 14, 18, 6, 12, 2, 4, 7, 11, 15, 0, 10, 5, 1, 13, 9, 19};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> x = {32, 89, 17, 70, 74, 54, 63, 27, 34, 83, 36, 13, 13, 6, 75, 80, 7, 86, 53, 52};
    vector<int> y = {53, 19, 75, 7, 69, 98, 68, 70, 61, 65, 76, 17, 33, 5, 26, 26, 17, 42, 99, 25};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19, 2, 9, 12, 6, 0, 17, 4, 10, 11, 1, 3, 5, 14, 8, 13, 7, 18, 16, 15};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> x = {36, 68, 4, 77, 91, 37, 72, 67, 53, 66, 10, 64, 51, 26, 28, 46, 31, 68, 97, 32};
    vector<int> y = {28, 43, 55, 12, 45, 74, 45, 34, 30, 13, 10, 86, 19, 1, 1, 80, 52, 1, 79, 27};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 2, 11, 16, 18, 3, 4, 15, 10, 19, 6, 12, 1, 8, 7, 0, 9, 14, 17, 13};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> x = {49, 65, 20, 23, 28, 64, 94, 54, 12, 82, 86, 96, 43, 16, 11, 56, 65, 29, 4, 25};
    vector<int> y = {7, 52, 20, 77, 25, 22, 44, 71, 74, 80, 7, 44, 78, 59, 4, 56, 19, 39, 89, 32};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 12, 13, 10, 1, 6, 5, 0, 17, 3, 2, 7, 15, 14, 18, 16, 4, 19, 8, 11};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> x = {94, 1, 63, 91, 70, 78, 43, 86, 5, 68, 34, 12, 87, 88, 85, 56, 56, 62, 79, 25};
    vector<int> y = {30, 2, 94, 50, 10, 80, 73, 70, 44, 64, 4, 59, 61, 83, 29, 48, 75, 6, 63, 71};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19, 15, 10, 8, 11, 6, 4, 14, 2, 13, 17, 1, 0, 3, 16, 9, 5, 7, 18, 12};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> x = {43, 54, 59, 39, 48, 22, 25, 44, 81, 12, 36, 33, 26, 90, 44, 2, 70, 77, 44, 79};
    vector<int> y = {80, 14, 24, 77, 12, 40, 11, 31, 2, 69, 46, 67, 34, 92, 50, 8, 23, 57, 100, 9};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 9, 13, 16, 5, 0, 6, 19, 14, 18, 11, 15, 7, 3, 4, 12, 2, 1, 10, 8};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> x = {22, 77, 77, 68, 51, 20, 68, 81, 84, 24, 38, 59, 17, 11, 72, 51, 87};
    vector<int> y = {75, 82, 42, 12, 24, 96, 75, 27, 45, 0, 56, 29, 9, 98, 46, 59, 65};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 12, 10, 1, 7, 4, 6, 3, 15, 16, 5, 8, 11, 14, 13, 9, 2};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> x = {24, 37, 6, 83, 16, 87, 43, 79, 62, 61, 85, 17, 93, 4, 87, 90, 40, 72, 93};
    vector<int> y = {70, 24, 14, 5, 15, 27, 35, 28, 89, 1, 38, 40, 92, 64, 39, 94, 10, 68, 11};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 17, 8, 6, 11, 13, 7, 14, 16, 4, 9, 12, 1, 2, 3, 15, 10, 18, 5};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> x = {12, 24, 68, 92, 41, 67, 38, 100, 44, 85, 57, 55, 67, 60, 30, 13, 98};
    vector<int> y = {7, 9, 5, 27, 17, 29, 39, 64, 35, 66, 30, 54, 49, 79, 58, 70, 38};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 13, 9, 14, 3, 0, 2, 4, 6, 12, 11, 1, 5, 7, 16, 10, 8};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> x = {18, 43, 41, 78, 67, 95, 22, 44, 36, 49, 7, 68, 72, 87, 44, 83, 52, 63, 100, 28};
    vector<int> y = {66, 71, 21, 85, 79, 73, 38, 97, 81, 92, 19, 53, 46, 50, 1, 44, 22, 9, 37, 44};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 17, 10, 3, 8, 6, 1, 11, 19, 18, 2, 16, 4, 5, 12, 13, 15, 14, 9, 7};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> x = {9, 13, 52, 19, 78, 92, 46, 91, 33, 98, 42, 99, 62, 34};
    vector<int> y = {91, 61, 97, 48, 15, 77, 27, 59, 69, 9, 21, 21, 7, 84};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 3, 7, 5, 8, 6, 4, 2, 13, 0, 1, 12, 11, 9};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> x = {46, 24, 25, 47, 35, 22, 60, 62, 52, 80, 60, 58, 5, 90, 38, 40, 54};
    vector<int> y = {98, 2, 95, 73, 42, 12, 53, 73, 79, 13, 63, 91, 25, 47, 45, 48, 100};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 13, 2, 4, 12, 7, 5, 11, 6, 3, 15, 1, 10, 0, 14, 8, 16};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> x = {84, 22, 87, 27, 63, 46, 25, 91, 95, 93, 100, 48, 30, 82, 80};
    vector<int> y = {69, 73, 80, 10, 26, 5, 64, 90, 34, 42, 32, 16, 48, 58, 97};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 12, 4, 3, 6, 13, 14, 0, 11, 8, 9, 2, 5, 10, 7};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> x = {86, 98, 48, 73, 90, 33, 20, 52, 42, 97, 68, 93, 77, 19, 61, 39, 22, 91};
    vector<int> y = {27, 8, 46, 32, 67, 32, 43, 75, 77, 55, 5, 64, 23, 88, 77, 31, 45, 98};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 5, 6, 14, 8, 2, 15, 10, 3, 16, 4, 17, 0, 9, 7, 1, 12, 11};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> x = {43, 13, 79, 56, 23, 69, 21, 10, 39, 5, 81, 73, 29, 39, 70, 100, 59, 77, 46, 58};
    vector<int> y = {68, 69, 85, 90, 33, 77, 97, 2, 23, 78, 89, 84, 31, 78, 99, 21, 70, 57, 84, 50};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 15, 17, 19, 4, 1, 7, 0, 6, 10, 12, 9, 13, 2, 16, 3, 18, 5, 14, 11};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> x = {97, 30, 74, 75, 0, 70, 78, 89, 14, 95, 90, 48, 55, 35};
    vector<int> y = {79, 76, 33, 90, 92, 73, 0, 45, 93, 6, 34, 52, 8, 74};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 11, 1, 5, 2, 3, 13, 7, 0, 8, 10, 9, 4, 6};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> x = {60, 70, 30, 32, 12, 41, 39, 81, 34, 8, 67, 21, 71, 62, 45};
    vector<int> y = {91, 45, 59, 94, 45, 68, 82, 75, 49, 76, 57, 59, 63, 9, 14};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 14, 13, 7, 4, 9, 8, 0, 3, 5, 12, 6, 11, 10, 2};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> x = {53, 88, 27, 36, 27, 92, 44, 51, 77, 19, 48, 94, 18};
    vector<int> y = {50, 53, 28, 88, 5, 81, 46, 14, 81, 100, 59, 87, 9};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 1, 2, 3, 8, 9, 10, 6, 0, 12, 11, 5, 4};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> x = {51, 86, 45, 65, 15, 29, 87, 67, 5, 11, 98, 14, 64, 99, 23, 24};
    vector<int> y = {29, 7, 42, 24, 41, 39, 15, 96, 16, 86, 50, 3, 28, 20, 60, 99};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 10, 14, 2, 9, 0, 4, 3, 11, 15, 12, 5, 8, 1, 6, 13};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> x = {75, 28, 11, 82, 78, 70, 55, 51, 48, 2, 63, 15};
    vector<int> y = {29, 1, 20, 72, 39, 50, 18, 88, 83, 24, 11, 15};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 3, 5, 6, 0, 9, 2, 7, 10, 4, 11, 1};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> x = {34, 89, 61, 38, 26, 21, 53, 19, 71, 50, 14, 17, 90, 4, 71, 19, 21, 59, 1, 45};
    vector<int> y = {53, 62, 80, 57, 71, 78, 84, 50, 39, 80, 92, 51, 72, 99, 94, 85, 75, 84, 81, 51};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 7, 19, 1, 11, 12, 14, 2, 9, 0, 6, 4, 15, 18, 10, 3, 16, 17, 5, 13};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> x = {5, 27, 51, 53, 99, 5, 65, 42, 30, 54, 29, 60, 60, 49, 15, 22};
    vector<int> y = {20, 55, 32, 49, 6, 38, 22, 90, 34, 0, 1, 80, 32, 98, 7, 25};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 1, 7, 3, 6, 12, 4, 5, 8, 9, 2, 15, 14, 10, 0, 13};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> x = {87, 59, 76, 79, 50, 47, 90, 97, 15, 16, 67, 80, 37, 17, 15, 90, 29, 85};
    vector<int> y = {14, 98, 39, 8, 92, 65, 80, 79, 2, 87, 60, 55, 60, 34, 34, 87, 7, 10};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 2, 12, 16, 14, 3, 13, 10, 11, 4, 5, 0, 15, 8, 1, 6, 7, 17};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> x = {40, 36, 41, 34, 75, 71, 8, 98, 5, 7, 72, 17, 87, 48, 87};
    vector<int> y = {12, 58, 36, 45, 96, 99, 3, 94, 8, 37, 44, 5, 45, 18, 58};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 12, 13, 10, 9, 14, 5, 4, 2, 0, 3, 7, 11, 8, 6};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> x = {66, 98, 6, 90, 56, 90, 47, 34, 42, 22, 85, 41, 74, 56, 2, 62, 24, 27, 32, 25};
    vector<int> y = {94, 83, 54, 22, 35, 93, 57, 52, 73, 50, 3, 85, 65, 91, 17, 2, 41, 47, 49, 73};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 4, 19, 3, 14, 15, 16, 2, 11, 6, 5, 10, 1, 13, 0, 8, 9, 7, 18, 17};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> x = {74, 70, 10, 70, 53, 45, 100, 65, 12, 26, 26, 64};
    vector<int> y = {95, 89, 73, 10, 98, 48, 73, 33, 78, 11, 90, 54};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 3, 5, 7, 11, 2, 6, 10, 1, 8, 4, 0};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> x = {75, 22, 98, 44, 34, 74, 52, 96, 12, 78, 44, 64, 9, 86, 11, 14, 97};
    vector<int> y = {62, 72, 74, 24, 43, 70, 37, 94, 57, 44, 9, 38, 49, 49, 36, 4, 0};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 5, 10, 4, 16, 11, 15, 14, 13, 3, 9, 7, 6, 0, 8, 2, 12};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> x = {81, 41, 17, 56, 71, 49, 58, 86, 95, 51};
    vector<int> y = {26, 94, 32, 25, 27, 28, 34, 63, 19, 18};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 7, 6, 9, 8, 0, 5, 4, 3};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> x = {77, 69, 69, 60, 10, 37, 89, 6, 96, 28, 98, 86, 9, 92, 17, 82, 26, 14, 70};
    vector<int> y = {57, 4, 8, 26, 88, 15, 97, 2, 25, 92, 69, 76, 63, 14, 4, 5, 52, 28, 86};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16, 0, 18, 3, 9, 5, 17, 12, 4, 8, 11, 13, 6, 10, 14, 2, 15, 7, 1};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> x = {0, 40, 32, 83, 93, 9, 96, 76, 81, 6, 92, 97, 59, 70, 2, 57, 100, 37, 45, 55};
    vector<int> y = {27, 5, 84, 36, 83, 77, 86, 97, 91, 37, 71, 11, 1, 33, 28, 33, 4, 88, 29, 27};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 2, 18, 9, 17, 3, 10, 1, 15, 13, 8, 11, 12, 14, 7, 19, 0, 6, 4, 16};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> x = {39, 68, 51, 45, 73, 97, 59, 97, 88, 53, 100, 81, 80, 85, 17};
    vector<int> y = {92, 95, 55, 26, 75, 8, 79, 62, 95, 44, 63, 82, 44, 7, 41};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 3, 0, 12, 2, 13, 9, 6, 4, 7, 8, 11, 1, 5, 10};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> x = {77, 64, 72, 44, 99, 74, 100, 99, 70, 9, 62, 45, 50, 80, 67, 57, 30, 97, 16, 47};
    vector<int> y = {3, 39, 69, 91, 78, 83, 0, 15, 51, 94, 46, 95, 98, 23, 30, 43, 34, 83, 12, 85};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16, 18, 9, 19, 8, 13, 5, 14, 2, 0, 15, 17, 4, 7, 3, 10, 12, 1, 11, 6};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> x = {50, 62, 80, 12, 26, 43, 95, 5, 24, 95, 42, 60, 64, 38, 89};
    vector<int> y = {92, 98, 1, 50, 65, 88, 35, 6, 14, 76, 3, 91, 42, 24, 10};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 4, 9, 3, 5, 13, 6, 11, 8, 14, 10, 7, 2, 1, 0};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> x = {55, 31, 52, 60, 33, 97, 60, 27, 87};
    vector<int> y = {14, 23, 76, 58, 54, 73, 45, 81, 54};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 7, 4, 2, 8, 5, 6, 3};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> x = {3, 68, 61, 72, 35, 13};
    vector<int> y = {99, 83, 55, 87, 2, 69};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 5, 3, 1, 0};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> x = {90, 54, 98, 82, 38, 5, 51, 4, 4, 14, 36, 5, 97, 9, 41, 83, 83, 72};
    vector<int> y = {41, 72, 27, 74, 26, 65, 78, 14, 16, 94, 38, 74, 78, 37, 3, 85, 98, 22};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 6, 10, 1, 0, 9, 4, 13, 3, 14, 5, 2, 11, 7, 16, 15, 12, 8};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> x = {90, 13, 70, 79, 47, 17, 72, 17, 74, 41, 94, 66, 46, 1, 18, 100, 26, 86, 0};
    vector<int> y = {12, 76, 44, 67, 4, 7, 43, 78, 52, 57, 73, 29, 52, 49, 17, 73, 93, 98, 86};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 9, 0, 16, 3, 11, 4, 12, 17, 13, 8, 5, 1, 7, 6, 10, 18, 2, 15};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> x = {77, 76, 87, 43, 99, 100, 50, 38, 26, 43, 82};
    vector<int> y = {12, 10, 99, 74, 22, 76, 46, 20, 46, 24, 30};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 8, 7, 6, 10, 5, 2, 9, 1, 4, 0};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> x = {67, 84, 10, 55, 66, 74, 4, 39, 99, 70, 53, 41, 64, 56, 13, 85, 43};
    vector<int> y = {92, 3, 15, 71, 77, 9, 37, 83, 78, 10, 100, 43, 34, 74, 15, 100, 59};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 12, 6, 11, 14, 8, 16, 9, 4, 1, 0, 3, 5, 2, 15, 10, 13};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> x = {34, 24, 77, 47, 89, 90, 59, 5, 93, 69, 13, 22, 19, 96, 43, 80};
    vector<int> y = {15, 25, 33, 63, 12, 49, 2, 31, 37, 1, 82, 97, 53, 59, 45, 51};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 13, 12, 0, 10, 14, 15, 2, 11, 1, 7, 4, 6, 8, 9, 5};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> x = {18, 83, 3, 88, 48, 28, 87, 94, 65, 72, 91, 74, 62, 61, 89};
    vector<int> y = {57, 52, 19, 34, 56, 37, 63, 84, 1, 78, 89, 22, 95, 94, 46};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 5, 4, 11, 2, 13, 8, 9, 3, 1, 6, 10, 14, 7, 12};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> x = {37, 61, 31, 6, 80, 94, 100, 46, 8};
    vector<int> y = {96, 37, 20, 98, 72, 66, 33, 51, 63};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 4, 8, 7, 0, 6, 5, 3};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> x = {81, 6, 89, 54, 53, 8, 73, 35, 22, 73, 97, 36, 34, 49, 34, 17, 89, 78, 5, 78};
    vector<int> y = {58, 8, 63, 64, 32, 77, 54, 54, 42, 22, 30, 71, 7, 87, 52, 68, 71, 98, 12, 78};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 8, 4, 12, 13, 5, 10, 3, 15, 6, 11, 19, 17, 18, 16, 2, 0, 14, 1, 7};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> x = {21, 2, 55, 47, 99, 54, 64, 81, 98, 70, 11, 45, 16, 8, 54, 10, 100, 5, 36};
    vector<int> y = {56, 83, 23, 25, 43, 58, 12, 99, 84, 27, 71, 27, 90, 85, 93, 17, 44, 6, 7};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 0, 14, 9, 6, 15, 8, 4, 12, 11, 18, 10, 7, 2, 17, 16, 13, 3, 1};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> x = {53, 26, 92, 44, 65, 19, 79, 100, 3, 74, 11, 68, 92, 2, 68, 14, 57, 13, 69, 2};
    vector<int> y = {79, 73, 92, 93, 31, 55, 65, 46, 94, 0, 91, 91, 46, 52, 23, 17, 46, 83, 81, 43};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 16, 14, 5, 6, 9, 12, 1, 0, 4, 2, 3, 17, 11, 18, 19, 10, 13, 7, 8};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> x = {69, 82, 35, 60, 86, 73, 19, 92, 72, 55, 71, 39, 73, 73, 50, 31, 59, 31};
    vector<int> y = {41, 62, 22, 78, 56, 11, 92, 75, 88, 68, 59, 19, 60, 33, 10, 44, 38, 63};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 15, 6, 17, 5, 8, 13, 3, 7, 4, 16, 14, 9, 11, 0, 10, 1, 12};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> x = {34, 97, 21, 62, 52, 10, 70, 84, 47, 38, 65, 16, 35, 97, 68, 27, 60, 20, 41};
    vector<int> y = {10, 91, 59, 12, 43, 35, 77, 5, 75, 69, 26, 61, 50, 26, 72, 28, 34, 96, 37};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 0, 13, 14, 5, 6, 8, 11, 1, 3, 7, 15, 16, 9, 10, 4, 12, 18, 2};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> x = {20, 40, 49, 35, 43, 74, 90, 92, 90, 95, 5, 1, 81, 100, 47};
    vector<int> y = {21, 33, 21, 94, 29, 20, 84, 31, 46, 86, 59, 100, 98, 88, 100};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 10, 1, 5, 3, 8, 2, 6, 14, 7, 12, 11, 4, 9, 13};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> x = {67, 2, 32, 62, 74, 25, 68, 45, 21, 37, 27, 90, 59, 67, 73, 14, 20, 38, 42, 92};
    vector<int> y = {56, 37, 21, 68, 50, 18, 56, 35, 41, 21, 59, 12, 18, 80, 97, 68, 82, 18, 10, 45};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16, 13, 11, 12, 19, 5, 14, 10, 7, 3, 15, 4, 8, 1, 18, 0, 6, 2, 17, 9};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> x = {83, 17, 2, 85, 20, 66, 64, 2, 15, 74, 68, 77, 11, 7, 37, 84};
    vector<int> y = {31, 54, 31, 52, 51, 16, 95, 0, 27, 80, 2, 46, 2, 57, 9, 96};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 4, 13, 9, 11, 0, 14, 5, 3, 1, 8, 15, 10, 12, 2, 7};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> x = {45, 8, 44, 74, 78, 57, 75, 36, 81, 65, 97, 77, 49, 31, 66, 17, 22};
    vector<int> y = {27, 30, 8, 46, 23, 14, 54, 54, 11, 19, 42, 58, 39, 91, 61, 41, 65};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 14, 11, 16, 1, 15, 2, 7, 8, 10, 0, 12, 4, 3, 5, 9, 6};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> x = {37, 41, 30, 40, 58, 34, 55, 44, 29, 93, 27, 17, 22};
    vector<int> y = {83, 88, 23, 7, 58, 59, 50, 97, 39, 29, 49, 3, 77};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 4, 12, 3, 6, 7, 2, 10, 8, 11, 5, 1, 0};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> x = {85, 51, 49, 80, 18, 18, 46, 32, 28, 53, 22, 74, 5, 37, 59, 62, 86, 77, 51, 75};
    vector<int> y = {70, 24, 21, 84, 100, 48, 55, 26, 6, 36, 9, 3, 76, 38, 72, 4, 35, 22, 56, 98};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 14, 16, 0, 12, 4, 10, 17, 3, 6, 19, 9, 7, 11, 18, 13, 15, 2, 8, 1};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> x = {7, 5, 22, 88, 96, 64, 95, 75, 69, 27, 18, 92, 33, 52, 76, 69, 2, 98, 27, 84};
    vector<int> y = {6, 14, 15, 1, 35, 59, 74, 97, 55, 13, 100, 26, 94, 62, 47, 98, 26, 74, 28, 47};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18, 13, 12, 9, 10, 3, 16, 11, 14, 6, 7, 15, 19, 5, 8, 2, 4, 0, 17, 1};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> x = {72, 99, 80, 61, 63, 79, 59, 20, 83, 49, 7, 17, 84, 10, 7, 16, 9, 9, 100};
    vector<int> y = {51, 52, 58, 72, 98, 7, 83, 92, 16, 95, 92, 93, 9, 48, 99, 8, 88, 74, 9};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 13, 0, 3, 8, 2, 5, 17, 4, 1, 7, 6, 9, 18, 16, 12, 11, 10, 14};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> x = {40, 12, 58, 40, 7, 46, 65, 41, 65};
    vector<int> y = {64, 39, 55, 19, 95, 18, 76, 54, 31};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 8, 1, 0, 3, 4, 2, 5, 7};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> x = {71, 19, 10, 58, 72, 94, 11, 85};
    vector<int> y = {25, 99, 28, 30, 48, 2, 79, 59};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 2, 3, 6, 4, 1, 0, 5};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> x = {64, 43, 12, 48, 76, 18, 83, 12, 9, 81, 53, 95, 85, 72, 95};
    vector<int> y = {16, 92, 18, 93, 88, 40, 79, 85, 77, 61, 20, 8, 40, 62, 62};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 10, 2, 13, 12, 0, 1, 8, 4, 7, 11, 6, 3, 14, 9};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> x = {30, 80, 45, 62, 73, 88, 94, 25, 4, 58, 90, 99, 1, 14, 58, 59, 12, 59, 21, 69};
    vector<int> y = {74, 12, 59, 97, 38, 53, 89, 32, 97, 76, 14, 5, 11, 58, 97, 94, 13, 51, 83, 14};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 19, 5, 13, 16, 6, 9, 18, 17, 4, 2, 0, 10, 1, 8, 3, 15, 12, 14, 11};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> x = {95, 85, 75, 65, 55, 45, 35, 25, 15, 5, 97, 83, 77, 64, 53, 47, 35, 25, 19, 7};
    vector<int> y = {97, 84, 73, 65, 56, 44, 36, 24, 14, 6, 7, 3, 18, 23, 36, 45, 56, 67, 77, 90};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 18, 7, 12, 13, 17, 3, 1, 8, 19, 16, 6, 4, 14, 10, 11, 9, 0, 15, 5};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> x = {50, 50, 50};
    vector<int> y = {0, 98, 99};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 2};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> x = {95, 85, 75, 65, 55, 45, 35, 25, 15, 5, 97, 83, 77, 63, 57, 48, 33, 27, 19, 3};
    vector<int> y = {95, 85, 76, 64, 57, 44, 37, 23, 18, 2, 3, 9, 23, 36, 47, 58, 67, 79, 84, 98};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 2, 7, 16, 18, 8, 13, 6, 17, 3, 1, 11, 15, 5, 9, 14, 19, 0, 10, 4};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> x = {8, 0, 24, 55, 33, 96, 83, 23, 17, 73, 22, 36, 55, 30, 22, 96, 83, 22, 76, 10};
    vector<int> y = {1, 56, 21, 99, 22, 1, 1, 45, 24, 67, 38, 12, 83, 85, 29, 97, 10, 45, 38, 24};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18, 13, 9, 12, 16, 11, 7, 1, 15, 4, 19, 3, 0, 17, 10, 6, 2, 5, 14, 8};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> x = {95, 85, 75, 65, 55, 46, 34, 27, 13, 4, 98, 89, 72, 64, 57, 43, 37, 23, 12, 9};
    vector<int> y = {97, 84, 75, 64, 56, 46, 37, 24, 16, 7, 4, 9, 17, 31, 45, 57, 62, 74, 83, 98};
    Watchtower* pObj = new Watchtower();
    clock_t start = clock();
    vector<int> result = pObj->orderByArea(x, y);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 2, 12, 7, 13, 8, 3, 1, 6, 11, 16, 18, 19, 14, 5, 9, 4, 0, 15, 10};
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=286907&rd=4685&pm=2014
********************************************************************************
//program framework generated with WishingBone's parser :)-
 
//common header
#ifdef WIN32
#  pragma warning(disable:4786)
#  define for if (0); else for
#endif
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <deque>
#include <set>
#include <map>
#include <algorithm>
#include <utility>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
using namespace std;
 
//64 bit integer definition
#ifdef WIN32
#define in_routine(type,spec) \
istream& operator>>(istream& s,type &d){char b[30];s>>b;sscanf(b,spec,&d);return s;}
#define out_routine(type,spec) \
ostream& operator<<(ostream& s,type d){char b[30];sprintf(b,spec,d);s<<b;return s;}
typedef signed __int64 i64; in_routine(i64,"%I64d") out_routine(i64,"%I64d")
typedef unsigned __int64 u64; in_routine(u64,"%I64u") out_routine(u64,"%I64u")
#else
typedef signed long long i64;
typedef unsigned long long u64;
#endif
 
//common routines
#ifdef WIN32
#define min(a,b) _cpp_min(a,b)
#define max(a,b) _cpp_max(a,b)
#endif
#define abs(a) ((a)>0?(a):-(a))
#define s2d(s,d) {istringstream(s)>>d;}
#define d2s(d,s) {ostringstream t;t<<d;s=t.str();}
int gcd(int a,int b){for(int c;b;c=a,a=b,b=c%b);return a;}
int lcm(int a,int b){return a/gcd(a,b)*b;}
 
//remove routine
template <class T>
void remove(vector<T>& v,const T&e){
  v.resize(remove(v.begin(),v.end(),e)-v.begin());
}
template <class T>
vector<T> remove_copy(vector<T>& v,const T&e){
  vector<T> result;
  remove_copy(v.begin(),v.end(),back_inserter(result),e);
  return result;
}
 
//output routine
ostream& operator<<(ostream& s,string d){
  s<<'\"'<<d.c_str()<<'\"';
  return s;
}
template <class T>
ostream& operator<<(ostream& s,vector<T> d){
  s<<"{";
  for (typename vector<T>::iterator i=d.begin();i!=d.end();i++)
    s<<(i!=d.begin()?",":"")<<*i;
  s<<"}";
  return s;
}
 
//parsing routine
template <class T>
vector<basic_string<T> > parse(const basic_string<T> &s,const basic_string<T> &delim){
  vector<basic_string<T> > ret(0);
  for (int b,e=0;;ret.push_back(s.substr(b,e-b)))
    if ((b=s.find_first_not_of(delim,e))==(e=s.find_first_of(delim,b)))
      return ret;
}
vector<int> intparse(const string &s,const string &delim=" \t\n"){
  vector<string> tmp=parse(s,delim);
  vector<int> ret(0);
  int t;
  for (vector<string>::iterator i=tmp.begin();i!=tmp.end();i++)
    sscanf(i->c_str(),"%d",&t),ret.push_back(t);
  return ret;
}
 
//name mapper
class mapper{
public:
  map<string,int> m;
  vector<string> v;
  void reset(){
    v.clear();
    m.clear();
  }
  int size(){
    return v.size();
  }
  int get(const string str){
    if (m.find(str)==m.end()){
      m[str]=v.size();
      v.push_back(str);
    }
    return m[str];
  }
  string get(int i){
    return v[i];
  }
  vector<int> get(const vector<string>& strs){
    vector<int> ret;
    ret.reserve(strs.size()+2);
    for(int i=0;i<strs.size();i++)
      ret.push_back(get(strs[i]));
    return ret;
  }
  vector<string> get(const vector<int>& is){
    vector<string> ret;
    ret.reserve(is.size()+2);
    for(int i=0;i<is.size();i++)
      ret.push_back(get(is[i]));
    return ret;
  }
};
 
#define MAXN 100
#define eps 1e-8
#define zero(x) (((x)>0?(x):-(x))<eps)
struct point{
  double x,y;
  point(){}
  point(double x,double y):x(x),y(y){}
};
 
double xmult(point p1,point p2,point p0){
  return (p1.x-p0.x)*(p2.y-p0.y)-(p2.x-p0.x)*(p1.y-p0.y);
}
 
int same_side(point p1,point p2,point l1,point l2){
  return xmult(l1,p1,l2)*xmult(l1,p2,l2)>eps;
}
 
point intersection(point u1,point u2,point v1,point v2){
  point ret=u1;
  double t=((u1.x-v1.x)*(v1.y-v2.y)-(u1.y-v1.y)*(v1.x-v2.x))
      /((u1.x-u2.x)*(v1.y-v2.y)-(u1.y-u2.y)*(v1.x-v2.x));
  ret.x+=(u2.x-u1.x)*t;
  ret.y+=(u2.y-u1.y)*t;
  return ret;
}
 
//?????l1,l2????????side???,??l1,l2,side???
void polygon_cut(int& n,point* p,point l1,point l2,point side){
  point pp[100];
  int m=0,i;
  for (i=0;i<n;i++){
    if (same_side(p[i],side,l1,l2))
      pp[m++]=p[i];
    if (!same_side(p[i],p[(i+1)%n],l1,l2)&&!(zero(xmult(p[i],l1,l2))&&zero(xmult(p[(i+1)%n],l1,l2))))
      pp[m++]=intersection(p[i],p[(i+1)%n],l1,l2);
  }
  for (n=i=0;i<m;i++)
    if (!i||!zero(pp[i].x-pp[i-1].x)||!zero(pp[i].y-pp[i-1].y))
      p[n++]=pp[i];
  if (zero(p[n-1].x-p[0].x)&&zero(p[n-1].y-p[0].y))
    n--;
  if (n<3)
    n=0;
}
 
 
double area_polygon(int n,point* p){
  double s1=0,s2=0;
  int i;
  for (i=0;i<n;i++)
    s1+=p[(i+1)%n].y*p[i].x,s2+=p[(i+1)%n].y*p[(i+2)%n].x;
  return fabs(s1-s2)/2;
}
 
class Watchtower{
public:
  int n;
  point p[100], pp[100];
  pair<double, int> a[100];
  double calc(int target) {
    int m = 4;
    pp[0] = point(0, 0);
    pp[1] = point(0, 100);
    pp[2] = point(100, 100);
    pp[3] = point(100, 0);
    for (int i = 0; i < n; ++i) if (i != target) {
      point mid;
      mid.x = (p[i].x + p[target].x) / 2;
      mid.y = (p[i].y + p[target].y) / 2;
      point to = mid;
      to.x += p[i].y - p[target].y;
      to.y += p[target].x - p[i].x;
      polygon_cut(m, pp, mid, to, p[target]);
    }
    return area_polygon(m, pp);
  }
  vector<int> orderByArea(vector<int> x,vector<int> y){
    n = x.size();
    for (int i = 0; i < n; ++i) {
      p[i].x = x[i];
      p[i].y = y[i];
    }
    for (int i = 0; i < n; ++i) {
      a[i] = make_pair(-calc(i), i);
    }
    sort(a, a + n);
    vector<int> ret;
    for (int i = 0; i < n; ++i) ret.push_back(a[i].second);
    return ret;
  }
};

********************************************************************************
*******************************************************************************/