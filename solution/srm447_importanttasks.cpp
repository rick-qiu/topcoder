/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10578
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

class ImportantTasks {
public:
    int maximalCost(vector<int> complexity, vector<int> computers);
};

int ImportantTasks::maximalCost(vector<int> complexity, vector<int> computers) {
    int ret;
    return ret;
}


int test0() {
    vector<int> complexity = {1, 2, 3};
    vector<int> computers = {2, 2, 2};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
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
    vector<int> complexity = {1, 2, 3};
    vector<int> computers = {3};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
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
    vector<int> complexity = {3, 5, 1, 7};
    vector<int> computers = {9, 4, 1, 1, 1};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> complexity = {5, 2, 7, 8, 6, 4, 2, 10, 2, 3};
    vector<int> computers = {4, 1, 3, 6, 2, 10, 11, 1, 1, 3, 4, 2};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> complexity = {45, 36, 24, 36, 24, 46, 38, 27, 49, 13, 27, 35, 18, 6, 42, 20, 19};
    vector<int> computers = {15, 36, 35, 32, 22, 36, 24, 10, 6, 43, 32, 51, 32};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> complexity = {14, 35, 11, 47, 5, 47, 2, 42, 29, 37, 12, 3, 34, 19, 45, 31, 47, 22, 38, 29, 17};
    vector<int> computers = {19, 35, 22, 14, 20, 43, 8, 14, 37, 14, 39, 20, 29, 37, 41, 46, 6, 41, 4, 43, 23};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> complexity = {3, 36, 50, 51, 53, 40, 15, 43, 13, 41, 35, 5, 19, 51, 15, 12, 22, 28, 21, 40, 43};
    vector<int> computers = {38, 12, 6};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
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
    vector<int> complexity = {86, 84, 47, 79, 2, 37, 22, 84, 53, 31, 25};
    vector<int> computers = {22, 17, 65, 32, 45, 10, 59, 19, 15, 11, 56, 50};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> complexity = {22, 25, 6, 29, 12, 57, 3, 5, 35, 22, 7, 20, 3, 23, 55, 58};
    vector<int> computers = {57, 48, 29, 59, 12, 20, 34, 55, 58, 7, 42, 7};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> complexity = {44, 41, 44, 34, 46, 76, 78, 47, 73, 12, 86, 86, 57, 82, 43, 69, 24};
    vector<int> computers = {13, 38, 94, 12, 48, 49, 52, 76, 66, 63, 44, 15, 84, 90, 40, 39, 62, 39, 19, 63, 71};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> complexity = {54, 6, 20, 58, 34, 56, 57, 42, 15, 6, 44, 45};
    vector<int> computers = {23, 48, 29, 14, 63, 52, 35, 54, 8, 43, 25, 60, 56, 24, 10, 40};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> complexity = {22, 3, 18, 10, 11, 2, 20, 63, 14, 19, 13, 57, 6, 54, 6, 52, 51, 19, 17, 34, 40, 63};
    vector<int> computers = {61, 17, 11, 50, 10, 46, 27, 32, 40, 44, 33, 16, 20, 20, 13, 42, 21, 53};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> complexity = {79, 31, 6, 46, 75, 15, 4, 66, 65, 71, 93, 36, 53};
    vector<int> computers = {78, 6, 10, 84, 29, 79, 17, 9, 34};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
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
    vector<int> complexity = {14, 18, 9, 2, 20, 6, 21, 6, 2, 15, 21, 2, 4, 6, 8, 4};
    vector<int> computers = {15, 3, 6, 15, 14, 5, 19, 8, 10, 19, 1, 12, 9, 16, 11, 6, 11, 14, 10, 21};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> complexity = {53, 10, 11, 4, 30, 10};
    vector<int> computers = {79, 52, 77, 32, 83, 24};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> complexity = {73, 24, 16, 8, 47, 72, 42, 49, 23};
    vector<int> computers = {61, 40, 68};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
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
    vector<int> complexity = {19, 18, 2, 16, 17, 1, 21, 7, 8, 11, 20, 19, 12, 11, 20, 21, 4};
    vector<int> computers = {17, 8, 10, 9, 19, 4, 22, 9, 3, 7, 6, 4, 15, 10};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> complexity = {23, 5, 27, 31, 5, 46, 35, 47, 39, 3, 41, 24, 13, 3, 40, 33, 3, 26, 15, 33};
    vector<int> computers = {1, 7, 2, 12, 44, 46, 43, 19, 12, 11, 33, 15, 34, 40, 28, 38, 28, 20, 14};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> complexity = {11, 21, 11, 31, 32, 24, 24, 25, 14, 28, 26, 3, 17, 3, 20, 14, 29, 12, 15};
    vector<int> computers = {28, 17, 27, 19, 19, 21, 3, 11, 4, 3, 5, 2, 6, 20, 21};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
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
    vector<int> complexity = {87, 73, 65, 71, 45, 31, 42, 95, 90, 73, 9, 21, 81, 85, 37, 100, 92};
    vector<int> computers = {102, 23, 29, 39, 83, 56, 41, 95, 8, 50, 6, 59, 3, 39, 37, 69, 13, 17, 38, 87, 78};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> complexity = {27, 27, 36, 18, 69, 15, 49, 41, 11, 40, 36, 49, 39, 29, 64};
    vector<int> computers = {12, 49, 56, 48, 18, 37, 45, 57, 9, 66, 21, 23, 48, 53, 30, 59, 28, 50, 44};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> complexity = {3, 76, 80, 55, 19, 17, 46, 5, 74, 12, 53, 10};
    vector<int> computers = {75, 28, 14, 38, 50, 67, 65, 45, 34, 44, 79, 52, 29, 30, 40, 12, 4, 48};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
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
    vector<int> complexity = {20, 36, 22, 39, 18, 5, 21, 11, 13, 8, 34, 9, 9, 19, 5};
    vector<int> computers = {29, 38, 29, 14};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> complexity = {1, 3, 22, 1, 43, 55, 23, 18, 41, 30, 39, 2, 40, 29, 62, 19, 32};
    vector<int> computers = {26, 42, 21, 64, 20, 1, 6, 8, 25, 46, 43, 38, 67};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> complexity = {15, 12, 21, 2, 40, 17, 38, 43, 28, 13, 42, 41, 35, 26, 27, 33, 40, 16, 20, 47, 30};
    vector<int> computers = {37, 30, 39, 50, 31, 17, 50, 20, 8, 36, 10, 33, 21, 39, 22, 8, 29, 15, 38};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> complexity = {96, 27, 87, 46};
    vector<int> computers = {15, 21, 14, 11, 100, 63, 11};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> complexity = {15, 8, 22, 27, 29, 32, 7, 25, 16, 19, 14, 33, 9, 13, 24, 1, 19, 14, 1, 23, 25};
    vector<int> computers = {8, 14, 33, 8, 18, 24, 32, 23, 6, 12, 5, 21, 3, 19, 28, 17, 1};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> complexity = {30, 11, 14, 19, 7, 18, 3, 21, 27, 22, 29, 39};
    vector<int> computers = {33, 44, 42, 32, 19, 15, 47, 26, 44, 14, 1, 33, 18, 1, 7, 9};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> complexity = {12, 2, 12, 11, 1, 6, 7, 7, 4, 9, 3, 7, 11};
    vector<int> computers = {12, 2, 11, 4, 6, 7};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> complexity = {73, 17, 33, 55, 2, 60, 21, 41, 70, 69, 4, 33, 22};
    vector<int> computers = {46, 41, 60, 58, 39, 46, 43, 11, 41, 36, 2, 29, 15, 12, 21, 17, 37};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> complexity = {87, 58, 78, 90, 75, 91, 7, 73, 86, 18, 78, 58, 87, 37, 86, 3, 63, 22, 87, 63, 17};
    vector<int> computers = {93, 6, 78, 64, 20, 59, 89, 19, 81, 29, 49, 18, 89};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> complexity = {9, 5, 8, 11, 5, 6, 11, 6, 16, 15, 15, 1};
    vector<int> computers = {3, 2, 10, 16, 8, 10, 7, 8, 9, 8, 4, 15, 16, 7, 16, 13, 12, 10, 4, 14, 2};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> complexity = {44, 46, 48, 45, 35, 45};
    vector<int> computers = {49, 1, 4, 9, 42, 26, 37, 20, 30, 43, 20};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> complexity = {10, 7, 8, 3, 6, 10, 4, 6, 7, 7, 6, 1, 3, 3, 7, 10};
    vector<int> computers = {1, 7, 3, 3, 5, 8, 8, 4, 9, 1, 8, 2, 10, 5, 4};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> complexity = {352, 133, 311, 319, 98, 553, 357, 546, 601, 338, 152, 563, 113, 664, 520, 589, 578, 511, 104, 488, 165, 283, 367, 222, 232, 532};
    vector<int> computers = {402, 646, 258, 545, 15, 250, 357, 406, 138, 574, 550, 360, 571, 111, 575, 297, 282, 349, 614, 325, 86, 450};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> complexity = {499, 308, 169, 394, 117, 275, 504, 584, 148, 407, 158, 579, 284, 308, 545, 22, 566, 626, 370};
    vector<int> computers = {84, 224, 220, 114, 508, 139, 134, 337, 290, 370, 549, 148, 603, 118, 249, 573, 413};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> complexity = {364, 643, 279, 615, 550, 367};
    vector<int> computers = {123, 728, 320, 154, 71, 315, 367, 325, 556, 130, 139, 723, 654, 151, 160, 581, 354, 696, 360};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> complexity = {38, 27, 29, 41, 21, 109, 19, 94, 127, 50, 103, 97, 52, 116, 97, 49, 88};
    vector<int> computers = {5, 54, 133, 43, 133, 48, 31, 71, 47, 84, 106, 1, 90, 58, 44, 128, 40, 140, 117, 117, 81};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> complexity = {331, 78, 215, 714, 170, 534, 119, 494, 555, 307, 642, 85, 514, 50, 629, 671, 186, 274};
    vector<int> computers = {204, 335, 303, 90, 431, 99, 314, 222, 262, 107, 304, 108, 387, 176, 715, 630, 831, 857, 349};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> complexity = {260, 194, 299, 410, 226, 40, 450, 330, 337, 313, 218, 427, 377, 548, 23, 137, 164, 229, 109, 266, 458, 146, 172, 385, 545};
    vector<int> computers = {373, 349, 78, 330, 408, 88, 4, 402, 442};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> complexity = {6, 500, 419, 417, 115, 192, 300, 224, 461, 337, 188, 344, 356, 637, 220, 199, 300, 549, 65};
    vector<int> computers = {415, 219, 14, 175, 118, 632, 552, 524, 432, 278, 260, 47, 403, 452, 498};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
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
    vector<int> complexity = {317, 270, 291, 323, 125, 309, 30, 316, 155, 141, 243, 376, 132, 383, 52};
    vector<int> computers = {7, 223, 136, 110, 257, 214, 215, 40, 270, 128, 47, 140, 309};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> complexity = {31, 63, 88, 49, 534, 367, 809, 332, 832, 877, 530, 454, 75, 165, 549, 193, 885, 305, 889, 786};
    vector<int> computers = {855, 400, 477, 454, 74, 689, 381, 588, 785, 16, 424, 606, 849, 390, 108, 427, 539, 172, 65, 19, 629, 501, 586, 342, 508, 439, 814, 337, 874, 229};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> complexity = {45, 14, 155, 190, 397, 256, 321, 482, 13, 206};
    vector<int> computers = {268, 527, 5, 335, 210, 32, 19, 539, 221, 301, 330, 362, 400, 570, 56, 185, 392, 508, 395, 42, 25, 463, 322, 495, 146, 109, 285};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> complexity = {7, 285, 282, 201, 260, 271, 72, 42, 120, 3, 2, 333, 196, 79, 303, 117, 305, 319, 14, 208, 304, 332, 304, 337};
    vector<int> computers = {359, 298, 55, 158};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> complexity = {99, 241, 1, 79, 97, 147, 13, 169, 234, 58, 137, 168, 183, 183, 176, 129, 218, 76, 183, 134, 140, 211, 208, 237, 70, 33, 44, 206, 53, 185, 95, 177};
    vector<int> computers = {154, 205, 204, 132, 141, 154, 45, 121, 148, 244, 182, 121, 110, 164, 7, 88, 41, 119, 51, 245, 94, 127, 79, 34, 224, 72, 204, 167};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> complexity = {40, 100, 120, 70, 163, 123, 18, 138, 200, 96, 82, 179, 62, 206, 29, 173, 155, 129, 98, 193, 223, 97};
    vector<int> computers = {131, 188, 94, 64, 132, 195, 166, 22, 155, 50, 176, 72, 155, 226, 16, 35, 206, 2, 6, 188, 33, 64, 54, 162, 228, 106, 13, 78, 49, 184};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> complexity = {44, 3, 157, 91, 211, 178, 157, 130, 2, 193, 12, 235, 284, 203, 121};
    vector<int> computers = {218, 206, 168, 95, 255, 191, 232, 58, 116, 42, 123, 121, 45, 216, 175, 210, 51, 183};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> complexity = {6, 119, 242, 264, 133, 127, 90, 260, 149, 179, 29, 164, 27, 244, 182, 257, 117, 38, 120, 256, 102, 103, 193, 97, 97};
    vector<int> computers = {144, 172, 82, 203, 14, 93, 23};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> complexity = {125, 149, 142, 105, 151, 26, 19};
    vector<int> computers = {192, 141, 193, 64, 47, 37};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> complexity = {546, 298, 15, 340, 769, 493, 217, 601, 732, 67, 484, 373, 553, 409, 217, 23, 696, 644, 383, 284, 102, 485, 352, 620, 720, 316, 579, 178, 273, 596, 596, 361};
    vector<int> computers = {335, 280, 355, 525, 646, 398, 397, 464, 243, 530, 397, 736, 22, 239, 115, 695, 234, 461, 17, 248, 119, 112, 44, 665, 472, 227, 755, 486};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> complexity = {110, 89, 74, 117, 143, 122, 221, 31, 158, 141, 254, 176, 31, 51, 149, 86, 112, 116, 72, 154, 142, 184, 140, 99, 152, 255, 244, 137};
    vector<int> computers = {247, 223, 180, 188, 159, 180, 206, 254, 178, 14, 5, 49, 117, 71, 259, 116, 72, 219, 113, 213, 205, 188, 32, 132};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> complexity = {66, 67, 619, 586, 71, 12, 168, 31, 617, 423, 513, 451, 602, 555, 582, 426, 224};
    vector<int> computers = {584, 30, 484, 315, 600, 450, 333, 161, 547, 402, 528, 314, 373, 235, 453, 496, 375, 419, 23, 56, 132, 10, 348, 100};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> complexity = {207, 45, 109, 365, 216, 135, 433, 138, 136, 177, 483, 287, 12, 520, 186, 408, 275, 57, 181};
    vector<int> computers = {373, 55, 69, 140, 489, 179, 453, 21, 273, 359, 9, 318, 227, 512, 120, 111, 478, 206, 208, 25, 123, 13, 133};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> complexity = {65, 741, 68, 443, 816, 976, 618, 469, 353, 10, 819, 155, 520, 709, 111, 689, 723, 479, 281, 401};
    vector<int> computers = {947, 977, 945, 567, 405, 817, 69, 866, 308, 149, 373, 95, 99, 819, 905, 90, 119, 556};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> complexity = {301, 672, 647, 291, 283, 122, 56, 355, 528, 387, 651, 28, 77, 13, 583, 478, 228, 249, 322};
    vector<int> computers = {658, 150, 280, 253, 508, 471, 596, 209, 54, 57, 261, 395, 385, 206, 148, 653, 287, 191, 301, 361, 582, 24, 610};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> complexity = {598, 84, 549, 295, 9, 482, 58, 635, 182, 286, 629, 380, 312, 513, 268, 83, 293, 596, 19, 557, 634, 17, 24, 65};
    vector<int> computers = {388, 453, 448, 96, 164, 166, 384, 403, 453, 626, 181, 282, 401, 582, 419, 301, 635, 388};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> complexity = {74, 120, 106, 102, 109, 64, 178, 160, 48, 93, 165, 142, 90, 57, 71, 9, 79, 34, 166, 88, 99, 150, 118};
    vector<int> computers = {89, 174, 176, 113, 61, 156, 63, 23, 83, 184, 129, 181, 107, 144, 35, 132, 32, 168, 174};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> complexity = {602, 350, 280, 358, 62, 208, 813, 533, 499, 643, 317, 865, 862, 484, 866, 449, 835, 563, 600, 839, 104, 693, 508, 648};
    vector<int> computers = {843, 233, 934, 1016, 250, 334, 1025, 34, 213, 16, 169, 645, 667, 467, 754, 257, 511, 793, 273, 351, 375, 945, 30, 248, 994, 874, 911, 1034};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> complexity = {347, 270, 323, 14, 166, 2, 161, 133, 199, 8, 30};
    vector<int> computers = {289, 337, 281, 81, 392, 54, 131, 253, 109, 363, 364, 500, 381, 323};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> complexity = {207, 285, 145, 86, 286, 178, 245, 202, 110, 38, 236, 154, 241, 68, 189, 185, 1, 18, 193};
    vector<int> computers = {53, 252, 38, 202, 206, 86, 69, 204};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
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
    vector<int> complexity = {205, 528, 201, 214, 300, 157, 669, 306, 375, 617, 436, 203, 491, 4, 409, 462};
    vector<int> computers = {126, 381, 163, 241, 623, 460, 213, 86, 675, 556, 301, 124, 332};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> complexity = {100, 287, 10, 316, 221, 299, 176, 13, 22, 26, 182, 237, 334, 25, 21, 283, 96, 89, 100, 179, 114, 268, 281, 91, 272, 263, 134};
    vector<int> computers = {204, 241, 172, 261, 327, 162, 27, 291, 325, 18, 9, 202, 5, 278, 141, 76, 253, 35, 126, 217, 303, 324, 145, 104, 72, 138, 214, 313, 174, 133, 257};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> complexity = {670, 154, 191, 799, 143, 232, 189, 285, 94, 49, 213, 855, 80, 809, 482, 803, 880, 254, 862, 800, 609, 254};
    vector<int> computers = {3, 165, 73, 538, 861, 906, 70, 313, 801, 339, 200, 250, 226, 460, 786, 12, 195, 392, 650, 126, 872, 534, 826, 273, 632, 67};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> complexity = {631219, 536308, 473789, 969411, 475400, 154063, 205459, 426188, 733712, 562703, 325352, 843523, 456242, 838836, 408488, 430956, 768291, 170117, 628266, 813983, 724845, 946911, 853258, 131108, 788624, 268853, 571777, 858279, 826242, 349978, 984248, 854315};
    vector<int> computers = {895421, 337887, 568466, 387039, 612476, 214862, 687133, 496802, 529381, 57359, 482214, 773474, 581175, 47556, 129654, 452851, 337384, 735312, 70207, 185869, 625668, 6665, 63613, 567985, 206451, 687519, 368900, 991158, 756567, 882941, 301827, 62310, 379551, 642900, 773394, 312271};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> complexity = {9754, 350799, 69051, 553566, 174670, 309970, 851302, 151045, 211395, 172746, 811904, 90920, 618149, 464401, 403528, 320803, 634658, 463966, 96231, 524978, 731333, 432715, 158514, 559715, 362082, 866498, 777735, 97388, 990966, 390408, 163245, 844509, 108293, 959026, 287411, 338678, 144397, 646006, 197951, 705838};
    vector<int> computers = {213326, 100437, 896430, 14156, 8180, 446762, 119997, 922430, 179430, 341479, 93024, 410962, 606103, 337392, 383761, 545728, 735416, 301870, 777674, 94108, 28043, 307210, 529292, 272416, 125777, 102435, 955517, 986238, 762097, 963204, 329398, 281016, 929858, 422110, 396766, 839705, 445200, 11993, 734713, 966698, 984394, 108067, 991919, 479097};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> complexity = {486462, 522944, 244963, 644577, 95341, 153469, 842867, 175716, 125180, 170898, 967810, 185966, 872035, 316129, 83619, 689845, 567645, 441762, 345122, 761052, 940420, 959004, 26239, 327942, 454496, 109534, 765261, 567666, 995886, 755963, 271681, 688830, 624451, 74193, 834561, 392424, 572274, 846238, 993917, 878898, 858032, 794879, 309955, 785313, 194727, 81};
    vector<int> computers = {740601, 345046, 415853, 117155, 61404, 198542, 792296, 798116, 572595, 289732, 587783, 641974, 25781, 34530, 3250, 908499, 138038, 117796, 384973, 658949, 704754, 687756, 87356, 604963, 452761, 177136, 23054, 217778, 363383, 965464, 18719, 959070, 350915, 525898, 822691, 625840, 921733, 841143, 946139, 754735, 524251, 772374, 745035, 250056, 959007, 660790, 465146, 23917, 113263, 537180};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> complexity = {945259, 274257, 231013, 941200, 222787, 76350, 963291, 392126, 579198, 69880, 47742, 108972, 90007, 811891, 53411, 71294, 872420, 586975, 767790, 725623, 791941, 967384, 471340, 492755, 183652, 774681, 591355, 160745, 721090, 469607, 665314, 521219, 549340, 486589, 430322, 689983};
    vector<int> computers = {930800, 38831, 827463, 458085, 624249, 354250, 957498, 371386, 474944, 651401, 342144, 30776, 834234, 291492, 906627, 147937, 409959, 473937, 471901, 546485, 793570, 981115, 34965, 751620, 967730, 107869, 894529, 475691, 607742, 142531, 288833, 831504, 889385, 132507, 3166, 704264, 210105, 243069, 585692, 10044};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> complexity = {436448, 479697, 635846, 375043, 888589, 76024, 76492, 613432, 80335, 565747, 175425, 658746, 471520, 966752, 568051, 459425, 741661, 690784, 964912, 36915, 386886, 435920, 579046, 711402, 360738, 278277, 686248, 263307, 723588, 623687, 227645, 547440, 274594, 247942, 538638, 345532, 737857, 90020, 771450, 597130, 730621, 945973, 575531, 572701, 843877, 540996};
    vector<int> computers = {958365, 156475, 200431, 984347, 23926, 670297, 119148, 279861, 391105, 663285, 394894, 132031, 742202, 737088, 290783, 570563, 807178, 551557, 164967, 810551, 272144, 366801, 798380, 593900, 561670, 252073, 690734, 305513, 302613, 138675, 729673, 612171, 134278, 163784, 225655, 474508, 845041, 888359, 987777, 439369, 619667, 146935, 343801, 379374, 598554, 520492, 679657, 218104, 711116, 282628};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> complexity = {245791, 259935, 653103, 725438, 137199, 677470, 653712, 465448, 405506, 215210, 829679, 11199, 180435, 585141, 365039, 308146, 611004, 729170, 573332, 798614, 830040, 980009, 831682, 64440, 288745, 762202, 470406, 26647, 219675, 74592, 930522, 675225, 373872, 90794, 973045, 233848, 869725, 347041, 380081, 981478, 673045, 131907, 503343, 894934};
    vector<int> computers = {600022, 895514, 959769, 678999, 918240, 178176, 107207, 541853, 636926, 280404, 843278, 664319, 381753, 625334, 669566, 124868, 894020, 812481, 513091, 517771, 941268, 552594, 421883, 753750, 663036, 75165, 60933, 23918, 652985, 910898, 877768, 545523, 973211, 219683, 270958, 302656, 605218, 538063, 716404, 822746, 426072, 178953, 227210, 238829, 666972, 424491, 345659, 318303};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> complexity = {314857, 159085, 276896, 884577, 120172, 385536, 952175, 963740, 448181, 106297, 702894, 655232, 337364, 143190, 48689, 820493, 146171, 670557, 695889, 483247, 372351, 855003, 750605, 601566, 412891, 282054, 170520, 750982, 8259, 229533, 593122, 931042, 792189, 35930, 768286, 204782, 37012, 688936, 798108, 397042, 162550, 383105, 548114, 757104, 847912, 950425};
    vector<int> computers = {463270, 704376, 920331, 119738, 720378, 646288, 672994, 800956, 94515, 216198, 774705, 952926, 672238, 86058, 77541, 511103, 843720, 17479, 627624, 614784, 856758, 162680, 275564, 788438, 449035, 946068, 710611, 539820, 897772, 394878, 18871, 515208, 209847, 69971, 489072, 429627, 78657, 706754, 84943, 506939, 131667, 939010, 442952, 597157, 340802, 469102, 454804, 799785, 593333, 734062};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> complexity = {339661, 167094, 236081, 84567, 670546, 111142, 665989, 97143, 817484, 886578, 381183, 868840, 424953, 170373, 208816, 788930, 372106, 538374, 135109, 922609, 959928, 346312, 75219, 516674, 134745, 484673, 128062, 515042, 425089, 189534, 263059, 108306, 718838, 681970, 715363};
    vector<int> computers = {595193, 266940, 306889, 751811, 809262, 152977, 292400, 81632, 858250, 28986, 24007, 223049, 365684, 761053, 993561, 507225, 206648, 710515, 394672, 432383, 69236, 85644, 77660, 161742, 261719, 939142, 494212, 500002, 338965, 318761, 730167, 396300, 777397, 232087, 387218};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> complexity = {170033, 297142, 316873, 921362, 220797, 231155, 275977, 997869, 372956, 651518, 982421, 563197, 890711, 26735, 764887, 381621, 480017, 874693, 477233, 277730, 2436, 253440, 662257, 923478, 402654, 170309, 654045, 621185, 260108, 566982, 687602, 979607, 675919, 793357, 669478, 223144, 604044, 44128, 21539, 480494, 43559, 674467, 875975, 288306, 196911, 917187};
    vector<int> computers = {985382, 143536, 591830, 355602, 98289, 943075, 233017, 566653, 30940, 253521, 213109, 142515, 351023, 852395, 983074, 804383, 758995, 160297, 450638, 11336, 419672, 302347, 221892, 896568, 528728, 616854, 725588, 161583, 303724, 856362, 227892, 157646, 551423, 160510, 874394, 861878, 416174, 37711, 343251, 283436, 39755, 364234};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> complexity = {310341, 640639, 965963, 521263, 637621, 5234, 296951, 175830, 156153, 421982, 663785, 866736, 577125, 853156, 812390, 499180, 313677, 712934, 625550, 581496, 36470, 491845, 105358, 266459, 789550, 735069, 324334, 927297, 777861, 568569, 144924, 805046, 832394, 906981, 941105, 256906, 915757, 62325, 520673, 423816, 885623, 890586, 720859, 624925, 175883, 203944, 866631, 579704, 70691, 174184};
    vector<int> computers = {793209, 471647, 243825, 332217, 748031, 99263, 339106, 53644, 242401, 873583, 281949, 262739, 363219, 661842, 366781, 474304, 24306, 981941, 446559, 319877, 523106, 719889, 837910, 848113, 661399, 444539, 110188, 500860, 481013, 442889, 533779, 360932, 705162, 343038, 393896, 871402, 237648, 140618, 982945, 893118, 706168, 554017, 900112, 516206, 996594, 401609};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
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
    vector<int> complexity = {743673, 668209, 888931, 278968, 906071, 218869, 289003, 476577, 81712, 755421, 841270, 744545, 733053, 442269, 449859, 561515, 384275, 751781, 436076, 671092, 650674, 96472, 755231, 241199, 819119, 419716, 309923, 502692, 128670, 79429, 856651, 417306, 481655, 213889, 339616, 543014, 615971, 611690, 488836, 737140, 737809, 590361};
    vector<int> computers = {676463, 444168, 381821, 794086, 165666, 479871, 180864, 82597, 133112, 228009, 278742, 4745, 835410, 74043, 376756, 663286, 931472, 269206, 530594, 93473, 280574, 522845, 841744, 986110, 863955, 794636, 448461, 146265, 277741, 426804, 464357, 496798, 41230, 453680, 958659, 12581, 541735, 480235, 919872, 710804, 717522, 829077, 154742, 594615, 621910, 754746, 195770, 29663, 726111, 609682};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> complexity = {46988, 486776, 934475, 12565, 86917, 283677, 719037, 799966, 132325, 257648, 657001, 653565, 946882, 246193, 522483, 252069, 202614, 468186, 160695, 802282, 312592, 289778, 691226, 134982, 134599, 769072, 44508, 816818, 406637, 993155, 342538, 5873, 149305, 344109, 840611, 639618, 871572, 857399, 784556, 64485, 997595, 992409, 971705, 890701, 317365, 631491, 527704};
    vector<int> computers = {142705, 766451, 937861, 539066, 774678, 769967, 736997, 924096, 897520, 784141, 366717, 31646, 578091, 733086, 898175, 97366, 94962, 195215, 24845, 608240, 879512, 781516, 729310, 64702, 385829, 647432, 212065, 1659, 59111, 299629, 894253, 250919, 209701, 492780, 501410};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> complexity = {336774, 704633, 221332, 269424, 900446, 723118, 783243, 808675, 249295, 106670, 694573, 512748, 379000, 866051, 839783, 401945, 138593, 319102, 911859, 990651, 670529, 965183, 816154, 283394, 779804, 433053, 696154, 708654, 226204, 957049, 506138, 661888, 456669, 364348, 953491, 235117, 209147, 34895, 515975, 880690};
    vector<int> computers = {705173, 786652, 645434, 630810, 951292, 983866, 987576, 831573, 333246, 499319, 946618, 557314, 562996, 891715, 488132, 516550, 69754, 853845, 883472, 392849, 250078, 890021, 916599, 700161, 96204, 747897, 604119, 994929, 761630, 251014, 185729, 127804, 727496, 701251, 785321, 934555, 156853, 846262, 962556, 66822, 193424, 188772, 669203, 508905};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> complexity = {156145, 114797, 228809, 778628, 108739, 571374, 187718, 718016, 433460, 235429, 473217, 43541, 492652, 793551, 406252, 696205, 937020, 514671, 42610, 446895, 602347, 917179, 814155, 947442, 898140, 544091, 152023, 266542, 421429, 295912, 903701, 505041, 761147, 310260, 104562, 101318, 146719, 177155, 698789, 321927, 560504, 147886, 684393, 850391, 400370, 32546, 289329, 168370, 979005, 219212};
    vector<int> computers = {507277, 220966, 122030, 124619, 817846, 124817, 78440, 90675, 449658, 726773, 716961, 795533, 523191, 182114, 47497, 243958, 359430, 577108, 292202, 206193, 738639, 18691, 232246, 987174, 291920, 468067, 856033, 877727, 962271, 924437, 689525, 805963, 553990, 81036, 180284, 979284, 171964, 70822, 584178, 961408, 534910, 710257, 211146, 607959, 76173, 673767, 421449, 102930, 328174, 571618};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> complexity = {39241, 506804, 184626, 829498, 428196, 142447, 39291, 119664, 484029, 781499, 928274, 385118, 325093, 119396, 35527, 994445, 529093, 51840, 131179, 578035, 164351, 750878, 93925, 931795, 468867, 996444, 304062, 948264, 460870, 624441, 405295, 968355, 497466, 882376, 460870, 736785, 778605, 740627, 703188};
    vector<int> computers = {330458, 506346, 409863, 741128, 925408, 796113, 305766, 447310, 578796, 980591, 867507, 420869, 959794, 636236, 423337, 8211, 550176, 13680, 270735, 374477, 855413, 822363, 561203, 955804, 431762, 95245, 621184, 571710, 299944, 58327, 157394, 31890, 417133, 787929, 535510, 340286, 811314, 533271, 366623, 387896, 269526, 189686, 551166};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> complexity = {484803, 293822, 846745, 454203, 935132, 224611, 598295, 130976, 193088, 436280, 968568, 703583, 533232, 163318, 490779, 734395, 111209, 761724, 163798, 445202, 968412, 744539, 555000, 932605, 6941, 874681, 987138, 296153, 774765, 671791, 803280, 247052, 97633, 26672, 598793, 906256, 373388, 773783, 578722, 720663, 3292, 704863, 192711, 662337, 721803};
    vector<int> computers = {384528, 847896, 112009, 924878, 470972, 683959, 718823, 293211, 882359, 168211, 282006, 287883, 824690, 903288, 401321, 842721, 57425, 951689, 416875, 916417, 96426, 955917, 861306, 548627, 829335, 482245, 365866, 801679, 525043, 552118, 373353, 501763, 765518, 15478, 476807, 436761, 967330, 827171, 521119, 803271, 728048};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> complexity = {140348, 268955, 286471, 10965, 564749, 917428, 302539, 970480, 286191, 822774, 820602, 897921, 750895, 534675, 292030, 396056, 546830, 946401, 215819, 393657, 625467, 846065, 621776, 745686, 265172, 649593, 773566, 345779, 362718, 881143, 997037};
    vector<int> computers = {210652, 756809, 643277, 253730, 935740, 554240, 372277, 862834, 508564, 135816, 941298, 502661, 471365, 61641, 733325, 183317, 187093, 718438, 651344, 448478, 400869, 994628, 612281, 635381, 798616, 124067, 292352, 517202, 642044, 865488, 527352, 488408, 620311, 270790, 761514};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> complexity = {638649, 993392, 314448, 550075, 863188, 560949, 75616, 944873, 43849, 47745, 292763, 700093, 444245, 606267, 861787, 58253, 126338, 718120, 36526, 449223, 448482, 438200, 4767, 369704, 683427, 64291, 222813, 762424, 545708, 984496, 428076, 737068, 869063, 68402, 264563, 273401, 423748, 883978, 220742, 346659, 596484, 877074, 457804, 740590, 485037, 220459, 48342, 837976, 326277, 243780};
    vector<int> computers = {855699, 411092, 606536, 391227, 753730, 77768, 346353, 767715, 279360, 777059, 635853, 354577, 791078, 132847, 461693, 626580, 524509, 825204, 796341, 229557, 506565, 103960, 259256, 838136, 751470, 869277, 163378, 773716, 423290, 828944, 801666, 681208, 446298, 406204, 331763, 832949, 738115, 668090, 235565, 835053, 383191, 448775, 352781, 467937, 386830, 961211, 456904, 31404, 515926, 89661};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> complexity = {208466, 233149, 39172, 836103, 400974, 411864, 187621, 596386, 833891, 506021, 786886, 171316, 967459, 514239, 475566, 587402, 61257, 308836, 491885, 293959, 415794, 430421, 552533, 348601, 776252, 745445, 14968, 710656, 381785, 509416, 928726};
    vector<int> computers = {397175, 955381, 740329, 460008, 940694, 895542, 689926, 999212, 759476, 390324, 984105, 535770, 762288, 278878, 392084, 970563, 880516, 163587, 358606, 441369, 968143, 409518, 959529, 410478, 925361, 721878, 66284, 258628, 739059, 689293, 533653, 223977, 113311, 630111, 690161, 581479, 47912};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> complexity = {308566, 834451, 364498, 956153, 873992, 131145, 470274, 575698, 360137, 675054, 779810, 180007, 869842, 469635, 632521, 207744, 531852, 447327, 769623, 720677, 687973, 45547, 755445, 790950, 9359, 174228, 298147, 230042, 140534, 588209, 143586, 561906, 860939, 663895, 352896, 639280, 737183, 437207, 134983, 639243, 121081, 917529, 847016, 551662, 841215, 297592, 205362, 33810};
    vector<int> computers = {931559, 378477, 953090, 327129, 997977, 23987, 492706, 393031, 280429, 752442, 514646, 579959, 240981, 602804, 164015, 863228, 298263, 693325, 629004, 360235, 753239, 701086, 959261, 12360, 106627, 863301, 77811, 767133, 638382, 888082, 578981, 54426, 976344, 366402, 863295, 203151, 197315, 470046, 350755, 640395, 569932, 798285, 747797, 701731, 350579, 444825};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> complexity = {746677, 643256, 472366, 833679, 430316, 712738, 293091, 156590, 22546, 537273, 146545, 822674, 966565, 510899, 206022, 304026, 462483, 682957, 484297, 152036, 990070, 348668, 749852, 23383, 962651, 811063, 906908, 268097, 609591, 425986, 690528, 471881, 22085};
    vector<int> computers = {551166, 176689, 836223, 397410, 397140, 572798, 642183, 744026, 165215, 265834, 412536, 271898, 65542, 127986, 233459, 262084, 952553, 796774, 63859, 256718, 654932, 936307, 533408, 957531, 413235, 891516, 457908, 364496, 445637, 521948, 980564, 801007, 952099, 481021, 316509, 479296, 989899};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> complexity = {668277, 112941, 303435, 510971, 379477, 722952, 760195, 314621, 459611, 15601, 43398, 197244, 995457, 29531, 323730, 439239, 551203, 157555, 582782, 730278, 820080, 902250, 901195, 975465, 230705, 205675, 81644, 970697, 87093, 939126, 82099, 238587, 926, 855289, 145206, 775123, 891411, 612048, 469125, 631142, 936558, 792859, 537899, 143993, 412569, 928862, 226480, 16747, 871843, 793400};
    vector<int> computers = {248562, 917016, 400199, 600946, 571645, 286788, 131546, 845392, 239061, 807341, 855776, 218944, 772513, 893533, 912582, 462472, 390734, 726968, 341652, 33702, 664231, 961347, 462037, 33717, 533119, 259878, 369891, 94473, 274810, 296705, 621868, 686757, 378215, 227935, 255694, 977544, 462737, 828148};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
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
    vector<int> complexity = {390021, 444539, 342630, 458446, 109570, 907178, 495796, 339080, 217200, 205554, 548077, 172826, 186262, 799180, 613273, 410771, 553163, 179931, 867358, 504015, 622129, 510935, 556442, 593983, 117997, 544302, 306659, 279521, 629269, 133720, 295754, 111777, 247887, 750450, 394098, 887663, 955633, 341697, 312938, 740337, 907590, 728084, 830781, 936766, 191476, 922691, 508618, 220041, 317991, 81562};
    vector<int> computers = {744730, 999295, 779197, 259301, 553537, 426401, 2751, 400341, 876763, 356896, 912133, 64047, 760319, 111609, 739324, 317928, 620935, 342782, 447872, 485230, 888374, 723935, 924147, 724904, 185168, 256488, 747048, 26502, 771337, 755921, 954339, 894870, 957809, 638944, 184995, 122401, 618271, 80242, 328995, 685659, 462176, 356774, 222889, 889818, 584966, 511233};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> complexity = {192057, 764066, 661217, 804285, 338970, 189168, 556034, 918478, 256197, 362840, 68186, 867445, 625255, 160625, 34008, 515722, 794153, 746127, 117607, 156023, 29500, 492015, 101506, 84000, 11281, 516602, 485763, 654109, 876848, 551232, 996051, 812253, 92787, 337665, 454067, 433017, 831295};
    vector<int> computers = {2715, 555386, 460014, 74174, 403468, 89304, 98404, 499349, 93340, 494548, 104924, 996418, 493737, 864260, 323660, 618110, 77454, 759846, 819396, 984472, 364120, 696114, 113964, 493095, 77604, 246509, 451328, 731472, 778990, 492950, 780667, 231381, 647491};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> complexity = {432332, 162015, 709645, 620440, 777872, 22226, 757284, 216089, 294214, 367962, 685676, 284850, 937251, 175142, 668202, 955637, 761156, 82813, 598854, 570343, 348625, 634088, 984246, 556942, 428165, 310966, 822743, 716177, 982511, 478573, 227384, 773777, 808762, 258293, 604024, 185902, 989284, 325721, 593599, 937882, 451009, 975881, 666156, 971003, 291222, 223959, 762402};
    vector<int> computers = {261874, 79721, 767149, 944891, 218464, 519947, 322149, 809507, 355111, 40030, 113600, 945602, 301582, 803613, 765153, 102206, 976160, 88846, 152256, 153446, 786177, 929883, 651626, 550223, 138539, 668896, 740516, 18589, 436800, 932359, 144966, 509136, 992466, 638707, 231422, 325042, 390450, 584024, 861068, 455439, 381194, 989842, 840136};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> complexity = {548995, 484598, 574873, 95919, 199829, 962189, 339211, 901132, 574030, 343336, 690282, 772034, 531353, 589794, 990982, 107336, 809707, 622446, 492092, 320667, 628065, 477382, 997571, 469317, 519155, 257409, 790965, 807711, 179960, 284350, 870071, 740735, 902930, 551330, 141943, 166823, 516116, 12525, 785970, 633304, 902967};
    vector<int> computers = {999727, 781662, 595093, 459239, 141663, 876308, 952298, 260238, 827393, 160823, 339610, 323449, 797325, 460749, 592770, 152694, 123155, 11420, 999138, 175634, 121582, 199507, 961212, 749604, 348926, 376966, 874000, 813785, 374035, 655138, 334645, 482591, 498042, 917936, 300614, 730328, 417695, 601030, 174204, 112347, 500763, 107861, 523788, 226327, 248531};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> complexity = {474669, 465188, 868799, 810757, 341021, 303192, 296489, 888426, 509862, 855855, 352898, 615552, 199719, 960963, 956263, 603, 83302, 167706, 310676, 505164, 668196, 370410, 694425, 209251, 887868, 344045, 668612, 667398, 65212, 287834, 104455, 280280, 152156, 925308, 629028, 536392, 1495, 401855, 220783, 24902, 24476, 590523, 48806, 86681, 605694, 994567, 871560, 621012, 113090};
    vector<int> computers = {409673, 266185, 931966, 202118, 307092, 496227, 1608, 519941, 284498, 116094, 92912, 626206, 511608, 595079, 742019, 995384, 662764, 549763, 797025, 997627, 155123, 306451, 337851, 13804, 818271, 566500, 804176, 328205, 913780, 859741, 567169, 686379, 253700, 698314, 493964, 288323, 354891, 65316, 382355, 457852, 148383, 86068, 455306, 22006, 501570, 633273, 726309, 546604, 673614, 919058};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> complexity = {853627, 633391, 551061, 126940, 688104, 643722, 293426, 348634, 549981, 267417, 327790, 456543, 873025, 491763, 383868, 795888, 217092, 746119, 818240, 385012, 637555, 261159, 529519, 683743, 540084, 78094, 490067, 568990, 424232, 183668, 549498, 494754};
    vector<int> computers = {793894, 52979, 362944, 125928, 212001, 151942, 412554, 657468, 71684, 166503, 993067, 466428, 754045, 92965, 227277, 445980, 9529, 478027, 329643, 207414, 153636, 935077, 454638, 394254, 682104, 331947, 118107, 428836, 183464, 167090};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> complexity = {297516, 770070, 825583, 84538, 971648, 797256, 96991, 806570, 236734, 587278, 834829, 738709, 852313, 516078, 815438, 177394, 720935, 485751, 164920, 508505, 344636, 871487, 813567, 351233, 416985, 146902, 758659, 479941, 384657, 94491, 364619, 685916, 689323, 703070, 731302, 772567, 372981, 58525, 575931};
    vector<int> computers = {608392, 816625, 441450, 159820, 693489, 767209, 13312, 479136, 975500, 313972, 180274, 231839, 877935, 461448, 47950, 254511, 436524, 932433, 420133, 466340, 996715, 420949, 660719, 77365, 748338, 193314, 94335, 577003, 500489, 881649, 951914, 195246, 158842, 500641, 694891};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> complexity = {869690, 342299, 125262, 457696, 494076, 785995, 695015, 25885, 360648, 11787, 296917, 700975, 688330, 682672, 935884, 344392, 994248, 496543, 229836, 823741, 620482, 282002, 249165, 89258, 549609, 95459, 321205, 575063, 356590, 209490, 561058, 524104, 201380, 259110, 530897, 889340, 77485, 437648, 297721, 928126, 991241, 41209};
    vector<int> computers = {750028, 37308, 41115, 272851, 437946, 112845, 383180, 635334, 13668, 137557, 135924, 983359, 75796, 162675, 973570, 587632, 23455, 587777, 880151, 836328, 760733, 299641, 661842, 673859, 480009, 305289, 961574, 456066, 632512, 634839, 24763, 420176, 469084, 279934, 976466, 199966, 348100, 148489, 460581, 827003, 854509, 776598, 483610, 587951, 536610};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> complexity = {317552, 784046, 250148, 479940, 153793, 427698, 262566, 984774, 73782, 306722, 157902, 453879, 993227, 668865, 275350, 831993, 104980, 985424, 127405, 469865, 981196, 945262, 280154, 259376, 347272, 139749, 322474, 456896, 633626, 461793, 566977, 329023, 649645, 446056, 42177, 142240, 62551, 488315, 318602, 9903, 228194, 704814, 793449};
    vector<int> computers = {799258, 878148, 592896, 903408, 341304, 626148, 616100, 994833, 7257, 169297, 927592, 415591, 22959, 461628, 867469, 868775, 101416, 494248, 417321, 410096, 386683, 493878, 478671, 722573, 297833, 594790, 47339, 140353, 989731, 473830, 285828, 685803, 620840, 318500, 526899, 637910, 25261, 929381, 186646, 993265, 228743, 582637, 133412, 917283};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> complexity = {473638, 83456, 944358, 517358, 418138, 477380, 746197, 633093, 280424, 796343, 662402, 343158, 746991, 776722, 836978, 89550, 169378, 313485, 259715, 769866, 608113, 52427, 254890, 698932, 109829, 813367, 358298, 335346, 878439, 553516, 669205, 142365, 540276, 289121, 273189, 559662, 464009, 743084, 619494, 365306, 201618};
    vector<int> computers = {430319, 764322, 648738, 340367, 264787, 428568, 362395, 569098, 745532, 202182, 761919, 254169, 356315, 492975, 980831, 651219, 574875, 945279, 603513, 599380, 131475, 922673, 36280, 228871, 1612, 351109, 29023, 550074, 484514, 142914, 988964, 632170, 469146, 135372, 304193};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> complexity = {892808, 593362, 815045, 108616, 811613, 558711, 564563, 774700, 466531, 205494, 297463, 164153, 900854, 444932, 629962, 337416, 755749, 263027, 338005, 79411, 364636, 60982, 395269, 355212, 713244, 476998, 291257, 647949, 770852, 163146, 520645, 224197, 824792, 994229};
    vector<int> computers = {998365, 59863, 338693, 703008, 312365, 109724, 629828, 165449, 744566, 394809, 517386, 828637, 417117, 454526, 521312, 213571, 667148, 976277, 933810, 42168, 728562, 613573, 435443, 462020, 300031, 14787, 597495, 28724, 546647, 921553, 331799, 457768, 624479, 207644, 674702, 10890, 699193, 892923, 636885, 942460, 148052, 937990, 532273, 50627, 122978, 951226, 688918, 899251, 120691, 304942};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> complexity = {881445, 10053, 499650, 583883, 87923, 607778, 428159, 75396, 994028, 788356, 408129, 825395, 899507, 234647, 393217, 557165, 95768, 993518, 52329, 789193, 111665, 72058, 971909, 141620, 140447, 145921, 589872, 907946, 250149, 775625, 839146, 606707, 817587, 163125, 504274};
    vector<int> computers = {916561, 310681, 601434, 21017, 359056, 464447, 424035, 695463, 158512, 216393, 956979, 57891, 432602, 233781, 115835, 977945, 621942, 868412, 101012, 291272, 258920, 596325, 214124, 326344, 775973, 590440, 61075, 974926, 308785, 931937, 973484, 522459, 10771, 629417, 85928, 805216, 581026, 757017, 479128};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> complexity = {820508, 680562, 508521, 785324, 202453, 236600, 41728, 910806, 968621, 453002, 441991, 134079, 221540, 890882, 25417, 692591, 891659, 176984, 539093, 196324, 964250, 190538, 840119, 649701, 294176, 239474, 836928, 293241, 251677, 244527, 95253, 157523, 689223, 41821, 835102, 635051, 768065, 337004, 548946, 566626, 993003, 386035, 386771, 679757, 618790, 130871, 209414, 173110, 8059};
    vector<int> computers = {636835, 76325, 901956, 696511, 864068, 813349, 274994, 461105, 974237, 653144, 376391, 756891, 843339, 987905, 986865, 469436, 794092, 345011, 397227, 120056, 459173, 137692, 115686, 303878, 707045, 153553, 812920, 159398, 334649, 887833, 760196, 578493, 706045, 873135, 370952, 163188, 688524, 565861, 261301, 136656, 919934, 26418, 83728, 471251, 307404, 537043, 25614, 165876, 831768, 90316};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> complexity = {945456, 398872, 402368, 221804, 483494, 336048, 166386, 888801, 352788, 813072, 587505, 222821, 320784, 818506, 64601, 427837, 819454, 721793, 340417, 586835, 303102, 644627, 16291, 105957, 61037, 683187, 816542, 695437, 588226, 151928, 948924, 288323, 558843, 666452, 52008};
    vector<int> computers = {179304, 314468, 612839, 178746, 957892, 398374, 300036, 368310, 650555, 464678, 916302, 468407, 145888, 290388, 492758, 841931, 894431, 929247, 558765, 1206, 849505, 671753, 860437, 466671, 558365, 317915, 791558, 601349, 919227, 909984, 881172, 807961, 846004, 294045, 637360, 158057, 813196, 708825, 189650, 243751, 176044, 110843, 92949, 929979};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> complexity = {184585, 483505, 588312, 446842, 32463, 176580, 871886, 530824, 570831, 744793, 523229, 535306, 55916, 951015, 44248, 764094, 195993, 613282, 398384, 439190, 65838, 397041, 67663, 556112, 749832, 920956, 680582, 529393, 484626, 591753, 809331, 398087, 286035, 915804, 282155};
    vector<int> computers = {889197, 575529, 981782, 812140, 787917, 276879, 434911, 66836, 767312, 82871, 871101, 471709, 21513, 997270, 945312, 475727, 237129, 345302, 205317, 86104, 328552, 745116, 621094, 166148, 299822, 446871, 654293, 53206, 545854, 297319, 179612, 531743, 654376, 701190, 300869, 188480, 701117, 299013, 279004};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> complexity = {616486, 942166, 211331, 689402, 39779, 854420, 955494, 858330, 200173, 565932, 743917, 44119, 657390, 741362, 742402, 407387, 57688, 388334, 661587, 149453, 233512, 582106, 599101, 621939, 868929, 670101, 501421, 858029, 902933, 381942, 254812, 432684, 471367, 378441, 436688, 39348, 858525, 176195, 888410};
    vector<int> computers = {386838, 19239, 159082, 813136, 114999, 268473, 410960, 403102, 116902, 605969, 373724, 374202, 746739, 503869, 702408, 517814, 752381, 818031, 973215, 638371, 12115, 994862, 903949, 999029, 852874, 713476, 885329, 176111, 151359, 992932, 548400, 394887, 375329, 740639, 694040, 490584, 267262, 938897, 910047, 981976, 852679, 204960, 441809, 599286, 9695, 15065, 607852, 721209, 372663, 266479};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> complexity = {669335, 577254, 559568, 39996, 780204, 462666, 583629, 494103, 863585, 671114, 862280, 147523, 334455, 102416, 883230, 800148, 752446, 38234, 605109, 794668, 583227, 803748, 697661, 719976, 254069, 411436, 885729, 710666, 456870, 515879, 813181, 107001, 13874, 527059, 687841, 150810, 387930, 146525, 891554, 161123, 50852, 171565, 663082, 453814, 365271, 525865, 704882, 202364};
    vector<int> computers = {445604, 827202, 173906, 282646, 614309, 178135, 865390, 292372, 901312, 59619, 966645, 927812, 81155, 346753, 70942, 329432, 764763, 986508, 672097, 278025, 91496, 178062, 227810, 338594, 714731, 715824, 122485, 938310, 73785, 683021, 512398, 606007, 898322, 100068, 133980, 118295, 481161, 92649, 776576, 165885, 502130, 776087, 866020, 590786};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> complexity = {734794, 462801, 82261, 301248, 760011, 796211, 943860, 390220, 236610, 60966, 60898, 424720, 149277, 292304, 784122, 129411, 420785, 93649, 326402, 499931, 726285, 31808, 916865, 371168, 991614, 281599, 995826, 620885, 501405, 154491, 83407, 359235, 832695, 987723, 304609, 125895, 108661, 484822, 444696};
    vector<int> computers = {913725, 895938, 357990, 365590, 693009, 421097, 823286, 220586, 419243, 582316, 988477, 617910, 583392, 70525, 564137, 300601, 112149, 243356, 635624, 148185, 245733, 188357, 964566, 529490, 558785, 770486, 946332, 149714, 440294, 491408, 269175, 224530, 842942, 979510, 77629, 811437, 379125, 197302, 250240, 154965, 861479, 440453};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> complexity = {100};
    vector<int> computers = {100, 100};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
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
    vector<int> complexity = {1};
    vector<int> computers = {1};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
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
    vector<int> complexity = {1};
    vector<int> computers = {2};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> complexity = {2};
    vector<int> computers = {1};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> complexity = {69498, 13142, 42355, 63971, 18611, 40910, 55340, 15474, 60223, 38053, 5493, 72668, 72997, 23749, 69985, 30160, 50281, 89180, 78568, 5923, 55149, 22077, 33319, 95492, 68263, 58389, 83650, 17461, 56706, 3694, 27940, 8766, 34449, 55521};
    vector<int> computers = {20797, 36172, 13676, 26586, 9905, 6784, 23419, 37164, 35754, 38052, 32490, 5656, 22744, 6503, 18144, 1316, 11119, 24187, 16332, 27328, 30534, 2052, 20606, 946, 3520, 4079, 16385, 23924, 21354, 36707, 26639, 27174, 18208, 14881, 5753, 19239, 32723, 32580, 16837, 31642, 24143, 35235, 5582, 37798, 827, 4296, 1303, 29479};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> complexity = {139260, 353914, 106691, 179188, 229379, 97743, 106027, 293497, 240412, 263649, 8279, 23584, 16552, 335928, 154222, 155835, 105928, 6509, 258896, 345356, 34619, 120456, 68334, 29960, 349253, 229434, 163254, 110758, 362668, 143539, 189927, 133482, 138108, 107745, 55363, 111017, 4714, 331239, 128834, 59449, 147990, 44981, 156323};
    vector<int> computers = {77316, 25103, 37411, 61464, 55863, 115854, 95602, 107876, 86009, 133482, 55734, 12224, 122982, 42915, 78843, 13978, 8475, 72, 57026, 116164, 54894, 102488, 48013, 8784, 10753, 109924, 117096, 59761, 24960, 67702, 124409, 24364, 100703, 95853, 87811, 19495, 11786, 49653, 44715, 41770, 129707, 86055, 46802, 129009, 41266, 94227, 102748};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> complexity = {134606, 127936, 153208, 159957, 244106, 13270, 59426, 93465, 211144, 249291, 16079, 218858, 246976, 118251, 121509, 119890, 126791, 250257, 253056};
    vector<int> computers = {33342, 376473, 71690, 399260, 387361, 455972, 238305, 139159, 433877, 36968, 130031, 91068, 194695, 355115, 160574, 136652, 216903, 232508, 5594, 240474, 161337, 73218, 20732, 7168, 366952, 95938, 127672, 297086, 254672, 231550, 284552};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> complexity = {73628, 1618, 85516, 78037, 18328, 114611, 109122, 123681, 6303, 107863, 47305, 68434};
    vector<int> computers = {261603, 315038, 336690, 75142, 280019, 149985, 57574, 220517, 318267, 44756, 101909, 60978, 133620, 198622, 327923, 35143, 108784, 119404, 253467, 258641, 302386, 79007, 328036, 95231, 314526, 135869, 151454, 264576, 16263, 120170, 94250, 136159, 320471, 212218, 25360, 152366, 190849, 286814, 88458, 41820, 339754, 275697, 171734, 208373, 204550, 13190};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> complexity = {451155, 481286, 35940};
    vector<int> computers = {500066, 450195, 166639, 412469, 62523, 111152, 309601, 328, 509956, 113494, 115632, 381875, 407957, 113093, 157997, 513003, 21113, 558209, 336825, 3871, 328761, 214214, 10452, 159142, 246301, 455521, 162477, 278589, 511742, 120256, 245607, 127261, 13001, 69942, 425097, 188747, 97820, 184171, 130957, 557666, 393313, 100294, 51403, 542214, 162965, 518447, 566669};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> complexity = {228647, 376050, 717343, 760613, 132659, 145997, 127363, 592687, 780595, 4643, 780438, 153847, 547587, 623488, 569295, 10953, 387883, 731417, 707713, 267401, 51443, 773001, 551025, 329952, 279708, 566300, 476677, 684670, 525541, 417441, 737539, 20860};
    vector<int> computers = {37706, 569420, 251903, 385950, 175390, 606254, 466703, 840369, 392831, 186269, 435111, 812062, 46128, 30177, 497659, 301040, 450937, 9345, 444646, 167509, 706888, 645374, 615304, 828241, 736586, 138068, 650970, 849462, 362158, 441731};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> complexity = {67625, 62754, 59428, 70670, 63812, 77622, 61317, 81496, 27974, 90973, 99723, 32671, 65573, 98788, 49232, 8822, 100311, 52621, 35179, 90668, 38517, 88186, 106457, 81537, 37971, 45946};
    vector<int> computers = {5206, 17148, 2978, 20253, 20394, 2171, 2094, 11188, 7807, 6440, 8416, 12769, 3602, 9622, 12798, 2601, 693, 843};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> complexity = {155194, 91609, 166400, 398905, 189537, 37575, 385363, 182208, 326616, 117985, 250202, 281961, 309636, 27527, 36313, 126888, 411950, 176831, 303709, 132049, 83410, 218439, 343141, 385798, 408788, 73183, 60386, 125930, 372757, 351834, 159065, 169702, 45370, 17951, 4495, 237182, 395772, 227881, 236093, 112222, 310079, 138508, 93382};
    vector<int> computers = {400855, 441174, 192758, 300148, 4494, 287831, 173543};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> complexity = {321132, 358683, 80491, 137408, 188658, 183225, 170270, 146750, 465299, 14180, 210822, 285594, 41311, 160631, 100136, 82860, 125173, 53116, 409917, 154409, 489954, 420260, 496686, 153954, 463836, 38114, 150730, 387343, 366186, 189835, 27120, 278777, 71719, 353684, 365664, 42230, 8596, 501237, 6028, 329128, 213904, 246053, 115843, 256537, 151191, 364526, 331419, 468505, 66270};
    vector<int> computers = {201516, 42717, 293652, 201174, 430364, 306887, 516, 80031, 450021, 6028, 42845, 351110, 111588, 98825, 37529, 461667, 87069, 317150, 228121, 439394, 514906, 167258, 362830, 114603, 205195, 520139, 388611, 503535, 3443, 521639, 76964, 277663, 432853, 198985, 41118, 66710, 175924, 31353, 326064, 120983, 385126, 164551, 395643};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> complexity = {308155, 594962, 810834, 384273, 208427, 728616, 417153, 24469, 810913, 444227, 65096, 611397, 139523, 348402, 694310, 498045, 838781, 361248, 598337, 184714, 134411, 353176, 294116, 508396, 71272, 260633, 467841, 788719, 360575, 229178};
    vector<int> computers = {84758, 133368, 16862, 107983, 12251, 143465, 210432, 124700, 219788, 196737, 281392, 159971, 117853, 174220, 48413, 257482, 170813, 99312, 145328, 190440, 130499};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> complexity = {616013, 506175, 52224, 705710, 62314, 215570, 779300, 142568, 337493, 720380, 441087, 789780, 73601, 380093, 68877, 829968, 227676, 257627, 435628, 20602, 15546, 96713, 796177, 459588, 660350, 325690, 753349, 148220, 6181, 68806, 585577, 72615, 40507, 528232, 122865, 142736, 471723, 205894, 45129, 627947, 805551, 793694, 677672, 416380, 185911, 104065, 469507, 227685};
    vector<int> computers = {53618, 91538, 49477, 73957, 51809, 44228, 62313, 22198, 55054, 6904, 29014, 102293, 107134, 24987, 7470, 133713, 43233, 347, 101646};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> complexity = {257584, 212459, 207080, 168784, 111446, 301071, 216609, 63411, 150018, 94335, 158258, 135543, 20374, 199785, 172943, 249065, 5034, 303072, 201723, 218909, 286644, 152576, 63330, 1395, 282957, 108068, 49733, 238714, 290752, 265573, 168124, 224017, 2561, 16554, 178755, 211992, 301792, 135689, 167362, 283591, 32888, 66611, 152821, 5537, 144730, 304441, 66371};
    vector<int> computers = {110005, 60447, 96702, 183202, 8813, 267844, 88514, 213166, 39384, 11867, 134338, 45518, 343397, 179239, 28202, 333317, 135543, 149315, 270011, 82021, 169870, 90576, 187060, 320801, 58064, 200659, 123879, 76757, 176488, 341510, 31304, 151232, 245758, 18026, 90355};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> complexity = {56373, 38135, 86345, 87137, 111728, 43479, 128215, 114839, 112996, 3622, 30646, 42482, 73685, 113776, 24015, 66734, 92786, 21450, 106366, 42306, 127947, 87928, 71234, 102178, 49921, 51336};
    vector<int> computers = {92785, 588077, 406820, 90862, 571568, 60103, 490578, 614751, 548300, 553914, 129306, 37951, 133501, 349947, 654073, 832489, 791784, 623512, 797201, 103804, 910533, 51710, 549408, 230876};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> complexity = {100};
    vector<int> computers = {99, 95, 1, 3, 4, 6, 8, 2};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> complexity = {100};
    vector<int> computers = {1, 2, 7, 9, 5, 23, 4, 7, 2, 100};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> complexity = {100};
    vector<int> computers = {1000000, 3, 2, 6, 76, 23, 1, 4, 6};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
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
    vector<int> complexity = {101, 108, 32582, 3253, 63423};
    vector<int> computers = {100};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> complexity = {99, 99, 99, 99, 99};
    vector<int> computers = {100};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
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
    vector<int> complexity = {1000, 999, 998, 102, 103, 107, 100};
    vector<int> computers = {100};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
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
    vector<int> complexity = {99, 101, 103, 105, 107};
    vector<int> computers = {100};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> complexity = {288301, 211431, 100189, 269571, 360810, 360708, 180732, 233443, 320790, 117330, 57277, 246082, 94312, 315416, 344221, 37861, 35323, 38527, 137810, 322671, 342230, 133710, 285236, 96155, 396342, 119097, 243265, 345030, 326575, 863, 269214, 203938, 14017, 103753, 91500, 105538, 246724, 210386, 110345, 377911, 284224, 55868, 130750, 110916, 145602, 157649, 131914, 289522, 122244, 337104};
    vector<int> computers = {912155, 328676, 149219, 707455, 553553, 695802, 41834, 731913, 963552, 330093, 489379, 915929, 109742, 889328, 353102, 717078, 765540, 518590, 832686, 714881, 613176, 748460, 146560, 844424, 788070, 982067, 969104, 34086, 797546, 90114, 68636, 293677, 289971, 273689, 652053, 640004, 844418, 851567, 107998, 603632, 470173, 686497, 164422, 23058, 551447, 800799, 64024, 151635, 469292, 573540};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> complexity = {5, 2, 7, 8, 6, 4, 2, 10, 2, 3};
    vector<int> computers = {4, 1, 3, 6, 2, 10, 11, 1, 1, 3, 4, 2};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> complexity = {100};
    vector<int> computers = {100, 100};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> complexity = {4};
    vector<int> computers = {5};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> complexity = {5, 6};
    vector<int> computers = {4, 7};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> complexity = {727, 600, 1000, 1200};
    vector<int> computers = {600, 700, 900};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> complexity = {6, 5, 4};
    vector<int> computers = {4, 3, 2};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> complexity = {1, 3};
    vector<int> computers = {3, 1};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> complexity = {1, 1, 1, 1, 2, 3};
    vector<int> computers = {10, 34};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> complexity = {5, 2, 7, 8, 6, 4, 2, 10, 2, 3, 112};
    vector<int> computers = {4, 1, 3, 6, 2, 10, 11, 1, 1, 3, 4, 2};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> complexity = {25, 30, 40, 41};
    vector<int> computers = {25, 25, 50, 60};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> complexity = {9};
    vector<int> computers = {4, 4};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> complexity = {1, 2, 3};
    vector<int> computers = {3};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> complexity = {120};
    vector<int> computers = {20};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> complexity = {2, 2};
    vector<int> computers = {4};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> complexity = {1, 2, 3};
    vector<int> computers = {1, 2, 3};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> complexity = {3, 5, 1, 7};
    vector<int> computers = {9, 4, 1, 1, 1};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> complexity = {1, 2, 4};
    vector<int> computers = {8, 4, 1};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> complexity = {1, 1, 1, 1, 1, 1};
    vector<int> computers = {10};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> complexity = {3};
    vector<int> computers = {2, 5};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> complexity = {3, 4};
    vector<int> computers = {1, 5};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> complexity = {25, 25};
    vector<int> computers = {100, 12};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> complexity = {100, 10000, 100000};
    vector<int> computers = {100, 100, 100000, 10000};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> complexity = {100};
    vector<int> computers = {100000};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
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
    vector<int> complexity = {5};
    vector<int> computers = {4};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> complexity = {5};
    vector<int> computers = {10, 10, 10, 10, 10};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> complexity = {2, 3, 4};
    vector<int> computers = {1, 2, 3};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> complexity = {1, 1, 1};
    vector<int> computers = {2, 2, 2};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> complexity = {2, 2};
    vector<int> computers = {9, 1};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> complexity = {2, 3};
    vector<int> computers = {1, 20};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> complexity = {3};
    vector<int> computers = {1, 3};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> complexity = {10, 100};
    vector<int> computers = {100, 10};
    ImportantTasks* pObj = new ImportantTasks();
    clock_t start = clock();
    int result = pObj->maximalCost(complexity, computers);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22784156&rd=13901&pm=10578
********************************************************************************
#include<iostream> 
#include<vector> 
#include<algorithm> 
using namespace std; 
class ImportantTasks 
{ 
public: 
  int maximalCost(vector<int> complexity, vector<int> computers); 
}; 
int ImportantTasks::maximalCost(vector<int> complexity, vector<int> computers) 
{ 
  int c; 
  c=0; 
  vector<int>::size_type a; 
  vector<int>::size_type b; 
  sort(&complexity[0],&complexity[0]+complexity.size()); 
  sort(&computers[0],&computers[0]+computers.size()); 
  for(a=0,b=0;a<complexity.size()&&b<computers.size();a++,b++) 
  { 
    if(complexity[a]<=computers[b]) 
      c++; 
    while(complexity[a]>computers[b]) 
    { 
      b++; 
      if(b>=computers.size()) 
        break; 
      if(complexity[a]<=computers[b]) 
      { 
        c++; 
        break; 
      } 
    } 
  } 
  return c; 
}

********************************************************************************
*******************************************************************************/