/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10275
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

class CellRemoval {
public:
    int cellsLeft(vector<int> parent, int deletedCell);
};

int CellRemoval::cellsLeft(vector<int> parent, int deletedCell) {
    int ret;
    return ret;
}


int test0() {
    vector<int> parent = {-1};
    int deletedCell = 0;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> parent = {-1, 0, 0};
    int deletedCell = 0;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> parent = {-1, 0, 0};
    int deletedCell = 1;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> parent = {1, -1, 1};
    int deletedCell = 2;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> parent = {2, 2, -1};
    int deletedCell = 2;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> parent = {-1, 0, 0, 1, 1};
    int deletedCell = 2;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
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
    vector<int> parent = {-1, 0, 0, 1, 1};
    int deletedCell = 1;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> parent = {-1, 0, 0, 1, 1};
    int deletedCell = 0;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> parent = {6, 5, 6, -1, 3, 3, 5};
    int deletedCell = 0;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> parent = {2, 6, -1, 4, 2, 6, 4};
    int deletedCell = 6;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> parent = {5, 3, 6, 6, 3, -1, 5};
    int deletedCell = 3;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> parent = {6, 6, 5, 1, 1, -1, 5};
    int deletedCell = 0;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> parent = {4, 0, 4, 0, -1};
    int deletedCell = 2;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> parent = {-1, 4, 3, 0, 5, 0, 4, 5, 3};
    int deletedCell = 0;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> parent = {6, 6, 5, 0, 5, 0, 8, 8, -1};
    int deletedCell = 7;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
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
    vector<int> parent = {8, 7, 0, 5, 5, 8, 7, 0, -1};
    int deletedCell = 1;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> parent = {-1, 0, 6, 0, 1, 6, 1};
    int deletedCell = 0;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> parent = {6, -1, 1, 2, 2, 1, 5, 6, 5};
    int deletedCell = 2;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
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
    vector<int> parent = {2, 0, 3, -1, 0, 6, 3, 2, 6};
    int deletedCell = 4;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> parent = {-1, 0, 0, 2, 2};
    int deletedCell = 3;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> parent = {8, 4, 0, 4, 8, -1, 5, 0, 5};
    int deletedCell = 4;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
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
    vector<int> parent = {3, 2, 4, 2, -1, 7, 7, 4, 3};
    int deletedCell = 1;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> parent = {2, 3, -1, 5, 5, 2, 3};
    int deletedCell = 2;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> parent = {1, 4, 1, 5, -1, 4, 5};
    int deletedCell = 4;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> parent = {3, 0, 0, -1, 3, 2, 2};
    int deletedCell = 0;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> parent = {3, -1, 6, 1, 6, 3, 1};
    int deletedCell = 4;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> parent = {1, 5, 1, 7, 7, -1, 5, 6, 6};
    int deletedCell = 8;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> parent = {6, 0, 6, -1, 2, 2, 3, 3, 0};
    int deletedCell = 3;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> parent = {8, 4, 4, 5, -1, 1, 8, 1, 5};
    int deletedCell = 3;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
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
    vector<int> parent = {2, 2, 4, 4, -1};
    int deletedCell = 0;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> parent = {6, 7, 6, 7, 8, 1, 8, -1, 1};
    int deletedCell = 3;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> parent = {4, 2, 4, 2, -1};
    int deletedCell = 1;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> parent = {1, -1, 0, 1, 0};
    int deletedCell = 2;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
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
    vector<int> parent = {5, 3, 8, 8, 2, 2, 5, 3, -1};
    int deletedCell = 7;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> parent = {3, 5, 3, -1, 0, 0, 5};
    int deletedCell = 4;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
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
    vector<int> parent = {1, 3, 1, -1, 3};
    int deletedCell = 0;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> parent = {7, 7, 6, 1, 6, -1, 5, 5, 1};
    int deletedCell = 4;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> parent = {2, 2, 8, 8, -1, 6, 4, 6, 4};
    int deletedCell = 8;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> parent = {24, 42, 4, 30, 29, 43, 22, 15, 26, 36, 26, 16, 3, 22, 21, 41, 18, 16, 34, 41, 12, 29, 32, 30, 43, 15, 4, 38, 36, -1, 24, 42, 18, 6, 21, 38, 6, 17, 32, 17, 3, 34, 12, 14, 14};
    int deletedCell = 24;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> parent = {-1, 4, 36, 24, 10, 29, 19, 31, 7, 0, 26, 31, 4, 18, 7, 6, 14, 24, 23, 0, 29, 14, 10, 35, 26, 1, 19, 1, 9, 36, 18, 6, 22, 35, 22, 9, 23};
    int deletedCell = 35;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> parent = {38, 20, 34, 7, 6, 37, 5, 8, 10, 30, 6, 37, 20, 2, 16, 7, 21, 23, 22, 23, 8, 33, 11, 21, 4, 30, 15, 34, 16, 15, 10, 36, 38, 5, 4, 33, 11, -1, 22, 2, 36};
    int deletedCell = 39;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> parent = {9, 14, 13, 2, 2, -1, 14, 9, 13, 11, 11, 5, 10, 5, 10};
    int deletedCell = 10;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> parent = {-1, 21, 24, 30, 46, 1, 16, 29, 30, 41, 18, 33, 26, 31, 12, 45, 29, 7, 16, 45, 27, 32, 41, 18, 35, 6, 9, 1, 19, 32, 22, 33, 0, 9, 6, 0, 12, 19, 21, 35, 46, 24, 31, 27, 26, 22, 7};
    int deletedCell = 28;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> parent = {31, 4, 11, 11, 16, 2, 17, 26, 26, 6, 4, 33, 8, 9, 15, 3, 32, 31, 16, 2, 9, 12, 33, 22, 15, 22, 13, 32, 37, 12, 3, -1, 0, 17, 37, 0, 8, 13, 6};
    int deletedCell = 35;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> parent = {32, 24, 5, 30, 16, 19, 19, 9, -1, 12, 31, 21, 14, 24, 4, 35, 8, 27, 8, 30, 21, 34, 35, 31, 18, 17, 9, 4, 17, 18, 12, 14, 16, 32, 5, 27, 34};
    int deletedCell = 0;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> parent = {10, 10, -1, 5, 2, 8, 4, 5, 4, 8, 2};
    int deletedCell = 10;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> parent = {26, 29, -1, 1, 2, 26, 15, 31, 20, 5, 29, 25, 4, 20, 25, 2, 3, 3, 27, 32, 6, 1, 14, 5, 32, 4, 14, 31, 6, 12, 27, 12, 15};
    int deletedCell = 6;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> parent = {4, 19, 16, 14, 11, 4, 11, 0, 14, 2, 19, -1, 6, 7, 6, 3, 3, 16, 7, 2, 0};
    int deletedCell = 16;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> parent = {1, 4, 5, 9, 11, 11, 12, 18, 13, 1, 18, -1, 9, 5, 13, 4, 3, 12, 3};
    int deletedCell = 17;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> parent = {19, 13, 27, 22, 20, 24, 34, 13, 1, 10, 6, 30, 15, 5, 30, 6, 21, 34, 15, -1, 5, 25, 1, 21, 19, 20, 12, 24, 0, 25, 12, 10, 22, 0, 27};
    int deletedCell = 27;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> parent = {18, -1, 24, 0, 31, 23, 2, 34, 2, 29, 5, 32, 29, 14, 10, 32, 22, 18, 1, 34, 28, 24, 31, 1, 20, 22, 14, 11, 23, 10, 28, 11, 5, 0, 20};
    int deletedCell = 14;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> parent = {13, 10, 1, 9, -1, 1, 7, 4, 2, 2, 4, 9, 13, 10, 15, 7, 15};
    int deletedCell = 8;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> parent = {14, 0, 14, 7, -1, 6, 10, 4, 5, 10, 0, 2, 5, 6, 4, 2, 7};
    int deletedCell = 7;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> parent = {3, 3, 11, 22, 22, 7, 15, 12, 19, 19, 24, 12, 16, 7, 2, 23, -1, 14, 2, 23, 15, 24, 11, 16, 14};
    int deletedCell = 15;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> parent = {32, 19, 7, 17, 27, 34, 1, 6, 2, 2, 21, 30, 5, 9, 19, 7, 6, -1, 33, 31, 30, 27, 9, 28, 16, 16, 24, 33, 38, 28, 5, 3, 21, 1, 17, 31, 24, 32, 34, 38, 3};
    int deletedCell = 22;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> parent = {17, 7, 13, 16, 13, 15, 16, 5, 15, 0, 7, 3, 8, 3, 0, -1, 8, 5, 17};
    int deletedCell = 0;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
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
    vector<int> parent = {23, 18, 33, 32, 27, 2, 7, 28, -1, 8, 13, 33, 1, 12, 11, 23, 11, 6, 28, 0, 27, 18, 1, 6, 32, 12, 7, 21, 8, 2, 13, 17, 17, 21, 0};
    int deletedCell = 4;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> parent = {25, 34, 34, 27, 21, 21, 24, 36, 31, 2, 27, 8, 26, 8, 9, 35, 38, 30, 23, 26, 36, 9, 24, 31, 15, 1, 0, 30, 0, 35, 25, 38, -1, 18, 32, 1, 23, 2, 32, 18, 15};
    int deletedCell = 0;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
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
    vector<int> parent = {-1, 0, 1, 11, 15, 2, 8, 6, 0, 2, 11, 8, 1, 3, 3, 6, 15};
    int deletedCell = 15;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> parent = {13, 15, 14, 10, 5, 9, 14, 21, 9, 19, -1, 16, 3, 19, 5, 22, 15, 3, 0, 16, 0, 22, 10, 13, 21};
    int deletedCell = 18;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> parent = {11, 17, 11, 5, 18, 23, 18, 23, 22, 0, 20, 22, 0, 20, 21, -1, 8, 2, 5, 2, 21, 15, 15, 8, 17};
    int deletedCell = 0;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> parent = {7, 4, 5, 12, 11, 6, 12, 6, 4, 5, 11, 7, -1};
    int deletedCell = 8;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> parent = {3, 31, 28, 47, 16, 18, 18, 21, 41, 8, 46, 45, 47, 43, 10, 31, 36, 2, 26, 33, 3, 42, 15, 2, 41, 6, 19, 36, 26, 23, 8, 28, 45, -1, 25, 43, 19, 33, 46, 21, 16, 23, 44, 25, 6, 44, 42, 15, 10};
    int deletedCell = 22;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> parent = {1, 4, 3, 4, -1, 1, 8, 3, 2, 8, 2};
    int deletedCell = 3;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> parent = {17, 25, 0, 14, 7, 2, 5, 25, 18, 8, 16, 27, 10, 9, 19, 7, 31, 31, 19, 0, 8, 14, 9, 17, 18, 2, 30, 16, 30, 10, 5, -1, 27};
    int deletedCell = 19;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
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
    vector<int> parent = {7, 5, -1, 11, 11, 10, 1, 10, 13, 7, 2, 2, 4, 1, 4, 5, 13};
    int deletedCell = 11;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> parent = {2, 8, 12, 8, 5, -1, 7, 5, 4, 3, 12, 9, 4, 3, 9, 2, 7};
    int deletedCell = 13;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> parent = {4, 9, 14, 2, 14, 10, 10, 2, 3, 11, 3, 4, 9, 11, -1};
    int deletedCell = 0;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
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
    vector<int> parent = {8, 11, 8, 5, 29, 4, 15, 28, 29, 0, 17, 9, 10, 26, 10, 26, 3, 4, 25, 5, 15, 17, 18, 28, 9, -1, 25, 11, 0, 18, 3};
    int deletedCell = 0;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> parent = {9, 27, 21, 13, 13, 31, 30, 19, 5, 25, 22, 29, 15, 8, 5, 21, 15, 18, 11, 28, 19, 30, 9, 1, 29, 6, 11, 6, 2, 27, 31, -1, 2, 8, 18, 25, 28, 24, 22, 1, 24};
    int deletedCell = 24;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> parent = {30, 26, 15, 10, 18, 26, 20, 17, 21, 14, 9, 30, 15, 11, 20, 6, 8, 14, 8, 18, -1, 23, 3, 9, 10, 23, 11, 21, 3, 17, 6};
    int deletedCell = 23;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> parent = {11, 2, 15, 6, 0, 15, 11, 17, 9, 4, 9, 14, 2, 4, -1, 14, 17, 0, 6, 3, 3};
    int deletedCell = 4;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> parent = {-1, 5, 0, 8, 14, 6, 2, 9, 0, 2, 5, 6, 8, 3, 3, 14, 9};
    int deletedCell = 14;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> parent = {-1, 0, 1, 13, 1, 6, 13, 3, 0, 2, 2, 8, 6, 8, 3};
    int deletedCell = 5;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> parent = {5, 4, 0, 10, 5, -1, 8, 8, 0, 10, 4};
    int deletedCell = 1;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> parent = {21, 25, 28, 29, 31, 21, 13, 29, 10, 8, 28, 16, 32, 0, 17, 26, 10, 18, 31, 18, 19, 12, 8, 17, 13, 16, 0, 19, 32, 25, 26, 12, -1};
    int deletedCell = 1;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> parent = {3, 8, 9, 2, 6, 6, 9, 8, 2, -1, 3};
    int deletedCell = 8;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> parent = {5, 19, 4, 37, 5, 33, 29, 11, 4, 38, 11, 29, 30, 17, 34, 33, 30, 20, 8, 18, 8, 18, 0, 20, 26, 37, 2, 19, 34, 0, 25, 25, 38, -1, 6, 26, 17, 2, 6};
    int deletedCell = 37;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> parent = {17, 21, -1, 30, 31, 2, 35, 29, 4, 42, 33, 36, 4, 29, 45, 32, 8, 40, 24, 48, 45, 24, 27, 25, 5, 42, 14, 14, 36, 21, 25, 2, 40, 5, 8, 30, 37, 20, 35, 48, 20, 37, 33, 32, 41, 31, 17, 41, 27};
    int deletedCell = 13;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> parent = {1, 4, -1, 26, 2, 1, 7, 20, 6, 10, 3, 3, 8, 2, 20, 6, 17, 26, 14, 10, 13, 4, 14, 17, 7, 8, 13};
    int deletedCell = 13;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> parent = {28, 6, 0, 16, 9, 18, 27, 15, 13, 34, 6, 18, 19, -1, 9, 19, 8, 0, 1, 32, 4, 1, 4, 28, 32, 34, 27, 13, 15, 26, 3, 26, 8, 3, 16};
    int deletedCell = 8;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> parent = {26, 18, 29, 28, 28, 16, 29, 19, 26, -1, 8, 9, 11, 31, 16, 13, 32, 10, 19, 12, 10, 32, 0, 13, 31, 8, 12, 24, 18, 11, 9, 0, 24};
    int deletedCell = 24;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> parent = {11, 37, 24, 29, 19, 14, 24, 3, 39, 27, 11, 13, 33, 4, 30, -1, 21, 3, 15, 39, 40, 35, 29, 14, 8, 18, 20, 18, 21, 25, 15, 20, 4, 35, 13, 19, 37, 40, 25, 30, 8, 27, 33};
    int deletedCell = 15;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
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
    vector<int> parent = {19, 15, 18, 0, 16, 24, 29, 39, 11, 29, 19, 23, 35, 10, 37, 14, 30, 36, 26, 41, 24, 11, 33, 26, 39, 37, 14, 32, 33, 18, 25, 4, 36, 23, 35, 15, 10, -1, 4, 41, 30, 25, 16, 32, 0};
    int deletedCell = 2;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> parent = {10, 6, 7, 15, 15, 10, 0, 6, 5, 3, -1, 5, 8, 7, 0, 8, 3};
    int deletedCell = 7;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> parent = {9, 27, 29, 25, 2, 6, 0, 19, 27, 20, 7, 2, 19, 0, 3, 7, 21, 6, 5, 23, -1, 23, 3, 20, 21, 5, 29, 18, 18, 9, 25};
    int deletedCell = 16;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> parent = {16, -1, 5, 17, 12, 21, 22, 13, 23, 23, 17, 24, 5, 1, 12, 19, 22, 25, 10, 30, 10, 13, 24, 30, 19, 1, 16, 21, 2, 2, 25};
    int deletedCell = 30;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
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
    vector<int> parent = {10, 5, 10, 0, 0, 3, 3, 6, 6, 5, -1};
    int deletedCell = 7;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> parent = {25, 26, 34, 16, 37, 31, 23, 17, 18, 38, 1, 18, 38, 16, 23, 28, 29, 28, -1, 1, 32, 32, 29, 17, 3, 22, 11, 25, 22, 11, 3, 13, 8, 37, 13, 8, 34, 31, 26};
    int deletedCell = 34;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
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
    vector<int> parent = {-1, 38, 27, 26, 25, 0, 1, 23, 1, 36, 4, 7, 5, 11, 29, 5, 7, 29, 38, 13, 4, 27, 16, 18, 23, 22, 22, 24, 24, 26, 31, 18, 31, 13, 36, 25, 11, 16, 0};
    int deletedCell = 23;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> parent = {1, 12, 19, 1, 2, 7, 22, 2, 13, 0, 22, 9, 17, 17, 12, 13, 7, 19, 4, -1, 4, 0, 9};
    int deletedCell = 3;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> parent = {7, 11, 21, 12, 22, 6, 16, 6, 9, 21, 7, 12, 0, 23, 1, 5, -1, 5, 9, 16, 0, 23, 11, 1, 22};
    int deletedCell = 16;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> parent = {31, 31, 3, 32, 30, 18, 40, 33, 10, 20, 37, 40, 33, 22, 26, 22, 5, 25, 37, 41, 11, 34, 26, 27, 41, 28, 10, 28, 32, 30, 18, 3, 8, 25, 8, 27, 39, -1, 11, 5, 39, 34, 20};
    int deletedCell = 14;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> parent = {13, 3, 18, 34, 6, 30, 3, 32, 37, 21, 40, 23, 39, 31, 0, 24, 37, 0, 38, 22, 22, 23, 24, 12, 6, 21, 40, 1, 13, 35, 38, 32, 34, 12, -1, 30, 1, 35, 39, 31, 18};
    int deletedCell = 27;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> parent = {42, 34, 28, 48, 7, 12, 33, 20, 30, 16, 32, 16, 6, 32, 5, 39, -1, 20, 5, 23, 12, 33, 9, 6, 40, 28, 9, 26, 34, 7, 27, 11, 27, 30, 11, 48, 39, 42, 40, 19, 3, 10, 10, 3, 19, 41, 41, 23, 26};
    int deletedCell = 17;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> parent = {30, 27, 7, 30, 18, 32, 2, 27, 4, 8, 6, 2, 31, 22, 7, 8, 17, 4, -1, 25, 6, 19, 32, 16, 16, 18, 29, 17, 29, 19, 31, 22, 25};
    int deletedCell = 27;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> parent = {11, 9, 16, 8, 8, 9, 15, 16, 11, 12, 15, 14, 14, 2, 2, 12, -1};
    int deletedCell = 6;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> parent = {2, 33, 3, 14, 8, 7, 3, 21, 2, 13, 31, 30, 36, 6, -1, 9, 34, 13, 6, 4, 9, 26, 34, 21, 29, 29, 8, 33, 7, 26, 36, 30, 31, 0, 14, 4, 0};
    int deletedCell = 18;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> parent = {2, 5, 3, 1, 46, 22, 2, 39, 44, 16, 4, -1, 44, 5, 28, 3, 19, 31, 8, 35, 16, 39, 11, 32, 41, 30, 17, 1, 38, 17, 32, 12, 8, 31, 35, 12, 22, 11, 36, 46, 30, 38, 19, 4, 28, 36, 41};
    int deletedCell = 11;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> parent = {5, 7, 28, 17, 5, 10, 20, 9, 25, 14, 19, 27, 19, 11, 26, 7, 10, 22, 20, 28, 9, 11, 25, 22, 27, 14, -1, 17, 26};
    int deletedCell = 8;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
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
    vector<int> parent = {20, 25, 5, 18, 16, 8, 1, 20, 3, 11, 25, 7, 18, 2, 32, 13, 3, 0, -1, 16, 8, 32, 0, 13, 1, 5, 7, 15, 2, 11, 17, 15, 17};
    int deletedCell = 24;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> parent = {9, 19, 22, 30, 16, 6, 13, 18, 19, 31, 2, 23, 17, -1, 23, 24, 11, 29, 31, 18, 6, 29, 11, 13, 14, 30, 24, 2, 17, 22, 9, 14, 16};
    int deletedCell = 15;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> parent = {10, 5, 3, 10, 5, 9, 9, 12, 12, 3, 11, -1, 11};
    int deletedCell = 0;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> parent = {7, 23, 18, 19, 12, 14, 2, 13, 12, 8, 13, 3, 0, -1, 0, 11, 8, 14, 11, 7, 2, 19, 18, 3, 23};
    int deletedCell = 15;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> parent = {32, 6, 39, 28, 28, 15, 5, 23, 20, 34, 3, 38, 3, 29, 39, 4, 23, 15, 9, 13, 13, 36, 31, 32, 20, 35, 18, 12, 34, -1, 31, 18, 36, 38, 29, 9, 4, 5, 12, 35, 6};
    int deletedCell = 18;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> parent = {3, 10, 12, -1, 17, 13, 42, 0, 46, 3, 24, 9, 40, 17, 37, 39, 29, 11, 13, 43, 34, 2, 21, 40, 23, 42, 36, 23, 34, 21, 37, 6, 10, 39, 31, 12, 31, 46, 6, 43, 9, 29, 0, 11, 36, 2, 24};
    int deletedCell = 18;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> parent = {-1, 8, 11, 26, 14, 12, 8, 10, 30, 30, 0, 13, 10, 36, 3, 35, 7, 11, 26, 7, 32, 25, 28, 20, 35, 12, 36, 14, 13, 25, 32, 16, 0, 28, 16, 3, 20};
    int deletedCell = 22;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> parent = {11, 9, 0, 12, 7, 10, 12, 1, 6, -1, 24, 15, 23, 15, 24, 9, 23, 10, 7, 8, 1, 0, 6, 11, 8};
    int deletedCell = 15;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> parent = {-1, 0, 0, 2, 2, 4, 4, 6, 6};
    int deletedCell = 4;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> parent = {26, 2, 32, 36, 40, 19, 43, 24, 30, 13, 21, 14, 24, 21, 19, 4, 30, 10, 44, 12, 7, 32, 17, 43, 35, 18, 7, 36, 10, 16, 5, 38, 35, 4, 13, -1, 16, 26, 1, 12, 2, 5, 18, 40, 1, 17, 38, 44, 14};
    int deletedCell = 24;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> parent = {30, -1, 18, 45, 5, 1, 23, 4, 42, 6, 47, 33, 27, 23, 33, 18, 34, 0, 34, 32, 6, 35, 20, 37, 44, 27, 7, 2, 4, 42, 3, 7, 3, 20, 5, 45, 30, 10, 2, 44, 43, 0, 10, 1, 35, 47, 32, 43, 37};
    int deletedCell = 2;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> parent = {28, 35, 9, 43, 32, 12, 38, 5, 1, 22, 6, 9, 43, 41, 21, 18, 34, 20, 14, 3, 4, -1, 45, 6, 2, 28, 18, 5, 3, 26, 4, 21, 26, 31, 45, 12, 20, 34, 35, 1, 2, 38, 10, 14, 22, 32, 41, 10, 31};
    int deletedCell = 42;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> parent = {29, 22, 29, 33, 6, 35, 10, 43, 20, 7, 14, 27, 4, 39, 1, 18, 18, 24, 8, 2, 32, 41, 38, 44, 33, 35, 2, 24, 27, 20, 4, 45, 42, 41, 1, 6, 45, 32, -1, 14, 39, 43, 38, 42, 22, 44, 7, 10, 8};
    int deletedCell = 11;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> parent = {27, 16, 8, 29, 0, 39, 46, 43, -1, 3, 4, 43, 27, 7, 41, 46, 13, 30, 44, 11, 13, 24, 25, 4, 8, 21, 24, 26, 2, 7, 26, 21, 17, 16, 31, 29, 30, 31, 39, 25, 11, 28, 0, 2, 41, 3, 44, 28, 17};
    int deletedCell = 46;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> parent = {-1, 0, 0, 1, 1};
    int deletedCell = 1;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
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
    vector<int> parent = {26, 2, 32, 36, 40, 19, 43, 24, 30, 13, 21, 14, 24, 21, 19, 4, 30, 10, 44, 12, 7, 32, 17, 43, 35, 18, 7, 36, 10, 16, 5, 38, 35, 4, 13, -1, 16, 26, 1, 12, 2, 5, 18, 40, 1, 17, 38, 44, 14};
    int deletedCell = 24;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> parent = {1, -1, 1};
    int deletedCell = 0;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> parent = {26, 2, 32, 36, 40, 19, 43, 24, 30, 13, 21, 14, 24, 21, 19, 4, 30, 10, 44, 12, 7, 32, 17, 43, 35, 18, 7, 36, 10, 16, 5, 38, 35, 4, 13, -1, 16, 26, 1, 12, 2, 5, 18, 40, 1, 17, 38, 44, 14};
    int deletedCell = 35;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> parent = {2, 2, -1};
    int deletedCell = 2;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> parent = {-1, 3, 3, 0, 0};
    int deletedCell = 3;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> parent = {1, -1, 1};
    int deletedCell = 2;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> parent = {26, 2, 32, 36, 40, 19, 43, 24, 30, 13, 21, 14, 24, 21, 19, 4, 30, 10, 44, 12, 7, 32, 17, 43, 35, 18, 7, 36, 10, 16, 5, 38, 35, 4, 13, -1, 16, 26, 1, 12, 2, 5, 18, 40, 1, 17, 38, 44, 14};
    int deletedCell = 0;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> parent = {-1, 0, 0};
    int deletedCell = 1;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
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
    vector<int> parent = {2, 2, 4, 4, -1};
    int deletedCell = 4;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> parent = {1, -1, 1, 0, 0};
    int deletedCell = 0;
    CellRemoval* pObj = new CellRemoval();
    clock_t start = clock();
    int result = pObj->cellsLeft(parent, deletedCell);
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7459080&rd=13697&pm=10275
********************************************************************************
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
 
typedef long long LL;
typedef vector <string> vs;
typedef vector <int> vi;
typedef vector <LL> vll;
typedef vector <double> vd;
typedef pair <int,int> pii;
 
 
class CellRemoval {
public:
  int cellsLeft(vector <int>, int);
};
 
vi p;
int n;
int x;
 
int calc(int rt)
{
  int i;
  bool found = false;
  int res = 0;
  for (i=0; i<n; i++) if (p[i] == rt)
  {
    found = true;
    if (i == x) continue;
    res += calc( i );
  }
  
  if (!found) res = 1;
  return res;
}
 
int CellRemoval::cellsLeft(vector <int> parent, int deletedCell) {
  p = parent;
  n = p.size();
  x = deletedCell;
  
  int res = calc( -1 );
  return res;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/